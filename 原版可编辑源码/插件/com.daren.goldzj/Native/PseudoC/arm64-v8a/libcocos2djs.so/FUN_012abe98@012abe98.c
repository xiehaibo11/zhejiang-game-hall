
void FUN_012abe98(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x23;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  if (lVar3 == 0) {
    puStack_48 = &DAT_0189703a;
    local_50 = &DAT_0189703a;
    uVar4 = 0x8000000000000000;
  }
  else {
    puStack_48 = *(undefined1 **)(lVar3 + 0x18);
    local_50 = *(undefined1 **)(lVar3 + 0x10);
    uVar1 = *(uint *)(param_2 + 0x14);
    unaff_x23 = *(undefined8 *)(lVar3 + 0x20);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined4 *)(lVar3 + 0x20) = 1;
    *(ulong *)(lVar3 + 0x28) = (ulong)uVar1 & 0xffffff;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_2);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = unaff_x23;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    *(undefined1 **)(lVar3 + 0x18) = puStack_48;
    *(undefined1 **)(lVar3 + 0x10) = local_50;
  }
  return;
}

