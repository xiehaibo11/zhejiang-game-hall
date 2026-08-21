
/* WARNING: Type propagation algorithm not settling */

int FUN_00e5657c(long param_1,undefined8 *param_2,uint param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  void *pvVar27;
  void *__s2;
  size_t __n;
  void *pvVar28;
  uint local_100;
  ulong local_f8;
  uint local_d4;
  undefined8 local_d0;
  ulong local_c8;
  long local_c0;
  ulong local_b8;
  undefined2 local_b0;
  ulong local_a8;
  ulong local_98;
  long local_90;
  long local_88;
  ulong local_80;
  long local_78;
  uint local_6c [3];
  
  lVar16 = param_2[0x16];
  puVar26 = (undefined8 *)param_2[0x6e];
  uVar25 = *(undefined8 *)(lVar16 + 8);
  if (puVar26 == (undefined8 *)0x0) {
    puVar26 = (undefined8 *)FUN_00e19584(uVar25,&DAT_01975980);
    if (puVar26 == (undefined8 *)0x0) {
      return 0xb;
    }
    param_2[0x6e] = puVar26;
    lVar16 = param_2[0x16];
    param_2[0x68] = *puVar26;
  }
  uVar8 = FUN_00e19608(lVar16,"postscript-cmaps",1);
  param_2[0x6f] = uVar8;
  if (param_2[0x70] == 0) {
    uVar8 = FT_Get_Module(uVar25,"truetype");
    uVar8 = FUN_00e19608(uVar8,"multi-masters",0);
    param_2[0x70] = uVar8;
    lVar16 = param_2[0x71];
  }
  else {
    lVar16 = param_2[0x71];
  }
  if (lVar16 == 0) {
    uVar25 = FT_Get_Module(uVar25,"truetype");
    uVar25 = FUN_00e19608(uVar25,"metrics-variations",0);
    param_2[0x71] = uVar25;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  puVar11 = param_2 + 0x1f;
  *puVar11 = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  uVar25 = FUN_00e1d4a0(param_1);
  lVar16 = FUN_00e1c3a4(param_1,&local_d4);
  while( true ) {
    if (local_d4 != 0) {
      return local_d4;
    }
    if (lVar16 != 0x774f4646) break;
    local_d4 = FUN_00e1bb5c(param_1,uVar25);
    if (local_d4 != 0) {
      return local_d4;
    }
    uVar25 = *(undefined8 *)(param_1 + 0x38);
    local_6c[0] = 0;
    local_6c[0] = FUN_00e1dd74(param_1,&DAT_01977da8,&local_c8);
    if (local_6c[0] != 0) {
      return local_6c[0];
    }
    if (local_c0 == 0x74746366) {
      return 8;
    }
    if (local_c0 == 0x774f4646) {
      return 8;
    }
    if (((local_b8 != *(ulong *)(param_1 + 8)) || (uVar17 = (ulong)local_b0, uVar17 == 0)) ||
       (local_b8 <= uVar17 * 0x14 + 0x2c)) {
      return 8;
    }
    uVar17 = uVar17 << 4 | 0xc;
    if (local_a8 <= uVar17) {
      return 8;
    }
    if ((local_a8 & 3) != 0) {
      return 8;
    }
    if (local_98 == 0) {
      if (local_88 != 0 || local_90 != 0) {
        return 8;
      }
    }
    else if ((local_90 != 0) && (local_88 == 0)) {
      return 8;
    }
    if ((local_80 == 0) && (local_78 != 0)) {
      return 8;
    }
    puVar9 = (undefined1 *)FUN_00e1388c(uVar25,uVar17,local_6c);
    if (local_6c[0] == 0) {
      lVar16 = FUN_00e1388c(uVar25,0x50,local_6c);
      if (local_6c[0] != 0) goto LAB_00e567b8;
      uVar14 = (uint)local_b0;
      if (uVar14 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0;
        do {
          uVar14 = uVar14 >> 1;
          iVar6 = iVar6 + 1;
        } while (uVar14 != 0);
      }
      uVar14 = iVar6 - 1;
      iVar6 = 0x10 << (ulong)(uVar14 & 0x1f);
      *puVar9 = (char)((ulong)local_c0 >> 0x18);
      iVar3 = (uint)local_b0 * 0x10 - iVar6;
      puVar9[1] = (char)((ulong)local_c0 >> 0x10);
      puVar9[2] = (char)((ulong)local_c0 >> 8);
      puVar9[3] = (char)local_c0;
      puVar9[4] = local_b0._1_1_;
      puVar9[7] = (char)iVar6;
      puVar9[8] = (char)(uVar14 >> 8);
      puVar9[6] = (char)((uint)iVar6 >> 8);
      puVar9[9] = (char)uVar14;
      puVar9[10] = (char)((uint)iVar3 >> 8);
      puVar9[5] = (undefined1)local_b0;
      puVar9[0xb] = (char)iVar3;
      puVar13 = (ulong *)FUN_00e13bcc(uVar25,0x30,0,local_b0,0,local_6c);
      if (local_6c[0] == 0) {
        pvVar27 = (void *)FUN_00e13bcc(uVar25,8,0,local_b0,0,local_6c);
        if ((local_6c[0] == 0) &&
           (local_6c[0] = FUN_00e1d718(param_1,(ulong)local_b0 * 0x14), local_6c[0] == 0)) {
          if (local_b0 != 0) {
            uVar17 = 0;
            puVar21 = puVar13;
            uVar12 = 0;
            do {
              uVar10 = FUN_00e1da20(param_1);
              *puVar21 = uVar10;
              uVar10 = FUN_00e1da20(param_1);
              puVar21[1] = uVar10;
              uVar10 = FUN_00e1da20(param_1);
              puVar21[2] = uVar10;
              uVar10 = FUN_00e1da20(param_1);
              puVar21[3] = uVar10;
              uVar10 = FUN_00e1da20(param_1);
              uVar18 = *puVar21;
              puVar21[4] = uVar10;
              if (uVar18 <= uVar12) {
                FUN_00e1d90c(param_1);
                goto LAB_00e56d4c;
              }
              *(ulong **)((long)pvVar27 + uVar17 * 8) = puVar21;
              uVar17 = uVar17 + 1;
              puVar21 = puVar21 + 6;
              uVar12 = uVar18;
            } while (uVar17 < local_b0);
          }
          FUN_00e1d90c(param_1);
          qsort(pvVar27,(ulong)local_b0,8,FUN_00e5b4dc);
          uVar10 = (ulong)local_b0;
          uVar17 = uVar10 * 0x14 + 0x2c;
          uVar12 = uVar10 << 4 | 0xc;
          if (uVar10 == 0) {
            uVar17 = 0x2c;
            uVar18 = 0xc;
          }
          else {
            uVar20 = 0;
            uVar18 = uVar12;
            do {
              lVar22 = *(long *)((long)pvVar27 + uVar20 * 8);
              if (*(ulong *)(lVar22 + 8) != uVar17) goto LAB_00e56d4c;
              uVar23 = *(ulong *)(lVar22 + 0x10);
              if ((((local_b8 < uVar23) || (local_b8 - uVar23 < uVar17)) ||
                  (uVar24 = *(ulong *)(lVar22 + 0x18), uVar24 < uVar23)) ||
                 ((local_a8 < uVar24 || (local_a8 - uVar24 < uVar18)))) goto LAB_00e56d4c;
              *(ulong *)(lVar22 + 0x28) = uVar18;
              uVar20 = uVar20 + 1;
              uVar17 = ((ulong)((int)uVar23 + 3) & 0xfffffffc) + uVar17;
              uVar18 = ((ulong)((int)uVar24 + 3) & 0xfffffffc) + uVar18;
            } while (uVar20 < uVar10);
          }
          if (((local_98 == 0) ||
              ((local_98 == uVar17 && (uVar17 = local_90 + uVar17, uVar17 <= local_b8)))) &&
             (((local_80 == 0 ||
               ((local_80 == ((ulong)((int)uVar17 + 3) & 0xfffffffc) &&
                (uVar17 = local_78 + local_80, uVar17 <= local_b8)))) &&
              ((uVar17 == local_b8 && (uVar18 == local_a8)))))) {
            puVar9 = (undefined1 *)FUN_00e13bcc(uVar25,1,uVar12,uVar18,puVar9,local_6c);
            if (local_6c[0] == 0) {
              if (local_b0 != 0) {
                lVar22 = 0xc;
                local_f8 = 0;
                puVar21 = puVar13 + 5;
                do {
                  puVar1 = puVar9 + lVar22;
                  *puVar1 = (char)(puVar21[-5] >> 0x18);
                  puVar1[1] = (char)(puVar21[-5] >> 0x10);
                  puVar1[2] = (char)(puVar21[-5] >> 8);
                  puVar1[3] = (char)puVar21[-5];
                  puVar1[4] = (char)(puVar21[-1] >> 0x18);
                  puVar1[5] = (char)(puVar21[-1] >> 0x10);
                  puVar1[6] = (char)(puVar21[-1] >> 8);
                  puVar1[7] = (char)puVar21[-1];
                  puVar1[8] = (char)(*puVar21 >> 0x18);
                  puVar1[9] = (char)(*puVar21 >> 0x10);
                  puVar1[10] = (char)(*puVar21 >> 8);
                  puVar1[0xb] = (char)*puVar21;
                  puVar1[0xc] = (char)(puVar21[-2] >> 0x18);
                  puVar1[0xd] = (char)(puVar21[-2] >> 0x10);
                  puVar1[0xe] = (char)(puVar21[-2] >> 8);
                  puVar1[0xf] = (char)puVar21[-2];
                  local_6c[0] = FUN_00e1bb5c(param_1,puVar21[-4]);
                  if ((local_6c[0] != 0) ||
                     (local_6c[0] = FUN_00e1d718(param_1,puVar21[-3]), local_6c[0] != 0))
                  goto LAB_00e567c0;
                  if (puVar21[-3] == puVar21[-2]) {
                    memcpy(puVar9 + *puVar21,*(void **)(param_1 + 0x40),puVar21[-3]);
                  }
                  else {
                    local_d0 = puVar21[-2];
                    local_6c[0] = FT_Gzip_Uncompress(uVar25,puVar9 + *puVar21,&local_d0,
                                                     *(undefined8 *)(param_1 + 0x40),puVar21[-3]);
                    if (local_6c[0] != 0) goto LAB_00e567c0;
                    if (local_d0 != puVar21[-2]) goto LAB_00e56d4c;
                  }
                  FUN_00e1d90c(param_1);
                  uVar17 = puVar21[-2] + *puVar21;
                  if ((uVar17 & 3) != 0) {
                    memset(puVar9 + uVar17,0,
                           ((ulong)(uint)~((int)*puVar21 + (int)puVar21[-2]) & 3) + 1);
                  }
                  puVar21 = puVar21 + 6;
                  local_f8 = local_f8 + 1;
                  lVar22 = lVar22 + 0x10;
                } while (local_f8 < local_b0);
              }
              FUN_00e14c44(lVar16,puVar9,local_a8);
              uVar19 = *(undefined8 *)(param_1 + 0x38);
              *(code **)(lVar16 + 0x30) = FUN_00e5b4fc;
              *(undefined8 *)(lVar16 + 0x38) = uVar19;
              FUN_00e14c58(param_2[0x18],*(uint *)(param_2 + 2) >> 10 & 1);
              param_2[0x18] = lVar16;
              param_2[2] = param_2[2] & 0xfffffffffffffbff;
            }
          }
          else {
LAB_00e56d4c:
            local_6c[0] = 8;
          }
        }
      }
      else {
        pvVar27 = (void *)0x0;
      }
    }
    else {
      lVar16 = 0;
LAB_00e567b8:
      pvVar27 = (void *)0x0;
      puVar13 = (ulong *)0x0;
    }
LAB_00e567c0:
    FUN_00e139fc(uVar25,puVar13);
    FUN_00e139fc(uVar25,pvVar27);
    if (local_6c[0] == 0) {
      local_d4 = 0;
    }
    else {
      FUN_00e139fc(uVar25,puVar9);
      FUN_00e14cb4(lVar16);
      FUN_00e139fc(uVar25,lVar16);
      local_d4 = local_6c[0];
      if (local_6c[0] != 0) {
        return local_6c[0];
      }
    }
    param_1 = param_2[0x18];
    uVar25 = FUN_00e1d4a0(param_1);
    lVar16 = FUN_00e1c3a4(param_1,&local_d4);
  }
  if (lVar16 < 0x74746366) {
    if (lVar16 < 0x4f54544f) {
      if ((lVar16 != 0x10000) && (lVar16 != 0x20000)) {
        return 2;
      }
    }
    else if ((lVar16 != 0x4f54544f) && (lVar16 != 0x74727565)) {
      return 2;
    }
  }
  else if (lVar16 < 0xa56b6264) {
    if ((lVar16 != 0x74746366) && (lVar16 != 0x74797031)) {
      return 2;
    }
  }
  else if ((lVar16 != 0xa56b6264) && (lVar16 != 0xa56c7374)) {
    return 2;
  }
  *puVar11 = 0x74746366;
  if (lVar16 == 0x74746366) {
    local_d4 = FUN_00e1dd74(param_1,&DAT_01977d98,puVar11);
    if (local_d4 != 0) {
      return local_d4;
    }
    uVar17 = param_2[0x21];
    if (uVar17 == 0) {
      return 8;
    }
    if (*(ulong *)(param_1 + 8) >> 5 < uVar17) {
      return 10;
    }
    uVar25 = FUN_00e13bcc(uVar8,8,0,uVar17,0,&local_d4);
    param_2[0x22] = uVar25;
    if (local_d4 != 0) {
      return local_d4;
    }
    iVar6 = FUN_00e1d718(param_1,param_2[0x21] << 2);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_d4 = 0;
    if (0 < (long)param_2[0x21]) {
      lVar16 = 0;
      do {
        uVar25 = FUN_00e1da20(param_1);
        *(undefined8 *)(param_2[0x22] + lVar16 * 8) = uVar25;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)param_2[0x21]);
    }
    FUN_00e1d90c(param_1);
    local_d0 = CONCAT44(local_d0._4_4_,local_d4);
    if (local_d4 != 0) {
      return local_d4;
    }
  }
  else {
    param_2[0x21] = 1;
    param_2[0x20] = 0x10000;
    puVar11 = (undefined8 *)FUN_00e1388c(uVar8,8,&local_d4);
    param_2[0x22] = puVar11;
    if (local_d4 != 0) {
      return local_d4;
    }
    *puVar11 = uVar25;
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  uVar25 = param_2[0x18];
  uVar14 = -param_3;
  if (-1 < (int)param_3) {
    uVar14 = param_3;
  }
  iVar6 = ((int)param_3 >> 0x1f) + (uVar14 & 0xffff);
  if ((long)param_2[0x21] <= (long)iVar6) {
    if (-1 < (int)param_3) {
      return 6;
    }
    iVar6 = 0;
  }
  iVar6 = FUN_00e1bb5c(uVar25,*(undefined8 *)(param_2[0x22] + (long)iVar6 * 8));
  if (iVar6 != 0) {
    return iVar6;
  }
  local_d0._0_4_ = iVar6;
  local_d0._0_4_ = (*(code *)puVar26[0x16])(param_2,uVar25);
  if ((int)local_d0 != 0) {
    return (int)local_d0;
  }
  uVar8 = param_2[0x17];
  iVar6 = (*(code *)param_2[0x68])(param_2,0x66766172,uVar25,&local_c8);
  if ((iVar6 == 0) && (0x13 < local_c8)) {
    lVar16 = FUN_00e1c3a4(uVar25,&local_d0);
    if (((((((int)local_d0 != 0) || (uVar17 = FUN_00e1bcf8(uVar25,&local_d0), (int)local_d0 != 0))
          || (local_d0._0_4_ = FUN_00e1bc6c(uVar25,2), (int)local_d0 != 0)) ||
         ((uVar4 = FUN_00e1bcf8(uVar25,&local_d0), (int)local_d0 != 0 ||
          (uVar5 = FUN_00e1bcf8(uVar25,&local_d0), (int)local_d0 != 0)))) ||
        (uVar7 = FUN_00e1bcf8(uVar25,&local_d0), (int)local_d0 != 0)) ||
       (uVar12 = FUN_00e1bcf8(uVar25,&local_d0), (int)local_d0 != 0)) {
      bVar2 = *(byte *)(param_2 + 0x99);
      goto joined_r0x00e57124;
    }
    uVar10 = 0;
    uVar17 = uVar17 & 0xffff;
    if ((lVar16 == 0x10000) && (uVar5 == 0x14)) {
      if ((ushort)(uVar4 - 1) < 0x3ffe) {
        uVar15 = (uint)uVar12 & 0xffff;
        uVar10 = 0;
        iVar6 = (uint)uVar4 * 4;
        if (((uVar7 >> 8 & 0xff) < 0x7f) && (iVar6 + 6U == uVar15 || iVar6 + 4U == uVar15)) {
          if (local_c8 < (uint)uVar4 * 0x14 + uVar17 + (ulong)(uVar15 * (uVar7 & 0xffff)))
          goto LAB_00e57328;
          uVar10 = (ulong)uVar7;
          uVar5 = 0x14;
          *(uint *)(param_2 + 0x99) = *(uint *)(param_2 + 0x99) | 1;
          bVar2 = *(byte *)(param_2 + 0x99);
        }
        else {
          uVar5 = 0x14;
          bVar2 = *(byte *)(param_2 + 0x99);
        }
        goto joined_r0x00e57124;
      }
LAB_00e57328:
      uVar5 = 0x14;
      bVar2 = *(byte *)(param_2 + 0x99);
      goto joined_r0x00e57124;
    }
    bVar2 = *(byte *)(param_2 + 0x99);
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x99);
joined_r0x00e57124:
    uVar5 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar17 = 0;
joined_r0x00e57124:
    uVar10 = 0;
  }
joined_r0x00e57124:
  if ((bVar2 & 1) == 0) {
    pvVar27 = (void *)0x0;
    __s2 = (void *)0x0;
  }
  else {
    __n = (ulong)uVar4 << 2;
    pvVar27 = (void *)FUN_00e1388c(uVar8,__n,&local_d0);
    if ((int)local_d0 == 0) {
      __s2 = (void *)FUN_00e1388c(uVar8,__n,&local_d0);
      if ((int)local_d0 == 0) {
        local_100 = (uint)uVar4;
        lVar16 = FUN_00e1d4a0(uVar25);
        if (uVar4 != 0) {
          lVar22 = uVar17 + lVar16 + -8;
          pvVar28 = pvVar27;
          uVar7 = local_100;
          do {
            local_d0._0_4_ = FUN_00e1d4a8(uVar25,lVar22,pvVar28,4);
            lVar22 = lVar22 + (ulong)uVar5;
            uVar7 = uVar7 - 1;
            pvVar28 = (void *)((long)pvVar28 + 4);
          } while (uVar7 != 0);
        }
        uVar7 = 0;
        uVar15 = (uint)uVar10;
        if ((uVar10 & 0xffff) != 0) {
          lVar16 = uVar17 + lVar16 + -0x10 + (ulong)(local_100 * uVar5 + 4);
          do {
            local_d0._0_4_ = FUN_00e1d4a8(uVar25,lVar16,__s2,__n);
            iVar6 = memcmp(pvVar27,__s2,__n);
            if (iVar6 == 0) break;
            uVar7 = uVar7 + 1;
            lVar16 = lVar16 + (uVar12 & 0xffff);
          } while (uVar7 < (uVar15 & 0xffff));
        }
        if (uVar7 == (uVar15 & 0xffff)) {
          uVar15 = uVar15 + 1;
        }
        uVar10 = (ulong)uVar15;
      }
    }
    else {
      __s2 = (void *)0x0;
    }
  }
  FUN_00e139fc(uVar8,pvVar27);
  FUN_00e139fc(uVar8,__s2);
  iVar6 = (*(code *)param_2[0x68])(param_2,0x676c7966,uVar25,0);
  if ((iVar6 != 0) && (iVar6 = (*(code *)param_2[0x68])(param_2,0x43464632,uVar25,0), iVar6 != 0)) {
    iVar6 = (*(code *)param_2[0x68])(param_2,0x43464620,uVar25,0);
    uVar7 = 0;
    if (iVar6 != 0) {
      uVar7 = (uint)uVar10;
    }
    uVar10 = (ulong)uVar7;
  }
  if (((uint)uVar10 & 0xffff) < uVar14 >> 0x10) {
    if (-1 < (int)param_3) {
      return 6;
    }
    uVar10 = 0;
  }
  param_2[3] = (uVar10 & 0xffff) << 0x10;
  *param_2 = param_2[0x21];
  param_2[1] = (long)(int)param_3;
  return (int)local_d0;
}

