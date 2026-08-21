
byte * FUN_010a1774(long param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  short *psVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  int local_58;
  int local_54;
  
  if (*(byte **)(param_1 + 0x438) != (byte *)0x0) {
    return *(byte **)(param_1 + 0x438);
  }
  if ((ulong)*(ushort *)(param_1 + 0x230) != 0) {
    lVar11 = 0;
    psVar12 = (short *)(*(long *)(param_1 + 0x248) + 4);
    iVar9 = -1;
    iVar4 = -1;
    do {
      iVar10 = iVar9;
      iVar5 = iVar4;
      if ((psVar12[1] == 6) && (psVar12[2] != 0)) {
        if (psVar12[-2] == 1) {
          if ((psVar12[-1] == 0) && (iVar10 = (int)lVar11, *psVar12 != 0)) {
            iVar10 = iVar9;
          }
        }
        else if (((psVar12[-2] == 3) && (psVar12[-1] == 1)) &&
                (iVar5 = (int)lVar11, *psVar12 != 0x409)) {
          iVar5 = iVar4;
        }
      }
      lVar11 = lVar11 + 1;
      psVar12 = psVar12 + 0x10;
      iVar9 = iVar10;
      iVar4 = iVar5;
    } while (lVar11 < (long)(ulong)*(ushort *)(param_1 + 0x230));
    if (iVar5 != -1) {
      lVar16 = *(long *)(param_1 + 0x248);
      uVar14 = *(undefined8 *)(param_1 + 0xb8);
      lVar11 = lVar16 + (long)iVar5 * 0x20;
      puVar19 = (ushort *)(lVar11 + 8);
      uVar2 = *puVar19;
      local_54 = 0;
      pbVar3 = (byte *)ft_mem_alloc(uVar14,(ulong)uVar2 + 1,&local_54);
      if (local_54 == 0) {
        lVar13 = *(long *)(param_1 + 0x250);
        puVar18 = (undefined8 *)(lVar11 + 0x10);
        local_54 = FT_Stream_Seek(lVar13,*puVar18);
        if ((local_54 == 0) && (local_54 = FT_Stream_EnterFrame(lVar13,*puVar19), local_54 == 0)) {
          uVar2 = uVar2 >> 1;
          pbVar8 = pbVar3;
          if (uVar2 != 0) {
            iVar9 = -(uint)uVar2;
            pbVar6 = (byte *)(*(long *)(lVar13 + 0x40) + 1);
            pbVar7 = pbVar3;
            do {
              pbVar8 = pbVar7;
              if (((pbVar6[-1] == 0) && (bVar1 = *pbVar6, 0x1f < bVar1)) && (-1 < (char)bVar1)) {
                pbVar8 = pbVar7 + 1;
                *pbVar7 = bVar1;
              }
              iVar9 = iVar9 + 1;
              pbVar6 = pbVar6 + 2;
              pbVar7 = pbVar8;
            } while (iVar9 != 0);
          }
          *pbVar8 = 0;
          FT_Stream_ExitFrame(lVar13);
        }
        else {
          ft_mem_free(uVar14,pbVar3);
          *puVar19 = 0;
                    /* try { // try from 010a189c to 011a19ef has its CatchHandler @ 010a189c
                       catch() { ... } // from try @ 010a189c with catch @ 010a189c
                       catch() { ... } // from try @ 010a19f8 with catch @ 010a189c */
          *puVar18 = 0;
          lVar16 = lVar16 + (long)iVar5 * 0x20;
          ft_mem_free(uVar14,*(undefined8 *)(lVar16 + 0x18));
          pbVar3 = (byte *)0x0;
          *(undefined8 *)(lVar16 + 0x18) = 0;
        }
      }
      goto LAB_010a1958;
    }
    if (iVar10 != -1) {
      lVar16 = *(long *)(param_1 + 0x248);
      uVar14 = *(undefined8 *)(param_1 + 0xb8);
      lVar11 = lVar16 + (long)iVar10 * 0x20;
      puVar19 = (ushort *)(lVar11 + 8);
      uVar15 = (ulong)*puVar19;
      local_58 = 0;
      pbVar3 = (byte *)ft_mem_alloc(uVar14,uVar15 + 1,&local_58);
      if (local_58 != 0) goto LAB_010a1958;
      uVar17 = *(undefined8 *)(param_1 + 0x250);
      puVar18 = (undefined8 *)(lVar11 + 0x10);
      local_58 = FT_Stream_Seek(uVar17,*puVar18);
      if ((local_58 == 0) && (local_58 = FT_Stream_Read(uVar17,pbVar3,uVar15), local_58 == 0)) {
        pbVar3[uVar15] = 0;
        goto LAB_010a1958;
      }
      *puVar18 = 0;
      *puVar19 = 0;
      lVar16 = lVar16 + (long)iVar10 * 0x20;
      ft_mem_free(uVar14,*(undefined8 *)(lVar16 + 0x18));
      *(undefined8 *)(lVar16 + 0x18) = 0;
      ft_mem_free(uVar14,pbVar3);
    }
  }
  pbVar3 = (byte *)0x0;
LAB_010a1958:
  *(byte **)(param_1 + 0x438) = pbVar3;
  return pbVar3;
}

