
undefined8 FUN_00c2f1fc(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar2 = *(ulong **)(param_1 + 0x20);
  puVar1 = *(ulong **)(param_1 + 0x28);
  if ((puVar2 < puVar1) && (*puVar2 != 0xffffffffffffffff)) {
    if ((int)((long)*puVar2 >> 0x2f) == -0xd) {
      FUN_00c2eea0();
      puVar2 = puVar2 + 1;
      *(ulong **)(param_1 + 0x28) = puVar2;
    }
    else {
      FUN_00c2ef90(param_1,&DAT_01411488);
      puVar2 = *(ulong **)(param_1 + 0x28);
    }
    *(ulong *)(*(long *)(param_1 + 0x10) + 0x290) = puVar2[-1] & 0x7fffffffffff;
    return 1;
  }
  *(ulong **)(param_1 + 0x28) = puVar1 + 1;
  *puVar1 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x290) | 0xfff9800000000000;
  return 1;
}

