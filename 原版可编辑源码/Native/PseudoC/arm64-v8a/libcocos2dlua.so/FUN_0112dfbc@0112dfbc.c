
/* WARNING: Removing unreachable block (ram,0x0112fed0) */
/* WARNING: Removing unreachable block (ram,0x0112e5e0) */
/* WARNING: Removing unreachable block (ram,0x0112e76c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0112dfbc(undefined8 *param_1,int param_2,int param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  short *psVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  undefined2 *puVar12;
  void *pvVar13;
  int *__ptr;
  long lVar14;
  ulong *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined2 *puVar25;
  undefined4 *puVar26;
  char *pcVar27;
  ulong uVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong *__ptr_00;
  ulong uVar34;
  long lVar35;
  float *pfVar36;
  undefined4 uVar37;
  short *psVar38;
  ulong *puVar39;
  undefined8 uVar40;
  size_t sVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  ulong local_b0;
  uint local_a4;
  ushort local_a0;
  undefined6 uStack_9e;
  ushort local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined8 local_88;
  
  if (*(int *)((long)param_1 + 0xc) == 0) {
    return 1;
  }
  _TIFFFillStriles(param_1);
  if (param_3 != 0) {
    if ((*(uint *)(param_1 + 2) >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffffefff;
      iVar11 = (*(code *)param_1[0x5e])(param_1);
      if (iVar11 == 0) {
        uVar18 = param_1[0x77];
        pcVar27 = "Error post-encoding before directory write";
        goto LAB_0112e128;
      }
    }
    (*(code *)param_1[0x65])(param_1);
    if (((0 < (long)param_1[0x72]) && ((*(byte *)(param_1 + 2) >> 6 & 1) != 0)) &&
       (iVar11 = TIFFFlushData1(param_1), iVar11 == 0)) {
      uVar18 = param_1[0x77];
      pcVar27 = "Error flushing data before directory write";
LAB_0112e128:
      TIFFErrorExt(uVar18,"TIFFWriteDirectorySec",pcVar27);
      return 0;
    }
    uVar20 = *(uint *)(param_1 + 2);
    if (((uVar20 >> 9 & 1) != 0) && ((void *)param_1[0x6d] != (void *)0x0)) {
      _TIFFfree((void *)param_1[0x6d]);
      param_1[0x72] = 0;
      param_1[0x6e] = 0;
      param_1[0x6d] = 0;
      param_1[0x70] = 0;
      param_1[0x6f] = 0;
      uVar20 = *(uint *)(param_1 + 2);
    }
    *(uint *)(param_1 + 2) = uVar20 & 0xffffffaf;
  }
  __ptr_00 = (ulong *)0x0;
  lVar35 = (long)&local_88 + 4;
  local_b0 = 0;
  do {
    local_a4 = 0;
    if (param_2 != 0) {
      local_a4 = 0;
      uVar20 = (uint)param_1[7];
      if ((uVar20 >> 1 & 1) != 0) {
        iVar11 = FUN_01130f30(param_1,&local_a4,__ptr_00,0x100,*(undefined4 *)(param_1 + 0xb));
        if ((iVar11 == 0) ||
           (iVar11 = FUN_01130f30(param_1,&local_a4,__ptr_00,0x101,
                                  *(undefined4 *)((long)param_1 + 0x5c)), iVar11 == 0))
        goto joined_r0x0112fffc;
                    /* catch() { ... } // from try @ 0112e764 with catch @ 0112e7dc */
        uVar20 = (uint)param_1[7];
      }
      if ((uVar20 >> 2 & 1) != 0) {
        iVar11 = FUN_01130f30(param_1,&local_a4,__ptr_00,0x142,*(undefined4 *)((long)param_1 + 100))
        ;
        if ((iVar11 == 0) ||
           (iVar11 = FUN_01130f30(param_1,&local_a4,__ptr_00,0x143,*(undefined4 *)(param_1 + 0xd)),
           iVar11 == 0)) goto joined_r0x0112fffc;
        uVar20 = (uint)param_1[7];
      }
      if ((uVar20 >> 3 & 1) == 0) {
LAB_0112e85c:
        if ((uVar20 >> 4 & 1) == 0) goto joined_r0x0112e9a0;
LAB_0112e968:
        if (__ptr_00 == (ulong *)0x0) {
          local_a4 = local_a4 + 2;
          goto joined_r0x0112e9a0;
        }
        fVar42 = *(float *)((long)param_1 + 0xac);
        if (fVar42 <= 0.0) {
          uVar20 = 0;
LAB_0112ef70:
          iVar11 = 1;
        }
        else {
          uVar20 = (uint)fVar42;
          if ((float)uVar20 == fVar42) goto LAB_0112ef70;
          if (1.0 <= fVar42) {
            uVar20 = 0xffffffff;
            iVar11 = (int)(4.2949673e+09 / fVar42);
          }
          else {
            uVar20 = (uint)(fVar42 * 4.2949673e+09);
            iVar11 = -1;
          }
        }
        local_88 = (char *)CONCAT44(iVar11,uVar20);
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong(&local_88);
          TIFFSwabLong(lVar35);
        }
        iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x11e,5,1,8,&local_88);
        if (iVar11 == 0) goto LAB_01130240;
        fVar42 = *(float *)(param_1 + 0x16);
        if (fVar42 <= 0.0) {
          uVar20 = 0;
LAB_0112f230:
          iVar11 = 1;
        }
        else {
          uVar20 = (uint)fVar42;
          if ((float)uVar20 == fVar42) goto LAB_0112f230;
          if (1.0 <= fVar42) {
            uVar20 = 0xffffffff;
            iVar11 = (int)(4.2949673e+09 / fVar42);
          }
          else {
            uVar20 = (uint)(fVar42 * 4.2949673e+09);
            iVar11 = -1;
          }
        }
        local_88 = (char *)CONCAT44(iVar11,uVar20);
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong(&local_88);
          TIFFSwabLong(lVar35);
        }
        iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x11f,5,1,8,&local_88);
        if (iVar11 == 0) goto LAB_01130240;
        uVar20 = (uint)param_1[7];
        if ((uVar20 >> 5 & 1) != 0) goto LAB_0112e9a4;
joined_r0x0112e864:
        if ((uVar20 >> 6 & 1) == 0) goto joined_r0x0112ee9c;
