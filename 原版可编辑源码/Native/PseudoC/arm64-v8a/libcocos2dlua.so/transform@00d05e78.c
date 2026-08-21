
/* cocos2d::AABB::transform(cocos2d::Mat4 const&) */

void __thiscall cocos2d::AABB::transform(AABB *this,Mat4 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_d8 [3];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)local_d8);
  Vec3::Vec3((Vec3 *)&local_cc);
  Vec3::Vec3((Vec3 *)&local_c0);
  Vec3::Vec3((Vec3 *)&local_b4);
  Vec3::Vec3((Vec3 *)&local_a8);
  Vec3::Vec3((Vec3 *)&local_9c);
  Vec3::Vec3((Vec3 *)&local_90);
  Vec3::Vec3((Vec3 *)&local_84);
  local_d8[0] = *(float *)this;
  local_c8 = *(float *)(this + 4);
  local_d8[1] = *(float *)(this + 0x10);
  local_d8[2] = *(float *)(this + 0x14);
  local_a0 = *(float *)(this + 8);
  local_c0 = *(float *)(this + 0xc);
  local_cc = local_d8[0];
  local_c4 = local_d8[2];
  fStack_bc = local_c8;
  local_b8 = local_d8[2];
  local_b4 = local_c0;
  local_b0 = local_d8[1];
  local_ac = local_d8[2];
  local_a8 = local_c0;
  fStack_a4 = local_d8[1];
  local_9c = local_c0;
  local_98 = local_c8;
  local_94 = local_a0;
  local_90 = local_d8[0];
  fStack_8c = local_c8;
  local_88 = local_a0;
  local_84 = local_d8[0];
  local_80 = local_d8[1];
  local_7c = local_a0;
  Mat4::transformVector(param_1,local_d8[0],local_d8[1],local_d8[2],1.0,(Vec3 *)local_d8);
  Mat4::transformVector(param_1,local_cc,local_c8,local_c4,1.0,(Vec3 *)&local_cc);
  Mat4::transformVector(param_1,local_c0,fStack_bc,local_b8,1.0,(Vec3 *)&local_c0);
  Mat4::transformVector(param_1,local_b4,local_b0,local_ac,1.0,(Vec3 *)&local_b4);
  Mat4::transformVector(param_1,local_a8,fStack_a4,local_a0,1.0,(Vec3 *)&local_a8);
  Mat4::transformVector(param_1,local_9c,local_98,local_94,1.0,(Vec3 *)&local_9c);
  Mat4::transformVector(param_1,local_90,fStack_8c,local_88,1.0,(Vec3 *)&local_90);
  Mat4::transformVector(param_1,local_84,local_80,local_7c,1.0,(Vec3 *)&local_84);
  *(undefined8 *)(this + 8) = 0xc7c34f8047c34f80;
  *(undefined8 *)this = 0x47c34f8047c34f80;
  fVar8 = 99999.0;
  fVar6 = -99999.0;
  lVar2 = 0;
  *(undefined8 *)(this + 0x10) = 0xc7c34f80c7c34f80;
  fVar3 = fVar8;
  fVar7 = fVar8;
  fVar4 = fVar6;
  fVar5 = fVar6;
  do {
    fVar9 = *(float *)((long)local_d8 + lVar2);
    if (fVar9 < fVar8) {
      *(float *)this = fVar9;
      fVar8 = fVar9;
    }
    fVar10 = *(float *)((long)local_d8 + lVar2 + 4);
    if (fVar10 < fVar7) {
      *(float *)(this + 4) = fVar10;
      fVar7 = fVar10;
    }
    fVar11 = *(float *)((long)local_d8 + lVar2 + 8);
    if (fVar11 < fVar3) {
      *(float *)(this + 8) = fVar11;
      fVar3 = fVar11;
    }
    if (fVar6 < fVar9) {
      *(float *)(this + 0xc) = fVar9;
      fVar6 = fVar9;
    }
    if (fVar5 < fVar10) {
      *(float *)(this + 0x10) = fVar10;
      fVar5 = fVar10;
    }
    if (fVar4 < fVar11) {
      *(float *)(this + 0x14) = fVar11;
      fVar4 = fVar11;
    }
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x60);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

