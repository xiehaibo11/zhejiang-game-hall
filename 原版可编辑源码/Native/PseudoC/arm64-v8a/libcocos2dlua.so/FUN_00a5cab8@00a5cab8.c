
undefined4
FUN_00a5cab8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  
                    /* try { // try from 00a5cabc to 00b5cac3 has its CatchHandler @ 00a5cae4 */
                    /* try { // try from 00a5cac4 to 00b5cb23 has its CatchHandler @ 00a5c898 */
                    /* catch() { ... } // from try @ 00a5c920 with catch @ 00a5cad8 */
  if (param_3 == 0) {
    if ((param_4 == 0x50) || (param_4 == 0)) {
      __s = (char *)FUN_00a24258(&DAT_013c990b,param_2,param_5);
      goto joined_r0x00a5cb58;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00a5c908 with catch @ 00a5cadc */
                    /* catch() { ... } // from try @ 00a5c948 with catch @ 00a5cae0
                       catch() { ... } // from try @ 00a5caa4 with catch @ 00a5cae0 */
    if ((param_4 == 0x50) || (param_4 == 0)) {
                    /* catch() { ... } // from try @ 00a5c9bc with catch @ 00a5cae4
                       catch() { ... } // from try @ 00a5cabc with catch @ 00a5cae4 */
                    /* catch() { ... } // from try @ 00a5c8ec with catch @ 00a5cae8
                       catch() { ... } // from try @ 00a5ca20 with catch @ 00a5cae8 */
      __s = (char *)FUN_00a24258(&DAT_013c9924,param_2,param_3,param_5);
                    /* catch() { ... } // from try @ 00a5c978 with catch @ 00a5caf8
                       catch() { ... } // from try @ 00a5ca44 with catch @ 00a5caf8 */
      goto joined_r0x00a5cb58;
    }
  }
  __s = (char *)FUN_00a24258(&DAT_013c9945);
joined_r0x00a5cb58:
  if (__s == (char *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    uVar1 = FUN_00a2f7a0(param_1,__s,sVar2,param_6,param_7);
                    /* try { // try from 00a5cb24 to 00b5cb93 has its CatchHandler @ 00a5cb24
                       catch() { ... } // from try @ 00a5cb24 with catch @ 00a5cb24
                       catch() { ... } // from try @ 00a5cd54 with catch @ 00a5cb24
                       catch() { ... } // from try @ 00a5ce2c with catch @ 00a5cb24 */
    (*(code *)PTR_free_01769a00)(__s);
  }
  return uVar1;
}

