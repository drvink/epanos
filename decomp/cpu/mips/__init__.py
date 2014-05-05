# make the package modules directly available along with the one abi function
# that should be exposed
from decomp.cpu.mips import data, gen, insns
from decomp.cpu.mips.abi import get_abi_fn_arg_map
