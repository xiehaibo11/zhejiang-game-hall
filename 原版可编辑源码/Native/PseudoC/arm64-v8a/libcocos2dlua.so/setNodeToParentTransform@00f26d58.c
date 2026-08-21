
/* cocos2d::Node::setNodeToParentTransform(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Node::setNodeToParentTransform(Node *this,Mat4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = *(long *)(this + 0x158);
  this[0x10c] = (Node)0x0;
  *(undefined8 *)(this + 0x104) = uVar9;
  *(undefined8 *)(this + 0xfc) = uVar8;
  *(undefined8 *)(this + 0xf4) = uVar7;
  *(undefined8 *)(this + 0xec) = uVar6;
  *(undefined8 *)(this + 0xe4) = uVar5;
  *(undefined8 *)(this + 0xdc) = uVar4;
  *(undefined8 *)(this + 0xd4) = uVar3;
  *(undefined8 *)(this + 0xcc) = uVar2;
  this[0x161] = (Node)0x1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x60) = uVar2;
    *(undefined8 *)(lVar1 + 0x78) = uVar4;
    *(undefined8 *)(lVar1 + 0x70) = uVar3;
    *(undefined8 *)(lVar1 + 0x48) = uVar6;
    *(undefined8 *)(lVar1 + 0x40) = uVar5;
    *(undefined8 *)(lVar1 + 0x58) = uVar8;
    *(undefined8 *)(lVar1 + 0x50) = uVar7;
  }
  return;
}

