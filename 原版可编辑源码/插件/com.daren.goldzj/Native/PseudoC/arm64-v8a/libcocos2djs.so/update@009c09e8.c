
/* cocos2d::renderer::Light::update(cocos2d::renderer::DeviceGraphics*) */

void __thiscall cocos2d::renderer::Light::update(Light *this,DeviceGraphics *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* try { // try from 009c09f0 to 00ac0a8f has its CatchHandler @ 009c0b1c */
  puVar2 = *(undefined8 **)(*(long *)(this + 0x168) + 0x98);
  uVar4 = puVar2[5];
  uVar3 = puVar2[4];
  uVar5 = puVar2[6];
  uVar7 = puVar2[1];
  uVar6 = *puVar2;
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  *(undefined8 *)(this + 0x11c) = puVar2[7];
  *(undefined8 *)(this + 0x114) = uVar5;
  *(undefined8 *)(this + 0x10c) = uVar4;
  *(undefined8 *)(this + 0x104) = uVar3;
  *(undefined8 *)(this + 0xfc) = uVar9;
  *(undefined8 *)(this + 0xf4) = uVar8;
  *(undefined8 *)(this + 0xec) = uVar7;
  *(undefined8 *)(this + 0xe4) = uVar6;
  Mat4::transformVector((Mat4 *)(this + 0xe4),(Vec3 *)(this + 0x170),(Vec3 *)(this + 0x2c));
  iVar1 = *(int *)(this + 0x58);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x114);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x11c);
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x68));
    *(undefined8 *)(this + 0x68) = 0;
    if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x78));
    }
    *(undefined8 *)(this + 0x78) = 0;
    if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x60));
    }
    *(undefined8 *)(this + 0x60) = 0;
  }
  if (iVar1 != 0) {
    generateShadowMap(this,param_1);
    this[0x70] = (Light)0x0;
  }
                    /* try { // try from 009c0a90 to 00ac0b73 has its CatchHandler @ 009c0964 */
  return;
}

