
void FUN_00917bcc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = auxiliar_checkclass(param_1,"tcp{master}",1);
  uVar3 = luaL_checklstring(param_1,2,0);
  uVar4 = luaL_checklstring(param_1,3,0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 1;
  _local_80 = CONCAT44(*(undefined4 *)(lVar2 + 0x2078),1);
  lVar2 = inet_trybind(lVar2,uVar3,uVar4,&local_80);
  if (lVar2 == 0) {
    lua_pushnumber(0x3ff0000000000000,param_1);
    uVar3 = 1;
  }
  else {
    lua_pushnil(param_1);
    lua_pushstring(param_1,lVar2);
    uVar3 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

