
/* cocos2d::PUBeamRender::prepare() */

void __thiscall cocos2d::PUBeamRender::prepare(PUBeamRender *this)

{
  undefined8 *puVar1;
  PUBeamRender PVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  PUBeamRender *pPVar6;
  PUBillboardChain *this_00;
  Quaternion *pQVar7;
  Ref *this_01;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  Ref *pRVar11;
  ulong uVar12;
  basic_string *pbVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  Ref *local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined **ppuStack_1d8;
  locale alStack_1d0 [8];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulong local_198;
  undefined8 uStack_190;
  void *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170 [17];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined7 local_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  if (*(PUParticleSystem3D **)(this + 0x28) != (PUParticleSystem3D *)0x0) {
    PUParticleSystem3D::addListener
              (*(PUParticleSystem3D **)(this + 0x28),(PUListener *)(this + 0x68));
    uVar5 = ParticleSystem3D::getParticleQuota(*(ParticleSystem3D **)(this + 0x28));
    *(ulong *)(this + 0xd8) = uVar5 & 0xffffffff;
    local_170[0] = 0x1698928;
    local_1f0 = 0x1698900;
    uStack_1e8 = 0;
    local_1e0 = 0x1698810;
    std::__ndk1::ios_base::init((ios_base *)local_170,&ppuStack_1d8);
    local_e0 = 0xffffffff;
    local_1f0 = 0x16987e8;
    ppuStack_1d8 = &PTR__basic_streambuf_01698a08;
    local_170[0] = 0x1698838;
    local_e8 = 0;
    local_1e0 = 0x1698810;
    std::__ndk1::locale::locale(alStack_1d0);
    uStack_1a0 = 0;
    local_1a8 = 0;
    uStack_1b0 = 0;
    local_1b8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    ppuStack_1d8 = &PTR__basic_stringbuf_01698960;
    uStack_190 = 0;
    local_198 = 0;
    uStack_180 = 0;
    local_188 = (void *)0x0;
    local_178 = 0x18;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1e0,this);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pPVar6 = (PUBeamRender *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_230,0,"Beam",4);
    uVar14 = *(undefined8 *)(pPVar6 + 0x10);
    PVar2 = *pPVar6;
    uStack_c8 = (undefined7)((ulong)*(undefined8 *)(pPVar6 + 8) >> 8);
    local_d0 = (undefined7)*(undefined8 *)(pPVar6 + 1);
    uStack_c9 = (undefined1)((ulong)*(undefined8 *)(pPVar6 + 1) >> 0x38);
    *(undefined8 *)pPVar6 = 0;
    *(undefined8 *)(pPVar6 + 8) = 0;
    *(undefined8 *)(pPVar6 + 0x10) = 0;
    pbVar13 = (basic_string *)(this + 0x88);
    if (((byte)*pbVar13 & 1) == 0) {
      *(undefined2 *)pbVar13 = 0;
    }
    else {
      **(undefined1 **)(this + 0x98) = 0;
      *(undefined8 *)(this + 0x90) = 0;
      if (((byte)this[0x88] & 1) != 0) {
        operator_delete(*(void **)(this + 0x98));
        *(undefined8 *)(this + 0x88) = 0;
      }
    }
    this[0x88] = PVar2;
    *(ulong *)(this + 0x90) = CONCAT71(uStack_c8,uStack_c9);
    *(undefined8 *)(this + 0x98) = uVar14;
    *(ulong *)(this + 0x89) = CONCAT17(uStack_c9,local_d0);
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_c9 = 0;
    if (((ulong)local_230 & 1) != 0) {
      operator_delete(local_220);
    }
    this_00 = operator_new(0xe8,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUBillboardChain *)0x0) {
      PUBillboardChain::PUBillboardChain
                (this_00,pbVar13,(basic_string *)(this + 0x70),0x14,1,true,true,true);
    }
    *(PUBillboardChain **)(this + 0xa0) = this_00;
    (**(code **)(*(long *)this_00 + 0x70))(this_00,1);
    (**(code **)(**(long **)(this + 0xa0) + 0x20))
              (*(long **)(this + 0xa0),*(undefined8 *)(this + 0xd8));
    (**(code **)(**(long **)(this + 0xa0) + 0x10))
              (*(long **)(this + 0xa0),*(undefined8 *)(this + 0xe8));
    (**(code **)(**(long **)(this + 0xa0) + 0x40))
              (*(long **)(this + 0xa0),*(undefined4 *)(this + 0x104));
    (**(code **)(**(long **)(this + 0xa0) + 0x60))(*(long **)(this + 0xa0),this[0xe0]);
    (**(code **)(**(long **)(this + 0xa0) + 0x30))
              (*(long **)(this + 0xa0),this[0xe0] == (PUBeamRender)0x0);
    (**(code **)(**(long **)(this + 0xa0) + 0x50))(0,0x3f800000);
    PUBillboardChain::setDepthTest(*(PUBillboardChain **)(this + 0xa0),(bool)this[0x48]);
    PUBillboardChain::setDepthWrite(*(PUBillboardChain **)(this + 0xa0),(bool)this[0x49]);
    if (*(long *)(this + 0xd8) != 0) {
      uVar5 = 0;
      lVar8 = *(long *)(this + 0xe8);
      do {
        if (lVar8 != 0) {
          uVar9 = 0;
          do {
            PUBillboardChain::Element::Element((Element *)&local_230);
            fVar16 = *(float *)(this + 0x3c);
            fVar15 = (float)PUParticleSystem3D::getDefaultWidth
                                      (*(PUParticleSystem3D **)(this + 0x28));
            pQVar7 = (Quaternion *)Quaternion::identity();
            PUBillboardChain::Element::Element
                      ((Element *)&local_d0,(Vec3 *)&Vec3::ZERO,fVar16 * fVar15,0.0,
                       (Vec4 *)Vec4::ONE,pQVar7);
            uStack_228 = CONCAT17(uStack_c1,uStack_c8);
            local_230 = (Ref *)CONCAT17(uStack_c9,local_d0);
            uStack_218 = uStack_b8;
            local_220 = uStack_c0;
            uStack_208 = uStack_a8;
            local_210 = local_b0;
            local_200 = local_a0;
            Quaternion::~Quaternion((Quaternion *)((long)&local_b0 + 4));
            Vec4::~Vec4((Vec4 *)((long)&uStack_c0 + 4));
            (**(code **)(**(long **)(this + 0xa0) + 0x80))(*(long **)(this + 0xa0),uVar5,&local_230)
            ;
            Quaternion::~Quaternion((Quaternion *)((long)&local_210 + 4));
            Vec4::~Vec4((Vec4 *)((long)&local_220 + 4));
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ulong *)(this + 0xe8));
        }
        this_01 = operator_new(0x9a0,(nothrow_t *)&std::nothrow);
        if (this_01 != (Ref *)0x0) {
          uVar14 = *(undefined8 *)(this + 0xa0);
          Ref::Ref(this_01);
          lVar8 = 0x30;
          *(ulong *)(this_01 + 0x28) = uVar5;
          *(undefined ***)this_01 = &PTR__Ref_016f2be0;
          do {
            Vec3::Vec3((Vec3 *)(this_01 + lVar8));
            lVar8 = lVar8 + 0xc;
          } while (lVar8 != 0x4e0);
          lVar8 = 0;
          do {
            Vec3::Vec3((Vec3 *)(this_01 + lVar8 + 0x4e0));
            lVar8 = lVar8 + 0xc;
          } while (lVar8 != 0x4b0);
          *(undefined4 *)(this_01 + 0x990) = 0;
          *(undefined8 *)(this_01 + 0x998) = uVar14;
        }
        uVar9 = *(ulong *)(this + 0xf8);
        if (uVar9 != 0) {
          if (uVar9 < 4) {
            uVar10 = 0;
          }
          else {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar9 - 1;
            uVar12 = (uVar9 - 1) * 0xc;
            uVar10 = 0;
            if ((((uVar12 < ~(ulong)(this_01 + 0x38) || uVar12 - ~(ulong)(this_01 + 0x38) == 0) &&
                 (SUB168(auVar3 * ZEXT816(0xc),8) == 0)) &&
                (uVar12 < ~(ulong)(this_01 + 0x4e8) || uVar12 - ~(ulong)(this_01 + 0x4e8) == 0)) &&
               (((uVar12 < ~(ulong)(this_01 + 0x34) || uVar12 - ~(ulong)(this_01 + 0x34) == 0 &&
                 (uVar12 < ~(ulong)(this_01 + 0x4e4) || uVar12 - ~(ulong)(this_01 + 0x4e4) == 0)) &&
                ((uVar12 < ~(ulong)(this_01 + 0x30) || uVar12 - ~(ulong)(this_01 + 0x30) == 0 &&
                 (uVar12 < ~(ulong)(this_01 + 0x4e0) || uVar12 - ~(ulong)(this_01 + 0x4e0) == 0)))))
               ) {
              uVar10 = uVar9 & 0xfffffffffffffffc;
              uVar12 = uVar10;
              pRVar11 = this_01;
              do {
                *(undefined8 *)(pRVar11 + 0x38) = 0;
                *(undefined8 *)(pRVar11 + 0x30) = 0;
                uVar12 = uVar12 - 4;
                *(undefined8 *)(pRVar11 + 0x48) = 0;
                *(undefined8 *)(pRVar11 + 0x40) = 0;
                *(undefined8 *)(pRVar11 + 0x58) = 0;
                *(undefined8 *)(pRVar11 + 0x50) = 0;
                *(undefined8 *)(pRVar11 + 0x508) = 0;
                *(undefined8 *)(pRVar11 + 0x500) = 0;
                *(undefined8 *)(pRVar11 + 0x4f8) = 0;
                *(undefined8 *)(pRVar11 + 0x4f0) = 0;
                *(undefined8 *)(pRVar11 + 0x4e8) = 0;
                *(undefined8 *)(pRVar11 + 0x4e0) = 0;
                pRVar11 = pRVar11 + 0x30;
              } while (uVar12 != 0);
              if (uVar9 == uVar10) goto LAB_00e59a34;
            }
          }
          pRVar11 = this_01 + uVar10 * 0xc;
          do {
            uVar10 = uVar10 + 1;
            *(undefined4 *)(pRVar11 + 0x38) = 0;
            *(undefined8 *)(pRVar11 + 0x30) = 0;
            *(undefined4 *)(pRVar11 + 0x4e8) = 0;
            *(undefined8 *)(pRVar11 + 0x4e0) = 0;
            pRVar11 = pRVar11 + 0xc;
          } while (uVar10 < uVar9);
        }
LAB_00e59a34:
        puVar1 = *(undefined8 **)(this + 0xb0);
        local_230 = this_01;
        if (puVar1 == *(undefined8 **)(this + 0xb8)) {
          std::__ndk1::
          vector<cocos2d::PUParticle3DBeamVisualData*,std::__ndk1::allocator<cocos2d::PUParticle3DBeamVisualData*>>
          ::__push_back_slow_path<cocos2d::PUParticle3DBeamVisualData*const&>
                    ((vector<cocos2d::PUParticle3DBeamVisualData*,std::__ndk1::allocator<cocos2d::PUParticle3DBeamVisualData*>>
                      *)(this + 0xa8),(PUParticle3DBeamVisualData **)&local_230);
        }
        else {
          *puVar1 = this_01;
          *(undefined8 **)(this + 0xb0) = puVar1 + 1;
        }
        puVar1 = *(undefined8 **)(this + 200);
        if (puVar1 == *(undefined8 **)(this + 0xd0)) {
          std::__ndk1::
          vector<cocos2d::PUParticle3DBeamVisualData*,std::__ndk1::allocator<cocos2d::PUParticle3DBeamVisualData*>>
          ::__push_back_slow_path<cocos2d::PUParticle3DBeamVisualData*const&>
                    ((vector<cocos2d::PUParticle3DBeamVisualData*,std::__ndk1::allocator<cocos2d::PUParticle3DBeamVisualData*>>
                      *)(this + 0xc0),(PUParticle3DBeamVisualData **)&local_230);
        }
        else {
          *puVar1 = local_230;
          *(undefined8 **)(this + 200) = puVar1 + 1;
        }
        uVar5 = uVar5 + 1;
        if (*(ulong *)(this + 0xd8) <= uVar5) break;
        lVar8 = *(long *)(this + 0xe8);
      } while( true );
    }
    local_1f0 = 0x16987e8;
    local_1e0 = 0x1698810;
    local_170[0] = 0x1698838;
    ppuStack_1d8 = &PTR__basic_stringbuf_01698960;
    if ((local_198 & 1) != 0) {
      operator_delete(local_188);
    }
    ppuStack_1d8 = &PTR__basic_streambuf_01698a08;
    std::__ndk1::locale::~locale(alStack_1d0);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_170);
  }
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

