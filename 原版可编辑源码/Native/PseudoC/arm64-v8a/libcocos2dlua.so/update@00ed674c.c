
/* cocos2d::FlipY3D::update(float) */

void cocos2d::FlipY3D::update(float param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  Grid3DAction *in_x0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Vec3 aVStack_88 [4];
  float local_84;
  float local_80;
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_68;
  float fStack_64;
  undefined4 local_58;
  float local_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar7 = 3.1415927;
  fVar4 = sinf(param_1 * 3.1415927);
  fVar5 = cosf(param_1 * 3.1415927 * 0.5);
  Vec3::Vec3((Vec3 *)&local_58);
  Vec3::Vec3((Vec3 *)&local_68);
  Vec3::Vec3((Vec3 *)&local_78);
  Vec3::Vec3(aVStack_88);
  local_90 = NEON_fmov(0x3f800000,4);
  local_58 = Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_90);
  local_90 = 0;
  local_54 = fVar7;
  local_68 = Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_90);
  fVar8 = 0.25;
  fVar6 = local_54;
  if (local_54 <= fVar7) {
    fVar6 = fVar7;
  }
  local_84 = fVar6 - fVar5 * fVar6;
  puVar1 = &local_98;
  puVar3 = &local_90;
  if (local_54 <= fVar7) {
    puVar1 = &local_90;
    puVar3 = &local_98;
  }
  local_98 = 0;
  local_90 = 0;
  *puVar3 = 0;
  *puVar1 = 0x3f80000000000000;
                    /* try { // try from 00ed684c to 00fd686f has its CatchHandler @ 00ed694c */
  puVar1 = &local_a8;
  puVar3 = &local_a0;
  if (local_54 <= fVar7) {
    puVar1 = &local_a0;
    puVar3 = &local_a8;
  }
  local_80 = ABS((float)(int)(fVar4 * fVar6 * 0.25));
  local_a8 = 0;
  local_a0 = 0;
  *puVar3 = 0x3f800000;
  *puVar1 = 0x3f8000003f800000;
  fStack_64 = fVar7;
                    /* try { // try from 00ed6870 to 00fd6967 has its CatchHandler @ 00ed6650 */
  local_78 = Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_90);
  local_70 = fVar8 + local_80;
  local_74 = local_84;
  fVar7 = local_80;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_90,(Vec3 *)&local_78);
  local_78 = Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_98);
  local_74 = fVar7 - local_84;
  local_70 = fVar8 - local_80;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_98,(Vec3 *)&local_78);
  local_78 = Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_a0);
  local_70 = fVar8 + local_80;
  local_74 = local_84;
  fVar7 = local_80;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_a0,(Vec3 *)&local_78);
  local_78 = Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_a8);
  local_74 = fVar7 - local_84;
  local_70 = fVar8 - local_80;
  Grid3DAction::setVertex(in_x0,(Vec2 *)&local_a8,(Vec3 *)&local_78);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00ed684c with catch @ 00ed694c */
  return;
}