LAB_0112e9f0:
        if (__ptr_00 == (ulong *)0x0) {
          local_a4 = local_a4 + 1;
          goto joined_r0x0112ee9c;
        }
        uVar6 = *(undefined2 *)((long)param_1 + 0x74);
        puVar12 = _TIFFmalloc((ulong)*(ushort *)((long)param_1 + 0x82) << 1);
        if (puVar12 != (undefined2 *)0x0) {
          if (*(short *)((long)param_1 + 0x82) == 0) {
            uVar20 = 0;
            cVar4 = *(char *)(param_1 + 2);
          }
          else {
            uVar19 = 0;
            puVar25 = puVar12;
            do {
              *puVar25 = uVar6;
              uVar20 = (uint)*(ushort *)((long)param_1 + 0x82);
              uVar19 = uVar19 + 1;
              puVar25 = puVar25 + 1;
            } while (uVar19 < *(ushort *)((long)param_1 + 0x82));
            cVar4 = *(char *)(param_1 + 2);
          }
          if (cVar4 < '\0') {
            TIFFSwabArrayOfShort(puVar12,uVar20);
          }
          iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x102,3,uVar20,uVar20 << 1,puVar12);
          _TIFFfree(puVar12);
          if (iVar11 != 0) {
            uVar20 = (uint)param_1[7];
            goto joined_r0x0112ee9c;
          }
          goto joined_r0x0112fffc;
        }
LAB_01130004:
        uVar18 = param_1[0x77];
        pcVar27 = "TIFFWriteDirectoryTagShortPerSample";
      }
      else {
        if (__ptr_00 == (ulong *)0x0) {
          local_a4 = local_a4 + 2;
          goto LAB_0112e85c;
        }
        fVar42 = *(float *)(param_1 + 0x14);
        if (fVar42 <= 0.0) {
          uVar20 = 0;
LAB_0112e8a4:
          iVar11 = 1;
        }
        else {
          uVar20 = (uint)fVar42;
          if ((float)uVar20 == fVar42) goto LAB_0112e8a4;
          if (1.0 <= fVar42) {
            uVar20 = 0xffffffff;
            iVar11 = (int)(4.2949673e+09 / fVar42);
          }
          else {
            uVar20 = (uint)(fVar42 * 4.2949673e+09);
            iVar11 = -1;
          }
        }
        local_88 = (char *)CONCAT44(iVar11,uVar20);
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong(&local_88);
          TIFFSwabLong(lVar35);
        }
        iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x11a,5,1,8,&local_88);
        if (iVar11 == 0) goto LAB_01130240;
        fVar42 = *(float *)((long)param_1 + 0xa4);
        if (fVar42 <= 0.0) {
          uVar20 = 0;
LAB_0112e918:
          iVar11 = 1;
        }
        else {
          uVar20 = (uint)fVar42;
          if ((float)uVar20 == fVar42) goto LAB_0112e918;
          if (1.0 <= fVar42) {
            uVar20 = 0xffffffff;
            iVar11 = (int)(4.2949673e+09 / fVar42);
          }
          else {
            uVar20 = (uint)(fVar42 * 4.2949673e+09);
            iVar11 = -1;
          }
        }
        local_88 = (char *)CONCAT44(iVar11,uVar20);
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong(&local_88);
          TIFFSwabLong(lVar35);
        }
        iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x11b,5,1,8,&local_88);
        if (iVar11 == 0) goto LAB_01130240;
        uVar20 = (uint)param_1[7];
        if ((uVar20 >> 4 & 1) != 0) goto LAB_0112e968;
joined_r0x0112e9a0:
        if ((uVar20 >> 5 & 1) == 0) goto joined_r0x0112e864;
LAB_0112e9a4:
        if (__ptr_00 == (ulong *)0x0) {
          local_a4 = local_a4 + 1;
          goto joined_r0x0112e864;
        }
        local_88 = (char *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0xe));
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong(&local_88);
        }
        iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0xfe,4,1,4,&local_88);
        if (iVar11 == 0) goto LAB_01130240;
        uVar20 = (uint)param_1[7];
        if ((uVar20 >> 6 & 1) != 0) goto LAB_0112e9f0;
