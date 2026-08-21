
size_t FUN_010bb5d4(long param_1,ulong param_2,void *param_3,size_t param_4)

{
  FILE *__stream;
  size_t sVar1;
  
  if ((param_4 == 0) && (*(ulong *)(param_1 + 8) < param_2)) {
    return 1;
  }
  __stream = *(FILE **)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) != param_2) {
                    /* try { // try from 010bb61c to 011bb62b has its CatchHandler @ 010bb6b0 */
    fseek(__stream,param_2,0);
  }
                    /* try { // try from 010bb62c to 011bb71f has its CatchHandler @ 010bb490 */
  sVar1 = fread(param_3,1,param_4,__stream);
  return sVar1;
}

