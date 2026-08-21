
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e35ba4(undefined8 param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined8 uVar5;
  byte *pbVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 extraout_var;
  void *pvVar15;
  void *pvVar16;
  size_t __n;
  byte *pbVar17;
  ulong uVar18;
  char *pcVar19;
  long *plVar20;
  int *piVar21;
  uint uVar22;
  ulong uVar23;
  char *pcVar24;
  uint uVar25;
  byte *pbVar26;
  char *pcVar27;
  char cVar28;
  byte *pbVar29;
  long lVar30;
  byte *pbVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 local_c50;
  uint local_c38;
  uint local_c34;
  byte *local_c30;
  byte *local_c28;
  byte *local_c20;
  int local_c18;
  undefined8 local_c10;
  code *local_c00;
  code *local_bf8;
  code *local_bf0;
  long local_be0;
  undefined1 local_bac;
  undefined1 local_baa;
  long *local_ba0;
  byte *local_b98;
  long lStack_b90;
  byte *local_b88;
  byte *pbStack_b80;
  undefined2 local_b78;
  undefined1 local_b76;
  undefined4 local_b70;
  undefined1 auStack_b68 [32];
  int local_b48;
  long local_b40;
  code *local_b10;
  int local_b08;
  undefined8 local_b00 [5];
  undefined8 local_ad8;
  code *local_aa8;
  undefined8 local_aa0 [3];
  long local_a88;
  undefined8 local_a78;
  undefined8 uStack_a70;
  code *local_a48;
  undefined1 auStack_a40 [88];
  code *local_9e8;
  undefined4 local_9e0;
  undefined8 local_9d8 [3];
  long local_9c0;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  code *local_980;
  undefined8 local_978;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_98;
  undefined4 local_90;
  uint local_78;
  undefined4 uStack_74;
  
  param_2[0] = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  lVar11 = FUN_00e19608(*(undefined8 *)(param_2 + 0xb0),"postscript-cmaps",1);
  *(long *)(param_2 + 0x308) = lVar11;
  lVar12 = FUN_00e19584(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"psaux");
  *(long *)(param_2 + 0x310) = lVar12;
  if (lVar12 == 0) {
    return 0xb;
  }
  uVar13 = FUN_00e19584(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"pshinter");
  lVar33 = *(long *)(param_2 + 0x310);
  *(undefined8 *)(param_2 + 0x370) = uVar13;
  memset(&local_c30,0,0x2c8);
  param_2[0x358] = 0xff;
  param_2[0x359] = 0xff;
  param_2[0x35a] = 0xff;
  param_2[0x35b] = 0xff;
  param_2[0x35c] = 0xff;
  param_2[0x35d] = 0xff;
  param_2[0x35e] = 0xff;
  param_2[0x35f] = 0xff;
  param_2[0x360] = 0;
  param_2[0x361] = 0;
  param_2[0x362] = 0;
  param_2[0x363] = 0;
  param_2[0x13c] = 4;
  param_2[0x13d] = 0;
  param_2[0x13e] = 0;
  param_2[0x13f] = 0;
  param_2[0x1f8] = 0x5c;
  param_2[0x1f9] = 0xf;
  param_2[0x1fa] = 0;
  param_2[0x1fb] = 0;
  param_2[0x1fc] = 0;
  param_2[0x1fd] = 0;
  param_2[0x1fe] = 0;
  param_2[0x1ff] = 0;
  param_2[0x1b0] = 7;
  param_2[0x1b1] = 0;
  param_2[0x1b2] = 0;
  param_2[0x1b3] = 0;
  param_2[0x1b4] = 1;
  param_2[0x1b5] = 0;
  param_2[0x1b6] = 0;
  param_2[0x1b7] = 0;
  param_2[0x1a8] = 0;
  param_2[0x1a9] = 0xa0;
  param_2[0x1aa] = 0x27;
  param_2[0x1ab] = 0;
  param_2[0x1ac] = 0;
  param_2[0x1ad] = 0;
  param_2[0x1ae] = 0;
  param_2[0x1af] = 0;
  uVar13 = *(undefined8 *)(param_2 + 0xb8);
  plVar20 = *(long **)(param_2 + 0xc0);
  (*(code *)**(undefined8 **)(lVar33 + 8))(&local_c30,0,0,uVar13);
  local_b76 = 0;
  local_b78 = 0;
  pbStack_b80 = (byte *)0x0;
  local_b88 = (byte *)0x0;
  lStack_b90 = 0;
  local_b98 = (byte *)0x0;
  local_ba0 = plVar20;
  local_c34 = FUN_00e39cf8(plVar20,"%!PS-AdobeFont",0xe);
  if (((local_c34 == 0) ||
      (((local_c34 & 0xff) == 2 &&
       (local_c34 = FUN_00e39cf8(plVar20,"%!FontType",10), local_c34 == 0)))) &&
     (local_c34 = FUN_00e1bb5c(plVar20,0), local_c34 == 0)) {
    sVar8 = FUN_00e1bcf8(plVar20,&local_78);
    if (local_78 != 0) {
LAB_00e35d24:
      local_c34 = local_78;
      goto LAB_00e35d28;
    }
    if (1 < (ushort)(sVar8 + 0x7fffU)) {
LAB_00e35ec4:
      local_c34 = 0;
      local_c34 = FUN_00e1bb5c(plVar20,0);
      if (local_c34 == 0) {
        lVar30 = plVar20[1];
        if (plVar20[5] == 0) goto LAB_00e35e88;
LAB_00e35ee8:
        local_b98 = (byte *)FUN_00e1388c(uVar13,lVar30,&local_c34);
        if ((local_c34 == 0) && (local_c34 = FUN_00e1bbd0(plVar20,local_b98,lVar30), local_c34 == 0)
           ) goto LAB_00e35f24;
      }
      goto LAB_00e35d28;
    }
    lVar30 = FUN_00e1dcb4(plVar20,&local_78);
    if (local_78 != 0) goto LAB_00e35d24;
    local_c34 = 0;
    if (sVar8 != -0x7fff) goto LAB_00e35ec4;
    local_b78 = CONCAT11(local_b78._1_1_,1);
    if (plVar20[5] != 0) goto LAB_00e35ee8;
LAB_00e35e88:
    local_c34 = 0;
    local_b98 = (byte *)(*plVar20 + plVar20[2]);
    local_b78 = CONCAT11(1,(char)local_b78);
    lStack_b90 = lVar30;
    local_c34 = FUN_00e1bc6c(plVar20,lVar30);
    lVar30 = lStack_b90;
    if (local_c34 != 0) goto LAB_00e35d28;
LAB_00e35f24:
    lStack_b90 = lVar30;
    local_c30 = local_b98;
    local_c38 = 0;
    local_c20 = local_b98 + lStack_b90;
    local_c28 = local_c30;
LAB_00e35d70:
    local_c38 = FUN_00e39710(param_2,&local_c30,local_b98,lStack_b90);
    plVar20 = local_ba0;
    uVar13 = local_c10;
    uVar22 = local_c38;
    uVar25 = local_c34;
    uVar5 = local_c10;
    if (local_c38 == 0) {
      local_c34 = 0;
      if ((char)local_b78 == '\0') {
        pbVar26 = local_b98 + lStack_b90;
        pbVar17 = local_b98;
        lVar30 = lStack_b90;
        pbVar31 = local_b98;
        do {
          pbVar31 = pbVar31 + 10;
          while ((((pbVar31[-10] != 0x65 || (pbVar26 <= pbVar31 + -1)) || (pbVar31[-9] != 0x65)) ||
                 (((pbVar31[-8] != 0x78 || (pbVar31[-7] != 0x65)) ||
                  (pbVar29 = pbVar17, pbVar6 = pbVar31, pbVar31[-6] != 99))))) {
            pbVar29 = pbVar31 + -9;
            pbVar31 = pbVar31 + 1;
            if (pbVar26 <= pbVar29) goto LAB_00e360c8;
          }
          while (local_c20 = pbVar6, local_c30 = pbVar29, local_c30 < pbVar31) {
            if (((local_c30 + 5 < pbVar31) && (*local_c30 == 0x65)) &&
               ((local_c30[1] == 0x65 &&
                (((local_c30[2] == 0x78 && (local_c30[3] == 0x65)) && (local_c30[4] == 99)))))) {
              local_c20 = local_b98 + lStack_b90;
              (*local_bf0)(&local_c30);
              pbVar26 = local_c20;
              pbVar31 = local_c30;
              __n = (long)local_c20 - (long)local_c30;
              pvVar15 = memchr(local_c30,10,__n);
              if (pvVar15 == (void *)0x0) {
                bVar7 = true;
                pbVar17 = local_b98;
              }
              else {
                pvVar16 = memchr(pbVar31,0xd,__n);
                bVar7 = pvVar16 < pvVar15;
                pbVar17 = local_b98;
              }
              goto joined_r0x00e36a58;
            }
            (*local_bf0)(&local_c30);
            pbVar17 = local_b98;
            lVar30 = lStack_b90;
            if (local_c18 != 0) break;
            (*local_bf8)(&local_c30);
            pbVar29 = local_c30;
            pbVar17 = local_b98;
            lVar30 = lStack_b90;
            pbVar6 = local_c20;
          }
          pbVar26 = pbVar17 + lVar30;
        } while (pbVar31 < pbVar26);
        goto LAB_00e360c8;
      }
      uVar14 = FUN_00e1d4a0(local_ba0);
      pbStack_b80 = (byte *)0x0;
      while (sVar8 = FUN_00e1bcf8(plVar20,&local_78), uVar22 = local_78, uVar25 = local_78,
            uVar5 = local_c10, local_78 == 0) {
        if (1 < (ushort)(sVar8 + 0x7fffU)) {
LAB_00e36048:
          local_c34 = 0;
          if (pbStack_b80 == (byte *)0x0) goto LAB_00e360c8;
          local_c34 = FUN_00e1bb5c(plVar20,uVar14);
          uVar22 = local_c34;
          uVar25 = local_c34;
          uVar5 = local_c10;
          if ((local_c34 == 0) &&
             (local_b88 = (byte *)FUN_00e1388c(uVar13,pbStack_b80,&local_c34), uVar22 = local_c34,
             uVar25 = local_c34, uVar5 = local_c10, local_c34 == 0)) {
            pbStack_b80 = (byte *)0x0;
            sVar8 = FUN_00e1bcf8(plVar20,&local_78);
            goto joined_r0x00e36098;
          }
          break;
        }
        lVar30 = FUN_00e1dcb4(plVar20,&local_78);
        uVar22 = local_78;
        uVar25 = local_78;
        uVar5 = local_c10;
        if (local_78 != 0) break;
        local_c34 = 0;
        if (sVar8 != -0x7ffe) goto LAB_00e36048;
        pbStack_b80 = pbStack_b80 + lVar30;
        local_c34 = FUN_00e1bc6c(plVar20,lVar30);
        uVar22 = local_c34;
        uVar25 = local_c34;
        uVar5 = local_c10;
        if (local_c34 != 0) break;
      }
    }
  }
  else {
LAB_00e35d28:
    uVar22 = local_c34;
    uVar25 = local_c34;
    uVar5 = local_c10;
    if (local_b78._1_1_ == '\0') {
      FUN_00e139fc(uVar13,local_b98);
      local_b98 = (byte *)0x0;
      local_c38 = local_c34;
      uVar22 = local_c34;
      uVar25 = local_c34;
      uVar5 = local_c10;
      if (local_c34 == 0) goto LAB_00e35d70;
    }
  }
  goto joined_r0x00e36814;
joined_r0x00e36a58:
  local_b98 = pbVar17;
  if (pbVar26 <= pbVar31) goto LAB_00e360c8;
  bVar3 = *pbVar31;
  if (((bVar3 != 9) && (bVar3 != 0x20)) && ((bVar3 != 10 && (!(bool)(bVar7 & bVar3 == 0xd))))) {
    local_b78._1_1_ = (char)((ushort)local_b78 >> 8);
    pbVar29 = pbVar17 + (lStack_b90 - (long)pbVar31);
    if (local_b78._1_1_ == '\0') {
      local_b76 = 1;
      local_b98 = (byte *)0x0;
      lStack_b90 = 0;
      local_b88 = pbVar17;
    }
    else {
      local_b88 = (byte *)FUN_00e1388c(uVar13,pbVar29 + 1,&local_c34);
      uVar22 = local_c34;
      uVar25 = local_c34;
      uVar5 = local_c10;
      if (local_c34 != 0) goto joined_r0x00e36814;
    }
    pbStack_b80 = pbVar29;
    if (pbVar31 + 3 < pbVar26) {
      if (((((*pbVar31 - 0x30 < 10) ||
            ((uVar22 = *pbVar31 - 0x41, uVar22 < 0x26 &&
             ((1L << ((ulong)uVar22 & 0x3f) & 0x3f0000003fU) != 0)))) &&
           ((pbVar31[1] - 0x30 < 10 ||
            ((uVar22 = pbVar31[1] - 0x41, uVar22 < 0x26 &&
             ((1L << ((ulong)uVar22 & 0x3f) & 0x3f0000003fU) != 0)))))) &&
          ((pbVar31[2] - 0x30 < 10 ||
           ((uVar22 = pbVar31[2] - 0x41, uVar22 < 0x26 &&
            ((1L << ((ulong)uVar22 & 0x3f) & 0x3f0000003fU) != 0)))))) &&
         ((pbVar31[3] - 0x30 < 10 ||
          ((uVar22 = pbVar31[3] - 0x41, uVar22 < 0x26 &&
           ((1L << ((ulong)uVar22 & 0x3f) & 0x3f0000003fU) != 0)))))) {
        local_c30 = pbVar31;
        (**(code **)(*(long *)(lVar33 + 8) + 0x30))(&local_c30,local_b88,pbVar29,&local_78,0);
        pbStack_b80 = (byte *)CONCAT44(uStack_74,local_78);
        local_b88[(long)pbStack_b80] = 0;
        goto LAB_00e360ac;
      }
    }
    memmove(local_b88,pbVar31,(size_t)pbVar29);
    goto LAB_00e360ac;
  }
  pbVar31 = pbVar31 + 1;
  goto joined_r0x00e36a58;
joined_r0x00e36098:
  if ((((local_78 != 0) || (1 < (ushort)(sVar8 + 0x7fffU))) ||
      (lVar30 = FUN_00e1dcb4(plVar20,&local_78), local_78 != 0)) ||
     (local_c34 = 0, sVar8 != -0x7ffe)) goto LAB_00e360a0;
  local_c34 = FUN_00e1bbd0(plVar20,local_b88 + (long)pbStack_b80,lVar30);
  uVar22 = local_c34;
  uVar25 = local_c34;
  uVar5 = local_c10;
  if (local_c34 != 0) goto joined_r0x00e36814;
  pbStack_b80 = pbStack_b80 + lVar30;
  sVar8 = FUN_00e1bcf8(plVar20,&local_78);
  goto joined_r0x00e36098;
LAB_00e360a0:
  local_c34 = 0;
LAB_00e360ac:
  (**(code **)(lVar33 + 0x20))(local_b88,pbStack_b80,0xd971);
  if ((byte *)0x3 < pbStack_b80) {
    *local_b88 = 0x20;
    local_b88[1] = 0x20;
    local_b88[2] = 0x20;
    local_b88[3] = 0x20;
    local_c30 = local_b88;
    local_c28 = local_b88;
    local_c20 = local_b88 + (long)pbStack_b80;
    local_c38 = local_c34;
    uVar22 = local_c34;
    uVar25 = local_c34;
    uVar5 = local_c10;
    if ((local_c34 == 0) &&
       (local_c38 = FUN_00e39710(param_2,&local_c30), uVar22 = local_c38, uVar25 = local_c34,
       uVar5 = local_c10, local_c38 == 0)) {
      piVar21 = *(int **)(param_2 + 0x350);
      param_2[0x140] = param_2[0x140] & 0xfe;
      if (piVar21 == (int *)0x0) {
LAB_00e3681c:
        param_2[0x360] = 0;
        param_2[0x361] = 0;
        param_2[0x362] = 0;
        param_2[0x363] = 0;
      }
      else {
        if (*piVar21 != 1 << (ulong)(piVar21[1] & 0x1f)) {
          FUN_00e3917c(param_2);
          piVar21 = *(int **)(param_2 + 0x350);
          if (piVar21 == (int *)0x0) goto LAB_00e3681c;
        }
        if ((piVar21[0xbe] != 0) && (piVar21[0xbe] != piVar21[1])) {
          piVar21[0xbe] = 0;
        }
        if ((*piVar21 == 0) || (uVar22 = piVar21[1], uVar22 == 0)) {
          FUN_00e3917c(param_2);
          piVar21 = *(int **)(param_2 + 0x350);
          if (piVar21 == (int *)0x0) goto LAB_00e3681c;
          uVar22 = piVar21[1];
          if (uVar22 != 0) goto LAB_00e366b4;
        }
        else {
LAB_00e366b4:
          uVar25 = 0;
          do {
            if ((char)piVar21[(ulong)uVar25 * 6 + 0x2a] == '\0') {
              FUN_00e3917c(param_2);
              if (*(long *)(param_2 + 0x350) == 0) goto LAB_00e3681c;
              break;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar22);
        }
        if (*(int *)(param_2 + 0x360) != 0) {
          uVar13 = FUN_00e13bcc(*(undefined8 *)(param_2 + 0xb8),8,0,*(int *)(param_2 + 0x360),0,
                                &local_c38);
          *(undefined8 *)(param_2 + 0x368) = uVar13;
          if (local_c38 != 0) {
            param_2[0x360] = 0;
            param_2[0x361] = 0;
            param_2[0x362] = 0;
            param_2[0x363] = 0;
            uVar22 = local_c38;
            uVar25 = local_c34;
            uVar5 = local_c10;
            goto joined_r0x00e36814;
          }
        }
      }
      *(int *)(param_2 + 0x280) = local_b08;
      if (local_9c0 != 0) {
        *(undefined4 *)(param_2 + 0x260) = local_9e0;
        *(undefined8 *)(param_2 + 0x248) = local_9d8[0];
        *(undefined8 *)(param_2 + 0x270) = uStack_9a8;
        *(undefined8 *)(param_2 + 0x268) = local_9b0;
        *(undefined8 *)(param_2 + 0x278) = local_978;
        local_9c0 = 0;
        local_978 = 0;
      }
      if ((*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) && (local_a88 == 0)) {
        local_c38 = 3;
      }
      local_a88 = 0;
      *(undefined8 *)(param_2 + 0x250) = local_aa0[0];
      *(undefined8 *)(param_2 + 0x298) = uStack_a70;
      *(undefined8 *)(param_2 + 0x290) = local_a78;
      *(undefined8 *)(param_2 + 600) = local_b00[0];
      *(undefined8 *)(param_2 + 0x288) = local_ad8;
      local_b00[0] = 0;
      local_ad8 = 0;
      if (*(int *)(param_2 + 0x220) == 1) {
        lVar33 = (long)local_b48;
        if (local_b48 < 1) {
LAB_00e36a00:
          local_c50 = 0;
        }
        else {
          if (local_b08 < 1) {
            lVar30 = 0;
            do {
              *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar30 * 2) = 0;
              *(char **)(*(long *)(param_2 + 0x240) + lVar30 * 8) = ".notdef";
              lVar30 = lVar30 + 1;
            } while (lVar33 != lVar30);
            goto LAB_00e36a00;
          }
          lVar30 = 0;
          local_c50 = 0;
          do {
            while( true ) {
              *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar30 * 2) = 0;
              *(char **)(*(long *)(param_2 + 0x240) + lVar30 * 8) = ".notdef";
              pcVar19 = *(char **)(local_b40 + lVar30 * 8);
              if (pcVar19 == (char *)0x0) break;
              lVar32 = *(long *)(param_2 + 0x288);
              lVar34 = 0;
              do {
                pcVar24 = *(char **)(lVar32 + lVar34 * 8);
                iVar9 = strcmp(pcVar19,pcVar24);
                if (iVar9 == 0) {
                  *(short *)(*(long *)(param_2 + 0x238) + lVar30 * 2) = (short)lVar34;
                  *(char **)(*(long *)(param_2 + 0x240) + lVar30 * 8) = pcVar24;
                  iVar9 = strcmp(".notdef",pcVar24);
                  if (iVar9 != 0) {
                    iVar9 = (int)lVar30;
                    if (local_c50._4_4_ <= lVar30) {
                      iVar9 = local_c50._4_4_;
                    }
                    if ((int)local_c50 <= lVar30) {
                      local_c50._0_4_ = (int)lVar30 + 1;
                    }
                    local_c50 = CONCAT44(iVar9,(int)local_c50);
                  }
                  goto LAB_00e369a0;
                }
                lVar34 = lVar34 + 1;
              } while (lVar34 < local_b08);
              lVar30 = lVar30 + 1;
              if (lVar30 == lVar33) goto LAB_00e36a04;
            }
LAB_00e369a0:
            lVar30 = lVar30 + 1;
          } while (lVar30 != lVar33);
        }
LAB_00e36a04:
        *(int *)(param_2 + 0x22c) = local_c50._4_4_;
        *(int *)(param_2 + 0x230) = (int)local_c50;
        *(undefined4 *)(param_2 + 0x228) = local_b70;
        if (1000 < *(uint *)(param_2 + 0x1b0)) goto LAB_00e369bc;
LAB_00e36a28:
        uVar1 = *(uint *)(param_2 + 0x1b4);
      }
      else {
        if (*(uint *)(param_2 + 0x1b0) < 0x3e9) goto LAB_00e36a28;
LAB_00e369bc:
        param_2[0x1b0] = 7;
        param_2[0x1b1] = 0;
        param_2[0x1b2] = 0;
        param_2[0x1b3] = 0;
        uVar1 = *(uint *)(param_2 + 0x1b4);
      }
      uVar22 = local_c38;
      uVar25 = local_c34;
      uVar5 = local_c10;
      if (1000 < uVar1) {
        param_2[0x1b4] = 1;
        param_2[0x1b5] = 0;
        param_2[0x1b6] = 0;
        param_2[0x1b7] = 0;
      }
    }
    goto joined_r0x00e36814;
  }
