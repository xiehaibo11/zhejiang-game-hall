
/* cocos2d::renderer::NodeProxy::updateWorldMatrix() */

void __thiscall cocos2d::renderer::NodeProxy::updateWorldMatrix(NodeProxy *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (this[0x41] != (NodeProxy)0x0) {
    lVar3 = *(long *)(this + 0xe8);
    if (lVar3 == 0) {
      if ((**(uint **)(this + 0x80) >> 3 & 1) == 0) {
        return;
      }
      puVar1 = *(undefined8 **)(this + 0x90);
      puVar2 = *(undefined8 **)(this + 0x98);
      uVar4 = puVar1[4];
      uVar6 = puVar1[7];
      uVar5 = puVar1[6];
      uVar8 = puVar1[1];
      uVar7 = *puVar1;
      uVar10 = puVar1[3];
      uVar9 = puVar1[2];
      puVar2[5] = puVar1[5];
      puVar2[4] = uVar4;
      puVar2[7] = uVar6;
      puVar2[6] = uVar5;
      puVar2[1] = uVar8;
      *puVar2 = uVar7;
      puVar2[3] = uVar10;
      puVar2[2] = uVar9;
    }
    else {
      if (((**(uint **)(this + 0x80) >> 3 & 1) == 0) &&
         ((*(byte *)(*(long *)(lVar3 + 0x80) + 3) >> 6 & 1) == 0)) {
        return;
      }
      Mat4::multiply(*(Mat4 **)(lVar3 + 0x98),*(Mat4 **)(this + 0x90),*(Mat4 **)(this + 0x98));
    }
    **(uint **)(this + 0x80) = **(uint **)(this + 0x80) & 0xfffffff7 | 0x40000000;
  }
  return;
}

