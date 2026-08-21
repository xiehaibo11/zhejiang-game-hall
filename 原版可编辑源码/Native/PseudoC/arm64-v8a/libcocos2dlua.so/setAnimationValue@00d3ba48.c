
/* cocos2d::Bone3D::setAnimationValue(float*, float*, float*, void*, float) */

void __thiscall
cocos2d::Bone3D::setAnimationValue
          (Bone3D *this,float *param_1,float *param_2,float *param_3,void *param_4,float param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  Quaternion *pQVar4;
  undefined8 local_a0;
  float local_98;
  Quaternion aQStack_94 [16];
  undefined8 local_84;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  void *pvStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pfVar1 = *(float **)(this + 0x168);
  do {
    if (pfVar1 == *(float **)(this + 0x170)) {
      Vec3::Vec3((Vec3 *)&local_a0);
      pQVar4 = (Quaternion *)Quaternion::identity();
      Quaternion::Quaternion(aQStack_94,pQVar4);
      pvStack_70 = (void *)0x0;
      local_84 = 0x3f8000003f800000;
      fStack_7c = 1.0;
      fStack_78 = 1.0;
      if (param_1 != (float *)0x0) {
        local_a0 = *(undefined8 *)param_1;
        local_98 = param_1[2];
      }
      if (param_2 != (float *)0x0) {
        Quaternion::set(aQStack_94,param_2);
      }
      if (param_3 != (float *)0x0) {
        local_84 = *(undefined8 *)param_3;
        fStack_7c = param_3[2];
      }
      puVar2 = *(undefined8 **)(this + 0x170);
      fStack_78 = param_5;
      pvStack_70 = param_4;
      if (puVar2 == *(undefined8 **)(this + 0x178)) {
        std::__ndk1::
        vector<cocos2d::Bone3D::BoneBlendState,std::__ndk1::allocator<cocos2d::Bone3D::BoneBlendState>>
        ::__push_back_slow_path<cocos2d::Bone3D::BoneBlendState_const&>
                  ((vector<cocos2d::Bone3D::BoneBlendState,std::__ndk1::allocator<cocos2d::Bone3D::BoneBlendState>>
                    *)(this + 0x168),(BoneBlendState *)&local_a0);
      }
      else {
        *(float *)(puVar2 + 1) = local_98;
        *puVar2 = local_a0;
        Quaternion::Quaternion((Quaternion *)((long)puVar2 + 0xc),aQStack_94);
        puVar2[6] = pvStack_70;
        puVar2[5] = CONCAT44(uStack_74,fStack_78);
        *(ulong *)((long)puVar2 + 0x24) = CONCAT44(fStack_78,fStack_7c);
        *(undefined8 *)((long)puVar2 + 0x1c) = local_84;
        *(undefined8 **)(this + 0x170) = puVar2 + 7;
      }
      Quaternion::~Quaternion(aQStack_94);
LAB_00d3bbdc:
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(void **)(pfVar1 + 0xc) == param_4) {
      if (param_1 != (float *)0x0) {
        *pfVar1 = *param_1;
        pfVar1[1] = param_1[1];
        pfVar1[2] = param_1[2];
      }
      if (param_2 != (float *)0x0) {
        Quaternion::set((Quaternion *)(pfVar1 + 3),param_2);
      }
      if (param_3 != (float *)0x0) {
        pfVar1[7] = *param_3;
        pfVar1[8] = param_3[1];
        pfVar1[9] = param_3[2];
      }
      pfVar1[10] = param_5;
      goto LAB_00d3bbdc;
    }
    pfVar1 = pfVar1 + 0xe;
  } while( true );
}

