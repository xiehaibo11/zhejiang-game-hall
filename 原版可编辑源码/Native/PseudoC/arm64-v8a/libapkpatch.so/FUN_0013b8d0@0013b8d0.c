
void FUN_0013b8d0(ulong *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  ulong local_160;
  undefined8 *local_158;
  ulong local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  int local_13c;
  undefined1 auStack_138 [200];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_150 = 0;
  uVar7 = FUN_0013b5f8(param_2,param_3,&local_150);
  if ((uVar7 & 1) == 0) {
    puts("_openZipDiffData(diffData, decompressPlugin, &headInoPos) ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "_openZipDiffData(diffData, decompressPlugin, &headInoPos) ERROR!\n");
    local_190 = "_openZipDiffData(diffData, decompressPlugin, &headInoPos)";
  }
  else {
    lVar14 = (long)((int)*(ulong *)(param_2 + 8) - (int)local_150);
    if (local_150 + 0xd1 <= *(ulong *)(param_2 + 8)) {
      lVar14 = 0xd1;
    }
    lVar14 = (long)&local_148 + lVar14;
    iVar5 = (**(code **)(param_2 + 0x10))(param_2,local_150,&local_148,lVar14);
    if (iVar5 == 0) {
      puts("diffData->read(diffData, headInoPos, buf, buf + readLen) ERROR!");
      __android_log_print(6,"apk_diff_native",
                          "diffData->read(diffData, headInoPos, buf, buf + readLen) ERROR!\n");
      local_190 = "diffData->read(diffData, headInoPos, buf, buf + readLen)";
    }
    else {
      local_160 = 0;
      local_158 = &local_148;
      iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
      if (iVar5 != 0) {
        *param_1 = local_160;
        if (local_160 != 0) {
          puts("self->PatchModel == 0 ERROR!");
          __android_log_print(6,"apk_diff_native","self->PatchModel == 0 ERROR!\n");
          local_190 = "self->PatchModel == 0";
          goto LAB_0013bd84;
        }
        local_160 = 0;
        iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
        uVar7 = local_160;
        if (iVar5 != 0) {
          local_160 = 0;
          param_1[1] = uVar7;
          iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
          uVar7 = local_160;
          if (iVar5 != 0) {
            local_160 = 0;
            param_1[2] = uVar7;
            iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
            uVar7 = local_160;
            if (iVar5 != 0) {
              local_160 = 0;
              param_1[3] = uVar7;
              iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
              uVar7 = local_160;
              if (iVar5 != 0) {
                local_160 = 0;
                param_1[4] = uVar7;
                iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                uVar7 = local_160;
                if (iVar5 != 0) {
                  local_160 = 0;
                  param_1[5] = uVar7;
                  iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                  uVar7 = local_160;
                  if (iVar5 != 0) {
                    local_160 = 0;
                    param_1[6] = uVar7;
                    iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                    uVar7 = local_160;
                    if (iVar5 != 0) {
                      local_160 = 0;
                      param_1[7] = uVar7;
                      iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                      uVar7 = local_160;
                      if (iVar5 != 0) {
                        local_160 = 0;
                        param_1[8] = uVar7;
                        iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                        uVar7 = local_160;
                        if (iVar5 != 0) {
                          local_160 = 0;
                          param_1[10] = uVar7;
                          iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                          uVar7 = local_160;
                          if (iVar5 != 0) {
                            local_160 = 0;
                            param_1[0xc] = uVar7;
                            iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                            uVar7 = local_160;
                            if (iVar5 != 0) {
                              local_160 = 0;
                              param_1[0xe] = uVar7;
                              iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                              uVar7 = local_160;
                              if (iVar5 != 0) {
                                local_160 = 0;
                                param_1[0xf] = uVar7;
                                iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                                uVar7 = local_160;
                                if (iVar5 != 0) {
                                  local_160 = 0;
                                  param_1[0x10] = uVar7;
                                  iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                                  uVar7 = local_160;
                                  if (iVar5 != 0) {
                                    local_160 = 0;
                                    param_1[0x11] = uVar7;
                                    iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                                    uVar7 = local_160;
                                    if (iVar5 != 0) {
                                      local_160 = 0;
                                      param_1[0x13] = uVar7;
                                      iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                                      if (iVar5 == 0) {
                                        local_190 = "hpatch_unpackUInt(&curBuf,buf + readLen,&v)";
                                        pcVar15 = 
                                        "hpatch_unpackUInt(&curBuf,buf + readLen,&v) ERROR!\n";
                                        pcVar18 = 
                                        "hpatch_unpackUInt(&curBuf,buf + readLen,&v) ERROR!";
                                      }
                                      else {
                                        if (local_160 >> 0x20 == 0) {
                                          *(int *)(param_1 + 0x14) = (int)local_160;
                                          local_160 = 0;
                                          iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                                          uVar7 = local_160;
                                          if (iVar5 != 0) {
                                            local_160 = 0;
                                            iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                                            uVar3 = local_160;
                                            if (iVar5 != 0) {
                                              local_160 = 0;
                                              iVar5 = FUN_00135704(&local_158,lVar14,&local_160,0);
                                              uVar4 = local_160;
                                              if (iVar5 != 0) {
                                                lVar14 = (long)local_158 +
                                                         (local_150 - (long)&local_148);
                                                uVar11 = *(long *)(param_2 + 8) - lVar14;
                                                if (uVar11 < uVar3) {
                                                  puts(
                                                  "headDataCompressedSize <= diffData->streamSize - headDataPos ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "headDataCompressedSize <= diffData->streamSize - headDataPos ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "headDataCompressedSize <= diffData->streamSize - headDataPos"
                                                  ;
                                                }
                                                else if (uVar11 - uVar3 < local_160) {
                                                  puts(
                                                  "hdiffzSize <= diffData->streamSize - headDataPos - headDataCompressedSize ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "hdiffzSize <= diffData->streamSize - headDataPos - headDataCompressedSize ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "hdiffzSize <= diffData->streamSize - headDataPos - headDataCompressedSize"
                                                  ;
                                                }
                                                else {
                                                  lVar16 = param_1[0xc] + param_1[10] * 2 +
                                                           param_1[0xe] + param_1[0x13];
                                                  uVar11 = uVar3 + 3 & 0xfffffffffffffffc;
                                                  if (uVar3 <= (ulong)(lVar16 * 4)) {
                                                    uVar11 = lVar16 * 4;
                                                  }
                                                  pvVar9 = malloc(uVar11 + uVar7);
                                                  param_1[0x17] = (ulong)pvVar9;
                                                  if (pvVar9 == (void *)0x0) {
                                                    puts("self->_buf != 0 ERROR!");
                                                    __android_log_print(6,"apk_diff_native",
                                                                        "self->_buf != 0 ERROR!\n");
                                                    local_190 = "self->_buf != 0";
                                                  }
                                                  else {
                                                    iVar5 = (**(code **)(param_2 + 0x10))
                                                                      (param_2,lVar14,pvVar9,
                                                                       (long)pvVar9 + uVar3);
                                                    if (iVar5 == 0) {
                                                      puts(
                                                  "diffData->read(diffData, headDataPos, self->_buf, self->_buf + headDataCompressedSize) ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "diffData->read(diffData, headDataPos, self->_buf, self->_buf + headDataCompressedSize) ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "diffData->read(diffData, headDataPos, self->_buf, self->_buf + headDataCompressedSize)"
                                                  ;
                                                  }
                                                  else {
                                                    if (uVar7 != 0) {
                                                      uVar10 = param_1[0x17];
                                                      iVar5 = FUN_00135848(param_3,uVar10,
                                                                           uVar10 + uVar3,
                                                                           uVar10 + uVar11,
                                                                           uVar10 + uVar11 + uVar7);
                                                      if (iVar5 == 0) {
                                                        puts(
                                                  "hpatch_deccompress_mem(decompressPlugin, self->_buf, self->_buf + headDataCompressedSize, self->_buf + memLeft, self->_buf + memLeft + headDataSize) ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "hpatch_deccompress_mem(decompressPlugin, self->_buf, self->_buf + headDataCompressedSize, self->_buf + memLeft, self->_buf + memLeft + headDataSize) ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "hpatch_deccompress_mem(decompressPlugin, self->_buf, self->_buf + headDataCompressedSize, self->_buf + memLeft, self->_buf + memLeft + headDataSize)"
                                                  ;
                                                  goto LAB_0013bd84;
                                                  }
                                                  }
                                                  uVar13 = param_1[0x17];
                                                  uVar12 = param_1[0xc];
                                                  param_1[9] = uVar13;
                                                  uVar10 = uVar13 + param_1[10] * 8;
                                                  local_148 = (char *)(uVar13 + uVar11);
                                                  param_1[0xb] = uVar10;
                                                  uVar10 = uVar10 + uVar12 * 4;
                                                  pcVar15 = local_148 + uVar7;
                                                  param_1[0xd] = uVar10;
                                                  param_1[0x12] = uVar10 + param_1[0xe] * 4;
                                                  if (param_1[10] != 0) {
                                                    local_180 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!\n";
                                                  local_178 = "hpatch_unpackUInt(&curBuf,bufEnd,&v)"
                                                  ;
                                                  local_190 = 
                                                  "hpatch_unpackUIntWithTag(&curBuf, bufEnd, &incPairOld, 1)"
                                                  ;
                                                  local_188 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!";
                                                  lVar16 = 0;
                                                  uVar11 = 0;
                                                  iVar5 = -1;
                                                  uVar7 = 0xffffffffffffffff;
                                                  local_1a0 = 
                                                  "hpatch_unpackUIntWithTag(&curBuf, bufEnd, &incPairOld, 1) ERROR!"
                                                  ;
                                                  local_198 = 
                                                  "hpatch_unpackUIntWithTag(&curBuf, bufEnd, &incPairOld, 1) ERROR!\n"
                                                  ;
                                                  do {
                                                    local_150 = 0;
                                                    iVar6 = FUN_00135704(&local_148,pcVar15,
                                                                         &local_150,0);
                                                    if (iVar6 == 0) {
LAB_0013c2ec:
                                                      puts(local_188);
                                                      __android_log_print(6,"apk_diff_native",
                                                                          local_180);
                                                      local_190 = local_178;
                                                      goto LAB_0013bd84;
                                                    }
                                                    if (local_150 >> 0x20 != 0) {
                                                      local_188 = "v==(uint32_t)v ERROR!";
                                                      local_180 = "v==(uint32_t)v ERROR!\n";
                                                      local_178 = "v==(uint32_t)v";
                                                      goto LAB_0013c2ec;
                                                    }
                                                    iVar5 = iVar5 + (int)local_150 + 1;
                                                    *(int *)(param_1[9] + lVar16) = iVar5;
                                                    if (pcVar15 <= local_148) {
                                                      puts("curBuf < bufEnd ERROR!");
                                                      __android_log_print(6,"apk_diff_native",
                                                                          "curBuf < bufEnd ERROR!\n"
                                                                         );
                                                      local_190 = "curBuf < bufEnd";
                                                      goto LAB_0013bd84;
                                                    }
                                                    cVar1 = *local_148;
                                                    local_150 = 0;
                                                    iVar6 = FUN_00135704(&local_148,pcVar15,
                                                                         &local_150,1);
                                                    if (iVar6 == 0) {
LAB_0013c378:
                                                      puts(local_1a0);
                                                      __android_log_print(6,"apk_diff_native",
                                                                          local_198);
                                                      goto LAB_0013bd84;
                                                    }
                                                    uVar10 = local_150;
                                                    if (cVar1 < '\0') {
                                                      uVar10 = -local_150;
                                                    }
                                                    uVar7 = uVar7 + uVar10 + 1;
                                                    if (uVar7 >> 0x20 != 0) {
                                                      local_1a0 = 
                                                  "backPairOld == (uint32_t) backPairOld ERROR!";
                                                  local_198 = 
                                                  "backPairOld == (uint32_t) backPairOld ERROR!\n";
                                                  local_190 = 
                                                  "backPairOld == (uint32_t) backPairOld";
                                                  goto LAB_0013c378;
                                                  }
                                                  uVar11 = uVar11 + 1;
                                                  *(int *)(param_1[9] + lVar16 + 4) = (int)uVar7;
                                                  lVar16 = lVar16 + 8;
                                                  } while (uVar11 < param_1[10]);
                                                  uVar12 = param_1[0xc];
                                                  }
                                                  if (uVar12 != 0) {
                                                    uVar7 = 0;
                                                    iVar5 = -1;
                                                    local_190 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v)";
                                                  pcVar18 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!\n";
                                                  pcVar17 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!";
                                                  do {
                                                    local_150 = 0;
                                                    iVar6 = FUN_00135704(&local_148,pcVar15,
                                                                         &local_150,0);
                                                    if (iVar6 == 0) goto LAB_0013c298;
                                                    if (local_150 >> 0x20 != 0) goto LAB_0013c280;
                                                    iVar5 = iVar5 + (int)local_150 + 1;
                                                    *(int *)(param_1[0xb] + uVar7 * 4) = iVar5;
                                                    uVar7 = uVar7 + 1;
                                                  } while (uVar7 < param_1[0xc]);
                                                  }
                                                  if (param_1[0xe] != 0) {
                                                    uVar7 = 0;
                                                    pcVar18 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!\n";
                                                  pcVar17 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!";
                                                  do {
                                                    local_150 = 0;
                                                    iVar5 = FUN_00135704(&local_148,pcVar15,
                                                                         &local_150,0);
                                                    local_190 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v)";
                                                  if (iVar5 == 0) {
LAB_0013c3c0:
                                                    puts(pcVar17);
                                                    __android_log_print(6,"apk_diff_native",pcVar18)
                                                    ;
                                                    goto LAB_0013bd84;
                                                  }
                                                  if (local_150 >> 0x20 != 0) {
                                                    pcVar17 = "v==(uint32_t)v ERROR!";
                                                    pcVar18 = "v==(uint32_t)v ERROR!\n";
                                                    local_190 = "v==(uint32_t)v";
                                                    goto LAB_0013c3c0;
                                                  }
                                                  *(int *)(param_1[0xd] + uVar7 * 4) =
                                                       (int)local_150;
                                                  uVar7 = uVar7 + 1;
                                                  } while (uVar7 < param_1[0xe]);
                                                  }
                                                  if (param_1[0x13] != 0) {
                                                    uVar7 = 0;
                                                    iVar5 = -1;
                                                    local_190 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v)";
                                                  pcVar18 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!\n";
                                                  pcVar17 = 
                                                  "hpatch_unpackUInt(&curBuf,bufEnd,&v) ERROR!";
                                                  do {
                                                    local_150 = 0;
                                                    iVar6 = FUN_00135704(&local_148,pcVar15,
                                                                         &local_150,0);
                                                    if (iVar6 == 0) goto LAB_0013c298;
                                                    if (local_150 >> 0x20 != 0) goto LAB_0013c280;
                                                    iVar5 = iVar5 + (int)local_150 + 1;
                                                    *(int *)(param_1[0x12] + uVar7 * 4) = iVar5;
                                                    uVar7 = uVar7 + 1;
                                                  } while (uVar7 < param_1[0x13]);
                                                  }
                                                  if (local_148 == pcVar15) {
                                                    FUN_001359d4(param_1 + 0x18,param_2,
                                                                 uVar3 + lVar14,
                                                                 uVar3 + lVar14 + uVar4);
                                                    param_1[0x15] = (ulong)(param_1 + 0x18);
                                                    if (*(ulong *)(param_2 + 8) < 0x10) {
                                                      puts(
                                                  "diffData->streamSize >= 4 + kExtraEditLen ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "diffData->streamSize >= 4 + kExtraEditLen ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "diffData->streamSize >= 4 + kExtraEditLen";
                                                  }
                                                  else {
                                                    iVar5 = (**(code **)(param_2 + 0x10))
                                                                      (param_2,*(ulong *)(param_2 +
                                                                                         8) - 0x10,
                                                                       &local_148,auStack_138);
                                                    if (iVar5 == 0) {
                                                      puts(
                                                  "diffData->read(diffData, diffData->streamSize - 4 - kExtraEditLen, buf4s, buf4s + 4 + kExtraEditLen) ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "diffData->read(diffData, diffData->streamSize - 4 - kExtraEditLen, buf4s, buf4s + 4 + kExtraEditLen) ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "diffData->read(diffData, diffData->streamSize - 4 - kExtraEditLen, buf4s, buf4s + 4 + kExtraEditLen)"
                                                  ;
                                                  }
                                                  else if (CONCAT44(uStack_140,local_148._4_4_) ==
                                                           0x452631746150695a &&
                                                           local_13c == 0x61727478) {
                                                    if (uVar4 + param_1[0x1d] +
                                                        ((ulong)local_148 & 0xffffffff) + 0x10 <=
                                                        *(ulong *)(param_2 + 8)) {
                                                      FUN_001359d4(param_1 + 0x1e,param_2,
                                                                   (*(ulong *)(param_2 + 8) - 0x10)
                                                                   - ((ulong)local_148 & 0xffffffff)
                                                                  );
                                                      uVar8 = 1;
                                                      param_1[0x16] = (ulong)(param_1 + 0x1e);
                                                      goto LAB_0013bd8c;
                                                    }
                                                    puts(
                                                  "4 + kExtraEditLen + self->_hdiffzData.clipBeginPos + hdiffzSize + extraEditSize <= diffData->streamSize ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "4 + kExtraEditLen + self->_hdiffzData.clipBeginPos + hdiffzSize + extraEditSize <= diffData->streamSize ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "4 + kExtraEditLen + self->_hdiffzData.clipBeginPos + hdiffzSize + extraEditSize <= diffData->streamSize"
                                                  ;
                                                  }
                                                  else {
                                                    puts(
                                                  "0 == memcmp(kExtraEdit, buf4s + 4, kExtraEditLen) ERROR!"
                                                  );
                                                  __android_log_print(6,"apk_diff_native",
                                                                                                                                            
                                                  "0 == memcmp(kExtraEdit, buf4s + 4, kExtraEditLen) ERROR!\n"
                                                  );
                                                  local_190 = 
                                                  "0 == memcmp(kExtraEdit, buf4s + 4, kExtraEditLen)"
                                                  ;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    puts("curBuf == bufEnd ERROR!");
                                                    __android_log_print(6,"apk_diff_native",
                                                                        "curBuf == bufEnd ERROR!\n")
                                                    ;
                                                    local_190 = "curBuf == bufEnd";
                                                  }
                                                  }
                                                  }
                                                }
                                                goto LAB_0013bd84;
                                              }
                                            }
                                          }
                                          goto LAB_0013bd48;
                                        }
                                        local_190 = "v==(uint32_t)v";
                                        pcVar15 = "v==(uint32_t)v ERROR!\n";
                                        pcVar18 = "v==(uint32_t)v ERROR!";
                                      }
                                      puts(pcVar18);
                                      __android_log_print(6,"apk_diff_native",pcVar15);
                                      goto LAB_0013bd84;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0013bd48:
      puts("hpatch_unpackUInt(&curBuf,buf + readLen,&v) ERROR!");
      __android_log_print(6,"apk_diff_native","hpatch_unpackUInt(&curBuf,buf + readLen,&v) ERROR!\n"
                         );
      local_190 = "hpatch_unpackUInt(&curBuf,buf + readLen,&v)";
    }
  }
  goto LAB_0013bd84;
LAB_0013c280:
  pcVar17 = "v==(uint32_t)v ERROR!";
  pcVar18 = "v==(uint32_t)v ERROR!\n";
  local_190 = "v==(uint32_t)v";
LAB_0013c298:
  puts(pcVar17);
  __android_log_print(6,"apk_diff_native",pcVar18);
LAB_0013bd84:
  FUN_0013fb24(&DAT_0016ba73,local_190,DAT_0016ba78);
  uVar8 = 0;
LAB_0013bd8c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

