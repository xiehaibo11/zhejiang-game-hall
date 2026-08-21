
/* bool luavals_variadic_to_ccvector<cocos2d::Layer*>(lua_State*, int,
   cocos2d::Vector<cocos2d::Layer*>*) */

bool luavals_variadic_to_ccvector<cocos2d::Layer*>(lua_State *param_1,int param_2,Vector *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_70 [16];
  Ref *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar4 = false;
  if ((param_1 != (lua_State *)0x0) && (param_2 != 0)) {
    if (0 < param_2) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 + 2;
        iVar5 = lua_isuserdata(param_1,iVar1);
        if (iVar5 != 0) {
          iVar5 = tolua_isusertype(param_1,iVar1,&DAT_012769c7,0,auStack_70);
          bVar4 = false;
          if (iVar5 == 0) goto LAB_008b1220;
          local_60 = (Ref *)tolua_tousertype(param_1,iVar1,0);
          puVar2 = *(undefined8 **)(param_3 + 8);
          if (puVar2 == *(undefined8 **)(param_3 + 0x10)) {
            std::__ndk1::vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>>::
            __push_back_slow_path<cocos2d::Layer*const&>
                      ((vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>> *)param_3,
                       (Layer **)&local_60);
          }
          else {
            *puVar2 = local_60;
            *(undefined8 **)(param_3 + 8) = puVar2 + 1;
          }
          cocos2d::Ref::retain(local_60);
        }
        iVar6 = iVar6 + 1;
      } while (param_2 != iVar6);
    }
    bVar4 = true;
  }
LAB_008b1220:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

