
/* v8::ContainsOnlyOneByteHelper::VisitTwoByteString(unsigned short const*, int) */

void __thiscall
v8::ContainsOnlyOneByteHelper::VisitTwoByteString
          (ContainsOnlyOneByteHelper *this,ushort *param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  byte bVar15;
  
  uVar6 = 0;
  puVar1 = (ulong *)(param_1 + param_2);
  puVar4 = (ulong *)param_1;
  if ((param_2 != 0) && (((ulong)param_1 & 7) != 0)) {
    lVar3 = (long)param_2 * 2;
    uVar6 = 0;
    puVar5 = (ulong *)param_1;
    do {
      lVar3 = lVar3 + -2;
      puVar4 = (ulong *)((long)puVar5 + 2);
      uVar6 = uVar6 | (ushort)*puVar5;
      if (lVar3 == 0) break;
      puVar5 = puVar4;
    } while (((ulong)puVar4 & 7) != 0);
  }
  while (puVar4 + 0x10 < (ulong *)((ulong)puVar1 & 0xfffffffffffffff8)) {
    uVar6 = puVar4[0xf] |
            puVar4[0xe] |
            puVar4[0xd] |
            puVar4[0xc] |
            puVar4[0xb] |
            puVar4[10] |
            puVar4[9] |
            puVar4[8] |
            puVar4[7] |
            puVar4[6] | puVar4[5] | puVar4[4] | puVar4[3] | puVar4[2] | puVar4[1] | *puVar4 | uVar6;
    puVar4 = puVar4 + 0x10;
    if ((uVar6 & 0xff00ff00ff00ff00) != 0) goto LAB_00ed6a14;
  }
  if (puVar1 == puVar4) goto LAB_00ed6a0c;
  uVar2 = ((ulong)((long)param_1 + ((long)param_2 * 2 - (long)puVar4) + -2) >> 1) + 1;
  if (uVar2 < 4) goto LAB_00ed69fc;
  bVar15 = 0;
  puVar8 = (undefined2 *)((long)puVar4 + 4);
  bVar9 = 0;
  bVar10 = 0;
  uVar7 = uVar2 & 0xfffffffffffffffc;
  do {
    uVar7 = uVar7 - 4;
    bVar11 = (byte)(uVar6 >> 8) | (byte)((ushort)puVar8[-2] >> 8);
    uVar12 = (undefined1)(uVar6 >> 0x18);
    uVar13 = (undefined1)(uVar6 >> 0x28);
    uVar14 = (undefined1)(uVar6 >> 0x38);
    uVar6 = CONCAT17(uVar14,(uint7)CONCAT15(uVar13,(uint5)CONCAT13(uVar12,(uint3)bVar11 << 8)));
    bVar15 = bVar15 | (byte)((ushort)puVar8[-1] >> 8);
    bVar9 = bVar9 | (byte)((ushort)*puVar8 >> 8);
    bVar10 = bVar10 | (byte)((ushort)puVar8[1] >> 8);
    puVar8 = puVar8 + 4;
  } while (uVar7 != 0);
  uVar6 = CONCAT17(uVar14,(uint7)CONCAT15(uVar13,(uint5)CONCAT13(uVar12,(uint3)(byte)(bVar9 | bVar11
                                                                                     | bVar10 | 
                                                  bVar15) << 8)));
  puVar4 = (ulong *)((long)puVar4 + (uVar2 & 0x7ffffffffffffffc) * 2);
  if (uVar2 != (uVar2 & 0xfffffffffffffffc)) {
LAB_00ed69fc:
    do {
      puVar5 = (ulong *)((long)puVar4 + 2);
      uVar6 = uVar6 | (ushort)*puVar4;
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
  }
LAB_00ed6a0c:
  if ((uVar6 & 0xff00ff00ff00ff00) != 0) {
LAB_00ed6a14:
    *this = (ContainsOnlyOneByteHelper)0x0;
  }
  return;
}

