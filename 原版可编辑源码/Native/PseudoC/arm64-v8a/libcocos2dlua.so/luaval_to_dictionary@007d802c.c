
/* luaval_to_dictionary(lua_State*, int, cocos2d::__Dictionary**, char const*) */

bool luaval_to_dictionary(lua_State *param_1,int param_2,__Dictionary **param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Ref *pRVar5;
  __Array **pp_Var6;
  __Dictionary *this;
  undefined8 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  __Array *ap_Stack_98 [2];
  __Array *local_88 [2];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (__Dictionary **)0x0)) {
    pp_Var6 = ap_Stack_98;
    iVar3 = tolua_istable(param_1,param_2,0);
    bVar2 = iVar3 != 0;
    if (iVar3 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8,"");
      lua_pushnil(param_1);
      this = (__Dictionary *)0x0;
      while (iVar3 = lua_next(param_1,param_2), iVar3 != 0) {
        iVar3 = lua_isstring(param_1,0xfffffffe);
        if (iVar3 == 0) {
          lua_settop(param_1,0xfffffffe);
        }
        else {
          if (this == (__Dictionary *)0x0) {
            this = (__Dictionary *)cocos2d::__Dictionary::create();
          }
          uVar4 = luaval_to_std_string(param_1,-2,(basic_string *)local_b0,(char *)pp_Var6);
          if ((uVar4 & 1) != 0) {
            iVar3 = lua_isuserdata(param_1,0xffffffff);
            if (iVar3 == 0) {
              iVar3 = lua_type(param_1,0xffffffff);
              if (iVar3 == 5) {
                lua_pushnumber(0x3ff0000000000000,param_1);
                lua_gettable(param_1,0xfffffffe);
                iVar3 = lua_type(param_1,0xffffffff);
                if (iVar3 == 0) {
                  lua_settop(param_1,0xfffffffe);
                  local_88[0] = (__Array *)0x0;
                  uVar4 = luaval_to_dictionary(param_1,-1,(__Dictionary **)local_88,(char *)pp_Var6)
                  ;
                  if ((uVar4 & 1) != 0) {
                    cocos2d::__Dictionary::setObject
                              (this,(Ref *)local_88[0],(basic_string *)local_b0);
                  }
                }
                else {
                  lua_settop(param_1,0xfffffffe);
                  local_88[0] = (__Array *)0x0;
                  uVar4 = luaval_to_array(param_1,-1,local_88,(char *)pp_Var6);
                  if ((uVar4 & 1) != 0) {
                    cocos2d::__Dictionary::setObject
                              (this,(Ref *)local_88[0],(basic_string *)local_b0);
                  }
                }
              }
              else {
                iVar3 = lua_type(param_1,0xffffffff);
                if (iVar3 == 4) {
                  uVar4 = luaval_to_std_string(param_1,-1,(basic_string *)local_c8,(char *)pp_Var6);
                  if ((uVar4 & 1) != 0) {
                    pRVar5 = (Ref *)cocos2d::__String::create((basic_string *)local_c8);
                    cocos2d::__Dictionary::setObject(this,pRVar5,(basic_string *)local_b0);
                  }
                }
                else {
                  iVar3 = lua_type(param_1,0xffffffff);
                  if (iVar3 == 1) {
                    pp_Var6 = local_88;
                    iVar3 = tolua_isboolean(param_1,0xffffffff,0);
                    if (iVar3 != 0) {
                      iVar3 = tolua_toboolean(param_1,0xffffffff,0);
                      pRVar5 = operator_new(0x38,(nothrow_t *)&std::nothrow);
                      if (pRVar5 != (Ref *)0x0) {
                        cocos2d::Ref::Ref(pRVar5);
                        pRVar5[0x30] = (Ref)(iVar3 != 0);
                        *(undefined ***)pRVar5 = &PTR____Bool_016985e8;
                        *(undefined ***)(pRVar5 + 0x28) = &PTR_clone_01698618;
                        cocos2d::Ref::autorelease(pRVar5);
                      }
                      cocos2d::__Dictionary::setObject(this,pRVar5,(basic_string *)local_b0);
                    }
                  }
                  else {
                    iVar3 = lua_type(param_1,0xffffffff);
                    if (iVar3 == 3) {
                      uVar7 = tolua_tonumber(0,param_1,0xffffffff);
                      pRVar5 = operator_new(0x38,(nothrow_t *)&std::nothrow);
                      if (pRVar5 != (Ref *)0x0) {
                        cocos2d::Ref::Ref(pRVar5);
                        *(undefined ***)pRVar5 = &PTR____Double_01698688;
                        *(undefined ***)(pRVar5 + 0x28) = &PTR_clone_016986b8;
                        *(undefined8 *)(pRVar5 + 0x30) = uVar7;
                        cocos2d::Ref::autorelease(pRVar5);
                      }
                      cocos2d::__Dictionary::setObject(this,pRVar5,(basic_string *)local_b0);
                    }
                  }
                }
              }
            }
            else {
              pRVar5 = (Ref *)tolua_tousertype(param_1,0xffffffff,0);
              if (pRVar5 != (Ref *)0x0) {
                cocos2d::__Dictionary::setObject(this,pRVar5,(basic_string *)local_b0);
              }
            }
          }
          lua_settop(param_1,0xfffffffe);
        }
      }
      *param_3 = this;
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

