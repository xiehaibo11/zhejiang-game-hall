
/* cocos2d::LuaStack::executeFunctionReturnArray(int, int, int, cocos2d::__Array&) */

void __thiscall
cocos2d::LuaStack::executeFunctionReturnArray
          (LuaStack *this,int param_1,int param_2,int param_3,__Array *param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  Ref *pRVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = lua_gettop(*(undefined8 *)(this + 0x28));
  uVar4 = (**(code **)(*(long *)this + 0xb8))(this,param_1);
  if ((uVar4 & 1) == 0) {
LAB_007d339c:
    lua_settop(*(undefined8 *)(this + 0x28),uVar2);
    uVar7 = 1;
    goto LAB_007d33ac;
  }
  if (0 < param_2) {
    lua_insert(*(undefined8 *)(this + 0x28),~param_2);
  }
  iVar3 = lua_type(*(undefined8 *)(this + 0x28),~param_2);
  uVar7 = *(undefined8 *)(this + 0x28);
  if (iVar3 == 6) {
    lua_getfield(uVar7,0xffffd8ee,"__G__TRACKBACK__");
    iVar3 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
    if (iVar3 == 6) {
      iVar8 = -2 - param_2;
      lua_insert(*(undefined8 *)(this + 0x28),iVar8);
    }
    else {
      lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
      iVar8 = 0;
    }
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
    iVar3 = lua_pcall(*(undefined8 *)(this + 0x28),param_2,param_3,iVar8);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
    if (iVar3 != 0) {
      uVar7 = *(undefined8 *)(this + 0x28);
      iVar3 = -3;
      if (iVar8 == 0) {
        iVar3 = -2;
      }
      goto LAB_007d31f8;
    }
    if (0 < param_3) {
      do {
        iVar3 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
        if (iVar3 == 1) {
          iVar3 = lua_toboolean(*(undefined8 *)(this + 0x28));
          pRVar5 = operator_new(0x38,(nothrow_t *)&std::nothrow);
          if (pRVar5 != (Ref *)0x0) {
            Ref::Ref(pRVar5);
            *(undefined ***)pRVar5 = &PTR____Bool_016985e8;
            *(undefined ***)(pRVar5 + 0x28) = &PTR_clone_01698618;
            pRVar5[0x30] = (Ref)(iVar3 != 0);
LAB_007d322c:
            Ref::autorelease(pRVar5);
          }
LAB_007d323c:
          __Array::addObject(param_4,pRVar5);
        }
        else {
          iVar3 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
          if (iVar3 == 3) {
            uVar7 = lua_tonumber(*(undefined8 *)(this + 0x28));
            pRVar5 = operator_new(0x38,(nothrow_t *)&std::nothrow);
            if (pRVar5 != (Ref *)0x0) {
              Ref::Ref(pRVar5);
              *(undefined8 *)(pRVar5 + 0x30) = uVar7;
              *(undefined ***)pRVar5 = &PTR____Double_01698688;
              *(undefined ***)(pRVar5 + 0x28) = &PTR_clone_016986b8;
              goto LAB_007d322c;
            }
            goto LAB_007d323c;
          }
          iVar3 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
          if (iVar3 != 4) {
            pRVar5 = (Ref *)tolua_tousertype(*(undefined8 *)(this + 0x28),0xffffffff,0);
            goto LAB_007d323c;
          }
          pcVar6 = (char *)lua_tolstring(*(undefined8 *)(this + 0x28),0xffffffff,0);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_90,pcVar6);
          pRVar5 = (Ref *)__String::create((basic_string *)local_90);
          __Array::addObject(param_4,pRVar5);
          if (((byte)local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
        }
        lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      if (iVar8 != 0) {
        lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
      }
      goto LAB_007d339c;
    }
  }
  else {
    iVar3 = -2 - param_2;
LAB_007d31f8:
    lua_settop(uVar7,iVar3);
  }
  lua_settop(*(undefined8 *)(this + 0x28),uVar2);
  uVar7 = 0;
LAB_007d33ac:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