LAB_00e360c8:
  uVar22 = 3;
  uVar25 = 3;
  uVar5 = local_c10;
joined_r0x00e36814:
  local_c34 = uVar25;
  local_c38 = uVar22;
  local_c10 = uVar5;
  if (local_b10 != (code *)0x0) {
    (*local_b10)(auStack_b68);
  }
  if (local_a48 != (code *)0x0) {
    (*local_a48)(local_aa0);
  }
  if (local_aa8 != (code *)0x0) {
    (*local_aa8)(local_b00);
  }
  if (local_9e8 != (code *)0x0) {
    (*local_9e8)(auStack_a40);
  }
  if (local_980 != (code *)0x0) {
    (*local_980)(local_9d8);
  }
  FUN_00e14580(local_978,uVar5);
  FUN_00e139fc(uVar5,local_978);
  local_978 = 0;
  FUN_00e139fc(local_c10,local_b88);
  local_b88 = (byte *)0x0;
  if (local_b78._1_1_ == '\0') {
    FUN_00e139fc(local_c10,local_b98);
    local_b98 = (byte *)0x0;
  }
  (*local_c00)(&local_c30);
  if ((int)param_3 < 0) {
    return (ulong)local_c38;
  }
  if (local_c38 != 0) {
    return (ulong)local_c38;
  }
  if ((param_3 & 0xffff) != 0) {
    return 6;
  }
  uVar23 = *(ulong *)(param_2 + 0x10);
  *(long *)(param_2 + 0x20) = (long)*(int *)(param_2 + 0x280);
  uVar18 = uVar23 | 0xa11;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(ulong *)(param_2 + 0x10) = uVar18;
  if (param_2[0x128] != 0) {
    uVar18 = uVar23 | 0xa15;
    *(ulong *)(param_2 + 0x10) = uVar18;
  }
  lVar33 = *(long *)(param_2 + 0x350);
  if (lVar33 != 0) {
    *(ulong *)(param_2 + 0x10) = uVar18 | 0x100;
  }
  pcVar19 = *(char **)(param_2 + 0x110);
  *(char **)(param_2 + 0x28) = pcVar19;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  if (pcVar19 == (char *)0x0) {
    if (*(long *)(param_2 + 0x218) != 0) {
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x218);
    }
