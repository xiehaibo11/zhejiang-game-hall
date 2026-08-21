
undefined8 FUN_00c31760(ulong param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  
  if ((*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) &&
     (uVar4 = **(ulong **)(param_1 + 0x20), (int)((long)uVar4 >> 0x2f) == -7)) {
    uVar4 = uVar4 & 0x7fffffffffff;
    uVar3 = 2;
    iVar5 = 1;
  }
  else {
    uVar3 = 1;
    iVar5 = 0;
    uVar4 = param_1;
  }
  lVar2 = lua_tolstring(param_1,uVar3,0);
  if (lVar2 == 0) {
    if ((ulong)(*(long *)(param_1 + 0x20) + (long)iVar5 * 8) < *(ulong *)(param_1 + 0x28)) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + (long)iVar5 * 8 + 8;
      return 1;
    }
  }
  uVar1 = FUN_00c29da0(param_1,iVar5 + 2,param_1 == uVar4);
  luaL_traceback(param_1,uVar4,lVar2,uVar1);
  return 1;
}

