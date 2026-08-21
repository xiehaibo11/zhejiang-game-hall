
/* cocos2d::Director::loadProjectionMatrix(cocos2d::Mat4 const&, unsigned long) */

void __thiscall cocos2d::Director::loadProjectionMatrix(Director *this,Mat4 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(this + 0x58) + param_2 * 0x30;
  uVar3 = (*(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x20)) - 1;
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(lVar2 + 8) + (uVar3 >> 3 & 0x1ffffffffffffff8)) +
           (uVar3 & 0x3f) * 0x40);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = uVar8;
  puVar1[7] = uVar10;
  puVar1[6] = uVar9;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  return;
}

