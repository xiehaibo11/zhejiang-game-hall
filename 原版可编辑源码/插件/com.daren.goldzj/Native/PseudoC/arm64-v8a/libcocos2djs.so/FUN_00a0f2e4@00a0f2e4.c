
ulong FUN_00a0f2e4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  _union_1457 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48;
  _union_1457 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_48 = *(char *)(param_1 + 0x63c);
    if (local_48 == '\0') {
                    /* catch() { ... } // from try @ 00a0f244 with catch @ 00a0f308 */
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68.sa_handler = (__sighandler_t)0x0;
                    /* catch() { ... } // from try @ 00a0f23c with catch @ 00a0f320 */
      sigaction(0xd,(sigaction *)0x0,(sigaction *)&local_68);
                    /* catch() { ... } // from try @ 00a0f200 with catch @ 00a0f324 */
                    /* catch() { ... } // from try @ 00a0f1c0 with catch @ 00a0f328 */
                    /* catch() { ... } // from try @ 00a0f258 with catch @ 00a0f330 */
      local_40.sa_handler = local_68.sa_handler;
      uStack_28 = uStack_50;
      uStack_30 = local_58;
      uStack_38 = 1;
      sigaction(0xd,(sigaction *)&local_40,(sigaction *)0x0);
    }
    uVar2 = FUN_00a23ce0(param_1);
    if (local_48 == '\0') {
      uVar1 = sigaction(0xd,(sigaction *)&local_68,(sigaction *)0x0);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

