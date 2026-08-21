
void cpSpaceUseSpatialHash(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = cpSpaceHashNew(param_3,cpShapeGetBB,0);
  uVar2 = cpSpaceHashNew(param_1,param_3,cpShapeGetBB,uVar1);
  (**(code **)(**(long **)(param_2 + 0x60) + 0x10))(*(long **)(param_2 + 0x60),FUN_01163950,uVar1);
  (**(code **)(**(long **)(param_2 + 0x68) + 0x10))(*(long **)(param_2 + 0x68),FUN_01163950,uVar2);
  cpSpatialIndexFree(*(undefined8 *)(param_2 + 0x60));
  cpSpatialIndexFree(*(undefined8 *)(param_2 + 0x68));
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(undefined8 *)(param_2 + 0x68) = uVar2;
  return;
}

