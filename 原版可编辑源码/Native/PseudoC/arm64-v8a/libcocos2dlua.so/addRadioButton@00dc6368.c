
/* cocos2d::ui::RadioButtonGroup::addRadioButton(cocos2d::ui::RadioButton*) */

void __thiscall
cocos2d::ui::RadioButtonGroup::addRadioButton(RadioButtonGroup *this,RadioButton *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  RadioButton *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dc6384 to 00ec6427 has its CatchHandler @ 00dc66d0 */
  if (param_1 != (RadioButton *)0x0) {
    *(RadioButtonGroup **)(param_1 + 0x5f0) = this;
    puVar2 = *(undefined8 **)(this + 0x4f8);
    local_40 = param_1;
    if (puVar2 == *(undefined8 **)(this + 0x500)) {
      std::__ndk1::
      vector<cocos2d::ui::RadioButton*,std::__ndk1::allocator<cocos2d::ui::RadioButton*>>::
      __push_back_slow_path<cocos2d::ui::RadioButton*const&>
                ((vector<cocos2d::ui::RadioButton*,std::__ndk1::allocator<cocos2d::ui::RadioButton*>>
                  *)(this + 0x4f0),&local_40);
    }
    else {
      *puVar2 = param_1;
      *(undefined8 **)(this + 0x4f8) = puVar2 + 1;
    }
    Ref::retain((Ref *)local_40);
    if ((this[0x548] == (RadioButtonGroup)0x0) && (*(long *)(this + 0x540) == 0)) {
      (**(code **)(*(long *)this + 0x6a0))(this,param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

