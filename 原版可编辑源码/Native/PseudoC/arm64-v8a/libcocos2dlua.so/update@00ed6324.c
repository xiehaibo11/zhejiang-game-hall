
/* cocos2d::FlipX3D::update(float) */

void cocos2d::FlipX3D::update(float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Grid3DAction *in_x0;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88 [2];
  float local_80;
  float local_78;
  float local_74;
  float fStack_70;
  float local_68;
  undefined4 uStack_64;
  float local_58;
  undefined4 uStack_54;
  long local_48;
  
                    /* try { // try from 00ed6328 to 00fd6517 has its CatchHandler @ 00ed6328
                       catch() { ... } // from try @ 00ed6328 with catch @ 00ed6328
                       catch() { ... } // from try @ 00ed653c with catch @ 00ed6328 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar9 = 0x40490fdb;
  fVar6 = sinf(param_1 * 3.1415927);
  fVar7 = cosf(param_1 * 3.1415927 * 0.5);
  Vec3::Vec3((Vec3 *)&local_58);
  Vec3::Vec3((Vec3 *)&local_68);
  Vec3::Vec3((Vec3 *)&local_78);
  Vec3::Vec3((Vec3 *)local_88);
  local_90 = NEON_fmov(0x3f800000,4);
  local_58 = (float)Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_90);
  local_90 = 0;
  uStack_54 = uVar9;
  local_68 = (float)Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_90);
  fVar10 = 0.25;
  fVar8 = local_58;
  if (local_58 <= local_68) {
    fVar8 = local_68;
  }
  puVar1 = &local_90;
  if (local_58 <= local_68) {
    puVar1 = &local_a0;
  }
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  puVar2 = &local_a8;
  puVar4 = &local_98;
  puVar5 = &local_a0;
  if (local_58 <= local_68) {
    puVar2 = &local_98;
    puVar4 = &local_a8;
    puVar5 = &local_90;
  }
  *puVar1 = 0;
  fVar6 = ABS((float)(int)(fVar6 * fVar8 * 0.25));
  *puVar4 = 0x3f80000000000000;
  *puVar5 = 0x3f800000;
  *puVar2 = 0x3f8000003f800000;
  local_88[0] = fVar8 - fVar7 * fVar8;
  local_80 = fVar6;
  uStack_64 = uVar9;
  Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_90);
  fStack_70 = fVar10 + local_80;
  local_78 = local_88[0];
  local_74 = fVar6;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_90,(Vec3 *)&local_78);
  Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_98);
  fStack_70 = fVar10 + local_80;
  local_78 = local_88[0];
  local_74 = fVar6;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_98,(Vec3 *)&local_78);
  local_78 = (float)Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_a0);
  local_78 = local_78 - local_88[0];
  fVar10 = fVar10 - local_80;
  local_74 = fVar6;
  fStack_70 = fVar10;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_a0,(Vec3 *)&local_78);
  local_78 = (float)Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_a8);
  local_78 = local_78 - local_88[0];
  fStack_70 = fVar10 - local_80;
  local_74 = fVar6;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_a8,(Vec3 *)&local_78);
                    /* try { // try from 00ed6518 to 00fd653b has its CatchHandler @ 00ed65ac */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ed653c to 00fd65c7 has its CatchHandler @ 00ed6328 */
    __stack_chk_fail();
  }
  return;
}

