
/* MyXMLVisitor::Attributes::Attributes() */

void __thiscall MyXMLVisitor::Attributes::Attributes(Attributes *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x30) = 0xbf800000;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x34));
  *(undefined2 *)(this + 0x37) = 0;
  this[0x39] = (Attributes)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x44));
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x4c));
  cocos2d::Size::Size((Size *)(this + 0x50));
                    /* try { // try from 00dd2b18 to 00ed2b1f has its CatchHandler @ 00dd2d0c */
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x5c));
                    /* try { // try from 00dd2b24 to 00ed2b2b has its CatchHandler @ 00dd2d08 */
  return;
}

