
undefined4 lru_cache_put(ulong *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == (ulong *)0x0) {
    return 3;
  }
  if (param_2 == 0) {
    return 9;
  }
  if (param_3 == 0) {
    return 9;
  }
  if ((param_1[1] == 0) || (param_1[2] == 0)) {
    return 4;
  }
  thunk_EXT_FUN_00002bb0(param_1 + 3);
  puVar3 = (undefined8 *)param_1[1];
  if (((0 < *(int *)(puVar3 + 1)) && (*param_1 < (long)*(int *)(puVar3 + 1) + 1U)) &&
     (lVar4 = *(long *)*puVar3, lVar4 != 0)) {
    uVar1 = thunk_EXT_FUN_00002bb0(puVar3,FUN_00104a2c,lVar4);
    thunk_EXT_FUN_00002bb0(param_1[1],uVar1);
    iVar2 = thunk_EXT_FUN_00002bb0(param_1[2],lVar4);
    if (iVar2 != 1) {
      uVar1 = 6;
      goto LAB_00104a04;
    }
    puVar3 = (undefined8 *)param_1[1];
  }
  iVar2 = thunk_EXT_FUN_00002bb0(puVar3,param_2);
  if (iVar2 == 1) {
    iVar2 = thunk_EXT_FUN_00002bb0(param_1[2],param_2,param_3);
    uVar1 = 0;
    if (iVar2 != 1) {
      uVar1 = 8;
    }
  }
  else {
    uVar1 = 7;
  }
LAB_00104a04:
  thunk_EXT_FUN_00002bb0(param_1 + 3);
  return uVar1;
}

