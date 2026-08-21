
undefined8 FUN_00e38dcc(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  puVar5 = *(uint **)(param_1 + 0x350);
  if (puVar5 == (uint *)0x0) {
    return 6;
  }
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = puVar5[1];
  lVar6 = *(long *)(puVar5 + 0x42);
  uVar4 = 0;
  bVar3 = false;
  do {
    if (uVar2 == 0) {
      lVar8 = 0x10000;
      if (*(long *)(lVar6 + uVar4 * 8) != 0x10000) goto LAB_00e38e34;
    }
    else {
      uVar7 = 0;
      lVar8 = 0x10000;
      do {
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 >> 1;
      } while (uVar7 < uVar2);
      if (*(long *)(lVar6 + uVar4 * 8) != lVar8) {
LAB_00e38e34:
        bVar3 = true;
        *(long *)(lVar6 + uVar4 * 8) = lVar8;
      }
    }
    uVar4 = uVar4 + 1;
    if (uVar4 == uVar1) {
      if (!bVar3) {
        return 0xffffffff;
      }
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
      return 0;
    }
  } while( true );
}

