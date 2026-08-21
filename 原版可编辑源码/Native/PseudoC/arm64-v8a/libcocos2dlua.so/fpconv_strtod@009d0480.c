
undefined1  [16] fpconv_strtod(byte *param_1,char **param_2)

{
  long lVar1;
  char *__s;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  size_t __n;
  int iVar6;
  double dVar7;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  char *local_80;
  char acStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d04bc to 00ad04cf has its CatchHandler @ 009d8050 */
  pbVar3 = param_1;
  if (DAT_017696e0 == '.') {
    dVar7 = strtod((char *)param_1,param_2);
    uVar9 = extraout_var;
                    /* try { // try from 009d04d4 to 00ad053f has its CatchHandler @ 009d816c */
  }
  else {
    while( true ) {
      uVar4 = (uint)*pbVar3;
      if ((9 < uVar4 - 0x30) &&
         (((0x2e < uVar4 || ((1L << ((ulong)*pbVar3 & 0x3f) & 0x680000000000U) == 0)) &&
          (0x18 < ((uVar4 | 0x20) - 0x61 & 0xff))))) break;
      pbVar3 = pbVar3 + 1;
    }
    iVar6 = (int)((long)pbVar3 - (long)param_1);
    if (iVar6 == 0) {
      *param_2 = (char *)param_1;
      dVar7 = 0.0;
      uVar9 = 0;
    }
    else {
      lVar5 = (long)pbVar3 - (long)param_1 << 0x20;
      if (iVar6 < 0x20) {
        __s = acStack_78;
      }
      else {
                    /* try { // try from 009d0540 to 00ad063f has its CatchHandler @ 009cee70 */
        __s = malloc(lVar5 + 0x100000000 >> 0x20);
        if (__s == (char *)0x0) {
          fwrite("Out of memory",0xd,1,(FILE *)pthread_rwlock_tryrdlock);
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      __n = lVar5 >> 0x20;
      memcpy(__s,param_1,__n);
      __s[__n] = '\0';
      pcVar2 = strchr(__s,0x2e);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = DAT_017696e0;
      }
      dVar7 = strtod(__s,&local_80);
      *param_2 = (char *)(param_1 + ((long)local_80 - (long)__s));
      uVar9 = extraout_var_00;
      if (0x1f < iVar6) {
        free(__s);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar8._8_8_ = uVar9;
  auVar8._0_8_ = dVar7;
  return auVar8;
}

