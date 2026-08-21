
/* fairygui::FUIInput::setPassword(bool) */

void __thiscall fairygui::FUIInput::setPassword(FUIInput *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (!param_1) {
    uVar1 = 4;
  }
  this[0x5d8] = (FUIInput)param_1;
  cocos2d::ui::EditBox::setInputFlag(this,uVar1);
  return;
}

