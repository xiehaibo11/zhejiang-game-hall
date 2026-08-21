
/* cocos2d::LabelAtlas::getDescription() const */

void __thiscall cocos2d::LabelAtlas::getDescription(LabelAtlas *this)

{
  if (((byte)this[0x3f0] & 1) == 0) {
    StringUtils::format("<LabelAtlas | Tag = %d, Label = \'%s\'>",(ulong)*(uint *)(this + 0x1a0),
                        this + 0x3f1);
    return;
  }
  StringUtils::format("<LabelAtlas | Tag = %d, Label = \'%s\'>",(ulong)*(uint *)(this + 0x1a0),
                      *(undefined8 *)(this + 0x400));
  return;
}

