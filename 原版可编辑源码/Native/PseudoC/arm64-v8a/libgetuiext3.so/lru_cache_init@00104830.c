
undefined8 lru_cache_init(ulong *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar1 = thunk_EXT_FUN_00002bb0(param_1 + 3,0);
  if ((iVar1 == 0) && (uVar3 = thunk_EXT_FUN_00002bb0(&LAB_001048c4,FUN_001048f4), uVar3 != 0)) {
    uVar4 = thunk_EXT_FUN_00002bb0(param_2 & 0xffffffff);
    if (uVar4 == 0) {
      thunk_EXT_FUN_00002bb0(uVar3);
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
      *param_1 = param_2;
      param_1[1] = uVar4;
      param_1[2] = uVar3;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

