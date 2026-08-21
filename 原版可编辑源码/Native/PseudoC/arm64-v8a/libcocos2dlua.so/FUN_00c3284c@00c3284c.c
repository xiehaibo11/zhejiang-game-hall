
undefined8 FUN_00c3284c(ulong param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_8;
  
  if ((*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) &&
     (uVar4 = **(ulong **)(param_1 + 0x20), (int)((long)uVar4 >> 0x2f) == -7)) {
    uVar4 = uVar4 & 0x7fffffffffff;
    uVar5 = 3;
    uVar3 = 2;
  }
  else {
    uVar5 = 2;
    uVar3 = 1;
    uVar4 = param_1;
  }
  lVar2 = FUN_00c29ac0(param_1,uVar3);
  uVar1 = FUN_00c29cf0(param_1,uVar5);
  uVar3 = luaJIT_profile_dumpstack(uVar4,lVar2 + 0x18,uVar1,&local_8);
  lua_pushlstring(param_1,uVar3,local_8);
  return 1;
}

