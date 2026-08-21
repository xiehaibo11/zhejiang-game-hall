
/* cocos2d::Camera::lookAt(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void cocos2d::Camera::lookAt(Vec3 *param_1,Vec3 *param_2)

{
  long lVar1;
  undefined8 *in_x2;
  undefined4 uVar2;
  undefined4 in_s1;
  Quaternion aQStack_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00eef690 to 00fef69f has its CatchHandler @ 00eef6ac */
                    /* try { // try from 00eef6a0 to 00fef6bf has its CatchHandler @ 00eef634 */
  local_80 = *(undefined4 *)(in_x2 + 1);
  local_88 = *in_x2;
                    /* catch() { ... } // from try @ 00eef690 with catch @ 00eef6ac */
  Vec3::normalize((Vec3 *)&local_88);
  Vec3::Vec3((Vec3 *)&local_98);
  uVar2 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
  local_78 = CONCAT44(in_s1,uVar2);
  Vec3::subtract((Vec3 *)&local_78,param_2,(Vec3 *)&local_98);
                    /* try { // try from 00eef6e8 to 00fef71f has its CatchHandler @ 00eef6e8
                       catch() { ... } // from try @ 00eef6e8 with catch @ 00eef6e8
                       catch() { ... } // from try @ 00eef81c with catch @ 00eef6e8 */
  Vec3::normalize((Vec3 *)&local_98);
  Vec3::Vec3((Vec3 *)&local_a8);
  Vec3::cross((Vec3 *)&local_88,(Vec3 *)&local_98,(Vec3 *)&local_a8);
  Vec3::normalize((Vec3 *)&local_a8);
  Vec3::Vec3((Vec3 *)&local_b8);
                    /* try { // try from 00eef720 to 00fef72b has its CatchHandler @ 00eef8d4 */
  Vec3::cross((Vec3 *)&local_98,(Vec3 *)&local_a8,(Vec3 *)&local_b8);
  Vec3::normalize((Vec3 *)&local_b8);
  Mat4::Mat4((Mat4 *)&local_78);
  local_78 = local_a8;
  local_70 = local_a0;
  uStack_6c = 0;
  local_68 = local_b8;
  local_60 = local_b0;
  uStack_5c = 0;
  local_58 = local_98;
  local_50 = local_90;
  uStack_4c = 0;
  Quaternion::Quaternion(aQStack_c8);
  Quaternion::createFromRotationMatrix((Mat4 *)&local_78,aQStack_c8);
  Quaternion::normalize(aQStack_c8);
                    /* try { // try from 00eef784 to 00fef78b has its CatchHandler @ 00eef8b8 */
  (**(code **)(*(long *)param_1 + 0x1a0))(param_1,aQStack_c8);
  Quaternion::~Quaternion(aQStack_c8);
  Mat4::~Mat4((Mat4 *)&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

