
undefined8 FUN_00c14550(long param_1)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  uint uVar13;
  char *pcVar14;
  
  lVar4 = FUN_00c1450c();
  uVar1 = *(ushort *)(lVar4 + 10);
  uVar13 = (uint)uVar1;
  puVar8 = (uint *)(lVar4 + 0x10);
  if (uVar1 == 0x15) {
    uVar13 = *(uint *)(lVar4 + 0x10);
    pcVar14 = "ctype<%s>";
  }
  else {
    uVar7 = (ulong)(uint)uVar1;
    plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
    lVar10 = *plVar12;
    plVar12[2] = param_1;
    while( true ) {
      lVar2 = uVar7 * 0x18;
      uVar6 = *(uint *)(lVar10 + lVar2);
      uVar3 = uVar6 >> 0x1c;
      if (uVar3 != 8) break;
      uVar7 = (ulong)(ushort)uVar6;
    }
    puVar9 = puVar8;
    if ((uVar6 & 0xf0800000) == 0x20800000) {
      puVar9 = *(uint **)(lVar4 + 0x10);
      do {
        lVar2 = (ulong)(ushort)uVar6 * 0x18;
        uVar6 = *(uint *)(lVar10 + lVar2);
        uVar3 = uVar6 >> 0x1c;
      } while (uVar3 == 8);
    }
    puVar11 = (ulong *)(lVar10 + lVar2);
    if ((uVar6 & 0xf4000000) == 0x34000000) {
      lVar4 = *(long *)(param_1 + 0x28);
      uVar7 = FUN_00c0fc84(param_1,puVar8,*(undefined4 *)((long)puVar11 + 4));
      *(ulong *)(lVar4 + -8) = uVar7 | 0xfffd800000000000;
      goto LAB_00c14658;
    }
    if ((*puVar11 & 0xfffffffffc000000) == 0x800000000) {
      lVar10 = *(long *)(param_1 + 0x28);
      uVar7 = FUN_00c0fbac(param_1,*(undefined8 *)(lVar4 + 0x10),uVar6 & 0x800000);
      *(ulong *)(lVar10 + -8) = uVar7 | 0xfffd800000000000;
      goto LAB_00c14658;
    }
    if (uVar3 == 6) {
      puVar8 = *(uint **)puVar9;
      pcVar14 = "cdata<%s>: %p";
    }
    else if (uVar3 == 5) {
      puVar8 = *(uint **)puVar9;
      pcVar14 = "cdata<%s>: %d";
    }
    else {
      if (uVar3 == 2) {
        if (*(int *)((long)puVar11 + 4) == 4) {
          puVar9 = (uint *)(ulong)*puVar9;
        }
        else {
          puVar9 = *(uint **)puVar9;
        }
        do {
          lVar4 = (ulong)(ushort)uVar6 * 0x18;
          puVar11 = (ulong *)(lVar10 + lVar4);
          uVar6 = *(uint *)(lVar10 + lVar4);
          uVar3 = uVar6 >> 0x1c;
        } while (uVar3 == 8);
      }
      if (((uVar3 == 1) || ((uVar6 & 0xf8000000) == 0x38000000)) &&
         (lVar4 = FUN_00c0ed6c(plVar12,(int)((long)puVar11 - lVar10 >> 3) * -0x55555555,0x12),
         lVar4 != 0)) {
        uVar5 = FUN_00c1cda4(param_1,lVar4);
        return uVar5;
      }
      pcVar14 = "cdata<%s>: %p";
      puVar8 = puVar9;
    }
  }
  lVar4 = FUN_00c0ee70(param_1,uVar13,0);
  FUN_00c00c18(param_1,pcVar14,lVar4 + 0x18,puVar8);
LAB_00c14658:
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80(param_1);
  }
  return 1;
}

