
undefined8 FUN_009f9124(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_009f9a54();
  uVar5 = luaL_checklstring(param_1,1,0);
  lVar6 = FUN_009fc1e8(uVar4,uVar5);
  iVar2 = lua_type(param_1,2);
  if (iVar2 < 1) {
    auVar7 = ZEXT816(0);
  }
  else {
    auVar7 = FUN_009f9e20(param_1,2);
    if (auVar7._0_8_ == 0) {
      uVar3 = lua_type(param_1,2);
      uVar5 = lua_typename(param_1,uVar3);
      lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar5);
      uVar5 = lua_tolstring(param_1,0xffffffff,0);
      luaL_argerror(param_1,2,uVar5);
    }
  }
  local_58 = auVar7._8_8_;
  local_50 = auVar7._0_8_;
  local_60 = local_50;
  uVar5 = lua_tolstring(param_1,1,0);
  FUN_009fa638(param_1,lVar6 != 0,1,0x12f5d2d,uVar5);
  lua_settop(param_1,3);
  iVar2 = lua_type(param_1,3);
  if (iVar2 != 5) {
    lua_settop(param_1,0xfffffffe);
    FUN_009ffe90(param_1,uVar4,lVar6);
  }
  local_68 = &local_60;
  local_80 = param_1;
  uStack_78 = uVar4;
  FUN_00a0016c(&local_80,lVar6);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

