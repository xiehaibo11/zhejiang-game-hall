
int FUN_00e66f10(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ushort *puVar13;
  long *plVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined *puVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int local_6c;
  uint local_68;
  uint local_64;
  
  plVar5 = (long *)FUN_00e1388c(*(undefined8 *)(param_1 + 0xb8),
                                *(long *)(param_1 + 0x20) * 2 + 0x2f8,&local_6c);
  if (local_6c != 0) goto LAB_00e6750c;
  *plVar5 = param_1;
  uVar9 = *(ulong *)(param_1 + 0x20);
  plVar1 = plVar5 + 0x5f;
  plVar5[0x5e] = param_3;
  *(undefined2 *)(plVar5 + 0x58) = 0;
  plVar5[0x5d] = 0;
  plVar5[1] = uVar9;
  plVar5[2] = (long)plVar1;
  plVar5[0x5c] = 0;
  plVar5[0x5b] = 0;
  plVar5[0x5a] = 0;
  plVar5[0x59] = 0;
  uVar15 = *(undefined8 *)(param_1 + 0xa8);
  if ((int)uVar9 != 0) {
    uVar6 = uVar9 & 0xffffffff;
    if (uVar6 < 0x10) {
      lVar10 = 0;
    }
    else {
      lVar10 = uVar6 - (uVar9 & 0xf);
      plVar14 = plVar5 + 0x61;
      lVar7 = lVar10;
      do {
        plVar14[-1] = 0x3fff3fff3fff3fff;
        plVar14[-2] = 0x3fff3fff3fff3fff;
        plVar14[1] = 0x3fff3fff3fff3fff;
        *plVar14 = 0x3fff3fff3fff3fff;
        lVar7 = lVar7 + -0x10;
        plVar14 = plVar14 + 4;
      } while (lVar7 != 0);
      if ((uVar9 & 0xf) == 0) goto LAB_00e66ff0;
    }
    lVar7 = uVar6 - lVar10;
    puVar11 = (undefined2 *)((long)plVar5 + lVar10 * 2 + 0x2f8);
    do {
      lVar7 = lVar7 + -1;
      *puVar11 = 0x3fff;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0);
  }
LAB_00e66ff0:
  iVar3 = FT_Select_Charmap(param_1,0x756e6963);
  if (iVar3 == 0) {
    lVar7 = 0;
    puVar8 = &DAT_01979d6c;
    do {
      puVar17 = (&PTR_DAT_01c97170)[*(uint *)(puVar8 + 8)];
      piVar16 = *(int **)(puVar17 + 8);
      if ((piVar16 != (int *)0x0) && (*(int *)(puVar8 + 0x10) == 10)) {
        iVar3 = *piVar16;
        while (iVar3 != 0) {
          local_64 = FT_Get_Char_Index(param_1,iVar3);
          if (((local_64 != 0) && (uVar9 = (ulong)local_64, uVar9 < (ulong)plVar5[1])) &&
             ((~*(ushort *)((long)plVar1 + uVar9 * 2) & 0x3fff) == 0)) {
            *(short *)((long)plVar1 + uVar9 * 2) = (short)lVar7;
          }
          for (uVar9 = FT_Get_Next_Char(param_1,iVar3,&local_64);
              (local_64 != 0 && (uVar9 <= (uint)piVar16[1]));
              uVar9 = FT_Get_Next_Char(param_1,uVar9,&local_64)) {
            uVar6 = (ulong)local_64;
            if ((uVar6 < (ulong)plVar5[1]) &&
               ((~*(ushort *)((long)plVar1 + uVar6 * 2) & 0x3fff) == 0)) {
              *(short *)((long)plVar1 + uVar6 * 2) = (short)lVar7;
            }
          }
          piVar16 = piVar16 + 2;
          iVar3 = *piVar16;
        }
        piVar16 = *(int **)(puVar17 + 0x10);
        iVar3 = *piVar16;
        while (iVar3 != 0) {
          local_68 = FT_Get_Char_Index(param_1,iVar3);
          if (((local_68 != 0) && (uVar9 = (ulong)local_68, uVar9 < (ulong)plVar5[1])) &&
             (uVar2 = *(ushort *)((long)plVar1 + uVar9 * 2),
             (uVar2 & 0x3fff) == ((uint)lVar7 & 0xffff))) {
            *(ushort *)((long)plVar1 + uVar9 * 2) = uVar2 | 0x4000;
          }
          for (uVar9 = FT_Get_Next_Char(param_1,iVar3,&local_68);
              (local_68 != 0 && (uVar9 <= (uint)piVar16[1]));
              uVar9 = FT_Get_Next_Char(param_1,uVar9,&local_68)) {
            uVar6 = (ulong)local_68;
            if ((uVar6 < (ulong)plVar5[1]) &&
               (uVar2 = *(ushort *)((long)plVar1 + uVar6 * 2),
               (uVar2 & 0x3fff) == ((uint)lVar7 & 0xffff))) {
              *(ushort *)((long)plVar1 + uVar6 * 2) = uVar2 | 0x4000;
            }
          }
          piVar16 = piVar16 + 2;
          iVar3 = *piVar16;
        }
      }
      lVar7 = lVar7 + 1;
      puVar8 = (&PTR_DAT_01c97340)[lVar7];
    } while (lVar7 != 0x54);
    uVar4 = FT_Get_Char_Index(param_1,0x30);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x31);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x32);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x33);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x34);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x35);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x36);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x37);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x38);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
    uVar4 = FT_Get_Char_Index(param_1,0x39);
    if ((uVar4 != 0) && ((ulong)uVar4 < (ulong)plVar5[1])) {
      lVar7 = (ulong)uVar4 * 2;
      *(ushort *)((long)plVar1 + lVar7) = *(ushort *)((long)plVar1 + lVar7) | 0x8000;
    }
  }
  if ((*(int *)(plVar5[0x5e] + 0x18) != 0x3fff) && (uVar9 = plVar5[1], 0 < (long)uVar9)) {
    uVar2 = (ushort)*(int *)(plVar5[0x5e] + 0x18);
    if (uVar9 < 4) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar9 & 0xfffffffffffffffc;
      puVar13 = (ushort *)((long)plVar5 + 0x2fe);
      uVar6 = uVar12;
      do {
        while( true ) {
          uVar19 = (ulong)CONCAT24(puVar13[-2],(uint)puVar13[-3]) & 0x3fff00003fff;
          if ((int)uVar19 == 0x3fff) {
            puVar13[-3] = puVar13[-3] & 0xc000 | uVar2;
          }
          uVar20 = (ulong)CONCAT24(*puVar13,(uint)puVar13[-1]) & 0x3fff00003fff;
          iVar3 = (int)uVar20;
          iVar18 = (int)(uVar20 >> 0x20);
          if ((int)(uVar19 >> 0x20) == 0x3fff) break;
          if (iVar3 == 0x3fff) goto LAB_00e67484;
LAB_00e6744c:
          if (iVar18 == 0x3fff) goto LAB_00e6749c;
LAB_00e67454:
          uVar6 = uVar6 - 4;
          puVar13 = puVar13 + 4;
          if (uVar6 == 0) goto LAB_00e674b8;
        }
        puVar13[-2] = puVar13[-2] & 0xc000 | uVar2;
        if (iVar3 != 0x3fff) goto LAB_00e6744c;
LAB_00e67484:
        puVar13[-1] = puVar13[-1] & 0xc000 | uVar2;
        if (iVar18 != 0x3fff) goto LAB_00e67454;
LAB_00e6749c:
        *puVar13 = *puVar13 & 0xc000 | uVar2;
        uVar6 = uVar6 - 4;
        puVar13 = puVar13 + 4;
      } while (uVar6 != 0);
LAB_00e674b8:
      if (uVar9 == uVar12) goto LAB_00e674f4;
    }
    lVar7 = uVar9 - uVar12;
    puVar13 = (ushort *)((long)plVar5 + uVar12 * 2 + 0x2f8);
    do {
      if ((~*puVar13 & 0x3fff) == 0) {
        *puVar13 = *puVar13 & 0xc000 | uVar2;
      }
      lVar7 = lVar7 + -1;
      puVar13 = puVar13 + 1;
    } while (lVar7 != 0);
  }
LAB_00e674f4:
  FT_Set_Charmap(param_1,uVar15);
  local_6c = 0;
  *(undefined4 *)(plVar5 + 3) = 0;
LAB_00e6750c:
  *param_2 = plVar5;
  return local_6c;
}

