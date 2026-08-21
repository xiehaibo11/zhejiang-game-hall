
/* WARNING: Removing unreachable block (ram,0x00b7a56c) */
/* WARNING: Removing unreachable block (ram,0x00b7a580) */
/* WARNING: Removing unreachable block (ram,0x00b7a5bc) */
/* WARNING: Removing unreachable block (ram,0x00b7a5a0) */
/* WARNING: Removing unreachable block (ram,0x00b7a5b0) */
/* WARNING: Removing unreachable block (ram,0x00b7a5c4) */
/* WARNING: Removing unreachable block (ram,0x00b7a5d0) */
/* WARNING: Removing unreachable block (ram,0x00b7a5e4) */
/* WARNING: Removing unreachable block (ram,0x00b7a5f4) */
/* WARNING: Removing unreachable block (ram,0x00b7a604) */

ulong OPENSSL_cpuid_setup(ulong param_1)

{
  uint uVar1;
  int iVar2;
  char *__nptr;
  ulong uVar3;
  uint uVar4;
  _union_1457 local_70;
  code *local_68;
  undefined1 local_60 [48];
  
  if ((DAT_01d3b234 & 1) == 0) {
    DAT_01d3b234 = 1;
    __nptr = getenv("OPENSSL_armcap");
    if (__nptr == (char *)0x0) {
      sigfillset((sigset_t *)&DAT_01d3b240);
      sigdelset((sigset_t *)&DAT_01d3b240,4);
      sigdelset((sigset_t *)&DAT_01d3b240,5);
      sigdelset((sigset_t *)&DAT_01d3b240,8);
      sigdelset((sigset_t *)&DAT_01d3b240,7);
      sigdelset((sigset_t *)&DAT_01d3b240,0xb);
      OPENSSL_armcap_P = 0;
      local_70.sa_handler = (__sighandler_t)0x0;
      local_68 = FUN_00b7a668;
      local_60._0_8_ = DAT_01d3b240;
      local_60._8_8_ = 0;
      sigprocmask(2,(sigset_t *)local_60,(sigset_t *)&stack0xffffffffffffffd8);
      sigaction(4,(sigaction *)&local_70,(sigaction *)(local_60 + 0x10));
      uVar1 = getauxval(0x10);
      if ((uVar1 >> 1 & 1) != 0) {
        uVar3 = getauxval(0x10);
        uVar1 = OPENSSL_armcap_P | (uint)(uVar3 >> 1) & 4 | ((uint)uVar3 & 0x10) << 1 | 1;
        uVar4 = (uint)(uVar3 >> 2) & 8;
        OPENSSL_armcap_P = uVar1 | uVar4;
        if (((uint)uVar3 >> 6 & 1) != 0) {
          OPENSSL_armcap_P = uVar1 | uVar4 | 0x10;
        }
      }
      iVar2 = sigsetjmp(&DAT_01d3b248,1);
      if (iVar2 == 0) {
        _armv7_tick();
        OPENSSL_armcap_P = OPENSSL_armcap_P | 2;
      }
      sigaction(4,(sigaction *)(local_60 + 0x10),(sigaction *)0x0);
      uVar1 = sigprocmask(2,(sigset_t *)&stack0xffffffffffffffd8,(sigset_t *)0x0);
      param_1 = (ulong)uVar1;
    }
    else {
      param_1 = strtoul(__nptr,(char **)0x0,0);
      OPENSSL_armcap_P = (uint)param_1;
    }
  }
  return param_1;
}

