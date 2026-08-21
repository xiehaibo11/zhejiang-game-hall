
undefined8 FT_Stroker_ParseOutline(undefined8 *param_1,short *param_2,char param_3)

{
  long lVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  if (param_2 == (short *)0x0) {
LAB_0106c14c:
    uVar5 = 0x14;
  }
  else if (param_1 == (undefined8 *)0x0) {
    uVar5 = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x19) = 0;
    if (0 < *param_2) {
      lVar7 = 0;
      uVar12 = 0;
      do {
        sVar2 = *(short *)(*(long *)(param_2 + 0xc) + lVar7 * 2);
        if (uVar12 < (uint)(int)sVar2) {
          lVar1 = *(long *)(param_2 + 4);
          plVar6 = (long *)(lVar1 + (ulong)uVar12 * 0x10);
                    /* try { // try from 0106be84 to 0116bebf has its CatchHandler @ 0106c1a8 */
          lStack_68 = plVar6[1];
          local_70 = *plVar6;
          plVar11 = (long *)(lVar1 + (long)sVar2 * 0x10);
          pbVar9 = (byte *)(*(long *)(param_2 + 8) + (ulong)uVar12);
          plVar10 = (long *)(lVar1 + (ulong)(uint)(int)sVar2 * 0x10);
          local_80 = *plVar11;
          lStack_78 = plVar11[1];
          if ((*pbVar9 & 3) == 0) {
                    /* try { // try from 0106bec0 to 0116becf has its CatchHandler @ 0106c1a4 */
            if ((*(byte *)(*(long *)(param_2 + 8) + (long)sVar2) & 3) == 1) {
              plVar10 = plVar10 + -2;
            }
            else {
              local_80 = local_70 + local_80;
              if (local_80 < 0) {
                local_80 = local_80 + 1;
              }
              local_80 = local_80 >> 1;
              lStack_78 = lStack_68 + lStack_78;
              if (lStack_78 < 0) {
                lStack_78 = lStack_78 + 1;
              }
              lStack_78 = lStack_78 >> 1;
            }
            plVar6 = plVar6 + -2;
            pbVar9 = pbVar9 + -1;
          }
          else {
            local_80 = local_70;
            lStack_78 = lStack_68;
            if ((*pbVar9 & 3) == 2) goto LAB_0106c14c;
          }
          *(undefined1 *)(param_1 + 5) = 1;
          param_1[3] = lStack_78;
          param_1[2] = local_80;
          *(char *)((long)param_1 + 0x29) = param_3;
          bVar3 = *(int *)(param_1 + 0xb) != 0;
          if ((*(int *)(param_1 + 0xb) == 0) && (param_3 != '\0')) {
            bVar3 = *(int *)((long)param_1 + 0x54) == 0;
          }
          *(bool *)(param_1 + 10) = bVar3;
                    /* try { // try from 0106bf50 to 0116c033 has its CatchHandler @ 0106c1a8 */
          param_1[8] = lStack_78;
          param_1[7] = local_80;
          *param_1 = 0;
          if (plVar6 < plVar10) {
            uVar5 = 0;
            do {
              pbVar8 = pbVar9 + 1;
              plVar11 = plVar6 + 2;
              if ((*pbVar8 & 3) == 0) {
                lStack_68 = plVar6[3];
                local_70 = *plVar11;
                do {
                  if (plVar10 <= plVar11) {
                    uVar5 = FT_Stroker_ConicTo(param_1,&local_70,&local_80);
                    goto LAB_0106c0dc;
                  }
                  pbVar8 = pbVar8 + 1;
                  plVar6 = plVar11 + 2;
                  lStack_88 = plVar11[3];
                  local_90 = *plVar6;
                  if ((*pbVar8 & 3) == 0) {
                    local_a0 = local_90 + local_70;
                    lStack_98 = lStack_88 + lStack_68;
                    if (local_a0 < 0) {
                      local_a0 = local_a0 + 1;
                    }
                    local_a0 = local_a0 >> 1;
                    if (lStack_98 < 0) {
                      lStack_98 = lStack_98 + 1;
                    }
                    lStack_98 = lStack_98 >> 1;
                    uVar5 = FT_Stroker_ConicTo(param_1,&local_70,&local_a0);
                    if ((int)uVar5 == 0) {
                      lStack_68 = lStack_88;
                      local_70 = local_90;
                      iVar4 = 10;
                    }
                    else {
                      iVar4 = 6;
                    }
                  }
                  else if ((*pbVar8 & 3) == 1) {
                    uVar5 = FT_Stroker_ConicTo(param_1,&local_70,&local_90);
                    iVar4 = 6;
                    if ((int)uVar5 == 0) {
                      iVar4 = 7;
                    }
                  }
                  else {
                    iVar4 = 5;
                  }
                  plVar11 = plVar6;
                } while (iVar4 == 10);
                if (iVar4 != 7) {
LAB_0106c134:
                  if ((iVar4 == 0) || (iVar4 == 4)) goto LAB_0106c0fc;
                  if (iVar4 != 5) {
                    return uVar5;
                  }
                  goto LAB_0106c14c;
                }
              }
              else if ((*pbVar8 & 3) == 1) {
                lStack_88 = plVar6[3];
                local_90 = *plVar11;
                uVar5 = FT_Stroker_LineTo(param_1,&local_90);
                plVar6 = plVar11;
                if ((int)uVar5 != 0) {
                  return uVar5;
                }
              }
              else {
                if ((plVar10 < plVar6 + 4) || ((pbVar9[2] & 3) != 2)) goto LAB_0106c14c;
                lStack_88 = plVar6[3];
                local_90 = *plVar11;
                plVar11 = plVar6 + 6;
                lStack_98 = plVar6[5];
                local_a0 = plVar6[4];
                if (plVar10 < plVar11) {
                    /* try { // try from 0106c114 to 0116c11b has its CatchHandler @ 0106c17c */
                  uVar5 = FT_Stroker_CubicTo(param_1,&local_90,&local_a0,&local_80);
                  iVar4 = (int)uVar5;
                  goto joined_r0x0106c128;
                }
                lStack_a8 = plVar6[7];
                local_b0 = *plVar11;
                    /* try { // try from 0106c0a4 to 0116c0ab has its CatchHandler @ 0106c190 */
                    /* try { // try from 0106c0ac to 0116c113 has its CatchHandler @ 0106bcbc */
                uVar5 = FT_Stroker_CubicTo(param_1,&local_90,&local_a0,&local_b0);
                if ((int)uVar5 != 0) {
                  iVar4 = 6;
                  goto LAB_0106c134;
                }
                pbVar8 = pbVar9 + 3;
                plVar6 = plVar11;
              }
              pbVar9 = pbVar8;
            } while (plVar6 < plVar10);
LAB_0106c0dc:
            iVar4 = (int)uVar5;
joined_r0x0106c128:
                    /* try { // try from 0106c128 to 0116c12f has its CatchHandler @ 0106c188 */
            if (iVar4 != 0) {
              return uVar5;
            }
          }
          if ((*(char *)(param_1 + 5) == '\0') &&
             (uVar5 = FT_Stroker_EndSubPath(param_1), (int)uVar5 != 0)) {
            return uVar5;
          }
        }
        uVar12 = (int)sVar2 + 1;
LAB_0106c0fc:
        lVar7 = lVar7 + 1;
      } while (lVar7 < *param_2);
    }
    uVar5 = 0;
  }
                    /* try { // try from 0106c16c to 0116c173 has its CatchHandler @ 0106c178 */
                    /* try { // try from 0106c174 to 0116c1db has its CatchHandler @ 0106bcbc */
                    /* catch() { ... } // from try @ 0106c16c with catch @ 0106c178 */
                    /* catch() { ... } // from try @ 0106c114 with catch @ 0106c17c */
  return uVar5;
}

