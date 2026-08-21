
/* cocos2d::isScreenPointInRect(cocos2d::Vec2 const&, cocos2d::Camera const*, cocos2d::Mat4 const&,
   cocos2d::Rect const&, cocos2d::Vec3*) */

uint cocos2d::isScreenPointInRect
               (Vec2 *param_1,Camera *param_2,Mat4 *param_3,Rect *param_4,Vec3 *param_5)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_d0;
  Vec3 aVStack_c8 [16];
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  Vec3 local_98 [8];
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((param_2 != (Camera *)0x0) && (0.0 < *(float *)(param_4 + 8))) &&
     (0.0 < *(float *)(param_4 + 0xc))) {
                    /* catch() { ... } // from try @ 00f27968 with catch @ 00f27ac4 */
                    /* catch() { ... } // from try @ 00f27888 with catch @ 00f27ac8 */
    Vec3::Vec3((Vec3 *)&local_68,*(float *)param_1,*(float *)(param_1 + 4),-1.0);
    fVar5 = *(float *)(param_1 + 4);
    fVar3 = 1.0;
                    /* try { // try from 00f27ae4 to 01027c37 has its CatchHandler @ 00f27ae4
                       catch() { ... } // from try @ 00f27ae4 with catch @ 00f27ae4
                       catch() { ... } // from try @ 00f27c8c with catch @ 00f27ae4 */
    Vec3::Vec3((Vec3 *)&local_78,*(float *)param_1,fVar5,1.0);
    local_68 = (float)Camera::unprojectGL(param_2,(Vec3 *)&local_68);
    fStack_64 = fVar5;
    local_60 = fVar3;
    local_78 = (float)Camera::unprojectGL(param_2,(Vec3 *)&local_78);
    fStack_74 = fVar5;
    local_70 = fVar3;
    Mat4::transformVector(param_3,local_68,fStack_64,local_60,1.0,(Vec3 *)&local_68);
    Mat4::transformVector(param_3,local_78,fStack_74,local_70,1.0,(Vec3 *)&local_78);
    local_88 = CONCAT44(fStack_74 - fStack_64,local_78 - local_68);
    local_80 = local_70 - local_60;
    Vec3::Vec3(local_98,*(float *)param_4,*(float *)(param_4 + 4),0.0);
    Vec3::Vec3((Vec3 *)&local_a8,*(float *)param_4 + *(float *)(param_4 + 8),*(float *)(param_4 + 4)
               ,0.0);
    Vec3::Vec3((Vec3 *)&local_b8,*(float *)param_4,
               *(float *)(param_4 + 4) + *(float *)(param_4 + 0xc),0.0);
    local_a8 = CONCAT44((float)((ulong)local_a8 >> 0x20) - local_98._4_4_,
                        (float)local_a8 - local_98._0_4_);
    local_a0 = local_a0 - local_90;
    local_b8 = CONCAT44((float)((ulong)local_b8 >> 0x20) - local_98._4_4_,
                        (float)local_b8 - local_98._0_4_);
    local_b0 = local_b0 - local_90;
    Vec3::Vec3(aVStack_c8);
    Vec3::cross((Vec3 *)&local_a8,(Vec3 *)&local_b8,aVStack_c8);
    fVar5 = (float)Vec3::dot(aVStack_c8,(Vec3 *)&local_88);
    if (fVar5 != 0.0) {
                    /* try { // try from 00f27c4c to 01027c53 has its CatchHandler @ 00f27cd4 */
      fVar3 = (float)Vec3::dot(aVStack_c8,local_98);
      fVar4 = (float)Vec3::dot(aVStack_c8,(Vec3 *)&local_68);
                    /* try { // try from 00f27c70 to 01027c7f has its CatchHandler @ 00f27cd8 */
      fVar5 = (fVar3 - fVar4) / fVar5;
      local_d0 = CONCAT44(fStack_64 + (float)((ulong)local_88 >> 0x20) * fVar5,
                          local_68 + (float)local_88 * fVar5);
      if (param_5 != (Vec3 *)0x0) {
                    /* try { // try from 00f27c84 to 01027c8b has its CatchHandler @ 00f27cd0 */
        *(undefined8 *)param_5 = local_d0;
                    /* try { // try from 00f27c8c to 01027ceb has its CatchHandler @ 00f27ae4 */
        *(float *)(param_5 + 8) = local_60 + fVar5 * local_80;
      }
      uVar2 = Rect::containsPoint((Rect *)param_4,(Vec2 *)&local_d0);
      goto LAB_00f27c14;
    }
  }
  uVar2 = 0;
LAB_00f27c14:
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00f27c38 to 01027c47 has its CatchHandler @ 00f27cd8 */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

