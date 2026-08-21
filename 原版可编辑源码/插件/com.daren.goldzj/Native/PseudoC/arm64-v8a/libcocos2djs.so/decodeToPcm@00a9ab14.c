
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::AudioDecoderSLES::decodeToPcm() */

void __thiscall cocos2d::AudioDecoderSLES::decodeToPcm(AudioDecoderSLES *this)

{
  AudioDecoderSLES *pAVar1;
  uint uVar2;
  AudioDecoderSLES AVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  AudioDecoderSLES *pAVar10;
  undefined8 uVar11;
  void *pvVar12;
  char *pcVar13;
  long *plVar14;
  int *piVar15;
  AudioDecoderSLES *pAVar16;
  uint uVar17;
  AudioDecoderSLES *pAVar18;
  ulong uVar19;
  undefined4 local_174;
  uint local_170;
  uint local_16c [3];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong local_140;
  AudioDecoderSLES *pAStack_138;
  long *local_130;
  undefined4 local_128;
  undefined8 local_120;
  AudioDecoderSLES *local_118;
  ulong *puStack_110;
  undefined8 local_108;
  AudioDecoderSLES *pAStack_100;
  long *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  mutex *local_b8;
  char local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  uVar8 = _SL_IID_PREFETCHSTATUS;
  uVar7 = _SL_IID_METADATAEXTRACTION;
  uVar11 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_88 = 0x100000001;
  local_a0 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
  uStack_98 = _SL_IID_PREFETCHSTATUS;
  local_90 = _SL_IID_METADATAEXTRACTION;
  local_80 = 1;
  local_e8 = &local_160;
  local_150 = 1;
  uStack_158 = 0;
  local_160 = 1;
  pAVar18 = this + 8;
  AVar3 = *pAVar18;
  if (((byte)AVar3 & 1) == 0) {
    pAVar16 = this + 9;
  }
  else {
    pAVar16 = *(AudioDecoderSLES **)(this + 0x18);
  }
  if (*pAVar16 == (AudioDecoderSLES)0x2f) {
    if (((byte)AVar3 & 1) == 0) {
      pAStack_100 = this + 9;
    }
    else {
      pAStack_100 = *(AudioDecoderSLES **)(this + 0x18);
    }
    local_108 = (AudioDecoderSLES **)CONCAT44(local_108._4_4_,1);
    local_f0 = &local_108;
LAB_00a9ad74:
    local_118 = (AudioDecoderSLES *)&local_120;
    puStack_110 = &local_140;
    local_120 = 0x4800007bd;
    pAStack_138 = (AudioDecoderSLES *)0x1002a0e9a0;
    local_140 = 0x200000002;
    local_130 = (long *)0x300000010;
    local_128 = 2;
    std::__ndk1::mutex::lock((mutex *)&DAT_01d38e10);
    iVar9 = (**(code **)(**(long **)(this + 0x70) + 0x10))
                      (*(long **)(this + 0x70),&local_c0,&local_f0,&local_118,3,&local_a0,&local_88)
    ;
    if (iVar9 == 0) {
      *(long **)(this + 0x78) = local_c0;
      iVar9 = (**(code **)*local_c0)(local_c0,0);
                    /* try { // try from 00a9ae10 to 00b9ae1b has its CatchHandler @ 00a9ae40 */
      if (iVar9 == 0) {
        std::__ndk1::mutex::unlock((mutex *)&DAT_01d38e10);
        iVar9 = (**(code **)(*local_c0 + 0x18))(local_c0,_SL_IID_PLAY,&local_d8);
        if (iVar9 == 0) {
                    /* try { // try from 00a9aef8 to 00b9aeff has its CatchHandler @ 00a9af24 */
                    /* try { // try from 00a9af00 to 00b9af27 has its CatchHandler @ 00a9ae44 */
          iVar9 = (**(code **)(*local_d8 + 0x38))(local_d8,2000);
          if (iVar9 == 0) {
                    /* catch() { ... } // from try @ 00a9aef8 with catch @ 00a9af24 */
            iVar9 = (**(code **)(*local_d8 + 0x50))(local_d8,500);
                    /* try { // try from 00a9af30 to 00b9b05b has its CatchHandler @ 00a9af30
                       catch() { ... } // from try @ 00a9af30 with catch @ 00a9af30
                       catch() { ... } // from try @ 00a9b06c with catch @ 00a9af30 */
            if (iVar9 == 0) {
              iVar9 = (**(code **)(*local_d8 + 0x28))(local_d8,7);
              if (iVar9 == 0) {
                iVar9 = (**(code **)(*local_d8 + 0x20))
                                  (local_d8,SLAudioDecoderCallbackProxy::decProgressCallback,this);
                if (iVar9 == 0) {
                  iVar9 = (**(code **)(*local_c0 + 0x18))(local_c0,uVar11,&local_c8);
                  if (iVar9 == 0) {
                    iVar9 = (**(code **)(*local_c0 + 0x18))(local_c0,uVar8,&local_d0);
                    if (iVar9 == 0) {
                    /* try { // try from 00a9b05c to 00b9b06b has its CatchHandler @ 00a9b09c */
                    /* try { // try from 00a9b06c to 00b9b09f has its CatchHandler @ 00a9af30 */
                      iVar9 = (**(code **)(*local_c0 + 0x18))(local_c0,uVar7,&local_e0);
                      if (iVar9 == 0) {
                    /* catch() { ... } // from try @ 00a9b05c with catch @ 00a9b09c */
                    /* try { // try from 00a9b0a0 to 00b9b0fb has its CatchHandler @ 00a9b0a0
                       catch() { ... } // from try @ 00a9b0a0 with catch @ 00a9b0a0
                       catch() { ... } // from try @ 00a9b10c with catch @ 00a9b0a0 */
                        *(long **)(this + 0x108) = local_d8;
                        *(undefined8 *)(this + 0x120) = *(undefined8 *)(this + 0x80);
                        *(undefined8 *)(this + 0x128) = *(undefined8 *)(this + 0x80);
                        *(long **)(this + 0x110) = local_e0;
                        *(int *)(this + 0x118) = DAT_01d38e38 << 2;
                        iVar9 = (**(code **)(*local_c8 + 0x18))
                                          (local_c8,SLAudioDecoderCallbackProxy::decPlayCallback,
                                           this);
                        if (iVar9 != 0) {
                          pcVar13 = "decBuffQueueItf RegisterCallback failed";
                          goto LAB_00a9b194;
                        }
                    /* try { // try from 00a9b0fc to 00b9b10b has its CatchHandler @ 00a9b130 */
                    /* try { // try from 00a9b10c to 00b9b133 has its CatchHandler @ 00a9b0a0 */
                        iVar9 = (**(code **)*local_c8)
                                          (local_c8,*(undefined8 *)(this + 0x128),DAT_01d38e38);
                        if (iVar9 == 0) {
                          *(long *)(this + 0x128) = *(long *)(this + 0x128) + (long)DAT_01d38e38;
                    /* catch() { ... } // from try @ 00a9b0fc with catch @ 00a9b130 */
                          iVar9 = (**(code **)*local_c8)();
                    /* try { // try from 00a9b134 to 00b9b197 has its CatchHandler @ 00a9b134
                       catch() { ... } // from try @ 00a9b134 with catch @ 00a9b134
                       catch() { ... } // from try @ 00a9b1a8 with catch @ 00a9b134 */
                          if (iVar9 != 0) goto LAB_00a9b180;
                          *(long *)(this + 0x128) = *(long *)(this + 0x128) + (long)DAT_01d38e38;
                          iVar9 = (**(code **)*local_c8)();
                          if (iVar9 != 0) goto LAB_00a9b180;
                          *(long *)(this + 0x128) = *(long *)(this + 0x128) + (long)DAT_01d38e38;
                          iVar9 = (**(code **)*local_c8)();
                          if (iVar9 != 0) goto LAB_00a9b180;
                    /* try { // try from 00a9b1a8 to 00b9b1d3 has its CatchHandler @ 00a9b134 */
                          *(undefined8 *)(this + 0x128) = *(undefined8 *)(this + 0x120);
                          iVar9 = (**(code **)(*local_d0 + 0x10))
                                            (local_d0,SLAudioDecoderCallbackProxy::
                                                      prefetchEventCallback,this);
                          if (iVar9 == 0) {
                            iVar9 = (**(code **)(*local_d0 + 0x18))(local_d0,3);
                            if (iVar9 == 0) {
                              iVar9 = (**(code **)*local_d8)(local_d8,2);
                              if (iVar9 == 0) {
                    /* try { // try from 00a9b240 to 00b9b267 has its CatchHandler @ 00a9b1d4 */
                                iVar9 = 1000;
                                local_16c[2] = 1;
                                do {
                                  if (this[0x89] != (AudioDecoderSLES)0x0) goto LAB_00a9b2a0;
                                  local_b8 = (mutex *)&__DT_SYMTAB[0x2a6b].st_size;
                    /* catch() { ... } // from try @ 00a9b230 with catch @ 00a9b264 */
                                  std::__ndk1::this_thread::sleep_for((duration *)&local_b8);
                    /* try { // try from 00a9b268 to 00b9b2cb has its CatchHandler @ 00a9b268
                       catch() { ... } // from try @ 00a9b268 with catch @ 00a9b268
                       catch() { ... } // from try @ 00a9b2dc with catch @ 00a9b268 */
                                  (**(code **)*local_d0)(local_d0,local_16c + 2);
                                  iVar9 = iVar9 + -1;
                                } while ((iVar9 != 0) && (local_16c[2] != 2));
                                if ((iVar9 == 0) || (this[0x89] != (AudioDecoderSLES)0x0)) {
LAB_00a9b2a0:
                                  __android_log_print(6,"AudioDecoderSLES",
                                                      "Failure to prefetch data in time, exiting");
                                  pcVar13 = "Failure to prefetch data in time";
                    /* try { // try from 00a9b2cc to 00b9b2db has its CatchHandler @ 00a9b304 */
                                }
                                else {
                                  local_16c[1] = 0xffffffff;
                    /* try { // try from 00a9b2dc to 00b9b307 has its CatchHandler @ 00a9b268 */
                                  iVar9 = (**(code **)(*local_d8 + 0x10))(local_d8,local_16c + 1);
                                  if (iVar9 == 0) {
                    /* catch() { ... } // from try @ 00a9b2cc with catch @ 00a9b304 */
                    /* try { // try from 00a9b308 to 00b9b35b has its CatchHandler @ 00a9b308
                       catch() { ... } // from try @ 00a9b308 with catch @ 00a9b308
                       catch() { ... } // from try @ 00a9b36c with catch @ 00a9b308 */
                                    (**(code **)*local_e0)(local_e0,local_16c);
                                    if (local_16c[0] != 0) {
                                      uVar17 = 0;
                                      do {
                                        local_174 = 0;
                                        local_170 = 0;
                    /* try { // try from 00a9b35c to 00b9b36b has its CatchHandler @ 00a9b390 */
                                        iVar9 = (**(code **)(*local_e0 + 8))
                                                          (local_e0,uVar17,&local_170);
                                        if (iVar9 != 0) {
                                          pcVar13 = "GetKeySize(%d) failed";
LAB_00a9b648:
                    /* try { // try from 00a9b650 to 00b9b677 has its CatchHandler @ 00a9b5fc */
                                          __android_log_print(6,"AudioDecoderSLES",pcVar13,uVar17);
                                          goto LAB_00a9b198;
                                        }
                    /* try { // try from 00a9b36c to 00b9b393 has its CatchHandler @ 00a9b308 */
                                        iVar9 = (**(code **)(*local_e0 + 0x18))
                                                          (local_e0,uVar17,&local_174);
                                        if (iVar9 != 0) {
                                          pcVar13 = "GetValueSize(%d) failed";
                                          goto LAB_00a9b648;
                                        }
                                        uVar19 = (ulong)local_170;
                                        pvVar12 = malloc(uVar19);
                                        if (pvVar12 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00a9b35c with catch @ 00a9b390 */
                    /* try { // try from 00a9b394 to 00b9b3ef has its CatchHandler @ 00a9b394
                       catch() { ... } // from try @ 00a9b394 with catch @ 00a9b394
                       catch() { ... } // from try @ 00a9b400 with catch @ 00a9b394 */
                                          iVar9 = (**(code **)(*local_e0 + 0x10))
                                                            (local_e0,uVar17,uVar19,pvVar12);
                                          if (iVar9 != 0) {
                    /* try { // try from 00a9b644 to 00b9b64f has its CatchHandler @ 00a9b674 */
                                            pcVar13 = "GetKey(%d) failed";
                                            goto LAB_00a9b648;
                                          }
                                          pcVar13 = (char *)((long)pvVar12 + 0x18);
                                          iVar9 = strcmp(pcVar13,"AndroidPcmFormatNumChannels");
                                          if (iVar9 == 0) {
                    /* catch() { ... } // from try @ 00a9b3f0 with catch @ 00a9b428 */
                                            *(uint *)(this + 0x90) = uVar17;
                    /* catch() { ... } // from try @ 00a9b478 with catch @ 00a9b42c */
                                          }
                                          else {
                                            iVar9 = strcmp(pcVar13,"AndroidPcmFormatSampleRate");
                                            if (iVar9 == 0) {
                                              *(uint *)(this + 0x94) = uVar17;
                                            }
                                            else {
                                              iVar9 = strcmp(pcVar13,"AndroidPcmFormatBitsPerSample"
                                                            );
                                              if (iVar9 == 0) {
                                                *(uint *)(this + 0x98) = uVar17;
                                              }
                                              else {
                    /* try { // try from 00a9b3f0 to 00b9b3ff has its CatchHandler @ 00a9b428 */
                                                iVar9 = strcmp(pcVar13,
                                                  "AndroidPcmFormatContainerSize");
                                                if (iVar9 == 0) {
                                                  *(uint *)(this + 0x9c) = uVar17;
                                                }
                                                else {
                    /* try { // try from 00a9b400 to 00b9b42b has its CatchHandler @ 00a9b394 */
                                                  iVar9 = strcmp(pcVar13,
                                                  "AndroidPcmFormatChannelMask");
                                                  if (iVar9 == 0) {
                                                    *(uint *)(this + 0xa0) = uVar17;
                                                  }
                                                  else {
                                                    iVar9 = strcmp(pcVar13,
                                                  "AndroidPcmFormatEndianness");
                                                  if (iVar9 == 0) {
                                                    *(uint *)(this + 0xa4) = uVar17;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          free(pvVar12);
                                        }
                                        uVar17 = uVar17 + 1;
                                      } while (uVar17 < local_16c[0]);
                                    }
                    /* try { // try from 00a9b46c to 00b9b477 has its CatchHandler @ 00a9b49c */
                                    if (*(int *)(this + 0x90) == -1) {
                    /* try { // try from 00a9b478 to 00b9b49f has its CatchHandler @ 00a9b42c */
                                      __android_log_print(6,"AudioDecoderSLES",
                                                          "Unable to find key %s",
                                                          "AndroidPcmFormatNumChannels");
                                    }
                                    if (*(int *)(this + 0x94) == -1) {
                    /* catch() { ... } // from try @ 00a9b46c with catch @ 00a9b49c */
                    /* catch() { ... } // from try @ 00a9b4ec with catch @ 00a9b4a0 */
                                      __android_log_print(6,"AudioDecoderSLES",
                                                          "Unable to find key %s",
                                                          "AndroidPcmFormatSampleRate");
                                    }
                                    if (*(int *)(this + 0x98) == -1) {
                    /* try { // try from 00a9b4e4 to 00b9b4eb has its CatchHandler @ 00a9b510 */
                                      __android_log_print(6,"AudioDecoderSLES",
                                                          "Unable to find key %s",
                                                          "AndroidPcmFormatBitsPerSample");
                                    }
                    /* try { // try from 00a9b4ec to 00b9b513 has its CatchHandler @ 00a9b4a0 */
                                    if (*(int *)(this + 0x9c) == -1) {
                    /* catch() { ... } // from try @ 00a9b4e4 with catch @ 00a9b510 */
                                      __android_log_print(6,"AudioDecoderSLES",
                                                          "Unable to find key %s",
                                                          "AndroidPcmFormatContainerSize");
                                    }
                    /* catch() { ... } // from try @ 00a9b560 with catch @ 00a9b514 */
                                    if (*(int *)(this + 0xa0) == -1) {
                                      __android_log_print(6,"AudioDecoderSLES",
                                                          "Unable to find key %s",
                                                          "AndroidPcmFormatChannelMask");
                                    }
                                    if (*(int *)(this + 0xa4) == -1) {
                    /* try { // try from 00a9b558 to 00b9b55f has its CatchHandler @ 00a9b584 */
                    /* try { // try from 00a9b560 to 00b9b587 has its CatchHandler @ 00a9b514 */
                                      __android_log_print(6,"AudioDecoderSLES",
                                                          "Unable to find key %s",
                                                          "AndroidPcmFormatEndianness");
                                    }
                                    iVar9 = (**(code **)*local_d8)(local_d8,3);
                                    if (iVar9 == 0) {
                                      local_b8 = (mutex *)(this + 0xac);
                                      local_b0 = '\x01';
                                      std::__ndk1::mutex::lock(local_b8);
                                      if (this[0xa8] == (AudioDecoderSLES)0x0) {
                                        do {
                    /* try { // try from 00a9b5c8 to 00b9b5d3 has its CatchHandler @ 00a9b5f8 */
                                          std::__ndk1::condition_variable::wait
                                                    ((condition_variable *)(this + 0xd4),
                                                     (unique_lock *)&local_b8);
                                        } while (this[0xa8] == (AudioDecoderSLES)0x0);
                    /* try { // try from 00a9b5d4 to 00b9b5fb has its CatchHandler @ 00a9b588 */
                                        if (local_b0 != '\0') goto LAB_00a9b5dc;
                                      }
                                      else {
LAB_00a9b5dc:
                                        std::__ndk1::mutex::unlock(local_b8);
                                      }
                                      iVar9 = (**(code **)*local_d8)(local_d8,1);
                    /* catch() { ... } // from try @ 00a9b5c8 with catch @ 00a9b5f8 */
                                      if (iVar9 == 0) {
                                        std::__ndk1::mutex::lock((mutex *)&DAT_01d38e10);
                                        if (*(long **)(this + 0x78) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00a9b644 with catch @ 00a9b674 */
                                          (**(code **)(**(long **)(this + 0x78) + 0x30))();
                    /* catch() { ... } // from try @ 00a9b6c8 with catch @ 00a9b678 */
                                          *(undefined8 *)(this + 0x78) = 0;
                                        }
                                        std::__ndk1::mutex::unlock((mutex *)&DAT_01d38e10);
                                        plVar14 = *(long **)(this + 0x20);
                                        uVar2 = *(uint *)(this + 0x38);
                                        uVar17 = uVar2 + 7;
                                        if (-1 < (int)uVar2) {
                                          uVar17 = uVar2;
                                        }
                                        uVar19 = 0;
                                        if ((long)*(int *)(this + 0x30) != 0) {
                                          uVar19 = (ulong)(plVar14[1] - *plVar14) /
                                                   (ulong)(long)*(int *)(this + 0x30);
                                        }
                                        uVar4 = (long)((ulong)uVar17 << 0x20) >> 0x23;
                                        uVar5 = 0;
                                        if (uVar4 != 0) {
                                          uVar5 = (undefined4)(uVar19 / uVar4);
                                        }
                                        *(undefined4 *)(this + 0x48) = uVar5;
                    /* try { // try from 00a9b6c0 to 00b9b6c7 has its CatchHandler @ 00a9b6ec */
                                        PcmData::toString();
                    /* try { // try from 00a9b6c8 to 00b9b6ef has its CatchHandler @ 00a9b678 */
                                        piVar15 = *(int **)(this + 0x20);
                                        pvVar12 = (void *)((ulong)&local_b8 | 1);
                    /* catch() { ... } // from try @ 00a9b6c0 with catch @ 00a9b6ec */
                                        if (((ulong)local_b8 & 1) != 0) {
                                          pvVar12 = local_a8;
                                        }
                                        __android_log_print(4,"AudioDecoderSLES",
                                                                                                                        
                                                  "Original audio info: %s, total size: %d",pvVar12,
                                                  piVar15[2] - *piVar15);
                                        if (((ulong)local_b8 & 1) != 0) {
                                          operator_delete(local_a8);
                                        }
                                        uVar11 = 1;
                                        goto LAB_00a9ae3c;
                                      }
                    /* catch() { ... } // from try @ 00a9b650 with catch @ 00a9b5fc */
                                      pcVar13 = "SetPlayState SL_PLAYSTATE_STOPPED failed";
                                    }
                                    else {
                    /* catch() { ... } // from try @ 00a9b558 with catch @ 00a9b584 */
                    /* catch() { ... } // from try @ 00a9b5d4 with catch @ 00a9b588 */
                                      pcVar13 = "SetPlayState SL_PLAYSTATE_PLAYING failed";
                                    }
                                  }
                                  else {
                                    pcVar13 = "GetDuration failed";
                                  }
                                }
                              }
                              else {
                    /* try { // try from 00a9b230 to 00b9b23f has its CatchHandler @ 00a9b264 */
                                pcVar13 = "SetPlayState SL_PLAYSTATE_PAUSED failed";
                              }
                            }
                            else {
                              pcVar13 = "prefetchItf SetCallbackEventsMask failed";
                            }
                          }
                          else {
                    /* catch() { ... } // from try @ 00a9b198 with catch @ 00a9b1d0 */
                    /* try { // try from 00a9b1d4 to 00b9b22f has its CatchHandler @ 00a9b1d4
                       catch() { ... } // from try @ 00a9b1d4 with catch @ 00a9b1d4
                       catch() { ... } // from try @ 00a9b240 with catch @ 00a9b1d4 */
                            pcVar13 = "prefetchItf RegisterCallback failed";
                          }
                        }
                        else {
LAB_00a9b180:
                          pcVar13 = "Enqueue failed";
                        }
LAB_00a9b194:
                        __android_log_print(6,"AudioDecoderSLES",pcVar13);
LAB_00a9b198:
                    /* try { // try from 00a9b198 to 00b9b1a7 has its CatchHandler @ 00a9b1d0 */
                        uVar11 = 0;
                        goto LAB_00a9ae3c;
                      }
                      pcVar13 = "GetInterface SL_IID_METADATAEXTRACTION failed";
                    }
                    else {
                      pcVar13 = "GetInterface SL_IID_PREFETCHSTATUS failed";
                    }
                  }
                  else {
                    pcVar13 = "GetInterface SL_IID_ANDROIDSIMPLEBUFFERQUEUE failed";
                  }
                }
                else {
                  pcVar13 = "RegisterCallback failed";
                }
              }
              else {
                pcVar13 = "SetCallbackEventsMask failed";
              }
            }
            else {
              pcVar13 = "SetPositionUpdatePeriod failed";
            }
          }
          else {
            pcVar13 = "SetMarkerPosition failed";
          }
        }
        else {
          pcVar13 = "GetInterface SL_IID_PLAY failed";
        }
        __android_log_print(6,"AudioDecoderSLES",pcVar13);
        goto LAB_00a9ae38;
      }
                    /* try { // try from 00a9ae1c to 00b9ae43 has its CatchHandler @ 00a9ad5c */
      pcVar13 = "Realize failed";
    }
    else {
      pcVar13 = "CreateAudioPlayer failed";
    }
    __android_log_print(6,"AudioDecoderSLES",pcVar13);
    std::__ndk1::mutex::unlock((mutex *)&DAT_01d38e10);
  }
  else {
    local_118 = (AudioDecoderSLES *)0x0;
    local_c0 = (long *)0x0;
    local_140 = 0;
    pAStack_138 = (AudioDecoderSLES *)0x0;
    local_130 = (long *)0x0;
    if (((byte)AVar3 & 1) == 0) {
      pAVar16 = this + 9;
      uVar19 = (ulong)((byte)AVar3 >> 1);
      if (7 < uVar19) {
LAB_00a9ac24:
        pAVar1 = pAVar16 + uVar19;
        pAVar10 = pAVar16;
        do {
          if ((uVar19 - 7 == 0) ||
             (pAVar10 = memchr(pAVar10,0x40,uVar19 - 7), pAVar10 == (AudioDecoderSLES *)0x0)) break;
          if (*(long *)pAVar10 == 0x2f73746573736140) {
            if ((pAVar10 != pAVar1) && (pAVar10 == pAVar16)) {
              local_108 = (AudioDecoderSLES **)0x0;
              pAStack_100 = (AudioDecoderSLES *)0x0;
              local_f8 = (long *)0x0;
              uVar19 = (ulong)((byte)AVar3 >> 1);
              if (((byte)AVar3 & 1) != 0) {
                uVar19 = *(ulong *)(this + 0x10);
              }
              if (uVar19 < 8) {
LAB_00a9b71c:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pAVar16 = *(AudioDecoderSLES **)(this + 0x18);
                    /* try { // try from 00a9aca8 to 00b9acaf has its CatchHandler @ 00a9acf0 */
              pAVar10 = (AudioDecoderSLES *)(uVar19 - 8);
              if (((byte)AVar3 & 1) == 0) {
                pAVar16 = this + 9;
              }
                    /* try { // try from 00a9acb0 to 00b9acf3 has its CatchHandler @ 00a9a938 */
              if ((AudioDecoderSLES *)0xffffffffffffffef < pAVar10) goto LAB_00a9b71c;
              if (pAVar10 < (AudioDecoderSLES *)0x17) {
                plVar14 = (long *)((ulong)&local_108 | 1);
                local_108 = (AudioDecoderSLES **)(ulong)(byte)((int)pAVar10 << 1);
                if (pAVar10 != (AudioDecoderSLES *)0x0) goto LAB_00a9af74;
              }
              else {
                uVar19 = uVar19 + 8 & 0xfffffffffffffff0;
                plVar14 = operator_new(uVar19);
                local_108 = (AudioDecoderSLES **)(uVar19 | 1);
                pAStack_100 = pAVar10;
                local_f8 = plVar14;
LAB_00a9af74:
                memcpy(plVar14,pAVar16 + 8,(size_t)pAVar10);
              }
              *(AudioDecoderSLES *)((long)plVar14 + (long)pAVar10) = (AudioDecoderSLES)0x0;
              local_130 = local_f8;
              pAStack_138 = pAStack_100;
              local_140 = (ulong)local_108;
              goto LAB_00a9ad08;
            }
            break;
          }
          pAVar10 = pAVar10 + 1;
          uVar19 = (long)pAVar1 - (long)pAVar10;
        } while (7 < (long)uVar19);
      }
    }
    else {
      uVar19 = *(ulong *)(this + 0x10);
      pAVar16 = *(AudioDecoderSLES **)(this + 0x18);
      if (7 < (long)uVar19) goto LAB_00a9ac24;
    }
    if ((AudioDecoderSLES *)&local_140 != pAVar18) {
      uVar19 = *(ulong *)(this + 0x10);
      pAVar16 = *(AudioDecoderSLES **)(this + 0x18);
                    /* catch() { ... } // from try @ 00a9aca8 with catch @ 00a9acf0 */
      if (((byte)AVar3 & 1) == 0) {
        pAVar16 = this + 9;
        uVar19 = (ulong)((byte)AVar3 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_140,(char *)pAVar16,uVar19);
    }
LAB_00a9ad08:
    local_108 = &local_118;
    local_b8 = (mutex *)&local_c0;
    plVar14 = *(long **)(this + 0x160);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    iVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_140,&local_108,&local_b8);
    *(int *)(this + 0x134) = iVar9;
    if (0 < iVar9) {
                    /* catch() { ... } // from try @ 00a9ae1c with catch @ 00a9ad5c */
      local_108 = (AudioDecoderSLES **)CONCAT44(iVar9,0x800007bc);
      pAStack_100 = local_118;
      local_f8 = local_c0;
      local_f0 = &local_108;
      if ((local_140 & 1) != 0) {
        operator_delete(local_130);
      }
      goto LAB_00a9ad74;
    }
    if (((byte)*pAVar18 & 1) == 0) {
      pAVar18 = this + 9;
    }
    else {
      pAVar18 = *(AudioDecoderSLES **)(this + 0x18);
    }
    __android_log_print(6,"AudioDecoderSLES","Failed to open file descriptor for \'%s\'",pAVar18);
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
  }
LAB_00a9ae38:
  uVar11 = 0;
LAB_00a9ae3c:
                    /* catch() { ... } // from try @ 00a9ae10 with catch @ 00a9ae40 */
                    /* catch() { ... } // from try @ 00a9af00 with catch @ 00a9ae44 */
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

