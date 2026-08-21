
undefined8 FUN_00ab3094(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong local_48;
  
  local_48 = param_3;
  while( true ) {
    if (local_48 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x307) != '\0') break;
    if ((*(byte *)(param_1 + 0x107) >> 6 & 1) == 0) {
      if ((*(long *)(param_1 + 0x280) != 0) &&
         (uVar1 = *(int *)(param_1 + 0x2dc) + 1, *(uint *)(param_1 + 0x2dc) = uVar1,
         *(uint *)(param_1 + 0x2d8) < uVar1)) {
        _lws_log(1,"bumped rxflow buffer too far (%d / %d)");
      }
      if ((*(char *)(param_1 + 0x301) == '\x14') &&
         (iVar2 = FUN_00aa713c(param_1,param_2,&local_48), *(long *)(param_1 + 0x280) != 0)) {
        *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + iVar2;
      }
      puVar3 = (undefined1 *)*param_2;
      *param_2 = (long)(puVar3 + 1);
      iVar2 = FUN_00aa6954(param_1,*puVar3);
      if ((*(long *)(param_1 + 0x280) != 0) &&
         (*(int *)(param_1 + 0x2dc) == *(int *)(param_1 + 0x2d8))) {
        thunk_FUN_00aa8a48(*(long *)(param_1 + 0x280),0,"free");
        *(undefined8 *)(param_1 + 0x280) = 0;
        FUN_00aa0734(param_1);
      }
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      local_48 = local_48 - 1;
    }
    else {
      iVar2 = FUN_00aa6954(param_1,0);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
  }
  FUN_00aa2770(param_1,*param_2,0,local_48 & 0xffffffff);
  return 1;
}

