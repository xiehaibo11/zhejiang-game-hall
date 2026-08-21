
/* luavals_variadic_to_array(lua_State*, int, cocos2d::__Array**) */

void luavals_variadic_to_array(lua_State *param_1,int param_2,__Array **param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  __Array *this;
  Ref *pRVar5;
  char *pcVar6;
  int iVar7;
  double dVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_2 != 0)) {
    this = (__Array *)cocos2d::__Array::create();
    if (0 < param_2) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + 2;
        iVar3 = lua_type(param_1,iVar1);
        if (iVar3 == 3) {
          uVar4 = tolua_isnumber(param_1,iVar1,0,local_90);
          if ((int)uVar4 == 0) goto LAB_007d874c;
          dVar8 = (double)tolua_tonumber(0,param_1,iVar1);
          pRVar5 = operator_new(0x38,(nothrow_t *)&std::nothrow);
          if (pRVar5 != (Ref *)0x0) {
            cocos2d::Ref::Ref(pRVar5);
            *(undefined ***)pRVar5 = &PTR____Integer_01698788;
            *(undefined ***)(pRVar5 + 0x28) = &PTR_clone_016987b8;
            *(int *)(pRVar5 + 0x30) = (int)dVar8;
          }
          cocos2d::Ref::autorelease(pRVar5);
LAB_007d8634:
          cocos2d::__Array::addObject(this,pRVar5);
        }
        else {
          iVar3 = lua_type(param_1,iVar1);
          if (iVar3 == 4) {
            pcVar6 = (char *)lua_tolstring(param_1,iVar1,0);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_90,pcVar6);
            pRVar5 = (Ref *)cocos2d::__String::create((basic_string *)local_90);
            cocos2d::__Array::addObject(this,pRVar5);
            if (((byte)local_90[0] & 1) != 0) {
              operator_delete(local_80);
            }
          }
          else {
            iVar3 = lua_isuserdata(param_1,iVar1);
            if (iVar3 != 0) {
              uVar4 = tolua_isusertype(param_1,iVar1,&DAT_012769c7,0,local_90);
              if ((int)uVar4 != 0) {
                pRVar5 = (Ref *)tolua_tousertype(param_1,iVar1,0);
                goto LAB_007d8634;
              }
              goto LAB_007d874c;
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (param_2 != iVar7);
    }
    uVar4 = 1;
LAB_007d874c:
    *param_3 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

