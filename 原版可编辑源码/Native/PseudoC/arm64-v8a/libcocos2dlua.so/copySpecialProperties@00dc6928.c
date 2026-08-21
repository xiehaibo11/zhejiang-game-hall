
/* cocos2d::ui::RadioButtonGroup::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall
cocos2d::ui::RadioButtonGroup::copySpecialProperties(RadioButtonGroup *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  Ref *local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (Widget *)0x0) ||
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 == 0)) goto LAB_00dc6b14;
  plVar3 = *(long **)(lVar2 + 0x530);
  if (plVar3 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x510) == plVar3) {
    local_60 = (long *)local_80;
    (**(code **)(*plVar3 + 0x18))(plVar3,local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00dc6cc0(local_80,this + 0x510);
  if (local_80 == (Ref **)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00dc69f8:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00dc69f8;
  }
  plVar3 = *(long **)(lVar2 + 0x4b0);
  if (plVar3 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x490) == plVar3) {
    local_60 = (long *)local_80;
    (**(code **)(*plVar3 + 0x18))(plVar3,local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00dad59c(local_80,this + 0x490);
  if (local_80 == (Ref **)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00dc6a78:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00dc6a78;
  }
  puVar6 = *(undefined8 **)(this + 0x4f0);
  puVar7 = *(undefined8 **)(this + 0x4f8);
  *(undefined8 *)(this + 0x540) = *(undefined8 *)(lVar2 + 0x540);
  this[0x548] = *(RadioButtonGroup *)(lVar2 + 0x548);
  if (puVar6 != puVar7) {
    do {
      puVar5 = puVar6 + 1;
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar5;
    } while (puVar7 != puVar5);
    puVar6 = *(undefined8 **)(this + 0x4f0);
  }
  *(undefined8 **)(this + 0x4f8) = puVar6;
  puVar7 = *(undefined8 **)(lVar2 + 0x4f0);
  puVar5 = *(undefined8 **)(lVar2 + 0x4f8);
  if (puVar7 != puVar5) {
    while( true ) {
      local_80[0] = (Ref *)*puVar7;
      if (puVar6 == *(undefined8 **)(this + 0x500)) {
        std::__ndk1::
        vector<cocos2d::ui::RadioButton*,std::__ndk1::allocator<cocos2d::ui::RadioButton*>>::
        __push_back_slow_path<cocos2d::ui::RadioButton*const&>
                  ((vector<cocos2d::ui::RadioButton*,std::__ndk1::allocator<cocos2d::ui::RadioButton*>>
                    *)(this + 0x4f0),(RadioButton **)local_80);
      }
      else {
        *puVar6 = local_80[0];
        *(undefined8 **)(this + 0x4f8) = puVar6 + 1;
      }
      Ref::retain(local_80[0]);
      if (puVar5 + -1 == puVar7) break;
      puVar6 = *(undefined8 **)(this + 0x4f8);
      puVar7 = puVar7 + 1;
    }
  }
LAB_00dc6b14:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

