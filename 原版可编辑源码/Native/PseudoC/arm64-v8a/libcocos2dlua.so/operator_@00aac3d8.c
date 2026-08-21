
/* fairygui::TextFormat::TEMPNAMEPLACEHOLDERVALUE(fairygui::TextFormat const&) */

TextFormat * __thiscall fairygui::TextFormat::operator=(TextFormat *this,TextFormat *param_1)

{
  ulong uVar1;
  TextFormat *pTVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pTVar2 = *(TextFormat **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pTVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
           (char *)pTVar2,uVar1);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *(undefined2 *)(param_1 + 0x1c);
    this[0x1e] = param_1[0x1e];
    *(undefined2 *)(this + 0x1c) = uVar3;
    this[0x1f] = param_1[0x1f];
    this[0x20] = param_1[0x20];
    this[0x21] = param_1[0x21];
    uVar4 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(this + 0x24) = uVar4;
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
    uVar3 = *(undefined2 *)(param_1 + 0x38);
    this[0x3a] = param_1[0x3a];
    *(undefined2 *)(this + 0x38) = uVar3;
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = *(undefined2 *)(param_1 + 0x40);
    this[0x42] = param_1[0x42];
    *(undefined2 *)(this + 0x40) = uVar3;
    cocos2d::Size::operator=((Size *)(this + 0x44),(Size *)(param_1 + 0x44));
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    uVar3 = *(undefined2 *)(param_1 + 0x50);
    this[0x52] = param_1[0x52];
    *(undefined2 *)(this + 0x50) = uVar3;
    this[0x53] = param_1[0x53];
  }
  return this;
}