LAB_00e3627c:
    pcVar27 = "Regular";
    if (*(char **)(param_2 + 0x118) != (char *)0x0) {
      pcVar27 = *(char **)(param_2 + 0x118);
    }
  }
  else {
    pcVar24 = *(char **)(param_2 + 0x108);
    if (pcVar24 == (char *)0x0) goto LAB_00e3627c;
    cVar28 = *pcVar24;
    if (cVar28 == '\0') {
      pcVar27 = "Regular";
    }
    else {
LAB_00e3620c:
      do {
        cVar2 = *pcVar19;
        if (cVar2 == cVar28) {
          pcVar19 = pcVar19 + 1;
          cVar28 = pcVar24[1];
        }
        else {
          if ((cVar28 != '-') && (cVar28 != ' ')) {
            if ((cVar2 != ' ') && (cVar2 != '-')) {
              if ((cVar2 != '\0') || (*(char **)(param_2 + 0x30) = pcVar24, pcVar24 == (char *)0x0))
              goto LAB_00e3627c;
              goto LAB_00e36294;
            }
            pcVar19 = pcVar19 + 1;
            cVar28 = *pcVar24;
            pcVar27 = "Regular";
            if (cVar28 == '\0') break;
            goto LAB_00e3620c;
          }
          cVar28 = pcVar24[1];
        }
        pcVar24 = pcVar24 + 1;
        pcVar27 = "Regular";
      } while (cVar28 != '\0');
    }
  }
  *(char **)(param_2 + 0x30) = pcVar27;
