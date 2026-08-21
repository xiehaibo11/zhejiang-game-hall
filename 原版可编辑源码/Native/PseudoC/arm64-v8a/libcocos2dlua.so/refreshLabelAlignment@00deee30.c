
/* cocos2d::ui::EditBoxImplCommon::refreshLabelAlignment() */

void __thiscall cocos2d::ui::EditBoxImplCommon::refreshLabelAlignment(EditBoxImplCommon *this)

{
  Label::setAlignment(*(Label **)(this + 0x18),*(undefined4 *)(this + 0x34),
                      *(undefined4 *)(*(Label **)(this + 0x18) + 0x454));
  Label::setAlignment(*(Label **)(this + 0x20),*(undefined4 *)(this + 0x34),
                      *(undefined4 *)(*(Label **)(this + 0x20) + 0x454));
  return;
}

