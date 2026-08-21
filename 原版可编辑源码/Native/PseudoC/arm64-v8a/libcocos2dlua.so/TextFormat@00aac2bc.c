
/* fairygui::TextFormat::TextFormat() */

void __thiscall fairygui::TextFormat::TextFormat(TextFormat *this)

{
  undefined2 uVar1;
  TextFormat TVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x41400000;
  TVar2 = DAT_01792444;
  uVar1 = cocos2d::Color3B::BLACK;
  *(undefined4 *)(this + 0x24) = 3;
  this[0x1e] = TVar2;
  *(undefined2 *)(this + 0x1f) = 0;
  this[0x21] = (TextFormat)0x0;
  *(undefined2 *)(this + 0x1c) = uVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x38));
  *(undefined4 *)(this + 0x3c) = 1;
                    /* try { // try from 00aac31c to 00bac367 has its CatchHandler @ 00aac31c
                       catch() { ... } // from try @ 00aac31c with catch @ 00aac31c
                       catch() { ... } // from try @ 00aac36c with catch @ 00aac31c */
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x40));
  cocos2d::Size::Size((Size *)(this + 0x44));
  *(undefined4 *)(this + 0x4c) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x50));
  this[0x53] = (TextFormat)0x0;
  return;
}

