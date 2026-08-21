
long FUN_00bfbfe0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c1a098();
  }
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  lVar6 = FUN_00c1a314(param_1,((ulong)*(byte *)(param_2 + 0x3c) + 5) * 8);
  *(undefined1 *)(lVar6 + 9) = 8;
  *(undefined1 *)(lVar6 + 10) = 0;
  *(undefined1 *)(lVar6 + 0xb) = 0;
  *(long *)(lVar6 + 0x20) = param_2 + 0x68;
  *(undefined8 *)(lVar6 + 0x10) = uVar11;
  bVar3 = *(byte *)(param_2 + 0x3c);
  uVar2 = *(byte *)(param_2 + 0x3d) + 0x20;
  *(byte *)(param_2 + 0x3d) = (char)uVar2 - ((byte)(uVar2 >> 3) & 0x20);
  lVar7 = *(long *)(param_1 + 0x20);
  if (bVar3 != 0) {
    lVar13 = 0;
    lVar15 = ((ulong)(bVar3 - 1) + 1) * 2;
    puVar14 = (undefined8 *)(lVar6 + 0x28);
    do {
      while( true ) {
        uVar5 = *(ushort *)(*(long *)(param_2 + 0x28) + lVar13);
        if (-1 < (short)uVar5) break;
        uVar1 = lVar7 + (ulong)(byte)uVar5 * 8;
        lVar10 = *(long *)(param_1 + 0x10);
        plVar12 = (long *)(param_1 + 0x40);
        do {
          plVar8 = (long *)*plVar12;
          if ((plVar8 == (long *)0x0) || ((ulong)plVar8[4] < uVar1)) {
            plVar8 = (long *)FUN_00c1a2b4(param_1,0,0,0x30);
            bVar4 = *(byte *)(lVar10 + 0x30);
            *(undefined1 *)((long)plVar8 + 9) = 5;
            *(undefined1 *)((long)plVar8 + 10) = 0;
            *(byte *)(plVar8 + 1) = bVar4 & 3;
            plVar8[4] = uVar1;
            *plVar8 = *plVar12;
            *plVar12 = (long)plVar8;
            plVar8[2] = lVar10 + 0x100;
            lVar9 = *(long *)(lVar10 + 0x118);
            plVar8[3] = lVar9;
            *(long **)(lVar9 + 0x10) = plVar8;
            *(long **)(lVar10 + 0x118) = plVar8;
            goto LAB_00bfc168;
          }
          plVar12 = plVar8;
        } while (uVar1 != plVar8[4]);
        if ((*(byte *)(plVar8 + 1) & 3 & (*(byte *)(lVar10 + 0x30) ^ 3)) != 0) {
          *(byte *)(plVar8 + 1) = *(byte *)(plVar8 + 1) ^ 3;
        }
LAB_00bfc168:
        *(byte *)((long)plVar8 + 0xb) = (byte)(uVar5 >> 0xe) & 1;
        lVar13 = lVar13 + 2;
        *(uint *)(plVar8 + 5) = (uint)*(undefined8 *)(param_3 + 0x20) ^ (uint)uVar5 << 0x18;
        *puVar14 = plVar8;
        puVar14 = puVar14 + 1;
        if (lVar13 == lVar15) goto LAB_00bfc18c;
      }
      lVar13 = lVar13 + 2;
      *puVar14 = *(undefined8 *)(param_3 + 0x28 + (ulong)uVar5 * 8);
      puVar14 = puVar14 + 1;
    } while (lVar13 != lVar15);
  }
LAB_00bfc18c:
  *(byte *)(lVar6 + 0xb) = bVar3;
  return lVar6;
}

