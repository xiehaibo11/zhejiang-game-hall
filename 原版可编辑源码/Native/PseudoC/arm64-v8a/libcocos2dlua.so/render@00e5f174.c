
/* cocos2d::Particle3DModelRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::Particle3DModelRender::render
          (Particle3DModelRender *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  AABB *this_00;
  long *plVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  vector<cocos2d::Sprite3D*,std::__ndk1::allocator<cocos2d::Sprite3D*>> *this_01;
  long ****pppplVar9;
  ParticleSystem3D *pPVar10;
  long ***ppplVar11;
  uint uVar12;
  long lVar13;
  Quaternion aQStack_1c8 [16];
  long ***local_1b8;
  long ***local_1b0;
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
  long *local_b0;
  undefined8 local_a8;
  Vec3 local_98 [8];
  float local_90;
  Vec3 aVStack_8c [20];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (this[0x38] != (Particle3DModelRender)0x0) {
    this_01 = (vector<cocos2d::Sprite3D*,std::__ndk1::allocator<cocos2d::Sprite3D*>> *)(this + 0x50)
    ;
    if (*(long *)this_01 == *(long *)(this + 0x58)) {
      iVar4 = ParticleSystem3D::getParticleQuota(param_3);
      if (iVar4 != 0) {
        uVar12 = 0;
        do {
          local_e0 = (Sprite3D *)Sprite3D::create((basic_string *)(this + 0x68));
          if (local_e0 != (Sprite3D *)0x0) {
            Sprite3D::setTexture(local_e0,(basic_string *)(this + 0x80));
            Ref::retain((Ref *)local_e0);
            puVar1 = *(undefined8 **)(this + 0x58);
            if (puVar1 == *(undefined8 **)(this + 0x60)) {
              std::__ndk1::vector<cocos2d::Sprite3D*,std::__ndk1::allocator<cocos2d::Sprite3D*>>::
              __push_back_slow_path<cocos2d::Sprite3D*const&>(this_01,&local_e0);
            }
            else {
              *puVar1 = local_e0;
              *(undefined8 **)(this + 0x58) = puVar1 + 1;
            }
          }
          uVar12 = uVar12 + 1;
          uVar5 = ParticleSystem3D::getParticleQuota(param_3);
        } while (uVar12 < uVar5);
      }
      if (*(undefined8 **)(this + 0x50) != *(undefined8 **)(this + 0x58)) {
        this_00 = (AABB *)Sprite3D::getAABB((Sprite3D *)**(undefined8 **)(this + 0x50));
        Vec3::Vec3((Vec3 *)&local_e0);
        Vec3::Vec3((Vec3 *)((long)&uStack_d8 + 4));
        Vec3::Vec3((Vec3 *)&uStack_c8);
        Vec3::Vec3((Vec3 *)&fStack_bc);
        Vec3::Vec3((Vec3 *)&local_b0);
        Vec3::Vec3((Vec3 *)((long)&local_a8 + 4));
        Vec3::Vec3(local_98);
        Vec3::Vec3(aVStack_8c);
        AABB::getCorners(this_00,(Vec3 *)&local_e0);
        *(ulong *)(this + 0x98) = CONCAT44(fStack_b8 - local_98._4_4_,fStack_bc - local_98._0_4_);
        *(float *)(this + 0xa0) = fStack_b4 - local_90;
      }
    }
    local_1a8 = 0;
    pPVar10 = *(ParticleSystem3D **)(param_3 + 0x340);
    local_1b8 = (long ***)&local_1b8;
    local_1b0 = (long ***)&local_1b8;
    if (param_3 + 0x338 != pPVar10) {
      lVar3 = 1;
      do {
        lVar13 = lVar3;
        ppplVar11 = local_1b8;
        local_1b8 = operator_new(0x18);
        ppplVar7 = *(long ****)(pPVar10 + 0x10);
        *local_1b8 = (long **)ppplVar11;
        local_1b8[1] = (long **)&local_1b8;
        local_1b8[2] = (long **)ppplVar7;
        ppplVar11[1] = (long **)local_1b8;
        pPVar10 = *(ParticleSystem3D **)(pPVar10 + 8);
        lVar3 = lVar13 + 1;
        local_1a8 = lVar13;
      } while (param_3 + 0x338 != pPVar10);
    }
    Mat4::Mat4((Mat4 *)&local_e0);
    Mat4::Mat4(aMStack_120);
    Mat4::Mat4((Mat4 *)local_160);
    Quaternion::Quaternion(aQStack_1c8);
    Mat4::decompose(param_2,(Vec3 *)0x0,aQStack_1c8,(Vec3 *)0x0);
    if (&local_1b8 != (long ****)local_1b0) {
      uVar12 = 0;
      pppplVar9 = (long ****)local_1b0;
      do {
        ppplVar11 = pppplVar9[2];
        Quaternion::Quaternion((Quaternion *)&local_1a0,aQStack_1c8);
        Quaternion::multiply((Quaternion *)&local_1a0,(Quaternion *)((long)ppplVar11 + 0x14));
        Mat4::createRotation((Quaternion *)&local_1a0,aMStack_120);
        Quaternion::~Quaternion((Quaternion *)&local_1a0);
        local_160[0] = *(float *)((long)ppplVar11 + 0x44) / *(float *)(this + 0x98);
        local_14c = *(float *)(ppplVar11 + 9) / *(float *)(this + 0x9c);
        local_138 = *(float *)((long)ppplVar11 + 0x4c) / *(float *)(this + 0xa0);
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
        local_b0 = (long *)uStack_170;
        Mat4::~Mat4((Mat4 *)&local_1a0);
        local_b0 = (long *)ppplVar11[1];
        local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(ppplVar11 + 2));
        plVar6 = *(long **)(*(long *)this_01 + (ulong)uVar12 * 8);
        (**(code **)(*plVar6 + 0x348))(plVar6,param_1,&local_e0,0);
        pppplVar9 = (long ****)pppplVar9[1];
        uVar12 = uVar12 + 1;
      } while (&local_1b8 != pppplVar9);
    }
    Quaternion::~Quaternion(aQStack_1c8);
    Mat4::~Mat4((Mat4 *)local_160);
    Mat4::~Mat4(aMStack_120);
    Mat4::~Mat4((Mat4 *)&local_e0);
    if (local_1a8 != 0) {
      ppplVar11 = (long ***)*local_1b0;
      ppplVar11[1] = local_1b8[1];
      *local_1b8[1] = (long *)ppplVar11;
      local_1a8 = 0;
      pppplVar9 = (long ****)local_1b0;
      while (pppplVar9 != &local_1b8) {
        pppplVar8 = (long ****)pppplVar9[1];
        operator_delete(pppplVar9);
        pppplVar9 = pppplVar8;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