joined_r0x0112ee9c:
        if ((uVar20 >> 7 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)(param_1 + 0xf));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x103,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 8 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)((long)param_1 + 0x7a));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x106,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 9 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)((long)param_1 + 0x7c));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x107,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 10 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)((long)param_1 + 0x7e));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x10a,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0xf & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)(param_1 + 0x10));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x112,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0x10 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)((long)param_1 + 0x82));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x115,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0x11 & 1) != 0) {
          iVar11 = FUN_01130f30(param_1,&local_a4,__ptr_00,0x116,
                                *(undefined4 *)((long)param_1 + 0x84));
          if (iVar11 == 0) goto joined_r0x0112fffc;
          uVar20 = (uint)param_1[7];
        }
        if ((uVar20 >> 0x12 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            uVar6 = *(undefined2 *)(param_1 + 0x11);
            puVar12 = _TIFFmalloc((ulong)*(ushort *)((long)param_1 + 0x82) << 1);
            if (puVar12 == (undefined2 *)0x0) goto LAB_01130004;
            if (*(short *)((long)param_1 + 0x82) == 0) {
              uVar20 = 0;
              cVar4 = *(char *)(param_1 + 2);
            }
            else {
              uVar19 = 0;
              puVar25 = puVar12;
              do {
                *puVar25 = uVar6;
                uVar20 = (uint)*(ushort *)((long)param_1 + 0x82);
                uVar19 = uVar19 + 1;
                puVar25 = puVar25 + 1;
              } while (uVar19 < *(ushort *)((long)param_1 + 0x82));
              cVar4 = *(char *)(param_1 + 2);
            }
            if (cVar4 < '\0') {
              TIFFSwabArrayOfShort(puVar12,uVar20);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x118,3,uVar20,uVar20 << 1,puVar12);
            _TIFFfree(puVar12);
            if (iVar11 == 0) goto joined_r0x0112fffc;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0x13 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            uVar6 = *(undefined2 *)((long)param_1 + 0x8a);
            puVar12 = _TIFFmalloc((ulong)*(ushort *)((long)param_1 + 0x82) << 1);
            if (puVar12 == (undefined2 *)0x0) goto LAB_01130004;
            if (*(short *)((long)param_1 + 0x82) == 0) {
              uVar20 = 0;
              cVar4 = *(char *)(param_1 + 2);
            }
            else {
              uVar19 = 0;
              puVar25 = puVar12;
              do {
                *puVar25 = uVar6;
                uVar20 = (uint)*(ushort *)((long)param_1 + 0x82);
                uVar19 = uVar19 + 1;
                puVar25 = puVar25 + 1;
              } while (uVar19 < *(ushort *)((long)param_1 + 0x82));
              cVar4 = *(char *)(param_1 + 2);
            }
            if (cVar4 < '\0') {
              TIFFSwabArrayOfShort(puVar12,uVar20);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x119,3,uVar20,uVar20 << 1,puVar12);
            _TIFFfree(puVar12);
            if (iVar11 == 0) goto joined_r0x0112fffc;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0x14 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)((long)param_1 + 0xaa));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x11c,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0x16 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
            local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)(param_1 + 0x15));
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(&local_88);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x128,3,1,2,&local_88);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0x17 & 1) != 0) {
          if (__ptr_00 == (ulong *)0x0) {
            local_a4 = local_a4 + 1;
          }
          else {
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabArrayOfShort((long)param_1 + 0xb4,2);
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x129,3,2,4,(long)param_1 + 0xb4);
            if (iVar11 == 0) goto LAB_01130240;
            uVar20 = (uint)param_1[7];
          }
        }
        if ((uVar20 >> 0x18 & 1) != 0) {
          if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
            uVar18 = 0x117;
          }
          else {
            uVar18 = 0x145;
          }
          iVar11 = FUN_01130fe8(param_1,&local_a4,__ptr_00,uVar18,
                                *(undefined4 *)((long)param_1 + 0xe4),param_1[0x1e]);
          if (iVar11 == 0) goto joined_r0x0112fffc;
        }
        if ((*(byte *)((long)param_1 + 0x3b) >> 1 & 1) != 0) {
          if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
            uVar18 = 0x111;
          }
          else {
            uVar18 = 0x144;
          }
          iVar11 = FUN_01130fe8(param_1,&local_a4,__ptr_00,uVar18,
                                *(undefined4 *)((long)param_1 + 0xe4),param_1[0x1d]);
          if (iVar11 == 0) goto joined_r0x0112fffc;
        }
        uVar20 = (uint)param_1[7];
        if ((uVar20 >> 0x1a & 1) == 0) {
LAB_0112f114:
          if ((int)uVar20 < 0) {
LAB_0112f294:
            if (*(short *)((long)param_1 + 0xd4) == 0) goto LAB_0112f118;
            TIFFGetFieldDefaulted(param_1,0x152,&local_98,&local_88);
            pcVar27 = local_88;
            uVar19 = local_98;
            if (__ptr_00 != (ulong *)0x0) {
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabArrayOfShort(local_88,local_98);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x152,3,uVar19,(ulong)uVar19 << 1,
                                    pcVar27);
              if (iVar11 != 0) goto LAB_0112f118;
              goto LAB_01130240;
            }
            local_a4 = local_a4 + 1;
            uVar34 = param_1[8];
            uVar20 = (uint)uVar34;
          }
          else {
LAB_0112f118:
            uVar34 = param_1[8];
            uVar20 = (uint)uVar34;
          }
          if ((uVar34 & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              uVar6 = *(undefined2 *)((long)param_1 + 0x76);
              puVar12 = _TIFFmalloc((ulong)*(ushort *)((long)param_1 + 0x82) << 1);
              if (puVar12 == (undefined2 *)0x0) goto LAB_01130004;
              if (*(short *)((long)param_1 + 0x82) == 0) {
                uVar20 = 0;
                cVar4 = *(char *)(param_1 + 2);
              }
              else {
                uVar19 = 0;
                puVar25 = puVar12;
                do {
                  *puVar25 = uVar6;
                  uVar20 = (uint)*(ushort *)((long)param_1 + 0x82);
                  uVar19 = uVar19 + 1;
                  puVar25 = puVar25 + 1;
                } while (uVar19 < *(ushort *)((long)param_1 + 0x82));
                cVar4 = *(char *)(param_1 + 2);
              }
              if (cVar4 < '\0') {
                TIFFSwabArrayOfShort(puVar12,uVar20);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x153,3,uVar20,uVar20 << 1,puVar12);
              _TIFFfree(puVar12);
              if (iVar11 == 0) goto joined_r0x0112fffc;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 1 & 1) != 0) {
            iVar11 = FUN_0113115c(param_1,&local_a4,__ptr_00,0x154,
                                  *(undefined2 *)((long)param_1 + 0x82),param_1[0x12]);
            if (iVar11 == 0) goto joined_r0x0112fffc;
            uVar20 = (uint)param_1[8];
          }
          if ((uVar20 >> 2 & 1) != 0) {
            iVar11 = FUN_0113115c(param_1,&local_a4,__ptr_00,0x155,
                                  *(undefined2 *)((long)param_1 + 0x82),param_1[0x13]);
            if (iVar11 == 0) goto joined_r0x0112fffc;
            uVar20 = (uint)param_1[8];
          }
          if ((uVar20 >> 3 & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              local_88._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
              local_88 = (char *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0xc));
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabLong(&local_88);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x80e5,4,1,4,&local_88);
              if (iVar11 == 0) goto LAB_01130240;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 4 & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              local_88._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
              local_88 = (char *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_1 + 0x6c));
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabLong(&local_88);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x80e6,4,1,4,&local_88);
              if (iVar11 == 0) goto LAB_01130240;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 5 & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabArrayOfShort(param_1 + 0x1a,2);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x141,3,2,4,param_1 + 0x1a);
              if (iVar11 == 0) goto LAB_01130240;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 7 & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabArrayOfShort(param_1 + 0x21,2);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x212,3,2,4,param_1 + 0x21);
              if (iVar11 == 0) goto LAB_01130240;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 8 & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              local_88._2_6_ = (undefined6)((ulong)local_88 >> 0x10);
              local_88 = (char *)CONCAT62(local_88._2_6_,*(undefined2 *)((long)param_1 + 0x10c));
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabShort(&local_88);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x213,3,1,2,&local_88);
              if (iVar11 == 0) goto LAB_01130240;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 9 & 1) != 0) {
            iVar11 = FUN_0113164c(param_1,&local_a4,__ptr_00,0x214,6,param_1[0x25]);
            if (iVar11 == 0) goto joined_r0x0112fffc;
            uVar20 = (uint)param_1[8];
          }
          if ((uVar20 >> 0xc & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              uVar7 = *(ushort *)((long)param_1 + 0x74);
              uVar8 = *(short *)((long)param_1 + 0x82) - *(short *)((long)param_1 + 0xd4);
              uVar19 = 3;
              if ((uVar8 & 0xfffc) < 4) {
                uVar19 = uVar8;
              }
              uVar20 = 1 << (ulong)(uVar7 & 0x1f);
              uVar34 = (ulong)uVar20;
              if (uVar19 == 3) {
                sVar41 = uVar34 << 1;
                iVar11 = _TIFFmemcmp((void *)param_1[0x22],(void *)param_1[0x24],sVar41);
                if (iVar11 == 0) goto LAB_0112e224;
                uVar19 = 3;
              }
              else if (uVar19 == 2) {
                sVar41 = (ulong)uVar20 << 1;
LAB_0112e224:
                iVar11 = _TIFFmemcmp((void *)param_1[0x22],(void *)param_1[0x23],sVar41);
                uVar19 = 1;
                if (iVar11 != 0) {
                  uVar19 = 2;
                }
              }
              if (uVar19 == 0) {
                uVar19 = 1;
              }
              uVar21 = (uint)uVar19 << (ulong)(uVar7 & 0x1f);
              pvVar13 = _TIFFmalloc((ulong)uVar21 << 1);
              if (pvVar13 == (void *)0x0) {
                uVar18 = param_1[0x77];
                pcVar27 = "TIFFWriteDirectoryTagTransferfunction";
                goto LAB_011300d0;
              }
              sVar41 = uVar34 << 1;
              _TIFFmemcpy(pvVar13,(void *)param_1[0x22],sVar41);
              if ((1 < uVar19) &&
                 (_TIFFmemcpy((void *)((long)pvVar13 + uVar34 * 2),(void *)param_1[0x23],sVar41),
                 uVar19 != 2)) {
                _TIFFmemcpy((void *)((long)pvVar13 + (ulong)(uVar20 << 1) * 2),(void *)param_1[0x24]
                            ,sVar41);
              }
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabArrayOfShort(pvVar13,(ulong)uVar21);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x12d,3,uVar21,uVar21 << 1,pvVar13);
              _TIFFfree(pvVar13);
              if (iVar11 == 0) goto LAB_01130240;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 0xe & 1) != 0) {
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
            }
            else {
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x14d,2,
                                    *(undefined4 *)(param_1 + 0x26),*(undefined4 *)(param_1 + 0x26),
                                    param_1[0x27]);
              if (iVar11 == 0) goto LAB_01130240;
              uVar20 = (uint)param_1[8];
            }
          }
          if ((uVar20 >> 0x11 & 1) == 0) {
LAB_0112f5f4:
            lVar22 = param_1[0x7f];
          }
          else {
            uVar19 = *(ushort *)((long)param_1 + 0xfc);
            uVar34 = (ulong)uVar19;
            if (uVar19 == 0) goto LAB_0112f5f4;
            if (__ptr_00 == (ulong *)0x0) {
              local_a4 = local_a4 + 1;
              lVar22 = param_1[0x7f];
            }
            else {
              uVar18 = param_1[0x52];
              if ((*(uint *)(param_1 + 2) >> 0x13 & 1) == 0) {
                puVar26 = _TIFFmalloc(uVar34 << 2);
                if (puVar26 == (undefined4 *)0x0) {
                  uVar18 = param_1[0x77];
                  pcVar27 = "TIFFWriteDirectoryTagSubifd";
                  goto LAB_011300d0;
                }
                uVar19 = *(ushort *)((long)param_1 + 0xfc);
                uVar34 = (ulong)uVar19;
                uVar20 = (uint)uVar19;
                if (uVar20 != 0) {
                  puVar31 = (undefined8 *)param_1[0x20];
                  uVar28 = ((ulong)(uVar20 - 1) & 0xffff) + 1;
                  puVar24 = puVar26;
                  if (uVar28 < 4) {
                    uVar28 = 0;
                  }
                  else {
                    uVar28 = uVar28 - (uVar34 & 3);
                    if (uVar28 != 0) {
                      puVar30 = puVar31 + 2;
                      puVar32 = (undefined8 *)(puVar26 + 2);
                      uVar33 = uVar28;
                      do {
                        puVar2 = puVar30 + -2;
                        puVar9 = puVar30 + -1;
                        uVar44 = puVar30[1];
                        uVar40 = *puVar30;
                        puVar30 = puVar30 + 4;
                        uVar33 = uVar33 - 4;
                        puVar32[-1] = CONCAT44((int)*puVar9,(int)*puVar2);
                        *puVar32 = CONCAT44((int)uVar44,(int)uVar40);
                        puVar32 = puVar32 + 2;
                      } while (uVar33 != 0);
                      puVar24 = puVar26 + uVar28;
                      puVar31 = puVar31 + uVar28;
                      if ((uVar19 & 3) == 0) goto LAB_0112e6e4;
                    }
                  }
                  do {
                    uVar21 = (int)uVar28 + 1;
                    uVar28 = (ulong)uVar21;
                    *puVar24 = (int)*puVar31;
                    puVar24 = puVar24 + 1;
                    puVar31 = puVar31 + 1;
                  } while ((uVar21 & 0xffff) < uVar20);
                }
LAB_0112e6e4:
                if (*(char *)(param_1 + 2) < '\0') {
                  TIFFSwabArrayOfLong(puVar26,uVar34);
                }
                    /* catch() { ... } // from try @ 0112e650 with catch @ 0112e718 */
                iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x14a,0xd,uVar34,(ulong)uVar19 << 2
                                      ,puVar26);
                _TIFFfree(puVar26);
              }
              else {
                uVar40 = param_1[0x20];
                if ((*(uint *)(param_1 + 2) >> 7 & 1) != 0) {
                  TIFFSwabArrayOfLong8(uVar40,uVar34);
                }
                iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x14a,0x12,uVar34,
                                      (ulong)uVar19 << 3,uVar40);
              }
              if (iVar11 == 0) goto joined_r0x0112fffc;
                    /* try { // try from 0112e72c to 0122e763 has its CatchHandler @ 0112e72c
                       catch() { ... } // from try @ 0112e72c with catch @ 0112e72c
                       catch() { ... } // from try @ 0112e768 with catch @ 0112e72c */
              *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x2000;
              uVar40 = 0;
              if (*(short *)((long)param_1 + 0xfc) != 1) {
                uVar40 = uVar18;
              }
              *(short *)(param_1 + 0x53) = *(short *)((long)param_1 + 0xfc);
              param_1[0x54] = uVar40;
              lVar22 = param_1[0x7f];
            }
          }
          if (lVar22 != 0) {
            uVar34 = 0;
            uVar28 = 1;
            do {
              puVar26 = *(undefined4 **)(param_1[0x7e] + uVar34 * 8);
              uVar19 = *(ushort *)(puVar26 + 6);
              if ((uVar19 < 0x42) ||
                 ((param_1[(ulong)(uVar19 >> 5) + 7] & 1L << ((ulong)uVar19 & 0x1f)) == 0))
              goto switchD_0112f654_caseD_2;
              switch(puVar26[5]) {
              case 1:
                TIFFGetField(param_1,*puVar26,&local_88);
                pcVar27 = local_88;
                sVar41 = strlen(local_88);
                if (__ptr_00 == (ulong *)0x0) break;
                iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,*puVar26,2,sVar41,
                                      sVar41 & 0xffffffff,pcVar27);
joined_r0x0112f780:
                if (iVar11 != 0) goto switchD_0112f654_caseD_2;
                goto LAB_01130240;
              default:
                goto switchD_0112f654_caseD_2;
              case 4:
                TIFFGetField(param_1,*puVar26,&local_98);
                if (__ptr_00 != (ulong *)0x0) {
                  uVar37 = *puVar26;
                  local_88 = (char *)CONCAT62(local_88._2_6_,local_98);
                  if (*(char *)(param_1 + 2) < '\0') {
                    TIFFSwabShort(&local_88);
                  }
                  uVar18 = 3;
                  uVar40 = 2;
LAB_0112f728:
                  iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,uVar37,uVar18,1,uVar40,&local_88)
                  ;
                  goto joined_r0x0112f780;
                }
                break;
              case 6:
                TIFFGetField(param_1,*puVar26,&local_98);
                if (__ptr_00 != (ulong *)0x0) {
                  uVar37 = *puVar26;
                  local_88 = (char *)CONCAT44(local_88._4_4_,CONCAT22(uStack_96,local_98));
                  if (*(char *)(param_1 + 2) < '\0') {
                    TIFFSwabLong(&local_88);
                  }
                  uVar18 = 4;
                  uVar40 = 4;
                  goto LAB_0112f728;
                }
                break;
              case 0x28:
                TIFFGetField(param_1,*puVar26,&local_98,&local_88);
                if (__ptr_00 != (ulong *)0x0) {
                  iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,*puVar26,7,
                                        CONCAT22(uStack_96,local_98),CONCAT22(uStack_96,local_98),
                                        local_88);
                  goto joined_r0x0112f780;
                }
              }
              local_a4 = local_a4 + 1;
