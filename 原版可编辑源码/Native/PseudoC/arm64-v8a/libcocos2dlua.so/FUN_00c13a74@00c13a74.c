
undefined8 FUN_00c13a74(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x168);
  *(long *)(lVar5 + 0x10) = param_1;
  uVar1 = FUN_00c132c0(param_1,lVar5,0);
  if ((int)((long)**(ulong **)(param_1 + 0x20) >> 0x2f) == -0xb) {
    uVar4 = **(ulong **)(param_1 + 0x20) & 0x7fffffffffff;
    if (*(char *)(uVar4 + 8) < '\0') {
      uVar2 = *(uint *)(uVar4 - 4);
      goto LAB_00c13af0;
    }
  }
  puVar3 = (uint *)FUN_00c0eb40(lVar5,uVar1);
  if ((*puVar3 & 0xd0100000) == 0x10100000) {
    uVar1 = FUN_00c1363c(param_1,2);
    uVar2 = FUN_00c0ebec(lVar5,puVar3,uVar1);
  }
  else {
    if (5 < *puVar3 >> 0x1c) goto LAB_00c13b14;
    uVar2 = puVar3[1];
  }
  if (uVar2 != 0xffffffff) {
LAB_00c13af0:
    lVar5 = *(long *)(param_1 + 0x28);
    *(uint *)(lVar5 + -8) = uVar2;
    *(undefined4 *)(lVar5 + -4) = 0xfff90000;
    return 1;
  }
LAB_00c13b14:
  *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
  return 1;
}

