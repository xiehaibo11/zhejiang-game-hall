
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
                    /* try { // try from 009999c4 to 00a999db has its CatchHandler @ 00999d1c */
                    /* try { // try from 009999e4 to 00a999ef has its CatchHandler @ 00999d18 */
  Vec3::Vec3(aVStack_68,param_1,param_2,param_3);
                    /* try { // try from 009999f0 to 00a999fb has its CatchHandler @ 00999d14 */
  Vec3::Vec3(aVStack_78,param_4,param_5,param_6);
                    /* try { // try from 009999fc to 00a99a13 has its CatchHandler @ 00999d2c */
  Vec3::Vec3(aVStack_88,param_7,param_8,param_9);
  Vec3::normalize(aVStack_88);
  Vec3::Vec3((Vec3 *)&local_98);
  Vec3::subtract(aVStack_68,aVStack_78,(Vec3 *)&local_98);
  Vec3::normalize((Vec3 *)&local_98);
  Vec3::Vec3((Vec3 *)&local_a8);
                    /* try { // try from 00999a44 to 00a99a5f has its CatchHandler @ 00999cb8 */
  Vec3::cross(aVStack_88,(Vec3 *)&local_98,(Vec3 *)&local_a8);
  Vec3::normalize((Vec3 *)&local_a8);
  Vec3::Vec3((Vec3 *)&local_b8);
  Vec3::cross((Vec3 *)&local_98,(Vec3 *)&local_a8,(Vec3 *)&local_b8);
                    /* try { // try from 00999a70 to 00a99a97 has its CatchHandler @ 00999cb4 */
  Vec3::normalize((Vec3 *)&local_b8);
  *(undefined4 *)param_10 = local_a8;
  *(undefined4 *)(param_10 + 4) = local_b8;
  *(undefined4 *)(param_10 + 8) = local_98;
  *(undefined4 *)(param_10 + 0xc) = 0;
  *(undefined4 *)(param_10 + 0x10) = local_a4;
  *(undefined4 *)(param_10 + 0x14) = local_b4;
  *(undefined4 *)(param_10 + 0x18) = local_94;
  *(undefined4 *)(param_10 + 0x1c) = 0;
                    /* try { // try from 00999aac to 00a99b13 has its CatchHandler @ 00999d2c */
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
  Vec3::~Vec3((Vec3 *)&local_b8);
  Vec3::~Vec3((Vec3 *)&local_a8);
                    /* try { // try from 00999b18 to 00a99b5b has its CatchHandler @ 00999cb8 */
  Vec3::~Vec3((Vec3 *)&local_98);
  Vec3::~Vec3(aVStack_88);
  Vec3::~Vec3(aVStack_78);
  Vec3::~Vec3(aVStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00999b60 to 00a99ba3 has its CatchHandler @ 00999cb4 */
  __stack_chk_fail();
}

