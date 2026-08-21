
bool buffer_isempty(long param_1)

{
                    /* try { // try from 009d1bec to 00ad1bff has its CatchHandler @ 009d8038 */
  return *(ulong *)(param_1 + 0x30) <= *(ulong *)(param_1 + 0x28);
}

