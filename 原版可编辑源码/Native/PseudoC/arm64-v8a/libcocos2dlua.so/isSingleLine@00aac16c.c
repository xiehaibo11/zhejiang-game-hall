
/* fairygui::FUIInput::isSingleLine() const */

bool __thiscall fairygui::FUIInput::isSingleLine(FUIInput *this)

{
  int iVar1;
  
  iVar1 = cocos2d::ui::EditBox::getInputMode((EditBox *)this);
  return iVar1 == 6;
}

