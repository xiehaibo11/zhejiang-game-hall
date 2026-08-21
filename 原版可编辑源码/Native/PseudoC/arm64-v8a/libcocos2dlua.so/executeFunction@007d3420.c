
/* cocos2d::LuaStack::executeFunction(int, int, int, std::__ndk1::function<void (lua_State*, int)>
   const&) */

void __thiscall
cocos2d::LuaStack::executeFunction
          (LuaStack *this,int param_1,int param_2,int param_3,function *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int local_54;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = (**(code **)(*(long *)this + 0xb8))(this,param_1);
  if ((uVar4 & 1) == 0) {
LAB_007d3580:
    uVar6 = 1;
  }
  else {
    if (0 < param_2) {
      lua_insert(*(undefined8 *)(this + 0x28),~param_2);
    }
    iVar2 = lua_type(*(undefined8 *)(this + 0x28),~param_2);
    uVar6 = *(undefined8 *)(this + 0x28);
    if (iVar2 == 6) {
      lua_getfield(uVar6,0xffffd8ee,"__G__TRACKBACK__");
      iVar2 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
      if (iVar2 == 6) {
        iVar2 = -2 - param_2;
        lua_insert(*(undefined8 *)(this + 0x28),iVar2);
      }
      else {
        lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
        iVar2 = 0;
      }
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      iVar3 = lua_pcall(*(undefined8 *)(this + 0x28),param_2,param_3,iVar2);
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
      if (iVar3 == 0) {
        if ((0 < param_3) && (plVar5 = *(long **)(param_4 + 0x20), plVar5 != (long *)0x0)) {
          local_50 = *(undefined8 *)(this + 0x28);
          local_54 = param_3;
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_50,&local_54);
        }
        if (iVar2 != 0) {
          lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
        }
        goto LAB_007d3580;
      }
      uVar6 = *(undefined8 *)(this + 0x28);
      if (iVar2 == 0) {
        iVar2 = -2;
      }
      else {
        iVar2 = -3;
      }
    }
    else {
      iVar2 = -2 - param_2;
    }
    lua_settop(uVar6,iVar2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