switchD_0112f654_caseD_2:
              bVar1 = uVar28 < (ulong)param_1[0x7f];
              uVar34 = uVar28;
              uVar28 = (ulong)((int)uVar28 + 1);
            } while (bVar1);
          }
          goto LAB_0112f7a8;
        }
        if (__ptr_00 == (ulong *)0x0) {
          local_a4 = local_a4 + 1;
          if ((int)uVar20 < 0) goto LAB_0112f294;
          goto LAB_0112f118;
        }
        uVar19 = *(ushort *)((long)param_1 + 0x74);
        uVar20 = 3 << (ulong)(uVar19 & 0x1f);
        pvVar13 = _TIFFmalloc((ulong)uVar20 << 1);
        if (pvVar13 != (void *)0x0) {
          uVar21 = 1 << (ulong)(uVar19 & 0x1f);
          sVar41 = (ulong)uVar21 * 2;
          _TIFFmemcpy(pvVar13,(void *)param_1[0x17],sVar41);
          _TIFFmemcpy((void *)((long)pvVar13 + sVar41),(void *)param_1[0x18],sVar41);
          _TIFFmemcpy((void *)((long)pvVar13 + (ulong)(uVar21 << 1) * 2),(void *)param_1[0x19],
                      sVar41);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfShort(pvVar13,(ulong)uVar20);
          }
          iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,0x140,3,uVar20,uVar20 << 1,pvVar13);
          _TIFFfree(pvVar13);
          if (iVar11 != 0) {
            uVar20 = (uint)param_1[7];
            goto LAB_0112f114;
          }
          goto LAB_01130240;
        }
        uVar18 = param_1[0x77];
        pcVar27 = "TIFFWriteDirectoryTagColormap";
      }
