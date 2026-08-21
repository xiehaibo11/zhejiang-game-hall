
/* WARNING: Removing unreachable block (ram,0x00b88d6c) */
/* WARNING: Removing unreachable block (ram,0x00b88d80) */
/* WARNING: Removing unreachable block (ram,0x00b88dbc) */
/* WARNING: Removing unreachable block (ram,0x00b88da0) */
/* WARNING: Removing unreachable block (ram,0x00b88db0) */
/* WARNING: Removing unreachable block (ram,0x00b88dc4) */
/* WARNING: Removing unreachable block (ram,0x00b88dd0) */
/* WARNING: Removing unreachable block (ram,0x00b88de4) */
/* WARNING: Removing unreachable block (ram,0x00b88df4) */
/* WARNING: Removing unreachable block (ram,0x00b88e04) */

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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b88b80 with catch @ 00b88c38
                        */
  if ((DAT_01784fb4 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b88d54 with catch @ 00b88c4c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b88dc4 with catch @ 00b88c4c
                        */
    DAT_01784fb4 = 1;
    __nptr = getenv("OPENSSL_armcap");
    if (__nptr == (char *)0x0) {
      sigfillset((sigset_t *)&DAT_01784fc0);
                    /* try { // try from 00b88c94 to 00c88c9b has its CatchHandler @ 00b88da8 */
      sigdelset((sigset_t *)&DAT_01784fc0,4);
      sigdelset((sigset_t *)&DAT_01784fc0,5);
                    /* try { // try from 00b88cac to 00c88caf has its CatchHandler @ 00b88dec */
      sigdelset((sigset_t *)&DAT_01784fc0,8);
      sigdelset((sigset_t *)&DAT_01784fc0,7);
      sigdelset((sigset_t *)&DAT_01784fc0,0xb);
                    /* try { // try from 00b88ce4 to 00c88d2f has its CatchHandler @ 00b88dac */
      OPENSSL_armcap_P = 0;
      local_70.sa_handler = (__sighandler_t)0x0;
      local_68 = FUN_00b88e68;
      local_60._0_8_ = DAT_01784fc0;
      local_60._8_8_ = 0;
      sigprocmask(2,(sigset_t *)local_60,(sigset_t *)&stack0xffffffffffffffd8);
      sigaction(4,(sigaction *)&local_70,(sigaction *)(local_60 + 0x10));
      uVar1 = getauxval(0x10);
      if ((uVar1 >> 1 & 1) != 0) {
        uVar3 = getauxval(0x10);
                    /* try { // try from 00b88d50 to 00c88d53 has its CatchHandler @ 00b88e08 */
        uVar1 = OPENSSL_armcap_P | (uint)(uVar3 >> 1) & 4 | ((uint)uVar3 & 0x10) << 1 | 1;
                    /* try { // try from 00b88d54 to 00c88dbf has its CatchHandler @ 00b88c4c */
        uVar4 = (uint)(uVar3 >> 2) & 8;
        OPENSSL_armcap_P = uVar1 | uVar4;
        if (((uint)uVar3 >> 6 & 1) != 0) {
          OPENSSL_armcap_P = uVar1 | uVar4 | 0x10;
        }
      }
      iVar2 = sigsetjmp(&DAT_01784fc8,1);
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

