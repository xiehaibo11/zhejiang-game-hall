
/* fairygui::FUIRichText::setAnchorFontColor(cocos2d::Color3B const&) */

void __thiscall fairygui::FUIRichText::setAnchorFontColor(FUIRichText *this,Color3B *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)param_1;
  this[0x3d3] = *(FUIRichText *)(param_1 + 2);
  *(undefined2 *)(this + 0x3d1) = uVar1;
  this[0x340] = (FUIRichText)0x1;
  return;
}

