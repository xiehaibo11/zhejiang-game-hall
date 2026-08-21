
/* ClipperLib::SwapIntersectNodes(ClipperLib::IntersectNode&, ClipperLib::IntersectNode&) */

void ClipperLib::SwapIntersectNodes(IntersectNode *param_1,IntersectNode *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)param_2 = uVar1;
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  return;
}