LAB_011300d0:
      TIFFErrorExt(uVar18,pcVar27,"Out of memory");
      goto LAB_01130240;
    }
LAB_0112f7a8:
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar20 = 0;
LAB_0112f7b8:
      lVar22 = param_1[0x29];
      uVar34 = (ulong)uVar20;
      puVar26 = *(undefined4 **)(lVar22 + (ulong)uVar20 * 0x18);
      switch(puVar26[2]) {
      case 1:
        if (__ptr_00 == (ulong *)0x0) break;
        uVar37 = *(undefined4 *)(lVar22 + uVar34 * 0x18 + 8);
        uVar40 = *(undefined8 *)(lVar22 + uVar34 * 0x18 + 0x10);
        uVar17 = *puVar26;
        uVar18 = 1;
LAB_0112f908:
        iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,uVar17,uVar18,uVar37,uVar37,uVar40);
joined_r0x0112fbf8:
        if (iVar11 != 0) goto switchD_0112f7e0_caseD_e;
        goto LAB_01130240;
      case 2:
        if (__ptr_00 != (ulong *)0x0) {
          uVar37 = *(undefined4 *)(lVar22 + uVar34 * 0x18 + 8);
          uVar40 = *(undefined8 *)(lVar22 + uVar34 * 0x18 + 0x10);
          uVar17 = *puVar26;
          uVar18 = 2;
          goto LAB_0112f908;
        }
        break;
      case 3:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfShort(uVar18,iVar11);
          }
          iVar23 = iVar11 << 1;
          uVar40 = 3;
LAB_0112fbd8:
          iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,uVar37,uVar40,iVar11,iVar23,uVar18);
          goto joined_r0x0112fbf8;
        }
        break;
      case 4:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfLong(uVar18,iVar11);
          }
          iVar23 = iVar11 << 2;
          uVar40 = 4;
          goto LAB_0112fbd8;
        }
        break;
      case 5:
        lVar22 = lVar22 + uVar34 * 0x18;
        iVar11 = FUN_0113164c(param_1,&local_a4,__ptr_00,*puVar26,*(undefined4 *)(lVar22 + 8),
                              *(undefined8 *)(lVar22 + 0x10));
