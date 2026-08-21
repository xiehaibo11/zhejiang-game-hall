
/* cocos2d::TiledGrid3D::getOriginalTile(cocos2d::Vec2 const&) const */

void cocos2d::TiledGrid3D::getOriginalTile(Vec2 *param_1)

{
  undefined8 *puVar1;
  float *in_x1;
  Vec3 *in_x8;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  fVar3 = *(float *)(param_1 + 0x2c);
  fVar6 = *in_x1;
  fVar9 = in_x1[1];
  lVar2 = *(long *)(param_1 + 0x80);
  Vec3::Vec3(in_x8);
  Vec3::Vec3(in_x8 + 0xc);
  Vec3::Vec3(in_x8 + 0x18);
  Vec3::Vec3(in_x8 + 0x24);
  puVar1 = (undefined8 *)(lVar2 + (long)(int)((fVar3 * fVar6 + fVar9) * 4.0 * 3.0) * 4);
  uVar10 = puVar1[2];
  uVar5 = puVar1[5];
  uVar4 = puVar1[4];
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  *(undefined8 *)(in_x8 + 0x18) = puVar1[3];
  *(undefined8 *)(in_x8 + 0x10) = uVar10;
  *(undefined8 *)(in_x8 + 0x28) = uVar5;
  *(undefined8 *)(in_x8 + 0x20) = uVar4;
  *(undefined8 *)(in_x8 + 8) = uVar8;
  *(undefined8 *)in_x8 = uVar7;
  return;
}

