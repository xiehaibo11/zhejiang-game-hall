
bool BN_is_negative(long param_1)

{
                    /* try { // try from 00b0afb8 to 00c0b007 has its CatchHandler @ 00b0aea8 */
  return *(int *)(param_1 + 0x10) != 0;
}