joined_r0x0112fd18:
        if (iVar11 != 0) goto switchD_0112f7e0_caseD_e;
        goto joined_r0x0112fffc;
      case 6:
        if (__ptr_00 != (ulong *)0x0) {
          uVar37 = *(undefined4 *)(lVar22 + uVar34 * 0x18 + 8);
          uVar40 = *(undefined8 *)(lVar22 + uVar34 * 0x18 + 0x10);
          uVar17 = *puVar26;
          uVar18 = 6;
          goto LAB_0112f908;
        }
        break;
      case 7:
        if (__ptr_00 != (ulong *)0x0) {
          uVar37 = *(undefined4 *)(lVar22 + uVar34 * 0x18 + 8);
          uVar40 = *(undefined8 *)(lVar22 + uVar34 * 0x18 + 0x10);
          uVar17 = *puVar26;
          uVar18 = 7;
          goto LAB_0112f908;
        }
        break;
      case 8:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfShort(uVar18,iVar11);
          }
          iVar23 = iVar11 << 1;
          uVar40 = 8;
          goto LAB_0112fbd8;
        }
        break;
      case 9:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfLong(uVar18,iVar11);
          }
          iVar23 = iVar11 << 2;
          uVar40 = 9;
          goto LAB_0112fbd8;
        }
        break;
      case 10:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          iVar11 = *(int *)(lVar22 + 8);
          uVar37 = *puVar26;
          pfVar36 = *(float **)(lVar22 + 0x10);
          __ptr = _TIFFmalloc((ulong)(uint)(iVar11 << 1) << 2);
          iVar23 = iVar11;
          piVar10 = __ptr;
          if (__ptr != (int *)0x0) {
            for (; iVar23 != 0; iVar23 = iVar23 + -1) {
              fVar42 = *pfVar36;
              fVar43 = (float)(int)fVar42;
              if (0.0 <= fVar42) {
                if (fVar42 == fVar43) goto LAB_0112fa08;
                if (fVar42 < 1.0) {
                  iVar29 = (int)(fVar42 * 2.1474836e+09);
                  goto LAB_0112fa20;
                }
                *piVar10 = 0x7fffffff;
                fVar43 = 2.1474836e+09;
LAB_0112fa48:
                iVar29 = (int)(fVar43 / fVar42);
              }
              else if (fVar42 == fVar43) {
LAB_0112fa08:
                *piVar10 = (int)fVar42;
                iVar29 = 1;
              }
              else {
                if (fVar42 <= -1.0) {
                  *piVar10 = -0x7fffffff;
                  fVar43 = -2.1474836e+09;
                  goto LAB_0112fa48;
                }
                iVar29 = -(int)(fVar42 * -2.1474836e+09);
LAB_0112fa20:
                *piVar10 = iVar29;
                iVar29 = 0x7fffffff;
              }
              piVar10[1] = iVar29;
              pfVar36 = pfVar36 + 1;
              piVar10 = piVar10 + 2;
            }
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabArrayOfLong(__ptr,(ulong)(uint)(iVar11 << 1));
            }
            iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,uVar37,10,iVar11,iVar11 << 3,__ptr);
            _TIFFfree(__ptr);
            goto joined_r0x0112fd18;
          }
          uVar18 = param_1[0x77];
          pcVar27 = "TIFFWriteDirectoryTagCheckedSrationalArray";
          goto LAB_011300d0;
        }
        break;
      case 0xb:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfFloat(uVar18,iVar11);
          }
          iVar23 = iVar11 << 2;
          uVar40 = 0xb;
          goto LAB_0112fbd8;
        }
        break;
      case 0xc:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfDouble(uVar18,iVar11);
          }
          iVar23 = iVar11 << 3;
          uVar40 = 0xc;
          goto LAB_0112fbd8;
        }
        break;
      case 0xd:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfLong(uVar18,iVar11);
          }
          iVar23 = iVar11 << 2;
          uVar40 = 0xd;
          goto LAB_0112fbd8;
        }
        break;
      default:
        goto switchD_0112f7e0_caseD_e;
      case 0x10:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfLong8(uVar18,iVar11);
          }
          iVar23 = iVar11 << 3;
          uVar40 = 0x10;
          goto LAB_0112fbd8;
        }
        break;
      case 0x11:
        if (__ptr_00 != (ulong *)0x0) {
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar37 = *puVar26;
          iVar11 = *(int *)(lVar22 + 8);
          uVar18 = *(undefined8 *)(lVar22 + 0x10);
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabArrayOfLong8(uVar18,iVar11);
          }
          iVar23 = iVar11 << 3;
          uVar40 = 0x11;
          goto LAB_0112fbd8;
        }
        break;
      case 0x12:
        if (__ptr_00 != (ulong *)0x0) {
          uVar37 = *puVar26;
          lVar22 = lVar22 + uVar34 * 0x18;
          uVar21 = *(uint *)(lVar22 + 8);
          uVar34 = (ulong)uVar21;
          lVar22 = *(long *)(lVar22 + 0x10);
          if ((*(uint *)(param_1 + 2) >> 0x13 & 1) == 0) {
            pvVar13 = _TIFFmalloc(uVar34 << 2);
            if (pvVar13 != (void *)0x0) {
              if (uVar21 != 0) {
                lVar14 = 0;
                do {
                  uVar28 = *(ulong *)(lVar22 + lVar14 * 8);
                  if (uVar28 >> 0x20 != 0) {
                    TIFFErrorExt(param_1[0x77],"TIFFWriteDirectoryTagIfdIfd8Array",
                                 "Attempt to write value larger than 0xFFFFFFFF in Classic TIFF file."
                                );
                    _TIFFfree(pvVar13);
                    goto joined_r0x0112fffc;
                  }
                  *(int *)((long)pvVar13 + lVar14 * 4) = (int)uVar28;
                  lVar14 = lVar14 + 1;
                } while ((uint)lVar14 < uVar21);
              }
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabArrayOfLong(pvVar13,uVar34);
              }
              iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,uVar37,0xd,uVar34,uVar21 << 2,pvVar13
                                   );
              _TIFFfree(pvVar13);
              goto joined_r0x0112fd18;
            }
            uVar18 = param_1[0x77];
            pcVar27 = "TIFFWriteDirectoryTagIfdIfd8Array";
            goto LAB_011300d0;
          }
          if ((*(uint *)(param_1 + 2) >> 7 & 1) != 0) {
            TIFFSwabArrayOfLong8(lVar22,uVar34);
          }
          iVar11 = FUN_011317b0(param_1,&local_a4,__ptr_00,uVar37,0x12,uVar34,uVar21 << 3,lVar22);
          goto joined_r0x0112fd18;
        }
      }
      local_a4 = local_a4 + 1;
switchD_0112f7e0_caseD_e:
      uVar20 = uVar20 + 1;
      if (*(uint *)(param_1 + 0x28) <= uVar20) goto LAB_0112fd20;
      goto LAB_0112f7b8;
    }
