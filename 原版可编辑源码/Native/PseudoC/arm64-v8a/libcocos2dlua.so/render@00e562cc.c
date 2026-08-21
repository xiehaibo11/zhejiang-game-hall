
/* cocos2d::PUParticle3DModelRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::PUParticle3DModelRender::render
          (PUParticle3DModelRender *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Sprite3D *pSVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  AABB *this_00;
  long ****pppplVar8;
  long *****ppppplVar9;
  uint uVar10;
  long ****pppplVar11;
  vector<cocos2d::Sprite3D*,std::__ndk1::allocator<cocos2d::Sprite3D*>> *this_01;
  long *plVar12;
  ParticleSystem3D *pPVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long lVar16;
  Quaternion aQStack_1c8 [16];
  long ****local_1b8;
  long ****local_1b0;
  long local_1a8;
  Sprite3D *local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  float local_160 [5];
  float local_14c;
  float local_138;
  Mat4 aMStack_120 [64];
  Sprite3D *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  long **local_b0;
  undefined8 local_a8;
  Vec3 local_98 [8];
  float local_90;
  Vec3 aVStack_8c [20];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (this[0x38] != (PUParticle3DModelRender)0x0) {
    this_01 = (vector<cocos2d::Sprite3D*,std::__ndk1::allocator<cocos2d::Sprite3D*>> *)(this + 0x68)
    ;
    if (*(long *)this_01 == *(long *)(this + 0x70)) {
      iVar5 = ParticleSystem3D::getParticleQuota(param_3);
      if (iVar5 != 0) {
        uVar10 = 0;
        do {
          local_e0 = (Sprite3D *)Sprite3D::create((basic_string *)(this + 0x80));
          if (local_e0 != (Sprite3D *)0x0) {
            Sprite3D::setTexture(local_e0,(basic_string *)(this + 0x98));
            pSVar3 = local_e0;
            uVar7 = (**(code **)(*(long *)param_3 + 0x538))(param_3);
            (**(code **)(*(long *)pSVar3 + 0x530))(pSVar3,uVar7);
            Sprite3D::setCullFaceEnabled(local_e0,false);
            Ref::retain((Ref *)local_e0);
            puVar1 = *(undefined8 **)(this + 0x70);
            if (puVar1 == *(undefined8 **)(this + 0x78)) {
              std::__ndk1::vector<cocos2d::Sprite3D*,std::__ndk1::allocator<cocos2d::Sprite3D*>>::
              __push_back_slow_path<cocos2d::Sprite3D*const&>(this_01,&local_e0);
            }
            else {
              *puVar1 = local_e0;
              *(undefined8 **)(this + 0x70) = puVar1 + 1;
            }
          }
          uVar10 = uVar10 + 1;
          uVar6 = ParticleSystem3D::getParticleQuota(param_3);
        } while (uVar10 < uVar6);
      }
      if (*(undefined8 **)(this + 0x68) == *(undefined8 **)(this + 0x70)) {
        this[0x38] = (PUParticle3DModelRender)0x0;
        goto LAB_00e566ec;
      }
      this_00 = (AABB *)Sprite3D::getAABB((Sprite3D *)**(undefined8 **)(this + 0x68));
      Vec3::Vec3((Vec3 *)&local_e0);
      Vec3::Vec3((Vec3 *)((long)&uStack_d8 + 4));
      Vec3::Vec3((Vec3 *)&uStack_c8);
      Vec3::Vec3((Vec3 *)&fStack_bc);
      Vec3::Vec3((Vec3 *)&local_b0);
      Vec3::Vec3((Vec3 *)((long)&local_a8 + 4));
      Vec3::Vec3(local_98);
      Vec3::Vec3(aVStack_8c);
      AABB::getCorners(this_00,(Vec3 *)&local_e0);
      *(ulong *)(this + 0xb0) = CONCAT44(fStack_b8 - local_98._4_4_,fStack_bc - local_98._0_4_);
      *(float *)(this + 0xb8) = fStack_b4 - local_90;
    }
    local_1a8 = 0;
    pPVar13 = *(ParticleSystem3D **)(param_3 + 0x340);
    local_1b8 = (long ****)&local_1b8;
    local_1b0 = (long ****)&local_1b8;
    if (param_3 + 0x338 != pPVar13) {
      lVar4 = 1;
      do {
        lVar16 = lVar4;
        pppplVar11 = local_1b8;
        local_1b8 = operator_new(0x18);
        pppplVar8 = *(long *****)(pPVar13 + 0x10);
        *local_1b8 = (long ***)pppplVar11;
        local_1b8[1] = (long ***)&local_1b8;
        local_1b8[2] = (long ***)pppplVar8;
        pppplVar11[1] = (long ***)local_1b8;
        pPVar13 = *(ParticleSystem3D **)(pPVar13 + 8);
        lVar4 = lVar16 + 1;
        local_1a8 = lVar16;
      } while (param_3 + 0x338 != pPVar13);
    }
    Mat4::Mat4((Mat4 *)&local_e0);
    Mat4::Mat4(aMStack_120);
    Mat4::Mat4((Mat4 *)local_160);
    Quaternion::Quaternion(aQStack_1c8);
    Mat4::decompose(param_2,(Vec3 *)0x0,aQStack_1c8,(Vec3 *)0x0);
    if (&local_1b8 != (long *****)local_1b0) {
      uVar10 = 0;
      ppppplVar14 = (long *****)local_1b0;
      do {
        pppplVar11 = ppppplVar14[2];
        Quaternion::Quaternion((Quaternion *)&local_1a0,aQStack_1c8);
        Quaternion::multiply((Quaternion *)&local_1a0,(Quaternion *)((long)pppplVar11 + 0x14));
        Mat4::createRotation((Quaternion *)&local_1a0,aMStack_120);
        Quaternion::~Quaternion((Quaternion *)&local_1a0);
        local_160[0] = *(float *)((long)pppplVar11 + 0x44) / *(float *)(this + 0xb0);
        local_14c = *(float *)(pppplVar11 + 9) / *(float *)(this + 0xb4);
        local_138 = *(float *)((long)pppplVar11 + 0x4c) / *(float *)(this + 0xb8);
        Mat4::Mat4((Mat4 *)&local_1a0,aMStack_120);
        Mat4::multiply((Mat4 *)&local_1a0,(Mat4 *)local_160);
        uStack_d8 = uStack_198;
        local_e0 = local_1a0;
        uStack_c8 = uStack_188;
        uStack_d0 = uStack_190;
        fStack_b8 = (float)uStack_178;
        fStack_b4 = (float)((ulong)uStack_178 >> 0x20);
        local_c0 = (undefined4)local_180;
        fStack_bc = (float)((ulong)local_180 >> 0x20);
        local_a8 = uStack_168;
        local_b0 = (long **)uStack_170;
        Mat4::~Mat4((Mat4 *)&local_1a0);
        uVar15 = (ulong)uVar10;
        local_b0 = (long **)pppplVar11[1];
        local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(pppplVar11 + 2));
        plVar12 = *(long **)(*(long *)this_01 + (ulong)uVar10 * 8);
        if (*(short *)((long)plVar12 + 0x222) != *(short *)(param_3 + 0x222)) {
          (**(code **)(*plVar12 + 0x4f0))(plVar12,*(short *)(param_3 + 0x222),1);
          plVar12 = *(long **)(*(long *)this_01 + uVar15 * 8);
        }
        Color3B::Color3B((Color3B *)&local_1a0,
                         (uchar)(int)(*(float *)((long)pppplVar11 + 0x24) * 255.0),
                         (uchar)(int)(*(float *)(pppplVar11 + 5) * 255.0),
                         (uchar)(int)(*(float *)((long)pppplVar11 + 0x2c) * 255.0));
        (**(code **)(*plVar12 + 0x4c0))(plVar12,&local_1a0);
        plVar12 = *(long **)(*(long *)this_01 + uVar15 * 8);
        (**(code **)(*plVar12 + 0x490))(plVar12,(int)(*(float *)(pppplVar11 + 6) * 255.0));
        plVar12 = *(long **)(*(long *)this_01 + uVar15 * 8);
        (**(code **)(*plVar12 + 0x358))(plVar12,param_1,&local_e0,3);
        ppppplVar14 = (long *****)ppppplVar14[1];
        uVar10 = uVar10 + 1;
      } while (&local_1b8 != ppppplVar14);
    }
    Quaternion::~Quaternion(aQStack_1c8);
    Mat4::~Mat4((Mat4 *)local_160);
    Mat4::~Mat4(aMStack_120);
    Mat4::~Mat4((Mat4 *)&local_e0);
    if (local_1a8 != 0) {
      pppplVar11 = (long ****)*local_1b0;
      pppplVar11[1] = local_1b8[1];
      *local_1b8[1] = (long **)pppplVar11;
      local_1a8 = 0;
      ppppplVar14 = (long *****)local_1b0;
      while (ppppplVar14 != &local_1b8) {
        ppppplVar9 = (long *****)ppppplVar14[1];
        operator_delete(ppppplVar14);
        ppppplVar14 = ppppplVar9;
      }
    }
  }
LAB_00e566ec:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

