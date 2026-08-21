
/* cocos2d::ui::EditBoxImplCommon::setTextHorizontalAlignment(cocos2d::TextHAlignment) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setTextHorizontalAlignment
          (EditBoxImplCommon *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x34) = param_2;
  (**(code **)(*(long *)this + 0x180))();
  Label::setAlignment(*(Label **)(this + 0x18),*(undefined4 *)(this + 0x34),
                      *(undefined4 *)(*(Label **)(this + 0x18) + 0x454));
  Label::setAlignment(*(Label **)(this + 0x20),*(undefined4 *)(this + 0x34),
                      *(undefined4 *)(*(Label **)(this + 0x20) + 0x454));
  return;
}