LAB_0112fd20:
    if (__ptr_00 != (ulong *)0x0) {
      if (((param_2 != 0) && ((*(byte *)((long)param_1 + 0x42) >> 1 & 1) != 0)) &&
         (param_1[0x54] == 0)) {
        if (*(short *)__ptr_00 == 0x14a) {
          iVar11 = 0;
        }
        else {
          iVar11 = 0;
          puVar15 = __ptr_00;
          do {
            puVar15 = puVar15 + 3;
            iVar11 = iVar11 + 1;
          } while ((short)*puVar15 != 0x14a);
        }
        uVar20 = *(uint *)(param_1 + 2);
        lVar35 = 2;
        if ((uVar20 & 0x80000) != 0) {
          lVar35 = 8;
        }
        param_1[0x54] =
             lVar35 + param_1[3] + (((ulong)uVar20 & 0x80000) >> 0x11 | 8) +
             (ulong)((((uVar20 & 0x80000) >> 0x10) + 0xc) * iVar11);
      }
      puVar15 = _TIFFmalloc(local_b0);
      if (puVar15 == (ulong *)0x0) {
        TIFFErrorExt(param_1[0x77],"TIFFWriteDirectorySec","Out of memory");
        goto joined_r0x0112fffc;
      }
      uVar20 = *(uint *)(param_1 + 2);
      if ((uVar20 >> 0x13 & 1) == 0) {
        *(short *)puVar15 = (short)local_a4;
        if ((uVar20 >> 7 & 1) != 0) {
          TIFFSwabShort(puVar15);
        }
        puVar39 = puVar15;
        if (local_a4 != 0) {
          lVar35 = 0;
          uVar20 = 0;
          do {
            psVar3 = (short *)((long)__ptr_00 + lVar35 * 2);
            *(short *)((long)puVar15 + lVar35 + 2) = *psVar3;
            uVar21 = *(uint *)(param_1 + 2);
            if ((uVar21 >> 7 & 1) != 0) {
              TIFFSwabShort();
              uVar21 = *(uint *)(param_1 + 2);
            }
            psVar38 = (short *)((long)puVar15 + lVar35 + 4);
            *psVar38 = psVar3[1];
            if ((uVar21 >> 7 & 1) != 0) {
              TIFFSwabShort(psVar38);
            }
            pvVar13 = (void *)((long)puVar15 + lVar35 + 6);
            local_88 = (char *)CONCAT44(local_88._4_4_,(int)*(undefined8 *)(psVar3 + 4));
            _TIFFmemcpy(pvVar13,&local_88,4);
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabLong(pvVar13);
            }
            _TIFFmemcpy((void *)((long)puVar15 + lVar35 + 10),psVar3 + 8,4);
            uVar20 = uVar20 + 1;
            lVar35 = lVar35 + 0xc;
          } while (uVar20 < local_a4);
          puVar39 = (ulong *)((long)puVar15 + lVar35);
        }
        local_88 = (char *)CONCAT44(local_88._4_4_,(int)param_1[4]);
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong(&local_88);
        }
        _TIFFmemcpy((short *)((long)puVar39 + 2),&local_88,4);
      }
      else {
        *puVar15 = (ulong)local_a4;
        if ((uVar20 >> 7 & 1) != 0) {
          TIFFSwabLong8(puVar15);
        }
        if (local_a4 == 0) {
          puVar39 = puVar15 + 1;
        }
        else {
          uVar20 = 0;
          psVar3 = (short *)((long)puVar15 + 10);
          puVar39 = __ptr_00;
          do {
            psVar38 = psVar3;
            psVar38[-1] = (short)*puVar39;
            uVar21 = *(uint *)(param_1 + 2);
            if ((uVar21 >> 7 & 1) != 0) {
              TIFFSwabShort();
              uVar21 = *(uint *)(param_1 + 2);
            }
            *psVar38 = *(short *)((long)puVar39 + 2);
            if ((uVar21 >> 7 & 1) != 0) {
              TIFFSwabShort(psVar38);
            }
            _TIFFmemcpy(psVar38 + 1,puVar39 + 1,8);
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabLong8(psVar38 + 1);
            }
            _TIFFmemcpy(psVar38 + 5,puVar39 + 2,8);
            uVar20 = uVar20 + 1;
            puVar39 = puVar39 + 3;
            psVar3 = psVar38 + 10;
          } while (uVar20 < local_a4);
          puVar39 = (ulong *)(psVar38 + 9);
        }
        _TIFFmemcpy(puVar39,param_1 + 4,8);
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong8(puVar39);
        }
      }
      _TIFFfree(__ptr_00);
      lVar35 = (*(code *)param_1[0x7a])(param_1[0x77],param_1[3],0);
      if ((lVar35 == param_1[3]) &&
         (sVar41 = (*(code *)param_1[0x79])(param_1[0x77],puVar15,local_b0), sVar41 == local_b0)) {
        _TIFFfree(puVar15);
        if (param_3 == 0) {
          return 1;
        }
        TIFFFreeDirectory(param_1);
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffdffff7;
        (*(code *)param_1[0x67])(param_1);
        TIFFCreateDirectory(param_1);
        return 1;
      }
      TIFFErrorExt(param_1[0x77],"TIFFWriteDirectorySec","IO error writing directory");
      __ptr_00 = puVar15;
      goto LAB_01130240;
    }
    __ptr_00 = _TIFFmalloc((ulong)local_a4 * 0x18);
    if (__ptr_00 == (ulong *)0x0) {
      TIFFErrorExt(param_1[0x77],"TIFFWriteDirectorySec","Out of memory");
      return 0;
    }
    if (param_2 == 0) {
      lVar22 = (*(code *)param_1[0x7a])(param_1[0x77],0,2);
      param_1[3] = lVar22 + 1U & 0xfffffffffffffffe;
    }
    else if (param_1[3] == 0) {
      lVar22 = (*(code *)param_1[0x7a])(param_1[0x77],0,2);
      uVar20 = *(uint *)(param_1 + 2);
      pcVar27 = (char *)(lVar22 + 1U & 0xfffffffffffffffe);
      param_1[3] = pcVar27;
      local_88 = pcVar27;
      if ((uVar20 >> 0xd & 1) == 0) {
        if ((uVar20 >> 0x13 & 1) == 0) {
          local_88 = (char *)CONCAT44(local_88._4_4_,(int)pcVar27);
          if ((uVar20 >> 7 & 1) != 0) {
            TIFFSwabLong(&local_88);
          }
          uVar20 = *(uint *)((long)param_1 + 0x26c);
          if (uVar20 == 0) {
            *(int *)((long)param_1 + 0x26c) = (int)param_1[3];
            (*(code *)param_1[0x7a])(param_1[0x77],4,0);
            lVar22 = (*(code *)param_1[0x79])(param_1[0x77],&local_88,4);
            if (lVar22 != 4) goto LAB_0112e42c;
          }
          else {
            do {
              uVar34 = (*(code *)param_1[0x7a])(param_1[0x77],(ulong)uVar20,0);
              if ((uVar34 != uVar20) ||
                 (lVar22 = (*(code *)param_1[0x78])(param_1[0x77],&local_a0,2), lVar22 != 2)) {
                uVar18 = param_1[0x77];
                pcVar27 = "Error fetching directory count";
                goto LAB_0112e5f8;
              }
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabShort(&local_a0);
              }
              iVar11 = uVar20 + 2;
              (*(code *)param_1[0x7a])(param_1[0x77],iVar11 + (uint)local_a0 * 0xc,0);
              lVar22 = (*(code *)param_1[0x78])(param_1[0x77],&local_98,4);
              if (lVar22 != 4) {
                uVar18 = param_1[0x77];
                pcVar27 = "Error fetching directory link";
                goto LAB_0112e5f8;
              }
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabLong(&local_98);
              }
              uVar20 = CONCAT22(uStack_96,local_98);
            } while (uVar20 != 0);
            (*(code *)param_1[0x7a])(param_1[0x77],iVar11 + (uint)local_a0 * 0xc,0);
                    /* try { // try from 0112e650 to 0122e657 has its CatchHandler @ 0112e718 */
            lVar22 = (*(code *)param_1[0x79])(param_1[0x77],&local_88,4);
                    /* try { // try from 0112e658 to 0122e72b has its CatchHandler @ 0112e604 */
            if (lVar22 == 4) {
              iVar11 = 3;
            }
            else {
              uVar18 = param_1[0x77];
              pcVar27 = "Error writing directory link";
LAB_0112e5f8:
              TIFFErrorExt(uVar18,"TIFFLinkDirectory",pcVar27);
              iVar11 = 1;
                    /* try { // try from 0112e604 to 0122e64f has its CatchHandler @ 0112e604
                       catch() { ... } // from try @ 0112e604 with catch @ 0112e604
                       catch() { ... } // from try @ 0112e658 with catch @ 0112e604 */
            }
            if (iVar11 != 3) goto LAB_0112e670;
          }
        }
        else {
          if ((uVar20 >> 7 & 1) != 0) {
            TIFFSwabLong8(&local_88);
          }
          lVar22 = param_1[0x4e];
          if (lVar22 == 0) {
            param_1[0x4e] = param_1[3];
            (*(code *)param_1[0x7a])(param_1[0x77],8,0);
            lVar22 = (*(code *)param_1[0x79])(param_1[0x77],&local_88,8);
            if (lVar22 != 8) {
LAB_0112e42c:
              uVar18 = param_1[0x77];
              pcVar16 = (char *)*param_1;
              pcVar27 = "Error writing TIFF header";
              goto LAB_0112e4b8;
            }
          }
          else {
            do {
              lVar14 = (*(code *)param_1[0x7a])(param_1[0x77],lVar22,0);
              if ((lVar14 != lVar22) ||
                 (lVar14 = (*(code *)param_1[0x78])(param_1[0x77],&local_98,8), lVar14 != 8)) {
                uVar18 = param_1[0x77];
                pcVar27 = "Error fetching directory count";
                goto LAB_0112ffc4;
              }
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabLong8(&local_98);
              }
              if (0xffff < CONCAT44(uStack_94,CONCAT22(uStack_96,local_98))) {
                uVar18 = param_1[0x77];
                pcVar27 = "Sanity check on tag count failed, likely corrupt TIFF";
                goto LAB_0112ffc4;
              }
              lVar14 = lVar22 + ((ulong)CONCAT22(uStack_96,local_98) & 0xffff) * 0x14 + 8;
              (*(code *)param_1[0x7a])(param_1[0x77],lVar14,0);
              lVar22 = (*(code *)param_1[0x78])(param_1[0x77],&local_a0,8);
              if (lVar22 != 8) {
                uVar18 = param_1[0x77];
                pcVar27 = "Error fetching directory link";
                goto LAB_0112ffc4;
              }
              if (*(char *)(param_1 + 2) < '\0') {
                TIFFSwabLong8(&local_a0);
              }
              lVar22 = CONCAT62(uStack_9e,local_a0);
            } while (lVar22 != 0);
            (*(code *)param_1[0x7a])(param_1[0x77],lVar14,0);
            lVar22 = (*(code *)param_1[0x79])(param_1[0x77],&local_88,8);
            if (lVar22 == 8) {
              iVar11 = 5;
              iVar23 = 5;
            }
            else {
              uVar18 = param_1[0x77];
              pcVar27 = "Error writing directory link";
LAB_0112ffc4:
              TIFFErrorExt(uVar18,"TIFFLinkDirectory",pcVar27);
              iVar11 = 1;
              iVar23 = 1;
            }
            if (iVar23 != 5) {
LAB_0112e670:
              if (iVar11 != 0) goto joined_r0x0112fffc;
            }
          }
        }
      }
      else if ((uVar20 >> 0x13 & 1) == 0) {
        local_88 = (char *)CONCAT44(local_88._4_4_,(int)pcVar27);
        if ((uVar20 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_88);
        }
        (*(code *)param_1[0x7a])(param_1[0x77],param_1[0x54],0);
        lVar22 = (*(code *)param_1[0x79])(param_1[0x77],&local_88,4);
        if (lVar22 != 4) goto LAB_0112e4a4;
        sVar5 = *(short *)(param_1 + 0x53);
        *(short *)(param_1 + 0x53) = sVar5 + -1;
        if ((short)(sVar5 + -1) == 0) goto LAB_0112e758;
        param_1[0x54] = param_1[0x54] + 4;
      }
      else {
        if ((uVar20 >> 7 & 1) != 0) {
          TIFFSwabLong8(&local_88);
        }
        (*(code *)param_1[0x7a])(param_1[0x77],param_1[0x54],0);
        lVar22 = (*(code *)param_1[0x79])(param_1[0x77],&local_88,8);
        if (lVar22 != 8) {
LAB_0112e4a4:
          uVar18 = param_1[0x77];
          pcVar16 = "TIFFLinkDirectory";
          pcVar27 = "Error writing SubIFD directory link";
LAB_0112e4b8:
          TIFFErrorExt(uVar18,pcVar16,pcVar27);
          goto joined_r0x0112fffc;
        }
        sVar5 = *(short *)(param_1 + 0x53);
        *(short *)(param_1 + 0x53) = sVar5 + -1;
        if ((short)(sVar5 + -1) == 0) {
LAB_0112e758:
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffffdfff;
        }
        else {
          param_1[0x54] = param_1[0x54] + 8;
        }
      }
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = param_1[3];
    }
    if ((*(byte *)((long)param_1 + 0x12) >> 3 & 1) == 0) {
      uVar28 = param_1[3];
      uVar20 = (local_a4 * 0xc | 2) + 4;
      local_b0 = (ulong)uVar20;
      uVar34 = (ulong)((int)uVar28 + uVar20);
    }
    else {
      uVar28 = param_1[3];
      local_b0 = (ulong)(local_a4 * 0x14 + 0x10);
      uVar34 = uVar28 + local_b0;
    }
    param_1[0x52] = uVar34;
    if ((uVar34 < local_b0) || (uVar34 < uVar28)) {
      TIFFErrorExt(param_1[0x77],"TIFFWriteDirectorySec","Maximum TIFF file size exceeded");
joined_r0x0112fffc:
      if (__ptr_00 != (ulong *)0x0) {
LAB_01130240:
        _TIFFfree(__ptr_00);
      }
      return 0;
    }
    if ((uVar34 & 1) != 0) {
      param_1[0x52] = uVar34 + 1;
    }
    if (param_2 != 0) {
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
    }
  } while( true );
}

