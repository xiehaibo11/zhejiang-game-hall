
ulong FUN_00a24ccc(long param_1)

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
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68.sa_handler = (__sighandler_t)0x0;
      sigaction(0xd,(sigaction *)0x0,(sigaction *)&local_68);
      local_40.sa_handler = local_68.sa_handler;
      uStack_28 = uStack_50;
      uStack_30 = local_58;
      uStack_38 = 1;
      sigaction(0xd,(sigaction *)&local_40,(sigaction *)0x0);
    }
    uVar2 = FUN_00a396c8(param_1);
    if (local_48 == '\0') {
      uVar1 = sigaction(0xd,(sigaction *)&local_68,(sigaction *)0x0);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

