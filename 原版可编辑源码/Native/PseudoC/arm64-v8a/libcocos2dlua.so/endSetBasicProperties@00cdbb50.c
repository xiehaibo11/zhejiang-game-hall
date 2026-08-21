
/* cocostudio::WidgetReader::endSetBasicProperties(cocos2d::ui::Widget*) */

void __thiscall cocostudio::WidgetReader::endSetBasicProperties(WidgetReader *this,Widget *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)cocos2d::Director::getInstance();
  pSVar2 = (Size *)cocos2d::Director::getWinSize(this_00);
  cocos2d::Size::Size((Size *)&local_40,pSVar2);
  local_48 = *(undefined8 *)(this + 0xd8);
  cocos2d::ui::Widget::setPositionPercent(param_1,(Vec2 *)&local_48);
  local_48 = *(undefined8 *)(this + 0xd0);
  (**(code **)(*(long *)param_1 + 0x5c0))(param_1,&local_48);
  if (this[0xf8] != (WidgetReader)0x0) {
    *(undefined8 *)(this + 0xe0) = local_40;
  }
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,this + 0xe8);
  (**(code **)(*(long *)param_1 + 0x490))(param_1,*(undefined4 *)(this + 0xec));
  uVar3 = cocos2d::ui::Widget::isIgnoreContentAdaptWithSize(param_1);
  if ((uVar3 & 1) == 0) {
    cocos2d::Size::Size((Size *)&local_48,*(float *)(this + 0xe0),*(float *)(this + 0xe4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_48);
  }
  (**(code **)(*(long *)param_1 + 0x98))(param_1,this + 0xf0);
  (**(code **)(*(long *)param_1 + 0x148))(param_1,this + 0xfc);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

