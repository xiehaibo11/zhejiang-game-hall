
/* ClipperLib::SwapPoints(ClipperLib::IntPoint&, ClipperLib::IntPoint&) */

void ClipperLib::SwapPoints(IntPoint *param_1,IntPoint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)param_2 = uVar1;
  return;
}

