
/* cocos2d::Menu::createWithItems(cocos2d::MenuItem*, std::__va_list) */

Layer * cocos2d::Menu::createWithItems(Ref *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  Layer *this;
  ulong uVar5;
  long *plVar6;
  Ref *pRVar7;
  long *local_58;
  long *local_50;
  long *plStack_48;
  Ref *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  local_58 = (long *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1afdc with catch @ 00f1b024
                        */
  if (param_1 != (Ref *)0x0) {
    local_40 = param_1;
    std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
    __push_back_slow_path<cocos2d::MenuItem*const&>
              ((vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)&local_58,
               (MenuItem **)&local_40);
    Ref::retain(local_40);
    while( true ) {
      iVar1 = (int)param_2[3];
      if ((iVar1 < 0) && (*(int *)(param_2 + 3) = iVar1 + 8, iVar1 + 8 < 1)) {
        pRVar7 = *(Ref **)(param_2[1] + (long)iVar1);
      }
      else {
        plVar6 = (long *)*param_2;
        *param_2 = (long)(plVar6 + 1);
        pRVar7 = (Ref *)*plVar6;
      }
      if (pRVar7 == (Ref *)0x0) break;
      local_40 = pRVar7;
      if (local_50 == plStack_48) {
        std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
        __push_back_slow_path<cocos2d::MenuItem*const&>
                  ((vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)
                   &local_58,(MenuItem **)&local_40);
      }
      else {
        *local_50 = (long)pRVar7;
        local_50 = local_50 + 1;
      }
      Ref::retain(local_40);
    }
  }
  this = operator_new(0x340,(nothrow_t *)&std::nothrow);
  plVar6 = local_58;
  plVar3 = local_50;
  if (this != (Layer *)0x0) {
    Layer::Layer(this);
    *(undefined ***)this = &PTR__Menu_01703d68;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    uVar5 = initWithArray((Menu *)this,(Vector *)&local_58);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Layer *)0x0;
      plVar6 = local_58;
      plVar3 = local_50;
    }
    else {
      Ref::autorelease((Ref *)this);
      plVar6 = local_58;
      plVar3 = local_50;
    }
  }
  for (; plVar4 = local_50, plVar6 != local_50; plVar6 = plVar6 + 1) {
    local_50 = plVar3;
    Ref::release((Ref *)*plVar6);
    plVar3 = local_50;
    local_50 = plVar4;
  }
  local_50 = local_58;
  if (local_58 != (long *)0x0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

