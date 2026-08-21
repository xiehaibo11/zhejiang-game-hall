
long lua_getlocal(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    lVar2 = 0;
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x28) + -8);
    if (((int)((long)uVar4 >> 0x2f) == -9) &&
       (uVar4 = uVar4 & 0x7fffffffffff, *(char *)(uVar4 + 10) == '\0')) {
      lVar2 = FUN_00bfc354(*(undefined8 *)(*(long *)(uVar4 + 0x20) + -8),0,param_3 + -1);
    }
  }
  else {
    puVar1 = (undefined8 *)FUN_00bfc474(param_1,*(undefined4 *)(param_2 + 0x238),&local_8);
    lVar2 = local_8;
    if (local_8 != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x30);
      puVar3 = *(undefined8 **)(param_1 + 0x28) + 1;
      **(undefined8 **)(param_1 + 0x28) = *puVar1;
      *(undefined8 **)(param_1 + 0x28) = puVar3;
      if (puVar5 <= puVar3) {
        FUN_00bfe164(param_1);
        return local_8;
      }
    }
  }
  return lVar2;
}

