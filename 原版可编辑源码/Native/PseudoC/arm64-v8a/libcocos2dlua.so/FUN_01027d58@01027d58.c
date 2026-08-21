
void * FUN_01027d58(void *param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  ulonglong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_1f0;
  byte local_1e8 [8];
  ulong local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  void *local_170;
  ulong local_168;
  ulong local_160;
  long local_158;
  ulong local_138;
  ulong local_130;
  ulong local_128 [19];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_188 = 0;
  local_180 = 0;
  if (param_2 == (undefined8 *)0x0) {
    cocos2d::fill_fopen64_filefunc((zlib_filefunc64_def_s *)&local_1d0);
  }
  else {
    pcStack_1c8 = (code *)param_2[1];
    local_1d0 = *param_2;
    uStack_1b8 = param_2[3];
    uStack_1c0 = param_2[2];
    local_180 = param_2[10];
    uStack_198 = param_2[7];
    local_1a0 = (code *)param_2[6];
    local_188 = param_2[9];
    uStack_190 = param_2[8];
    pcStack_1a8 = (code *)param_2[5];
    local_1b0 = param_2[4];
  }
  local_178 = param_3;
  pvVar7 = (void *)cocos2d::call_zopen64((zlib_filefunc64_32_def_s *)&local_1d0,param_1,5);
  local_170 = pvVar7;
  if (pvVar7 != (void *)0x0) {
    lVar8 = cocos2d::call_zseek64((zlib_filefunc64_32_def_s *)&local_1d0,pvVar7,0,2);
    if (lVar8 == 0) {
      uVar9 = cocos2d::call_ztell64((zlib_filefunc64_32_def_s *)&local_1d0,pvVar7);
      uVar14 = uVar9;
      if (0xfffe < uVar9) {
        uVar14 = 0xffff;
      }
      pvVar10 = malloc(0x404);
      if (pvVar10 != (void *)0x0) {
        uVar15 = 4;
        if (4 < uVar14) {
          do {
            uVar12 = uVar15 + 0x400;
            uVar15 = uVar14;
            if (uVar12 <= uVar14) {
              uVar15 = uVar12;
            }
            uVar12 = uVar15;
            if (0x403 < uVar15) {
              uVar12 = 0x404;
            }
            lVar8 = cocos2d::call_zseek64
                              ((zlib_filefunc64_32_def_s *)&local_1d0,pvVar7,uVar9 - uVar15,0);
            if ((lVar8 != 0) ||
               (uVar11 = (*pcStack_1c8)(uStack_198,pvVar7,pvVar10,uVar12), uVar11 != uVar12)) break;
            if (3 < (uint)uVar12) {
              do {
                if ((((*(char *)((long)pvVar10 + (uVar12 - 4)) == 'P') &&
                     (*(char *)((long)pvVar10 + (uVar12 - 3)) == 'K')) &&
                    (*(char *)((long)pvVar10 + (uVar12 - 2)) == '\x06')) &&
                   (*(char *)((long)pvVar10 + (uVar12 - 1)) == '\a')) {
                  uVar13 = ((uVar9 - 4) - uVar15) + uVar12;
                  if (uVar13 != 0) {
                    free(pvVar10);
                    lVar8 = cocos2d::call_zseek64
                                      ((zlib_filefunc64_32_def_s *)&local_1d0,pvVar7,uVar13,0);
                    if ((((lVar8 != 0) ||
                         (iVar3 = FUN_0102a978(&local_1d0,pvVar7,&local_1f0), iVar3 != 0)) ||
                        ((iVar3 = FUN_0102a978(&local_1d0,pvVar7,&local_1f0), iVar3 != 0 ||
                         ((local_1f0 != 0 ||
                          (iVar3 = FUN_0102aafc(&local_1d0,pvVar7,&local_78), iVar3 != 0)))))) ||
                       ((iVar3 = FUN_0102a978(&local_1d0,pvVar7,&local_1f0), uVar13 = local_78,
                        iVar3 != 0 ||
                        ((((local_1f0 != 1 ||
                           (lVar8 = cocos2d::call_zseek64
                                              ((zlib_filefunc64_32_def_s *)&local_1d0,pvVar7,
                                               local_78,0), lVar8 != 0)) ||
                          (iVar3 = FUN_0102a978(&local_1d0,pvVar7,&local_1f0), iVar3 != 0)) ||
                         ((local_1f0 != 0x6064b50 || (uVar13 == 0)))))))) goto LAB_01028094;
                    local_84 = 1;
                    lVar8 = cocos2d::call_zseek64
                                      ((zlib_filefunc64_32_def_s *)&local_1d0,local_170,uVar13,0);
                    iVar3 = FUN_0102a978(&local_1d0,local_170,&local_1f0);
                    iVar2 = FUN_0102aafc(&local_1d0,local_170,local_1e8);
                    pvVar7 = local_170;
                    iVar4 = (*pcStack_1c8)(uStack_198,local_170,&local_78,1);
                    if (((iVar4 == 1) || (iVar4 = (*local_1a0)(uStack_198,pvVar7), iVar4 == 0)) &&
                       ((iVar4 = (*pcStack_1c8)(uStack_198,pvVar7,&local_78,1), iVar4 == 1 ||
                        (iVar4 = (*local_1a0)(uStack_198,pvVar7), iVar4 == 0)))) {
                      iVar3 = -(uint)(lVar8 != 0 || (iVar2 != 0 || iVar3 != 0));
                    }
                    else {
                      iVar3 = -1;
                    }
                    pvVar7 = local_170;
                    iVar2 = (*pcStack_1c8)(uStack_198,local_170,&local_78,1);
                    if (((iVar2 != 1) && (iVar2 = (*local_1a0)(uStack_198,pvVar7), iVar2 != 0)) ||
                       ((iVar2 = (*pcStack_1c8)(uStack_198,pvVar7,&local_78,1), iVar2 != 1 &&
                        (iVar2 = (*local_1a0)(uStack_198,pvVar7), iVar2 != 0)))) {
                      iVar3 = -1;
                    }
                    iVar2 = FUN_0102a978(&local_1d0,local_170,&local_78);
                    iVar4 = FUN_0102a978(&local_1d0,local_170,&local_1d8);
                    iVar5 = FUN_0102aafc(&local_1d0,local_170,&local_168);
                    iVar6 = FUN_0102aafc(&local_1d0,local_170,&local_1e0);
                    if (((iVar4 != 0 || iVar2 != 0) || iVar5 != 0) || iVar6 != 0) {
                      iVar3 = -1;
                    }
                    iVar2 = -0x67;
                    if ((local_78 == 0 && local_1d8 == 0) && local_1e0 == local_168) {
                      iVar2 = iVar3;
                    }
                    iVar3 = FUN_0102aafc(&local_1d0,local_170,&local_130);
                    iVar4 = FUN_0102aafc(&local_1d0,local_170,local_128);
                    if (iVar4 != 0 || iVar3 != 0) {
                      iVar2 = -1;
                    }
                    local_160 = 0;
                    lVar8 = local_158;
                    uVar14 = local_138;
                    local_138 = uVar13;
                    goto joined_r0x010286e0;
                  }
                  break;
                }
                lVar8 = uVar12 - 4;
                uVar12 = uVar12 - 1;
              } while (0 < lVar8);
            }
          } while (uVar15 < uVar14);
        }
        free(pvVar10);
      }
    }
LAB_01028094:
    pvVar7 = local_170;
                    /* try { // try from 010280a0 to 011280db has its CatchHandler @ 010280a0
                       catch() { ... } // from try @ 010280a0 with catch @ 010280a0
                       catch() { ... } // from try @ 01028100 with catch @ 010280a0 */
    lVar8 = cocos2d::call_zseek64((zlib_filefunc64_32_def_s *)&local_1d0,local_170,0,2);
    if (lVar8 == 0) {
      uVar9 = cocos2d::call_ztell64((zlib_filefunc64_32_def_s *)&local_1d0,pvVar7);
      uVar14 = uVar9;
      if (0xfffe < uVar9) {
        uVar14 = 0xffff;
      }
      pvVar10 = malloc(0x404);
      if (pvVar10 != (void *)0x0) {
                    /* try { // try from 010280dc to 011280e3 has its CatchHandler @ 01028264 */
        uVar15 = 4;
        if (4 < uVar14) {
          do {
            uVar12 = uVar15 + 0x400;
            uVar15 = uVar14;
            if (uVar12 <= uVar14) {
              uVar15 = uVar12;
            }
            uVar12 = uVar15;
            if (0x403 < uVar15) {
              uVar12 = 0x404;
            }
            lVar8 = cocos2d::call_zseek64
                              ((zlib_filefunc64_32_def_s *)&local_1d0,pvVar7,uVar9 - uVar15,0);
            if ((lVar8 != 0) ||
               (uVar11 = (*pcStack_1c8)(uStack_198,pvVar7,pvVar10,uVar12), uVar11 != uVar12)) break;
            if (3 < (uint)uVar12) {
              do {
                if ((((*(char *)((long)pvVar10 + (uVar12 - 4)) == 'P') &&
                     (*(char *)((long)pvVar10 + (uVar12 - 3)) == 'K')) &&
                    (*(char *)((long)pvVar10 + (uVar12 - 2)) == '\x05')) &&
                   (*(char *)((long)pvVar10 + (uVar12 - 1)) == '\x06')) {
                  uVar13 = ((uVar9 - 4) - uVar15) + uVar12;
                  if (uVar13 != 0) {
                    free(pvVar10);
                    iVar3 = 0;
                    goto LAB_010281d4;
                  }
                  break;
                }
                lVar8 = uVar12 - 4;
                uVar12 = uVar12 - 1;
              } while (0 < lVar8);
            }
                    /* try { // try from 01028100 to 0112827b has its CatchHandler @ 010280a0 */
          } while (uVar15 < uVar14);
        }
        free(pvVar10);
      }
    }
    uVar13 = 0;
    iVar3 = -1;
LAB_010281d4:
    local_84 = 0;
    lVar8 = cocos2d::call_zseek64((zlib_filefunc64_32_def_s *)&local_1d0,local_170,uVar13,0);
    iVar2 = FUN_0102a978(&local_1d0,local_170,&local_1f0);
    pvVar7 = local_170;
    if (iVar2 != 0 || lVar8 != 0) {
      iVar3 = -1;
    }
    iVar2 = (*pcStack_1c8)(uStack_198,local_170,&local_78,1);
    if (iVar2 == 1) {
      uVar14 = local_78 & 0xff;
                    /* catch() { ... } // from try @ 010280f8 with catch @ 01028238 */
LAB_01028250:
                    /* catch() { ... } // from try @ 010280dc with catch @ 01028264 */
      iVar2 = (*pcStack_1c8)(uStack_198,pvVar7,&local_78,1);
      if (iVar2 == 1) {
        uVar9 = local_78 & 0xff;
      }
      else {
        iVar2 = (*local_1a0)(uStack_198,pvVar7);
        uVar9 = uVar14;
        if (iVar2 != 0) goto LAB_01028290;
      }
      uVar14 = uVar14 | uVar9 << 8;
    }
    else {
      iVar2 = (*local_1a0)(uStack_198,pvVar7);
      uVar14 = 0;
      if (iVar2 == 0) goto LAB_01028250;
LAB_01028290:
      uVar14 = 0;
      iVar3 = -1;
    }
    pvVar7 = local_170;
    local_78 = uVar14;
    iVar2 = (*pcStack_1c8)(uStack_198,local_170,&local_1d8,1);
    if (iVar2 == 1) {
      uVar9 = local_1d8 & 0xff;
LAB_010282e0:
      iVar2 = (*pcStack_1c8)(uStack_198,pvVar7,&local_1d8,1);
      if (iVar2 == 1) {
        uVar15 = local_1d8 & 0xff;
      }
      else {
        iVar2 = (*local_1a0)(uStack_198,pvVar7);
        uVar15 = uVar9;
        if (iVar2 != 0) goto LAB_01028320;
      }
      uVar9 = uVar9 | uVar15 << 8;
    }
    else {
      iVar2 = (*local_1a0)(uStack_198,pvVar7);
      uVar9 = 0;
      if (iVar2 == 0) goto LAB_010282e0;
LAB_01028320:
      uVar9 = 0;
      iVar3 = -1;
    }
    pvVar7 = local_170;
    local_1d8 = uVar9;
    iVar2 = (*pcStack_1c8)(uStack_198,local_170,&local_1e0,1);
    if (iVar2 == 1) {
      uVar15 = local_1e0 & 0xff;
LAB_01028370:
      iVar2 = (*pcStack_1c8)(uStack_198,pvVar7,&local_1e0,1);
      if (iVar2 == 1) {
        uVar12 = local_1e0 & 0xff;
      }
      else {
        iVar2 = (*local_1a0)(uStack_198,pvVar7);
        uVar12 = uVar15;
        if (iVar2 != 0) goto LAB_010283b0;
      }
      local_1f0 = uVar15 | uVar12 << 8;
    }
    else {
      iVar2 = (*local_1a0)(uStack_198,pvVar7);
      uVar15 = 0;
      if (iVar2 == 0) goto LAB_01028370;
LAB_010283b0:
      local_1f0 = 0;
      iVar3 = -1;
    }
    pvVar7 = local_170;
    local_168 = local_1f0;
    iVar2 = (*pcStack_1c8)(uStack_198,local_170,&local_1e0,1);
    if (iVar2 == 1) {
      uVar15 = local_1e0 & 0xff;
LAB_01028404:
      iVar2 = (*pcStack_1c8)(uStack_198,pvVar7,&local_1e0,1);
      if (iVar2 == 1) {
        uVar12 = local_1e0 & 0xff;
      }
      else {
        iVar2 = (*local_1a0)(uStack_198,pvVar7);
        uVar12 = uVar15;
        if (iVar2 != 0) goto LAB_01028444;
      }
      local_1f0 = uVar15 | uVar12 << 8;
    }
    else {
      iVar2 = (*local_1a0)(uStack_198,pvVar7);
      uVar15 = 0;
      if (iVar2 == 0) goto LAB_01028404;
LAB_01028444:
      local_1f0 = 0;
      iVar3 = -1;
    }
    iVar2 = -0x67;
    if (local_1f0 == local_168 && (uVar9 == 0 && uVar14 == 0)) {
      iVar2 = iVar3;
    }
    local_1e0 = local_1f0;
    iVar3 = FUN_0102a978(&local_1d0,local_170,&local_1f0);
    local_130 = local_1f0;
    iVar4 = FUN_0102a978(&local_1d0,local_170,&local_1f0);
    pvVar7 = local_170;
    if (iVar4 != 0 || iVar3 != 0) {
      iVar2 = -1;
    }
    local_128[0] = local_1f0;
    iVar3 = (*pcStack_1c8)(uStack_198,local_170,local_1e8,1);
    if (iVar3 == 1) {
      uVar14 = (ulong)local_1e8[0];
LAB_010284ec:
      iVar3 = (*pcStack_1c8)(uStack_198,pvVar7,local_1e8,1);
      if (iVar3 == 1) {
        uVar9 = (ulong)local_1e8[0];
      }
      else {
        iVar3 = (*local_1a0)(uStack_198,pvVar7);
        uVar9 = uVar14;
        if (iVar3 != 0) goto LAB_01028528;
      }
      local_160 = uVar14 | uVar9 << 8;
      lVar8 = local_158;
      uVar14 = local_138;
      local_138 = uVar13;
joined_r0x010286e0:
      if ((iVar2 == 0) &&
         (local_158 = local_138 - (local_130 + local_128[0]), local_130 + local_128[0] <= local_138)
         ) {
        local_90 = 0;
        local_88 = 0;
        pvVar7 = malloc(0x150);
        if (pvVar7 != (void *)0x0) {
          memcpy(pvVar7,&local_1d0,0x150);
          *(undefined8 *)((long)pvVar7 + 0x80) = 0;
          *(undefined8 *)((long)pvVar7 + 0x88) = *(undefined8 *)((long)pvVar7 + 0xa8);
          iVar3 = FUN_01028a58(pvVar7,(long)pvVar7 + 0xb0,(long)pvVar7 + 0x138,0,0,0,0,0,0);
          *(ulong *)((long)pvVar7 + 0x90) = (ulong)(iVar3 == 0);
        }
        goto LAB_010286f8;
      }
    }
    else {
      iVar3 = (*local_1a0)(uStack_198,pvVar7);
      if (iVar3 == 0) {
        uVar14 = 0;
        goto LAB_010284ec;
      }
LAB_01028528:
      local_160 = 0;
      lVar8 = local_158;
      uVar14 = local_138;
    }
    local_138 = uVar14;
    local_158 = lVar8;
    (*pcStack_1a8)(uStack_198,local_170);
  }
  pvVar7 = (void *)0x0;
LAB_010286f8:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return pvVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