LAB_00e36294:
  pcVar19 = *(char **)(param_2 + 0x118);
  lVar30 = *(long *)(param_2 + 0x120);
  *(ulong *)(param_2 + 0x18) = (ulong)(lVar30 != 0);
  if ((pcVar19 != (char *)0x0) &&
     ((iVar9 = strcmp(pcVar19,"Bold"), iVar9 == 0 || (iVar9 = strcmp(pcVar19,"Black"), iVar9 == 0)))
     ) {
    *(ulong *)(param_2 + 0x18) = (ulong)(lVar30 != 0) | 2;
  }
  uVar22 = (uint)*(ushort *)(param_2 + 0x88);
  *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x2d8) >> 0x10;
  *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x2e0) >> 0x10;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x2e8) + 0xffff >> 0x10;
  *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x2f0) + 0xffff >> 0x10;
  if (*(ushort *)(param_2 + 0x88) == 0) {
    uVar22 = 1000;
    param_2[0x88] = 0xe8;
    param_2[0x89] = 3;
  }
  sVar8 = (short)((ulong)(*(long *)(param_2 + 0x2f0) + 0xffff) >> 0x10);
  *(short *)(param_2 + 0x8a) = sVar8;
  sVar4 = (short)((ulong)*(long *)(param_2 + 0x2e0) >> 0x10);
  *(short *)(param_2 + 0x8c) = sVar4;
  uVar25 = (int)sVar8 - (int)sVar4;
  lVar30 = *(long *)(param_2 + 0x310);
  uVar22 = (uVar22 * 0xc) / 10;
  if ((int)uVar25 <= (int)(short)uVar22) {
    uVar25 = uVar22;
  }
  *(short *)(param_2 + 0x90) = (short)((ulong)(*(long *)(param_2 + 0x2e8) + 0xffff) >> 0x10);
  *(short *)(param_2 + 0x8e) = (short)uVar25;
  iVar9 = (*(code *)**(undefined8 **)(lVar30 + 0x18))
                    (&local_c30,param_2,0,0,*(undefined8 *)(param_2 + 0x288),lVar33,0,0,FUN_00e394cc
                    );
  if (iVar9 == 0) {
    local_baa = 1;
    local_bac = 0;
    local_194 = *(undefined4 *)(param_2 + 0x260);
    uStack_188 = *(undefined8 *)(param_2 + 0x270);
    local_190 = *(undefined8 *)(param_2 + 0x268);
    local_180 = *(undefined8 *)(param_2 + 0x278);
    local_98 = *(undefined8 *)(param_2 + 0x368);
    local_90 = *(undefined4 *)(param_2 + 0x360);
    if (*(int *)(param_2 + 0x280) < 1) {
      lVar33 = 0;
    }
    else {
      iVar9 = 0;
      lVar34 = 0;
      do {
        local_c34 = local_c34 & 0xffffff00;
        iVar10 = FUN_00e3952c(&local_c30,iVar9,&local_78,&local_c34);
        if ((iVar10 == 0) &&
           (plVar20 = *(long **)(*(long *)(local_c28 + 0xf0) + 0x68), plVar20 != (long *)0x0)) {
          (**(code **)(*plVar20 + 8))(plVar20[1],&local_78);
        }
        bVar7 = iVar9 != 0;
        iVar9 = iVar9 + 1;
        lVar33 = local_be0;
        if (local_be0 <= lVar34 && bVar7) {
          lVar33 = lVar34;
        }
        lVar34 = lVar33;
      } while (iVar9 < *(int *)(param_2 + 0x280));
    }
    (**(code **)(*(long *)(lVar30 + 0x18) + 8))(&local_c30);
    FT_RoundFix(lVar33);
    *(undefined2 *)(param_2 + 0x90) = extraout_var;
  }
  *(undefined2 *)(param_2 + 0x92) = *(undefined2 *)(param_2 + 0x8e);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x12a);
  if (lVar11 == 0) {
switchD_00e3650c_default:
    uVar18 = 0;
  }
  else {
    plVar20 = *(long **)(lVar12 + 0x40);
    local_c28 = (byte *)0x10003756e6963;
    local_c30 = param_2;
    uVar18 = FUN_00e17cf8(plVar20[3],0,&local_c30,0);
    if ((((uint)uVar18 != 0) && (uVar22 = (uint)uVar18 & 0xff, uVar22 != 0xa3)) && (uVar22 != 7)) {
      return uVar18;
    }
    switch(*(undefined4 *)(param_2 + 0x220)) {
    case 1:
      local_c28 = (byte *)0x2000741444243;
      lVar11 = plVar20[2];
      if (lVar11 == 0) {
        return 0;
      }
      break;
    case 2:
      local_c28 = (byte *)0x741444f42;
      lVar11 = *plVar20;
      if (lVar11 == 0) {
        return 0;
      }
      break;
    case 3:
      local_c28 = (byte *)0x300076c617431;
      lVar11 = plVar20[3];
      if (lVar11 == 0) {
        return 0;
      }
      break;
    case 4:
      local_c28 = (byte *)0x1000741444245;
      lVar11 = plVar20[1];
      if (lVar11 == 0) {
        return 0;
      }
      break;
    default:
      goto switchD_00e3650c_default;
    }
    uVar18 = FUN_00e17cf8(lVar11,0,&local_c30,0);
  }
  return uVar18;
}

