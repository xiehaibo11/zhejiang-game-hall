
void FUN_00e51504(byte *param_1,long param_2,undefined8 param_3,undefined8 *param_4,ulong *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  char acStack_d8 [128];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar3 = strncmp((char *)param_1,"ENDPROPERTIES",0xd);
  if (((iVar3 == 0) && (param_1[0xd] < 0x21)) &&
     ((1L << ((ulong)param_1[0xd] & 0x3f) & 0x100002601U) != 0)) {
    uVar16 = param_5[7];
    if ((((uVar16 == 0) || (*(long *)(uVar16 + 0x80) == 0)) ||
        (plVar5 = (long *)FUN_00e14820("FONT_ASCENT",*(undefined8 *)(uVar16 + 0xa8)),
        plVar5 == (long *)0x0)) || (*(long *)(uVar16 + 0x90) + *plVar5 * 0x18 == 0)) {
      *(long *)(param_5[7] + 0x40) = (long)(int)*(short *)(param_5[7] + 0x10);
      sprintf(acStack_d8,"%hd");
      uVar6 = FUN_00e519c0(param_5[7],"FONT_ASCENT",acStack_d8);
      if ((int)uVar6 != 0) goto LAB_00e5183c;
    }
    uVar16 = param_5[7];
    if (((uVar16 == 0) || (*(long *)(uVar16 + 0x80) == 0)) ||
       ((plVar5 = (long *)FUN_00e14820("FONT_DESCENT",*(undefined8 *)(uVar16 + 0xa8)),
        plVar5 == (long *)0x0 || (*(long *)(uVar16 + 0x90) + *plVar5 * 0x18 == 0)))) {
      *(long *)(param_5[7] + 0x48) = (long)(int)*(short *)(param_5[7] + 0x12);
      sprintf(acStack_d8,"%hd");
      uVar6 = FUN_00e519c0(param_5[7],"FONT_DESCENT",acStack_d8);
      if ((int)uVar6 != 0) goto LAB_00e5183c;
    }
    uVar6 = 0;
    *param_5 = *param_5 & 0xffffffef;
    *param_4 = FUN_00e52180;
    if (*(long *)(lVar2 + 0x28) != local_58) {
LAB_00e51764:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar6);
    }
  }
  else {
    iVar3 = strncmp((char *)param_1,"_XFREE86_GLYPH_RANGES",0x15);
    if (((iVar3 == 0) && (param_1[0x15] < 0x21)) &&
       ((1L << ((ulong)param_1[0x15] & 0x3f) & 0x100002601U) != 0)) {
      uVar6 = 0;
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00e51764;
    }
    iVar3 = strncmp((char *)param_1,"COMMENT",7);
    if (iVar3 == 0) {
      pbVar13 = param_1 + 7;
      bVar12 = *pbVar13;
      if (0x20 < bVar12) goto LAB_00e51580;
      if ((1L << ((ulong)bVar12 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar12 != 0) goto LAB_00e51580;
      }
      else {
        pbVar13 = param_1 + 8;
        param_1[7] = 0;
      }
LAB_00e51830:
      uVar16 = param_5[7];
    }
    else {
LAB_00e51580:
      uVar16 = param_5[7];
      uVar15 = (uint)*param_1;
      pbVar13 = param_1;
      if (*param_1 != 0) {
        do {
          if ((uVar15 == 9) || (uVar15 == 0x20)) {
            *pbVar13 = 0;
            goto joined_r0x00e5176c;
          }
          pbVar13 = pbVar13 + 1;
          uVar15 = (uint)*pbVar13;
        } while (uVar15 != 0);
      }
      uVar15 = 0xffffffff;
joined_r0x00e5176c:
      if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
         (puVar4 = (ulong *)FUN_00e14820(param_1,uVar16 + 0xd0), puVar4 == (ulong *)0x0)) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        uVar8 = *puVar4;
        if (uVar8 < 0x53) {
          ppuVar9 = &PTR_s_ADD_STYLE_NAME_01c958c0 + uVar8 * 3;
        }
        else {
          ppuVar9 = (undefined **)(*(long *)(uVar16 + 0xc0) + uVar8 * 0x18 + -0x7c8);
        }
      }
      if (uVar15 != 0xffffffff) {
        *pbVar13 = (byte)uVar15;
      }
      if ((ppuVar9 == (undefined **)0x0) || (*(int *)(ppuVar9 + 1) == 1)) {
        pbVar7 = param_1 + param_2;
        if (*pbVar13 == 0) goto LAB_00e517b0;
        pbVar14 = pbVar13 + 1;
        *pbVar13 = 0;
        bVar12 = *pbVar14;
        pbVar13 = pbVar14;
        if (bVar12 != 0x20) goto LAB_00e517bc;
        do {
          do {
            pbVar13 = pbVar13 + 1;
LAB_00e517b0:
            bVar12 = *pbVar13;
          } while (bVar12 == 0x20);
LAB_00e517bc:
        } while (bVar12 == 9);
        if (bVar12 == 0x22) {
          pbVar13 = pbVar13 + 1;
        }
        while (pbVar13 < pbVar7) {
          bVar12 = pbVar7[-1];
          if ((bVar12 != 9) && (bVar12 != 0x20)) {
            if (bVar12 == 0x22) {
              pbVar7[-1] = 0;
            }
            break;
          }
          pbVar7[-1] = 0;
          pbVar7 = pbVar7 + -1;
        }
        goto LAB_00e51830;
      }
      puVar4 = param_5 + 9;
      uVar6 = FUN_00e51094(puVar4," +",param_1,param_2);
      if ((int)uVar6 != 0) goto LAB_00e5183c;
      puVar10 = (undefined8 *)param_5[9];
      uVar16 = param_5[0xb];
      param_1 = (byte *)*puVar10;
      if (uVar16 == 0) {
LAB_00e519ac:
        pbVar13 = (byte *)0x0;
      }
      else {
        uVar8 = uVar16 - 1;
        if (uVar8 != 0) {
          *puVar10 = puVar10[1];
          if (uVar8 != 1) {
            lVar11 = 0;
            do {
              lVar1 = *puVar4 + lVar11 * 8;
              lVar11 = lVar11 + 1;
              *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 0x10);
            } while (uVar16 - 2 != lVar11);
          }
          param_5[0xb] = uVar8;
          if (uVar8 != 0) {
            lVar11 = 0;
            uVar16 = 0;
            pbVar7 = *(byte **)*puVar4;
            bVar12 = *pbVar7;
            pbVar13 = pbVar7;
            if (bVar12 == 0) goto LAB_00e51974;
LAB_00e51940:
            do {
              pbVar7[lVar11] = bVar12;
              bVar12 = pbVar13[1];
              lVar11 = lVar11 + 1;
              pbVar13 = pbVar13 + 1;
            } while (bVar12 != 0);
            uVar8 = param_5[0xb];
            uVar16 = uVar16 + 1;
            if (uVar8 <= uVar16) goto LAB_00e5198c;
            do {
              pbVar7[lVar11] = 0x20;
              uVar8 = param_5[0xb];
              lVar11 = lVar11 + 1;
LAB_00e5198c:
              do {
                if (uVar8 <= uVar16) {
                  pbVar13 = &DAT_01977bbe;
                  if (pbVar7 != &DAT_01977bbe) {
                    pbVar7[lVar11] = 0;
                    pbVar13 = pbVar7;
                  }
                  goto LAB_00e519b0;
                }
                pbVar13 = *(byte **)(*puVar4 + uVar16 * 8);
                bVar12 = *pbVar13;
                if (bVar12 != 0) goto LAB_00e51940;
LAB_00e51974:
                uVar16 = uVar16 + 1;
              } while (uVar8 <= uVar16);
            } while( true );
          }
          goto LAB_00e519ac;
        }
        param_5[0xb] = 0;
        pbVar13 = (byte *)0x0;
      }
LAB_00e519b0:
      uVar16 = param_5[7];
    }
    uVar6 = FUN_00e519c0(uVar16,param_1,pbVar13);
LAB_00e5183c:
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00e51764;
  }
  return;
}

