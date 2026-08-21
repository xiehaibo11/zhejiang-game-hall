
void FUN_00e2ed84(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x4c0);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    uVar2 = **(uint **)(lVar4 + 0x18);
    FUN_00e139fc(uVar5,*(undefined8 *)(lVar4 + 8));
    *(undefined8 *)(lVar4 + 8) = 0;
    FUN_00e139fc(uVar5,*(undefined8 *)(lVar4 + 0x10));
    *(undefined8 *)(lVar4 + 0x10) = 0;
    FUN_00e139fc(uVar5,*(undefined8 *)(lVar4 + 0x28));
    *(undefined8 *)(lVar4 + 0x28) = 0;
    FUN_00e139fc(uVar5,*(undefined8 *)(lVar4 + 0x18));
    lVar3 = *(long *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    if (lVar3 != 0) {
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          FUN_00e139fc(uVar5,*(undefined8 *)(lVar3 + lVar6 + 8));
          lVar3 = *(long *)(lVar4 + 0x38);
          lVar1 = lVar3 + lVar6;
          lVar6 = lVar6 + 0x10;
          *(undefined8 *)(lVar1 + 8) = 0;
        } while ((ulong)uVar2 * 0x10 - lVar6 != 0);
      }
      FUN_00e139fc(uVar5);
      *(undefined8 *)(lVar4 + 0x38) = 0;
    }
    if (*(long *)(lVar4 + 0x48) != 0) {
      FUN_00e310c8(*(undefined8 *)(param_1 + 0xb8));
      FUN_00e139fc(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x30));
      lVar3 = *(long *)(lVar4 + 0x48);
      *(undefined8 *)(lVar3 + 0x30) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar3 + 0x28));
      *(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x28) = 0;
      FUN_00e139fc(uVar5);
      *(undefined8 *)(lVar4 + 0x48) = 0;
    }
    if (*(long *)(lVar4 + 0x58) != 0) {
      FUN_00e310c8(*(undefined8 *)(param_1 + 0xb8));
      FUN_00e139fc(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0x58) + 0x30));
      lVar3 = *(long *)(lVar4 + 0x58);
      *(undefined8 *)(lVar3 + 0x30) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar3 + 0x28));
      *(undefined8 *)(*(long *)(lVar4 + 0x58) + 0x28) = 0;
      FUN_00e139fc(uVar5);
      *(undefined8 *)(lVar4 + 0x58) = 0;
    }
    if (*(long *)(lVar4 + 0x60) != 0) {
      FUN_00e310c8(*(undefined8 *)(param_1 + 0xb8),*(long *)(lVar4 + 0x60) + 8);
      FUN_00e139fc(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x28));
      *(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x28) = 0;
      FUN_00e139fc(uVar5);
      *(undefined8 *)(lVar4 + 0x60) = 0;
    }
    FUN_00e139fc(uVar5,*(undefined8 *)(lVar4 + 0x70));
    *(undefined8 *)(lVar4 + 0x70) = 0;
    FUN_00e139fc(uVar5,*(undefined8 *)(lVar4 + 0x80));
    *(undefined8 *)(lVar4 + 0x80) = 0;
    FUN_00e139fc(uVar5,lVar4);
    return;
  }
  return;
}

