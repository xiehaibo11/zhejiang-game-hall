
void DSA_set_flags(long param_1,uint param_2)

{
                    /* try { // try from 00b08650 to 00c08653 has its CatchHandler @ 00b08778 */
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | param_2;
  return;
}

