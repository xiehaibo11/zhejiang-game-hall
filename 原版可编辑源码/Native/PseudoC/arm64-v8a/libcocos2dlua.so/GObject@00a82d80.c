
/* fairygui::GObject::GObject() */

void __thiscall fairygui::GObject::GObject(GObject *this)

{
  long lVar1;
  long lVar2;
  Relations *this_00;
  GObject *pGVar3;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  UIEventDispatcher::UIEventDispatcher((UIEventDispatcher *)this);
  *(undefined ***)this = &PTR__GObject_016a6188;
  pGVar3 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pGVar3 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  cocos2d::Size::Size((Size *)(this + 0x78));
  cocos2d::Size::Size((Size *)(this + 0x80));
  cocos2d::Size::Size((Size *)(this + 0x88));
  cocos2d::Size::Size((Size *)(this + 0x90));
  *(undefined2 *)(this + 0x98) = 0;
  this[0x9a] = (GObject)0x0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb5) = 0;
  cocos2d::Size::Size((Size *)(this + 200));
  cocos2d::Size::Size((Size *)(this + 0xd0));
  this[0xe8] = (GObject)0x0;
  *(undefined8 *)(this + 0xe0) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xf4) = 0x101;
  this[0xfa] = (GObject)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  this[0x100] = (GObject)0x0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined2 *)(this + 0xf8) = 1;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xec) = 0x3f800000;
  this[0x120] = (GObject)0x0;
  cocos2d::Value::Value((Value *)(this + 0x198));
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  this[0x1b8] = (GObject)0x0;
  local_110[0] = 0x1698928;
  lVar2 = DAT_01769a28 + 1;
  *(long *)(this + 0x1c8) = DAT_01769a28;
  DAT_01769a28 = lVar2;
  local_180 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_110[0] = 0x1698838;
  local_88 = 0;
  local_180 = 0x1698810;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  local_118 = 0x18;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,
             *(ulong *)(this + 0x1c8));
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if (((byte)*pGVar3 & 1) == 0) {
    *(undefined2 *)pGVar3 = 0;
  }
  else {
    **(undefined1 **)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    if (((byte)this[0x48] & 1) != 0) {
      operator_delete(*(void **)(this + 0x58));
      *(undefined8 *)(this + 0x48) = 0;
    }
  }
  *(undefined8 *)(this + 0x58) = local_198;
  *(undefined8 *)(this + 0x50) = uStack_1a0;
  *(undefined8 *)pGVar3 = local_1a8;
  this_00 = operator_new(0x28);
  Relations::Relations(this_00,this);
  *(Relations **)(this + 0x138) = this_00;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  local_180 = 0x1698810;
  local_110[0] = 0x1698838;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

