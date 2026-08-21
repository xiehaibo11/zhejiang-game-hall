
/* dragonBones::ArmatureData::getCacheFrame(dragonBones::Matrix&, dragonBones::Transform&, unsigned
   int) const */

void __thiscall
dragonBones::ArmatureData::getCacheFrame
          (ArmatureData *this,Matrix *param_1,Transform *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(this + 0x158) + 0x60);
  *(undefined4 *)param_1 = *(undefined4 *)(lVar4 + (ulong)param_3 * 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar4 + (ulong)(param_3 + 1) * 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar4 + (ulong)(param_3 + 2) * 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar4 + (ulong)(param_3 + 3) * 4);
  uVar1 = *(undefined4 *)(lVar4 + (ulong)(param_3 + 4) * 4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined4 *)(lVar4 + (ulong)(param_3 + 5) * 4);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar4 + (ulong)(param_3 + 6) * 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar4 + (ulong)(param_3 + 7) * 4);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar4 + (ulong)(param_3 + 8) * 4);
  uVar3 = *(undefined4 *)(lVar4 + (ulong)(param_3 + 9) * 4);
  *(undefined4 *)param_2 = uVar1;
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  return;
}

