
/* fairygui::FUIInput::continueInit() */

void __thiscall fairygui::FUIInput::continueInit(FUIInput *this)

{
  long lVar1;
  byte *pbVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  FUIInput *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar2 = (byte *)UIConfig::getRealFontName(*(basic_string **)(this + 0x5d0),(bool *)0x0);
  pbVar4 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar4 = pbVar2 + 1;
  }
  cocos2d::ui::EditBox::setFontName((EditBox *)this,(char *)pbVar4);
  cocos2d::ui::EditBox::setFontSize((EditBox *)this,(int)*(float *)(*(long *)(this + 0x5d0) + 0x18))
  ;
  cocos2d::ui::EditBox::setPlaceholderFontSize
            ((EditBox *)this,(int)*(float *)(*(long *)(this + 0x5d0) + 0x18));
  cocos2d::ui::EditBox::setFontColor((EditBox *)this,(Color3B *)(*(long *)(this + 0x5d0) + 0x1c));
  (**(code **)(*(long *)this + 0x588))(this,0);
  local_70 = &PTR_FUN_016a9c78;
  uStack_60 = 0;
  local_68 = _touchDownAction;
  local_58 = this;
  local_50 = (long *)&local_70;
  cocos2d::ui::Widget::addTouchEventListener((Widget *)this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00aabd74;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00aabd74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

