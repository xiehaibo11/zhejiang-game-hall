
/* cocos2d::PURibbonTrailRender::PURibbonTrailRender() */

void __thiscall cocos2d::PURibbonTrailRender::PURibbonTrailRender(PURibbonTrailRender *this)

{
  undefined8 uVar1;
  PURibbonTrailRender PVar2;
  long lVar3;
  PURibbonTrailRender *pPVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1b8 [16];
  void *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined **ppuStack_188;
  locale alStack_180 [8];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120 [17];
  undefined8 local_98;
  undefined4 local_90;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  Particle3DRender::Particle3DRender((Particle3DRender *)this);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__PURender_016f2a08;
  PUListener::PUListener((PUListener *)(this + 0x68));
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)(this + 0x68) = &PTR__PURibbonTrailRender_016f2d90;
  *(undefined ***)this = &PTR__PURibbonTrailRender_016f2d18;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  this[200] = (PURibbonTrailRender)0x1;
  *(undefined8 *)(this + 0xd0) = 10;
  *(undefined2 *)(this + 0xe0) = 1;
  this[0xe2] = (PURibbonTrailRender)0x0;
  *(undefined8 *)(this + 0xd8) = 0x40a0000043c80000;
  Vec4::Vec4((Vec4 *)(this + 0xe4),(Vec4 *)DEFAULT_INITIAL_COLOUR);
  Vec4::Vec4((Vec4 *)(this + 0xf4),(Vec4 *)DEFAULT_COLOUR_CHANGE);
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  local_120[0] = 0x1698928;
  local_1a0 = 0x1698900;
  uStack_198 = 0;
  local_190 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_120,&ppuStack_188);
  local_90 = 0xffffffff;
  ppuStack_188 = &PTR__basic_streambuf_01698a08;
  local_1a0 = 0x16987e8;
  local_120[0] = 0x1698838;
  local_98 = 0;
  local_190 = 0x1698810;
  std::__ndk1::locale::locale(alStack_180);
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = (void *)0x0;
  ppuStack_188 = &PTR__basic_stringbuf_01698960;
  local_128 = 0x18;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,this);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pPVar4 = (PURibbonTrailRender *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     (local_1b8,0,"RibbonTrail",0xb);
  uVar1 = *(undefined8 *)(pPVar4 + 0x10);
  PVar2 = *pPVar4;
  uStack_80 = (undefined7)((ulong)*(undefined8 *)(pPVar4 + 8) >> 8);
  uStack_88 = (undefined7)*(undefined8 *)(pPVar4 + 1);
  local_81 = (undefined1)((ulong)*(undefined8 *)(pPVar4 + 1) >> 0x38);
  *(undefined8 *)pPVar4 = 0;
  *(undefined8 *)(pPVar4 + 8) = 0;
  *(undefined8 *)(pPVar4 + 0x10) = 0;
  if (((byte)this[0xb0] & 1) == 0) {
    *(undefined2 *)(this + 0xb0) = 0;
  }
  else {
    **(undefined1 **)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    if (((byte)this[0xb0] & 1) != 0) {
      operator_delete(*(void **)(this + 0xc0));
      *(undefined8 *)(this + 0xb0) = 0;
    }
  }
  this[0xb0] = PVar2;
  *(ulong *)(this + 0xb8) = CONCAT71(uStack_80,local_81);
  *(undefined8 *)(this + 0xc0) = uVar1;
  *(ulong *)(this + 0xb1) = CONCAT17(local_81,uStack_88);
  uStack_80 = 0;
  uStack_88 = 0;
  local_81 = 0;
  if (((byte)local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  this[0x4a] = (PURibbonTrailRender)0x0;
  local_1a0 = 0x16987e8;
  local_190 = 0x1698810;
  local_120[0] = 0x1698838;
  ppuStack_188 = &PTR__basic_stringbuf_01698960;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  ppuStack_188 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_180);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_120);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

