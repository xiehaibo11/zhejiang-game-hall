
uint * TIFFFindField(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_50;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  puVar1 = *(uint **)(param_1 + 0x400);
  if (((puVar1 == (uint *)0x0) || (*puVar1 != param_2)) ||
     ((param_3 != 0 && (puVar1[2] != param_3)))) {
    if (*(void **)(param_1 + 0x3f0) == (void *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      local_50 = (ulong)param_2;
      uStack_48 = (ulong)param_3;
      puVar2 = bsearch(&local_18,*(void **)(param_1 + 0x3f0),*(size_t *)(param_1 + 0x3f8),8,
                       FUN_01112b4c);
      puVar1 = (uint *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        puVar1 = (uint *)*puVar2;
      }
      *(uint **)(param_1 + 0x400) = puVar1;
    }
  }
  return puVar1;
}

