
undefined8 FUN_00c13b68(long param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  
  plVar11 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar11[2] = param_1;
  uVar4 = FUN_00c132c0(param_1,plVar11,0);
  puVar7 = (ulong *)FUN_00c29a84(param_1,2);
  if ((int)((long)*puVar7 >> 0x2f) == -0xb) {
    uVar10 = *puVar7 & 0x7fffffffffff;
    uVar1 = *(ushort *)(uVar10 + 10);
    uVar12 = (uint)uVar1;
    if (uVar1 == 0x15) {
      uVar12 = *(uint *)(uVar10 + 0x10);
    }
    puVar8 = (uint *)FUN_00c0eb40(plVar11,uVar4);
    puVar9 = (uint *)FUN_00c0eb40(plVar11,uVar12);
    if (puVar8 == puVar9) {
      uVar10 = 0xfffeffffffffffff;
      goto LAB_00c13bb8;
    }
    uVar12 = *puVar8;
    uVar5 = *puVar9;
    uVar2 = uVar12 >> 0x1c;
    if (uVar2 == uVar5 >> 0x1c) {
      if (puVar8[1] == puVar9[1]) {
        if (uVar12 >> 0x1d == 1) {
          iVar6 = FUN_00c216c8(plVar11,puVar8,puVar9,8);
          uVar10 = ~((ulong)(iVar6 + 1) << 0x2f);
          goto LAB_00c13bb8;
        }
        if ((uVar2 & 0xb) == 0) {
          uVar10 = ~((ulong)((((uVar5 ^ uVar12) & 0xfcbfffff) == 0) + 1) << 0x2f);
          goto LAB_00c13bb8;
        }
        goto LAB_00c13bb4;
      }
    }
    if ((uVar2 == 1) && (uVar5 >> 0x1c == 2)) {
      do {
        lVar3 = (ulong)(ushort)uVar5 * 0x18;
        uVar5 = *(uint *)(*plVar11 + lVar3);
      } while (uVar5 >> 0x1c == 8);
      uVar10 = ~((ulong)((puVar8 == (uint *)(*plVar11 + lVar3)) + 1) << 0x2f);
      goto LAB_00c13bb8;
    }
  }
LAB_00c13bb4:
  uVar10 = 0xffff7fffffffffff;
LAB_00c13bb8:
  *(ulong *)(*(long *)(param_1 + 0x28) + -8) = uVar10;
  *(ulong *)(*(long *)(param_1 + 0x10) + 0xe0) = uVar10;
  return 1;
}

