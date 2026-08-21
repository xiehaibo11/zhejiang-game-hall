
undefined8 FUN_00e387e0(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined1 auStack_50 [32];
  
  lVar8 = *(long *)(param_1 + 0x350);
  if (lVar8 == 0) {
    return 6;
  }
  FUN_00e392a4(*(undefined8 *)(lVar8 + 0x108),auStack_50,*(undefined4 *)(lVar8 + 4));
  uVar7 = *(uint *)(lVar8 + 4);
  uVar1 = uVar7;
  if (param_2 <= uVar7) {
    uVar1 = param_2;
  }
  if (uVar1 == 0) {
    uVar7 = 0;
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 <= uVar7) {
      uVar7 = param_2;
    }
    memcpy(param_3,auStack_50,(ulong)uVar1 << 3);
    if (param_2 <= uVar7) {
      return 0;
    }
  }
  uVar4 = (ulong)uVar7;
  uVar2 = param_2 - uVar4;
  if (3 < uVar2) {
    uVar5 = uVar2 & 0xfffffffffffffffc;
    lVar8 = uVar4 * 8;
    uVar4 = uVar5 + uVar4;
    puVar3 = (undefined8 *)((long)param_3 + lVar8 + 0x10);
    uVar6 = uVar5;
    do {
      puVar3[-1] = 0x8000;
      puVar3[-2] = 0x8000;
      puVar3[1] = 0x8000;
      *puVar3 = 0x8000;
      uVar6 = uVar6 - 4;
      puVar3 = puVar3 + 4;
    } while (uVar6 != 0);
    if (uVar2 == uVar5) {
      return 0;
    }
  }
  lVar8 = param_2 - uVar4;
  puVar3 = (undefined8 *)((long)param_3 + uVar4 * 8);
  do {
    lVar8 = lVar8 + -1;
    *puVar3 = 0x8000;
    puVar3 = puVar3 + 1;
  } while (lVar8 != 0);
  return 0;
}

