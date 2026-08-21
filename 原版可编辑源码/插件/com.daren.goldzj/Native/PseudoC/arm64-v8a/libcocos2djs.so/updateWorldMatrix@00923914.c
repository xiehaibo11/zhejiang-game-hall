
/* cocos2d::renderer::NodeProxy::updateWorldMatrix(cocos2d::Mat4 const&) */

void __thiscall cocos2d::renderer::NodeProxy::updateWorldMatrix(NodeProxy *this,Mat4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(this + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = uVar2;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  puVar1[1] = uVar6;
  *puVar1 = uVar5;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  **(uint **)(this + 0x80) = **(uint **)(this + 0x80) & 0xfffffff7 | 0x40000000;
  return;
}

