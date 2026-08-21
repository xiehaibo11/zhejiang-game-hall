
/* luaval_to_array(lua_State*, int, cocos2d::__Array**, char const*) */

void luaval_to_array(lua_State *param_1,int param_2,__Array **param_3,char *param_4)

{
  long lVar1;
  Ref *pRVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  __Array *this;
  Ref *pRVar6;
  ulong uVar7;
  __Array **pp_Var8;
  ulong uVar9;
  __Array *local_a0 [2];
  void *local_90;
  char acStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (__Array **)0x0)) {
    pp_Var8 = (__Array **)acStack_88;
    uVar4 = tolua_istable(param_1,param_2,0);
    if ((int)uVar4 != 0) {
      uVar5 = lua_objlen(param_1,param_2);
      if (uVar5 != 0) {
        this = (__Array *)cocos2d::__Array::createWithCapacity(uVar5);
        uVar4 = 0;
        if (this == (__Array *)0x0) goto LAB_007d7fb0;
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 1;
          lua_pushnumber((double)uVar9,param_1);
          lua_gettable(param_1,param_2);
          iVar3 = lua_type(param_1,0xffffffff);
          if (iVar3 == 0) goto LAB_007d7d40;
          iVar3 = lua_isuserdata(param_1,0xffffffff);
          if (iVar3 == 0) {
            iVar3 = lua_type(param_1,0xffffffff);
            if (iVar3 == 5) {
              lua_pushnumber(0x3ff0000000000000,param_1);
              lua_gettable(param_1,0xfffffffe);
              iVar3 = lua_type(param_1,0xffffffff);
              lua_settop(param_1,0xfffffffe);
              if (iVar3 == 0) {
                local_a0[0] = (__Array *)0x0;
                uVar7 = luaval_to_dictionary(param_1,-1,(__Dictionary **)local_a0,(char *)pp_Var8);
              }
              else {
                local_a0[0] = (__Array *)0x0;
                uVar7 = luaval_to_array(param_1,-1,local_a0,(char *)pp_Var8);
              }
              pRVar6 = (Ref *)local_a0[0];
              pRVar2 = (Ref *)(uVar7 & 1);
              goto joined_r0x007d7f30;
            }
            iVar3 = lua_type(param_1,0xffffffff);
            if (iVar3 != 4) {
              iVar3 = lua_type(param_1,0xffffffff);
              if (iVar3 == 1) {
                pp_Var8 = local_a0;
                iVar3 = tolua_isboolean(param_1,0xffffffff,0);
                if (iVar3 != 0) {
                  iVar3 = tolua_toboolean(param_1,0xffffffff,0);
                  pRVar6 = operator_new(0x38,(nothrow_t *)&std::nothrow);
                  if (pRVar6 != (Ref *)0x0) {
                    cocos2d::Ref::Ref(pRVar6);
                    *(undefined ***)pRVar6 = &PTR____Bool_016985e8;
                    *(undefined ***)(pRVar6 + 0x28) = &PTR_clone_01698618;
                    pRVar6[0x30] = (Ref)(iVar3 != 0);
                    cocos2d::Ref::autorelease(pRVar6);
                  }
                  cocos2d::__Array::addObject(this,pRVar6);
                }
                goto LAB_007d7d40;
              }
              iVar3 = lua_type(param_1,0xffffffff);
              if (iVar3 != 3) goto LAB_007d7d40;
              uVar4 = tolua_tonumber(0,param_1,0xffffffff);
              pRVar6 = operator_new(0x38,(nothrow_t *)&std::nothrow);
              if (pRVar6 != (Ref *)0x0) {
                cocos2d::Ref::Ref(pRVar6);
                *(undefined ***)pRVar6 = &PTR____Double_01698688;
                *(undefined ***)(pRVar6 + 0x28) = &PTR_clone_016986b8;
                *(undefined8 *)(pRVar6 + 0x30) = uVar4;
                cocos2d::Ref::autorelease(pRVar6);
              }
              goto LAB_007d7d3c;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_a0,"");
            uVar7 = luaval_to_std_string(param_1,-1,(basic_string *)local_a0,(char *)pp_Var8);
            if ((uVar7 & 1) != 0) {
              pRVar6 = (Ref *)cocos2d::__String::create((basic_string *)local_a0);
              cocos2d::__Array::addObject(this,pRVar6);
            }
            if (((ulong)local_a0[0] & 1) != 0) {
              operator_delete(local_90);
            }
          }
          else {
            pRVar6 = (Ref *)tolua_tousertype(param_1,0xffffffff,0);
            pRVar2 = pRVar6;
joined_r0x007d7f30:
            if (pRVar2 != (Ref *)0x0) {
LAB_007d7d3c:
              cocos2d::__Array::addObject(this,pRVar6);
            }
          }
LAB_007d7d40:
          lua_settop(param_1,0xfffffffe);
        } while (uVar5 != uVar9);
        *param_3 = this;
      }
      uVar4 = 1;
    }
  }
LAB_007d7fb0:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

