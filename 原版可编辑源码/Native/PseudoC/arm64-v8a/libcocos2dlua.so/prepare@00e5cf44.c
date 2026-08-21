
/* cocos2d::PURibbonTrailRender::prepare() */

void __thiscall cocos2d::PURibbonTrailRender::prepare(PURibbonTrailRender *this)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long *plVar9;
  undefined8 uVar10;
  PURibbonTrail *this_00;
  Ref *this_01;
  PUBillboardChain *this_02;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  float fVar14;
  float fVar15;
  Ref *local_1b8 [2];
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
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  if (*(PUParticleSystem3D **)(this + 0x28) != (PUParticleSystem3D *)0x0) {
    PUParticleSystem3D::addListener
              (*(PUParticleSystem3D **)(this + 0x28),(PUListener *)(this + 0x68));
    uVar7 = ParticleSystem3D::getParticleQuota(*(ParticleSystem3D **)(this + 0x28));
    *(ulong *)(this + 0xa0) = uVar7 & 0xffffffff;
    if (*(long *)(this + 0x108) == 0) {
      local_1a0 = 0x1698900;
      local_120[0] = 0x1698928;
      uStack_198 = 0;
      local_190 = 0x1698810;
      std::__ndk1::ios_base::init((ios_base *)local_120,&ppuStack_188);
      local_1a0 = 0x16987e8;
      local_120[0] = 0x1698838;
      ppuStack_188 = &PTR__basic_streambuf_01698a08;
      local_90 = 0xffffffff;
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
      ppuStack_188 = &PTR__basic_stringbuf_01698960;
      uStack_130 = 0;
      local_138 = (void *)0x0;
      local_128 = 0x18;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,this);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pbVar8 = (byte *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 *)local_1b8,0,"ParticleUniverse",0x10);
      bVar2 = *pbVar8;
      pvVar13 = *(void **)(pbVar8 + 0x10);
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8[4] = 0;
      pbVar8[5] = 0;
      pbVar8[6] = 0;
      pbVar8[7] = 0;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      pbVar8[0x10] = 0;
      pbVar8[0x11] = 0;
      pbVar8[0x12] = 0;
      pbVar8[0x13] = 0;
      pbVar8[0x14] = 0;
      pbVar8[0x15] = 0;
      pbVar8[0x16] = 0;
      pbVar8[0x17] = 0;
      if (((ulong)local_1b8[0] & 1) != 0) {
        operator_delete(local_1a8);
      }
      plVar9 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
      if (plVar9 != (long *)0x0) {
        uVar10 = Node::create();
        *(undefined8 *)(this + 0x108) = uVar10;
        (**(code **)(*plVar9 + 0x208))(plVar9);
      }
      if ((bVar2 & 1) != 0) {
        operator_delete(pvVar13);
      }
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
      if (*(long *)(this + 0x108) == 0) goto LAB_00e5d50c;
    }
    this_00 = operator_new(0x1d8,(nothrow_t *)&std::nothrow);
    if (this_00 != (PURibbonTrail *)0x0) {
      PURibbonTrail::PURibbonTrail
                (this_00,(basic_string *)(this + 0xb0),(basic_string *)(this + 0x110),0x14,1,true,
                 true);
    }
    *(PURibbonTrail **)(this + 0xa8) = this_00;
    (**(code **)(*(long *)this_00 + 0x20))(this_00,*(undefined8 *)(this + 0xa0));
    (**(code **)(**(long **)(this + 0xa8) + 0x10))
              (*(long **)(this + 0xa8),*(undefined8 *)(this + 0xd0));
    plVar9 = *(long **)(this + 0xa8);
    fVar15 = *(float *)(this + 0x40);
    if (this[0xe1] == (PURibbonTrailRender)0x0) {
      fVar14 = (float)PUParticleSystem3D::getDefaultHeight(*(PUParticleSystem3D **)(this + 0x28));
      lVar11 = *plVar9;
    }
    else {
      lVar11 = *plVar9;
      fVar14 = *(float *)(this + 0xd8);
    }
    (**(code **)(lVar11 + 0xf8))(fVar15 * fVar14,plVar9);
    (**(code **)(**(long **)(this + 0xa8) + 0x60))(*(long **)(this + 0xa8),this[200]);
    local_1a0 = 0x1698900;
    local_120[0] = 0x1698928;
    uStack_198 = 0;
    local_190 = 0x1698810;
    std::__ndk1::ios_base::init((ios_base *)local_120,&ppuStack_188);
    local_1a0 = 0x16987e8;
    ppuStack_188 = &PTR__basic_streambuf_01698a08;
    local_120[0] = 0x1698838;
    local_90 = 0xffffffff;
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
    ppuStack_188 = &PTR__basic_stringbuf_01698960;
    uStack_130 = 0;
    local_138 = (void *)0x0;
    local_128 = 0x18;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,this);
    if (*(long *)(this + 0xa0) != 0) {
      uVar7 = 0;
      do {
        uVar10 = Node::create();
        (**(code **)(**(long **)(this + 0x108) + 0x208))(*(long **)(this + 0x108),uVar10);
        this_01 = operator_new(0x48,(nothrow_t *)&std::nothrow);
        if (this_01 != (Ref *)0x0) {
          uVar12 = *(undefined8 *)(this + 0xa8);
          Ref::Ref(this_01);
          *(undefined ***)this_01 = &PTR__Ref_016f2df8;
          *(undefined8 *)(this_01 + 0x28) = uVar10;
          this_01[0x30] = (Ref)0x0;
          *(undefined8 *)(this_01 + 0x38) = uVar12;
          *(undefined8 *)(this_01 + 0x40) = 0;
        }
        *(ulong *)(this_01 + 0x40) = uVar7;
        puVar1 = *(undefined8 **)(this + 0x78);
        local_1b8[0] = this_01;
        if (puVar1 == *(undefined8 **)(this + 0x80)) {
          std::__ndk1::
          vector<cocos2d::PURibbonTrailVisualData*,std::__ndk1::allocator<cocos2d::PURibbonTrailVisualData*>>
          ::__push_back_slow_path<cocos2d::PURibbonTrailVisualData*const&>
                    ((vector<cocos2d::PURibbonTrailVisualData*,std::__ndk1::allocator<cocos2d::PURibbonTrailVisualData*>>
                      *)(this + 0x70),(PURibbonTrailVisualData **)local_1b8);
        }
        else {
          *puVar1 = this_01;
          *(undefined8 **)(this + 0x78) = puVar1 + 1;
        }
        puVar1 = *(undefined8 **)(this + 0x90);
        if (puVar1 == *(undefined8 **)(this + 0x98)) {
          std::__ndk1::
          vector<cocos2d::PURibbonTrailVisualData*,std::__ndk1::allocator<cocos2d::PURibbonTrailVisualData*>>
          ::__push_back_slow_path<cocos2d::PURibbonTrailVisualData*const&>
                    ((vector<cocos2d::PURibbonTrailVisualData*,std::__ndk1::allocator<cocos2d::PURibbonTrailVisualData*>>
                      *)(this + 0x88),(PURibbonTrailVisualData **)local_1b8);
        }
        else {
          *puVar1 = local_1b8[0];
          *(undefined8 **)(this + 0x90) = puVar1 + 1;
        }
        plVar9 = *(long **)(this + 0xa8);
        if (this[0xe0] == (PURibbonTrailRender)0x0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,uVar7,this + 0xe4);
        }
        else {
          iVar4 = rand();
          iVar5 = rand();
          iVar6 = rand();
          (**(code **)(*plVar9 + 0x110))
                    ((float)iVar4 * 4.656613e-10,(float)iVar5 * 4.656613e-10,
                     (float)iVar6 * 4.656613e-10,0x3f800000,plVar9,uVar7);
        }
        (**(code **)(**(long **)(this + 0xa8) + 0x120))(*(long **)(this + 0xa8),uVar7,this + 0xf4);
        plVar9 = *(long **)(this + 0xa8);
        fVar15 = *(float *)(this + 0x3c);
        if (this[0xe2] == (PURibbonTrailRender)0x0) {
          fVar14 = (float)PUParticleSystem3D::getDefaultWidth(*(PUParticleSystem3D **)(this + 0x28))
          ;
          (**(code **)(*plVar9 + 0x128))(fVar15 * fVar14,plVar9,uVar7);
        }
        else {
          (**(code **)(*plVar9 + 0x128))(fVar15 * *(float *)(this + 0xdc),plVar9,uVar7);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulong *)(this + 0xa0));
    }
    this_02 = *(PUBillboardChain **)(this + 0xa8);
    *(undefined8 *)(this_02 + 0x1c8) = *(undefined8 *)(this + 0x108);
    PUBillboardChain::setDepthTest(this_02,(bool)this[0x48]);
    PUBillboardChain::setDepthWrite(*(PUBillboardChain **)(this + 0xa8),(bool)this[0x49]);
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
  }
LAB_00e5d50c:
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

