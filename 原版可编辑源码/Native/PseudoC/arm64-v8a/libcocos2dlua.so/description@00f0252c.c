
/* cocos2d::BMFontConfiguration::description() const */

void __thiscall cocos2d::BMFontConfiguration::description(BMFontConfiguration *this)

{
  if (((byte)this[0x68] & 1) == 0) {
    StringUtils::format("<BMFontConfiguration = %08zX | Glphys:%d Kernings:%d | Image = %s>",this,
                        (ulong)*(uint *)(this + 0x40),(ulong)*(uint *)(this + 0x98),this + 0x69);
    return;
  }
  StringUtils::format("<BMFontConfiguration = %08zX | Glphys:%d Kernings:%d | Image = %s>",this,
                      (ulong)*(uint *)(this + 0x40),(ulong)*(uint *)(this + 0x98),
                      *(undefined8 *)(this + 0x78));
  return;
}

