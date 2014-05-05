#!/usr/bin/env perl

use strict;
use warnings;

my %insn_forms;

while (<>) {
    next if /^(?:#|$)/;
    chomp;
    s/^\t+//;
    my $c;
    my ($insn, $ops) = split /\t+/;
    if (!defined $ops) {
        $c = 0;
    } else {
        $c = split /,/, $ops;
    }
    $insn_forms{$insn}{$c} = 1;
}

while (my ($insn, $forms) = each %insn_forms) {
    print "$insn\t", join(', ', sort(keys %$forms)), "\n";
}
