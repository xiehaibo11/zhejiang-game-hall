
void FUN_00149bec(long *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  bool bVar22;
  bool bVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  char *pcVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  char *pcVar32;
  long lVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  void *pvVar37;
  undefined1 auVar38 [16];
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  ulong local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pcVar32 = (char *)*param_1;
  pcVar28 = (char *)param_1[1];
  if ((pcVar28 == pcVar32) || ((cVar2 = *pcVar32, cVar2 != 'T' && (cVar2 != 'G')))) {
    local_60 = param_1[0x5b] - param_1[0x5a] >> 3;
    local_70 = (local_70 >> 0x10 & 0xffff) << 0x10;
    local_68[0] = 0;
    puVar26 = (undefined8 *)FUN_0014b4c0(param_1,&local_70);
    auVar18._8_8_ = local_90._8_8_;
    auVar18._0_8_ = local_90._0_8_;
    auVar17._8_8_ = local_90._8_8_;
    auVar17._0_8_ = local_90._0_8_;
    auVar16._8_8_ = local_90._8_8_;
    auVar16._0_8_ = local_90._0_8_;
    auVar15._8_8_ = local_90._8_8_;
    auVar15._0_8_ = local_90._0_8_;
    auVar14._8_8_ = local_90._8_8_;
    auVar14._0_8_ = local_90._0_8_;
    auVar13._8_8_ = local_90._8_8_;
    auVar13._0_8_ = local_90._0_8_;
    auVar12._8_8_ = local_90._8_8_;
    auVar12._0_8_ = local_90._0_8_;
    auVar11._8_8_ = local_90._8_8_;
    auVar11._0_8_ = local_90._0_8_;
    auVar10._8_8_ = local_90._8_8_;
    auVar10._0_8_ = local_90._0_8_;
    auVar9._8_8_ = local_90._8_8_;
    auVar9._0_8_ = local_90._0_8_;
    auVar8._8_8_ = local_90._8_8_;
    auVar8._0_8_ = local_90._0_8_;
    auVar7._8_8_ = local_90._8_8_;
    auVar7._0_8_ = local_90._0_8_;
    auVar6._8_8_ = local_90._8_8_;
    auVar6._0_8_ = local_90._0_8_;
    auVar38._8_8_ = local_90._8_8_;
    auVar38._0_8_ = local_90._0_8_;
    local_78 = puVar26;
    local_90 = auVar18;
    if (puVar26 == (undefined8 *)0x0) goto LAB_00149fd4;
    lVar24 = param_1[0x5a];
    uVar25 = param_1[0x5b] - lVar24 >> 3;
    if (uVar25 <= local_60) {
LAB_00149dc4:
      param_1[0x5b] = lVar24 + local_60 * 8;
LAB_00149dcc:
      pbVar29 = (byte *)*param_1;
      pbVar1 = (byte *)param_1[1];
      if (pbVar1 != pbVar29) {
        uVar4 = *pbVar29 - 0x2e;
        if ((0x31 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0x2000000800001U) == 0)) {
          local_80 = 0;
          local_90 = auVar38;
          if (((((0xc < (ulong)((long)pbVar1 - (long)pbVar29)) &&
                (((local_90 = auVar6, *pbVar29 == 0x55 && (local_90 = auVar7, pbVar29[1] == 0x61))
                 && (local_90 = auVar8, pbVar29[2] == 0x39)))) &&
               (((local_90 = auVar9, pbVar29[3] == 0x65 && (local_90 = auVar10, pbVar29[4] == 0x6e))
                && (local_90 = auVar11, pbVar29[5] == 0x61)))) &&
              ((local_90 = auVar12, pbVar29[6] == 0x62 && (local_90 = auVar13, pbVar29[7] == 0x6c)))
              ) && (((local_90 = auVar14, pbVar29[8] == 0x65 &&
                     (((local_90 = auVar15, pbVar29[9] == 0x5f &&
                       (local_90 = auVar16, pbVar29[10] == 0x69)) &&
                      (local_90 = auVar17, pbVar29[0xb] == 0x66)))) &&
                    (local_90 = auVar18, pbVar29[0xc] == 0x49)))) {
            lVar24 = param_1[2];
            lVar27 = param_1[3];
            pbVar29 = pbVar29 + 0xd;
            *param_1 = (long)pbVar29;
            if (pbVar29 == pbVar1) goto LAB_00149ed8;
            while (*pbVar29 != 0x45) {
LAB_00149ed8:
              do {
                local_90._0_8_ = FUN_0014c080(param_1);
                puVar26 = (undefined8 *)0x0;
                if (local_90._0_8_ == 0) goto LAB_00149fd4;
                FUN_0014c270(param_1 + 2,local_90);
                pbVar29 = (byte *)*param_1;
              } while (pbVar29 == (byte *)param_1[1]);
            }
            lVar24 = (lVar27 - lVar24 >> 3) * 8;
            *param_1 = (long)(pbVar29 + 1);
            local_90 = FUN_00156e64(param_1,param_1[2] + lVar24,param_1[3]);
            param_1[3] = param_1[2] + lVar24;
            local_80 = FUN_0014c334(param_1,local_90);
          }
          local_98 = 0;
          if (((char)local_70 == '\0') && (local_70._1_1_ != '\0')) {
            local_98 = FUN_0014a548(param_1);
            puVar26 = (undefined8 *)0x0;
            if (local_98 == 0) goto LAB_00149fd4;
          }
          pcVar32 = (char *)*param_1;
          if ((pcVar32 == (char *)param_1[1]) || (*pcVar32 != 'v')) {
            lVar24 = param_1[2];
            lVar27 = param_1[3];
            do {
              lVar33 = FUN_0014a548(param_1);
              auVar20._8_8_ = local_90._8_8_;
              auVar20._0_8_ = lVar33;
              puVar26 = (undefined8 *)0x0;
              local_90 = auVar20;
              if (lVar33 == 0) goto LAB_00149fd4;
              local_90._0_8_ = lVar33;
              FUN_0014c270(param_1 + 2,local_90);
              auVar19._8_8_ = local_90._8_8_;
              auVar19._0_8_ = local_90._0_8_;
            } while (((byte *)param_1[1] != (byte *)*param_1) &&
                    ((uVar4 = *(byte *)*param_1 - 0x2e, 0x31 < uVar4 ||
                     (local_90 = auVar19, (1L << ((ulong)uVar4 & 0x3f) & 0x2000000800001U) == 0))));
            lVar24 = (lVar27 - lVar24 >> 3) * 8;
            local_90 = FUN_00156e64(param_1,param_1[2] + lVar24,param_1[3]);
            param_1[3] = param_1[2] + lVar24;
          }
          else {
            *param_1 = (long)(pcVar32 + 1);
            local_90 = ZEXT816(0);
          }
          puVar26 = (undefined8 *)
                    FUN_0014c3c4(param_1,&local_98,&local_78,local_90,&local_80,(ulong)&local_70 | 4
                                 ,local_68);
        }
      }
      goto LAB_00149fd4;
    }
    puVar30 = (undefined8 *)param_1[0x53];
    if ((puVar30 != (undefined8 *)param_1[0x54]) &&
       (plVar34 = (long *)*puVar30, plVar34 != (long *)0x0)) {
      lVar33 = *(long *)(lVar24 + local_60 * 8);
      lVar27 = *plVar34;
      uVar35 = *(ulong *)(lVar33 + 0x10);
      uVar36 = local_60;
      if (uVar35 < (ulong)(plVar34[1] - lVar27 >> 3)) {
        do {
          uVar36 = uVar36 + 1;
          *(undefined8 *)(lVar33 + 0x18) = *(undefined8 *)(lVar27 + uVar35 * 8);
          if (uVar25 == uVar36) goto LAB_00149dc4;
          plVar34 = (long *)*puVar30;
          if (plVar34 == (long *)0x0) break;
          lVar33 = *(long *)(lVar24 + uVar36 * 8);
          lVar27 = *plVar34;
          uVar35 = *(ulong *)(lVar33 + 0x10);
        } while (uVar35 < (ulong)(plVar34[1] - lVar27 >> 3));
        if (uVar25 <= uVar36) goto LAB_00149dcc;
      }
    }
    goto LAB_00149fd0;
  }
  if (pcVar28 == pcVar32) goto LAB_00149fd0;
  if (cVar2 == 'G') {
    if (1 < (ulong)((long)pcVar28 - (long)pcVar32)) {
      if (pcVar32[1] == 'R') {
        *param_1 = (long)(pcVar32 + 2);
        lVar24 = FUN_0014b4c0(param_1,0);
        auVar21._8_8_ = local_90._8_8_;
        auVar21._0_8_ = local_90._0_8_;
        puVar26 = (undefined8 *)0x0;
        if (lVar24 == 0) goto LAB_00149fd4;
        pbVar29 = (byte *)*param_1;
        pbVar1 = (byte *)param_1[1];
        if ((pbVar1 != pbVar29) && (bVar3 = *pbVar29, 0x2f < bVar3)) {
          bVar23 = bVar3 < 0x3a;
          bVar22 = bVar3 - 0x41 < 0x1a;
          if (bVar23 || bVar22) {
            do {
              pbVar31 = pbVar29 + 1;
              if ((0x39 < bVar3) && (0x19 < (byte)(bVar3 + 0xbf))) {
                if ((pbVar29 != pbVar1) && (bVar3 == 0x5f)) goto LAB_0014a24c;
                if (!bVar23 && !bVar22) goto LAB_0014a254;
                goto LAB_00149fd0;
              }
              *param_1 = (long)pbVar31;
              if (pbVar31 == pbVar1) goto LAB_00149fd0;
              bVar3 = *pbVar31;
              puVar26 = (undefined8 *)0x0;
              pbVar29 = pbVar31;
              local_90 = auVar21;
            } while (0x2f < bVar3);
            goto LAB_00149fd4;
          }
          if ((pbVar29 != pbVar1) && (bVar3 == 0x5f)) {
LAB_0014a24c:
            *param_1 = (long)(pbVar29 + 1);
          }
        }
LAB_0014a254:
        pvVar37 = (void *)param_1[0x266];
        lVar27 = *(long *)((long)pvVar37 + 8);
        puVar26 = pvVar37;
        if (0xfef < lVar27 + 0x30U) {
          puVar26 = malloc(0x1000);
          if (puVar26 == (void *)0x0) {
LAB_0014a404:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar27 = 0;
          *puVar26 = pvVar37;
          puVar26[1] = 0;
          param_1[0x266] = (long)puVar26;
        }
        pcVar32 = "reference temporary for ";
        *(long *)((long)puVar26 + 8) = lVar27 + 0x30;
        puVar26 = (undefined8 *)((long)puVar26 + lVar27 + 0x10);
        *puVar26 = &PTR_FUN_00167100;
        pcVar28 = "";
      }
      else {
        if (pcVar32[1] != 'V') goto LAB_00149fd0;
        *param_1 = (long)(pcVar32 + 2);
        lVar24 = FUN_0014b4c0(param_1,0);
        puVar26 = (undefined8 *)0x0;
        if (lVar24 == 0) goto LAB_00149fd4;
        pvVar37 = (void *)param_1[0x266];
        lVar27 = *(long *)((long)pvVar37 + 8);
        puVar26 = pvVar37;
        if (0xfef < lVar27 + 0x30U) {
          puVar26 = malloc(0x1000);
          if (puVar26 == (void *)0x0) goto LAB_0014a404;
          lVar27 = 0;
          *puVar26 = pvVar37;
          puVar26[1] = 0;
          param_1[0x266] = (long)puVar26;
        }
        pcVar32 = "guard variable for ";
        *(long *)((long)puVar26 + 8) = lVar27 + 0x30;
        puVar26 = (undefined8 *)((long)puVar26 + lVar27 + 0x10);
        *puVar26 = &PTR_FUN_00167100;
        pcVar28 = "";
      }
      *(undefined4 *)(puVar26 + 1) = 0x1010114;
      puVar26[2] = pcVar32;
      puVar26[3] = pcVar28;
      puVar26[4] = lVar24;
      goto LAB_00149fd4;
    }
    goto LAB_00149fd0;
  }
  if (cVar2 != 'T') goto LAB_00149fd0;
  if ((ulong)((long)pcVar28 - (long)pcVar32) < 2) {
code_r0x00149fa0:
    pcVar32 = pcVar32 + 1;
    *param_1 = (long)pcVar32;
    if (pcVar28 == pcVar32) {
      bVar23 = false;
    }
    else {
      bVar23 = *pcVar32 == 'v';
    }
    uVar25 = FUN_0014c71c(param_1);
    if ((uVar25 & 1) == 0) {
      local_70 = FUN_00149bec(param_1);
      puVar26 = (undefined8 *)0x0;
      if (local_70 != 0) {
        if (bVar23) {
          puVar26 = (undefined8 *)FUN_0014cad0();
        }
        else {
          puVar26 = (undefined8 *)FUN_0014cb70(param_1,&local_70);
        }
      }
      goto LAB_00149fd4;
    }
    goto LAB_00149fd0;
  }
  switch(pcVar32[1]) {
  case 'C':
    *param_1 = (long)(pcVar32 + 2);
    local_70 = FUN_0014a548(param_1);
    puVar26 = (undefined8 *)0x0;
    if (local_70 == 0) break;
    auVar38 = FUN_0014a40c(param_1,1);
    if (((auVar38._0_8_ != auVar38._8_8_) &&
        (pcVar32 = (char *)*param_1, pcVar32 != (char *)param_1[1])) && (*pcVar32 == '_')) {
      *param_1 = (long)(pcVar32 + 1);
      local_90._0_8_ = FUN_0014a548(param_1);
      puVar26 = (undefined8 *)0x0;
      if (local_90._0_8_ != 0) {
        puVar26 = (undefined8 *)FUN_0014c998(param_1,local_90,&local_70);
      }
      break;
    }
    goto LAB_00149fd0;
  default:
    goto code_r0x00149fa0;
  case 'H':
    *param_1 = (long)(pcVar32 + 2);
    local_70 = FUN_0014b4c0(param_1,0);
    puVar26 = (undefined8 *)0x0;
    if (local_70 != 0) {
      puVar26 = (undefined8 *)FUN_0014ca30(param_1,&local_70);
    }
    break;
  case 'I':
    *param_1 = (long)(pcVar32 + 2);
    local_70 = FUN_0014a548(param_1);
    puVar26 = (undefined8 *)0x0;
    if (local_70 != 0) {
      puVar26 = (undefined8 *)FUN_0014c5dc(param_1,&local_70);
    }
    break;
  case 'S':
    *param_1 = (long)(pcVar32 + 2);
    local_70 = FUN_0014a548(param_1);
    puVar26 = (undefined8 *)0x0;
    if (local_70 != 0) {
      puVar26 = (undefined8 *)FUN_0014c67c(param_1,&local_70);
    }
    break;
  case 'T':
    *param_1 = (long)(pcVar32 + 2);
    local_70 = FUN_0014a548(param_1);
    puVar26 = (undefined8 *)0x0;
    if (local_70 != 0) {
      puVar26 = (undefined8 *)FUN_0014c53c(param_1,&local_70);
    }
    break;
  case 'V':
    *param_1 = (long)(pcVar32 + 2);
    local_70 = FUN_0014a548(param_1);
    puVar26 = (undefined8 *)0x0;
    if (local_70 != 0) {
      puVar26 = (undefined8 *)FUN_0014c49c(param_1,&local_70);
    }
    break;
  case 'W':
    *param_1 = (long)(pcVar32 + 2);
    local_70 = FUN_0014b4c0(param_1,0);
    puVar26 = (undefined8 *)0x0;
    if (local_70 != 0) {
      puVar26 = (undefined8 *)FUN_0014a4a0(param_1,"thread-local wrapper routine for ",&local_70);
    }
    break;
  case 'c':
    *param_1 = (long)(pcVar32 + 2);
    uVar25 = FUN_0014c71c(param_1);
    if (((uVar25 & 1) == 0) && (uVar25 = FUN_0014c71c(param_1), (uVar25 & 1) == 0)) {
      local_70 = FUN_00149bec(param_1);
      puVar26 = (undefined8 *)0x0;
      if (local_70 != 0) {
        puVar26 = (undefined8 *)FUN_0014c8f8(param_1,&local_70);
      }
      break;
    }
LAB_00149fd0:
    puVar26 = (undefined8 *)0x0;
  }
LAB_00149fd4:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar26);
}

