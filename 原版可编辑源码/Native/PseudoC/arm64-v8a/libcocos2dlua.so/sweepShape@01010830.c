
/* cocos2d::Physics3DWorld::sweepShape(cocos2d::Physics3DShape*, cocos2d::Mat4 const&, cocos2d::Mat4
   const&, cocos2d::Physics3DWorld::HitResult*) */

void cocos2d::Physics3DWorld::sweepShape
               (Physics3DShape *param_1,Mat4 *param_2,Mat4 *param_3,HitResult *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *in_x4;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_s2;
  undefined **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  btVector3 abStack_100 [16];
  btVector3 abStack_f0 [16];
  long local_e0;
  btTransform abStack_d8 [48];
  undefined8 local_a8;
  undefined8 uStack_a0;
  btTransform abStack_98 [48];
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
                    /* try { // try from 01010840 to 0111084b has its CatchHandler @ 01010864 */
                    /* try { // try from 0101084c to 0111088f has its CatchHandler @ 010107f0 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 01010840 with catch @ 01010864 */
                    /* catch() { ... } // from try @ 01010814 with catch @ 01010874 */
  iVar5 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
                    /* catch() { ... } // from try @ 01010908 with catch @ 01010890 */
  if ((iVar5 == 7) || (iVar5 = (**(code **)(*(long *)param_2 + 0x10))(param_2), iVar5 == 6)) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/physics3d/CCPhysics3DWorld.cpp"
                        ,"sweepShape",0x117);
  }
                    /* try { // try from 010108d0 to 011108d7 has its CatchHandler @ 010109a4 */
  convertMat4TobtTransform(param_3);
  convertMat4TobtTransform((Mat4 *)param_4);
                    /* try { // try from 010108fc to 01110907 has its CatchHandler @ 01010994 */
  local_130 = &PTR__ConvexResultCallback_01726528;
  local_e0 = 0;
                    /* try { // try from 01010908 to 011109bf has its CatchHandler @ 01010890 */
  local_128 = 0xffff00013f800000;
  uStack_118 = uStack_60;
  local_120 = local_68;
  uStack_108 = uStack_a0;
  uStack_110 = local_a8;
  btCollisionWorld::convexSweepTest
            (*(btCollisionWorld **)(param_1 + 0x60),*(btConvexShape **)(param_2 + 0x28),abStack_98,
             abStack_d8,(ConvexResultCallback *)&local_130,0.0);
  lVar4 = local_e0;
  uVar6 = 0x3f800000;
  uVar10 = 0x3f800000;
  if (1.0 <= (float)local_128) {
    uVar6 = 0;
    *(undefined8 *)(in_x4 + 6) = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar8 = (long *)*puVar1;
      iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
      uVar10 = (undefined4)uVar6;
      if (iVar5 == 1) {
        lVar7 = plVar8[0xf];
joined_r0x01010958:
        if (lVar7 == lVar4) goto LAB_010109b0;
      }
      else {
        iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar10 = (undefined4)uVar6;
        if (iVar5 == 2) {
                    /* catch() { ... } // from try @ 010108fc with catch @ 01010994 */
          lVar7 = plVar8[0x1c];
          goto joined_r0x01010958;
        }
      }
      uVar10 = (undefined4)uVar6;
                    /* catch() { ... } // from try @ 010108d0 with catch @ 010109a4 */
    }
    plVar8 = (long *)0x0;
LAB_010109b0:
    *(long **)(in_x4 + 6) = plVar8;
    uVar9 = convertbtVector3ToVec3(abStack_f0);
    *in_x4 = uVar9;
    in_x4[1] = uVar10;
    in_x4[2] = in_s2;
    uVar9 = convertbtVector3ToVec3(abStack_100);
    in_x4[3] = uVar9;
    in_x4[4] = uVar10;
    in_x4[5] = in_s2;
    uVar6 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

