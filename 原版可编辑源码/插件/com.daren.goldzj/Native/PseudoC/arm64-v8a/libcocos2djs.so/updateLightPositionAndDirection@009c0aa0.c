
/* cocos2d::renderer::Light::updateLightPositionAndDirection() */

void __thiscall cocos2d::renderer::Light::updateLightPositionAndDirection(Light *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(*(long *)(this + 0x168) + 0x98);
  uVar3 = puVar1[5];
  uVar2 = puVar1[4];
  uVar4 = puVar1[6];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  uVar8 = puVar1[3];
  uVar7 = puVar1[2];
  *(undefined8 *)(this + 0x11c) = puVar1[7];
  *(undefined8 *)(this + 0x114) = uVar4;
  *(undefined8 *)(this + 0x10c) = uVar3;
  *(undefined8 *)(this + 0x104) = uVar2;
  *(undefined8 *)(this + 0xfc) = uVar8;
  *(undefined8 *)(this + 0xf4) = uVar7;
  *(undefined8 *)(this + 0xec) = uVar6;
  *(undefined8 *)(this + 0xe4) = uVar5;
  Mat4::transformVector((Mat4 *)(this + 0xe4),(Vec3 *)(this + 0x170),(Vec3 *)(this + 0x2c));
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x114);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x11c);
  return;
}

