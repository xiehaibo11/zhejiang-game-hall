
/* cocos2d::Mat4::createLookAt(float, float, float, float, float, float, float, float, float,
   cocos2d::Mat4*) */

void cocos2d::Mat4::createLookAt
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,Mat4 *param_10)

{
  long lVar1;
  float fVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  Vec3 aVStack_88 [16];
  Vec3 aVStack_78 [16];
  Vec3 aVStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(aVStack_68,param_1,param_2,param_3);
  Vec3::Vec3(aVStack_78,param_4,param_5,param_6);
  Vec3::Vec3(aVStack_88,param_7,param_8,param_9);
  Vec3::normalize(aVStack_88);
  Vec3::Vec3((Vec3 *)&local_98);
  Vec3::subtract(aVStack_68,aVStack_78,(Vec3 *)&local_98);
  Vec3::normalize((Vec3 *)&local_98);
  Vec3::Vec3((Vec3 *)&local_a8);
  Vec3::cross(aVStack_88,(Vec3 *)&local_98,(Vec3 *)&local_a8);
  Vec3::normalize((Vec3 *)&local_a8);
  Vec3::Vec3((Vec3 *)&local_b8);
  Vec3::cross((Vec3 *)&local_98,(Vec3 *)&local_a8,(Vec3 *)&local_b8);
  Vec3::normalize((Vec3 *)&local_b8);
  *(undefined4 *)param_10 = local_a8;
  *(undefined4 *)(param_10 + 4) = local_b8;
  *(undefined4 *)(param_10 + 8) = local_98;
  *(undefined4 *)(param_10 + 0xc) = 0;
  *(undefined4 *)(param_10 + 0x10) = local_a4;
  *(undefined4 *)(param_10 + 0x14) = local_b4;
  *(undefined4 *)(param_10 + 0x18) = local_94;
  *(undefined4 *)(param_10 + 0x1c) = 0;
  *(undefined4 *)(param_10 + 0x20) = local_a0;
  *(undefined4 *)(param_10 + 0x24) = local_b0;
  *(undefined4 *)(param_10 + 0x28) = local_90;
  *(undefined4 *)(param_10 + 0x2c) = 0;
  fVar2 = (float)Vec3::dot((Vec3 *)&local_a8,aVStack_68);
  *(float *)(param_10 + 0x30) = -fVar2;
  fVar2 = (float)Vec3::dot((Vec3 *)&local_b8,aVStack_68);
  *(float *)(param_10 + 0x34) = -fVar2;
  fVar2 = (float)Vec3::dot((Vec3 *)&local_98,aVStack_68);
  *(float *)(param_10 + 0x38) = -fVar2;
  *(undefined4 *)(param_10 + 0x3c) = 0x3f800000;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

