
undefined8 FUN_010fe6e0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  uint local_78;
  long local_70;
  
  lVar14 = *(long *)(param_1 + 0x270);
  if ((*(int *)(param_1 + 0x174) != 0) && (*(int *)(lVar14 + 0x40) == 0)) {
    lVar7 = *(long *)(param_1 + 0x268);
    iVar3 = *(int *)(lVar14 + 0x20);
    iVar10 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar10 = iVar3;
    }
    *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + (iVar10 >> 3);
    *(undefined4 *)(lVar14 + 0x20) = 0;
    uVar6 = (**(code **)(lVar7 + 0x10))(param_1);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (0 < *(int *)(param_1 + 0x1c0)) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar14 + 0x2c + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(lVar14 + 0x28) = 0;
    *(undefined4 *)(lVar14 + 0x40) = *(undefined4 *)(param_1 + 0x174);
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar14 + 0x3c) = 0;
      iVar10 = *(int *)(lVar14 + 0x3c);
      goto joined_r0x010fe720;
    }
  }
  iVar10 = *(int *)(lVar14 + 0x3c);
joined_r0x010fe720:
  if (iVar10 == 0) {
    if (*(int *)(lVar14 + 0x28) == 0) {
      iVar3 = *(int *)(param_1 + 0x220);
      uVar4 = *(uint *)(param_1 + 0x228);
      lVar15 = *(long *)(param_1 + 0x230);
      uStack_88 = (*(undefined8 **)(param_1 + 0x28))[1];
      local_90 = **(undefined8 **)(param_1 + 0x28);
      iVar10 = *(int *)(param_1 + 0x21c);
      lVar7 = *(long *)(lVar14 + 0x18);
      uVar8 = *(uint *)(lVar14 + 0x20);
      uVar9 = (ulong)uVar8;
      if (iVar10 <= iVar3) {
        lVar16 = *param_2;
        lVar13 = *(long *)(lVar14 + 0x68);
        local_70 = param_1;
        do {
          if ((int)uVar9 < 8) {
                    /* try { // try from 010fe7fc to 011fe92b has its CatchHandler @ 010fe7fc
                       catch() { ... } // from try @ 010fe7fc with catch @ 010fe7fc
                       catch() { ... } // from try @ 010fe934 with catch @ 010fe7fc
                       catch() { ... } // from try @ 010fe9f4 with catch @ 010fe7fc
                       catch() { ... } // from try @ 010feb00 with catch @ 010fe7fc */
            uVar6 = FUN_011001c4(&local_90,lVar7,uVar9,0);
            if ((int)uVar6 == 0) {
              return uVar6;
            }
            uVar9 = (ulong)local_78;
            lVar7 = local_80;
            if (7 < (int)local_78) goto LAB_010fe81c;
            uVar6 = 1;
LAB_010fe848:
            uVar5 = FUN_01100318(&local_90,lVar7,uVar9,lVar13,uVar6);
            lVar7 = local_80;
            uVar8 = local_78;
            if ((int)uVar5 < 0) {
              return 0;
            }
          }
          else {
LAB_010fe81c:
            uVar11 = lVar7 >> ((ulong)((int)uVar9 - 8) & 0x3f);
            iVar1 = *(int *)(lVar13 + (uVar11 & 0xff) * 4 + 0x120);
            if (iVar1 == 0) {
              uVar6 = 9;
              goto LAB_010fe848;
            }
            uVar5 = (uint)*(byte *)(lVar13 + (uVar11 & 0xff) + 0x520);
            uVar8 = (int)uVar9 - iVar1;
          }
          uVar9 = (ulong)uVar8;
          uVar2 = uVar5 & 0xf;
          uVar5 = (int)uVar5 >> 4;
          if (uVar2 == 0) {
            if (uVar5 != 0xf) {
              if (uVar5 != 0) {
                if (((int)uVar8 < (int)uVar5) &&
                   (uVar6 = FUN_011001c4(&local_90,lVar7,uVar9,uVar5), lVar7 = local_80,
                   uVar8 = local_78, (int)uVar6 == 0)) {
                  return uVar6;
                }
                uVar8 = uVar8 - uVar5;
                iVar10 = (1 << (ulong)(uVar5 & 0x1f)) +
                         (*(uint *)(&DAT_01479120 + (long)(int)uVar5 * 4) &
                         (uint)(lVar7 >> ((ulong)uVar8 & 0x3f))) + -1;
                goto LAB_010fe8ec;
              }
              break;
            }
            iVar1 = iVar10 + 0xf;
          }
          else {
            if (((int)uVar8 < (int)uVar2) &&
               (uVar6 = FUN_011001c4(&local_90,lVar7,uVar9,uVar2), lVar7 = local_80,
               uVar8 = local_78, (int)uVar6 == 0)) {
              return uVar6;
            }
            uVar9 = (ulong)(uVar8 - uVar2);
            iVar1 = uVar5 + iVar10;
            uVar8 = *(uint *)(&DAT_01479120 + (ulong)uVar2 * 4) & (uint)(lVar7 >> (uVar9 & 0x3f));
            uVar5 = 0;
            if ((int)uVar8 <= *(int *)(&DAT_0147911c + (long)(int)uVar2 * 4)) {
              uVar5 = *(uint *)(&DAT_01479120 + (ulong)uVar2 * 4);
            }
            *(short *)(lVar16 + (long)*(int *)(lVar15 + (long)iVar1 * 4) * 2) =
                 (short)(uVar8 - uVar5 << (ulong)(uVar4 & 0x1f));
          }
          uVar8 = (uint)uVar9;
          iVar10 = iVar1 + 1;
        } while (iVar1 < iVar3);
      }
      iVar10 = 0;
LAB_010fe8ec:
      puVar12 = *(undefined8 **)(param_1 + 0x28);
      puVar12[1] = uStack_88;
      *puVar12 = local_90;
      *(long *)(lVar14 + 0x18) = lVar7;
      *(uint *)(lVar14 + 0x20) = uVar8;
    }
    else {
      iVar10 = *(int *)(lVar14 + 0x28) + -1;
    }
    *(int *)(lVar14 + 0x28) = iVar10;
  }
  *(int *)(lVar14 + 0x40) = *(int *)(lVar14 + 0x40) + -1;
                    /* try { // try from 010fe92c to 011fe933 has its CatchHandler @ 010feb0c */
  return 1;
}

