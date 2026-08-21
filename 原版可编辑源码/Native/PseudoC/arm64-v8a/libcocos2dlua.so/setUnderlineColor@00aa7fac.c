
/* fairygui::FUILabel::setUnderlineColor(cocos2d::Color3B const&) */

void fairygui::FUILabel::setUnderlineColor(Color3B *param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x6a0) + 0x21) != '\0') {
    cocos2d::Label::enableUnderline((Label *)param_1);
    return;
  }
  return;
}

