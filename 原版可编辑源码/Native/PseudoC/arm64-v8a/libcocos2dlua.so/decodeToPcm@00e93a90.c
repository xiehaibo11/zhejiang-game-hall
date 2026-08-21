
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::experimental::AudioDecoderSLES::decodeToPcm() */

void __thiscall cocos2d::experimental::AudioDecoderSLES::decodeToPcm(AudioDecoderSLES *this)

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
  AudioDecoderSLES *pAVar14;
  long *plVar15;
  int *piVar16;
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
  uStack_158 = 0;
  local_160 = 1;
  local_150 = 1;
  pAVar18 = this + 8;
  AVar3 = *pAVar18;
  if (((byte)AVar3 & 1) == 0) {
    pAVar14 = this + 9;
  }
  else {
    pAVar14 = *(AudioDecoderSLES **)(this + 0x18);
  }
  if (*pAVar14 == (AudioDecoderSLES)0x2f) {
    if (((byte)AVar3 & 1) == 0) {
      pAStack_100 = this + 9;
    }
    else {
      pAStack_100 = *(AudioDecoderSLES **)(this + 0x18);
    }
    local_108 = (AudioDecoderSLES **)CONCAT44(local_108._4_4_,1);
    local_f0 = &local_108;
LAB_00e93ce0:
    local_118 = (AudioDecoderSLES *)&local_120;
    puStack_110 = &local_140;
    local_130 = (long *)0x300000010;
    local_128 = 2;
    local_120 = 0x4800007bd;
    pAStack_138 = (AudioDecoderSLES *)0x1002a0e9a0;
    local_140 = 0x200000002;
    std::__ndk1::mutex::lock((mutex *)&DAT_0178f414);
    iVar9 = (**(code **)(**(long **)(this + 0x70) + 0x10))
                      (*(long **)(this + 0x70),&local_c0,&local_f0,&local_118,3,&local_a0,&local_88)
    ;
    if (iVar9 == 0) {
      *(long **)(this + 0x78) = local_c0;
      iVar9 = (**(code **)*local_c0)(local_c0,0);
      if (iVar9 == 0) {
        std::__ndk1::mutex::unlock((mutex *)&DAT_0178f414);
        iVar9 = (**(code **)(*local_c0 + 0x18))(local_c0,_SL_IID_PLAY,&local_d8);
        if (iVar9 == 0) {
          iVar9 = (**(code **)(*local_d8 + 0x38))(local_d8,2000);
          if (iVar9 == 0) {
            iVar9 = (**(code **)(*local_d8 + 0x50))(local_d8,500);
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
                      iVar9 = (**(code **)(*local_c0 + 0x18))(local_c0,uVar7,&local_e0);
                      if (iVar9 == 0) {
                        *(long **)(this + 0x108) = local_d8;
                        *(undefined8 *)(this + 0x120) = *(undefined8 *)(this + 0x80);
                        *(undefined8 *)(this + 0x128) = *(undefined8 *)(this + 0x80);
                        *(long **)(this + 0x110) = local_e0;
                        *(int *)(this + 0x118) = DAT_0178f43c << 2;
                        iVar9 = (**(code **)(*local_c8 + 0x18))
                                          (local_c8,SLAudioDecoderCallbackProxy::decPlayCallback,
                                           this);
                        if (iVar9 == 0) {
                          iVar9 = (**(code **)*local_c8)
                                            (local_c8,*(undefined8 *)(this + 0x128),DAT_0178f43c);
                          if (iVar9 == 0) {
                            *(long *)(this + 0x128) = *(long *)(this + 0x128) + (long)DAT_0178f43c;
                            iVar9 = (**(code **)*local_c8)();
                            if (iVar9 == 0) {
                              *(long *)(this + 0x128) = *(long *)(this + 0x128) + (long)DAT_0178f43c
                              ;
                              iVar9 = (**(code **)*local_c8)();
                              if (iVar9 == 0) {
                                *(long *)(this + 0x128) =
                                     *(long *)(this + 0x128) + (long)DAT_0178f43c;
                                iVar9 = (**(code **)*local_c8)();
                                if (iVar9 == 0) {
                                  *(undefined8 *)(this + 0x128) = *(undefined8 *)(this + 0x120);
                                  iVar9 = (**(code **)(*local_d0 + 0x10))
                                                    (local_d0,SLAudioDecoderCallbackProxy::
                                                              prefetchEventCallback,this);
                                  if (iVar9 == 0) {
                                    iVar9 = (**(code **)(*local_d0 + 0x18))(local_d0,3);
                                    if (iVar9 == 0) {
                                      iVar9 = (**(code **)*local_d8)(local_d8,2);
                                      if (iVar9 == 0) {
                                        iVar9 = 1000;
                                        local_16c[2] = 1;
                                        do {
                                          if (this[0x89] != (AudioDecoderSLES)0x0)
                                          goto LAB_00e941dc;
                                          local_b8 = (mutex *)&__DT_SYMTAB[0x2fae].st_value;
                                          std::__ndk1::this_thread::sleep_for((duration *)&local_b8)
                                          ;
                                          (**(code **)*local_d0)(local_d0,local_16c + 2);
                                          iVar9 = iVar9 + -1;
                                        } while ((iVar9 != 0) && (local_16c[2] != 2));
                                        if ((iVar9 == 0) || (this[0x89] != (AudioDecoderSLES)0x0)) {
LAB_00e941dc:
                                          __android_log_print(6,"AudioDecoderSLES",
                                                                                                                            
                                                  "Failure to prefetch data in time, exiting");
                                          pcVar13 = "Failure to prefetch data in time";
                                        }
                                        else {
                                          local_16c[1] = 0xffffffff;
                                          iVar9 = (**(code **)(*local_d8 + 0x10))
                                                            (local_d8,local_16c + 1);
                                          if (iVar9 == 0) {
                                            (**(code **)*local_e0)(local_e0,local_16c);
                                            if (local_16c[0] != 0) {
                                              uVar17 = 0;
                                              do {
                                                local_174 = 0;
                                                local_170 = 0;
                                                iVar9 = (**(code **)(*local_e0 + 8))
                                                                  (local_e0,uVar17,&local_170);
                                                if (iVar9 != 0) {
                                                  pcVar13 = "GetKeySize(%d) failed";
LAB_00e94588:
                                                  __android_log_print(6,"AudioDecoderSLES",pcVar13,
                                                                      uVar17);
                                                  goto LAB_00e93da4;
                                                }
                                                iVar9 = (**(code **)(*local_e0 + 0x18))
                                                                  (local_e0,uVar17,&local_174);
                                                if (iVar9 != 0) {
                                                  pcVar13 = "GetValueSize(%d) failed";
                                                  goto LAB_00e94588;
                                                }
                                                uVar19 = (ulong)local_170;
                                                pvVar12 = malloc(uVar19);
                                                if (pvVar12 != (void *)0x0) {
                                                  iVar9 = (**(code **)(*local_e0 + 0x10))
                                                                    (local_e0,uVar17,uVar19,pvVar12)
                                                  ;
                                                  if (iVar9 != 0) {
                                                    pcVar13 = "GetKey(%d) failed";
                                                    goto LAB_00e94588;
                                                  }
                                                  pcVar13 = (char *)((long)pvVar12 + 0x18);
                                                  iVar9 = strcmp(pcVar13,
                                                  "AndroidPcmFormatNumChannels");
                                                  if (iVar9 == 0) {
                                                    *(uint *)(this + 0x90) = uVar17;
                                                  }
                                                  else {
                                                    iVar9 = strcmp(pcVar13,
                                                  "AndroidPcmFormatSampleRate");
                                                  if (iVar9 == 0) {
                                                    *(uint *)(this + 0x94) = uVar17;
                                                  }
                                                  else {
                                                    iVar9 = strcmp(pcVar13,
                                                  "AndroidPcmFormatBitsPerSample");
                                                  if (iVar9 == 0) {
                                                    *(uint *)(this + 0x98) = uVar17;
                                                  }
                                                  else {
                                                    iVar9 = strcmp(pcVar13,
                                                  "AndroidPcmFormatContainerSize");
                                                  if (iVar9 == 0) {
                                                    *(uint *)(this + 0x9c) = uVar17;
                                                  }
                                                  else {
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
                                            if (*(int *)(this + 0x90) == -1) {
                                              __android_log_print(6,"AudioDecoderSLES",
                                                                  "Unable to find key %s",
                                                                  "AndroidPcmFormatNumChannels");
                                            }
                                            if (*(int *)(this + 0x94) == -1) {
                                              __android_log_print(6,"AudioDecoderSLES",
                                                                  "Unable to find key %s",
                                                                  "AndroidPcmFormatSampleRate");
                                            }
                                            if (*(int *)(this + 0x98) == -1) {
                                              __android_log_print(6,"AudioDecoderSLES",
                                                                  "Unable to find key %s",
                                                                  "AndroidPcmFormatBitsPerSample");
                                            }
                                            if (*(int *)(this + 0x9c) == -1) {
                                              __android_log_print(6,"AudioDecoderSLES",
                                                                  "Unable to find key %s",
                                                                  "AndroidPcmFormatContainerSize");
                                            }
                                            if (*(int *)(this + 0xa0) == -1) {
                                              __android_log_print(6,"AudioDecoderSLES",
                                                                  "Unable to find key %s",
                                                                  "AndroidPcmFormatChannelMask");
                                            }
                                            if (*(int *)(this + 0xa4) == -1) {
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
                                                  std::__ndk1::condition_variable::wait
                                                            ((condition_variable *)(this + 0xd4),
                                                             (unique_lock *)&local_b8);
                                                } while (this[0xa8] == (AudioDecoderSLES)0x0);
                                                if (local_b0 != '\0') goto LAB_00e9451c;
                                              }
                                              else {
LAB_00e9451c:
                                                std::__ndk1::mutex::unlock(local_b8);
                                              }
                                              iVar9 = (**(code **)*local_d8)(local_d8,1);
                                              if (iVar9 == 0) {
                                                std::__ndk1::mutex::lock((mutex *)&DAT_0178f414);
                                                if (*(long **)(this + 0x78) != (long *)0x0) {
                                                  (**(code **)(**(long **)(this + 0x78) + 0x30))();
                                                  *(undefined8 *)(this + 0x78) = 0;
                                                }
                                                std::__ndk1::mutex::unlock((mutex *)&DAT_0178f414);
                                                plVar15 = *(long **)(this + 0x20);
                                                uVar2 = *(uint *)(this + 0x38);
                                                uVar17 = uVar2 + 7;
                                                if (-1 < (int)uVar2) {
                                                  uVar17 = uVar2;
                                                }
                                                uVar19 = 0;
                                                if ((long)*(int *)(this + 0x30) != 0) {
                                                  uVar19 = (ulong)(plVar15[1] - *plVar15) /
                                                           (ulong)(long)*(int *)(this + 0x30);
                                                }
                                                uVar4 = (long)((ulong)uVar17 << 0x20) >> 0x23;
                                                uVar5 = 0;
                                                if (uVar4 != 0) {
                                                  uVar5 = (undefined4)(uVar19 / uVar4);
                                                }
                                                *(undefined4 *)(this + 0x48) = uVar5;
                                                PcmData::toString();
                                                piVar16 = *(int **)(this + 0x20);
                                                pvVar12 = (void *)((ulong)&local_b8 | 1);
                                                if (((ulong)local_b8 & 1) != 0) {
                                                  pvVar12 = local_a8;
                                                }
                                                __android_log_print(4,"AudioDecoderSLES",
                                                                                                                                        
                                                  "Original audio info: %s, total size: %d",pvVar12,
                                                  piVar16[2] - *piVar16);
                                                if (((ulong)local_b8 & 1) != 0) {
                                                  operator_delete(local_a8);
                                                }
                                                uVar11 = 1;
                                                goto LAB_00e93da8;
                                              }
                                              pcVar13 = "SetPlayState SL_PLAYSTATE_STOPPED failed";
                                            }
                                            else {
                                              pcVar13 = "SetPlayState SL_PLAYSTATE_PLAYING failed";
                                            }
                                          }
                                          else {
                                            pcVar13 = "GetDuration failed";
                                          }
                                        }
                                      }
                                      else {
                                        pcVar13 = "SetPlayState SL_PLAYSTATE_PAUSED failed";
                                      }
                                    }
                                    else {
                                      pcVar13 = "prefetchItf SetCallbackEventsMask failed";
                                    }
                                  }
                                  else {
                                    pcVar13 = "prefetchItf RegisterCallback failed";
                                  }
                                  goto LAB_00e940dc;
                                }
                              }
                            }
                          }
                          pcVar13 = "Enqueue failed";
                        }
                        else {
                          pcVar13 = "decBuffQueueItf RegisterCallback failed";
                        }
                      }
                      else {
                        pcVar13 = "GetInterface SL_IID_METADATAEXTRACTION failed";
                      }
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
LAB_00e940dc:
        __android_log_print(6,"AudioDecoderSLES",pcVar13);
        goto LAB_00e93da4;
      }
      pcVar13 = "Realize failed";
    }
    else {
      pcVar13 = "CreateAudioPlayer failed";
    }
    __android_log_print(6,"AudioDecoderSLES",pcVar13);
    std::__ndk1::mutex::unlock((mutex *)&DAT_0178f414);
  }
  else {
    local_118 = (AudioDecoderSLES *)0x0;
    local_c0 = (long *)0x0;
    pAStack_138 = (AudioDecoderSLES *)0x0;
    local_130 = (long *)0x0;
    local_140 = 0;
    if (((byte)AVar3 & 1) == 0) {
      pAVar14 = this + 9;
      uVar19 = (ulong)((byte)AVar3 >> 1);
      if (6 < uVar19) {
LAB_00e93ba8:
        pAVar1 = pAVar14 + uVar19;
        pAVar10 = pAVar14;
        do {
          if ((uVar19 - 6 == 0) ||
             (pAVar10 = memchr(pAVar10,0x61,uVar19 - 6), pAVar10 == (AudioDecoderSLES *)0x0)) break;
          iVar9 = memcmp(pAVar10,"assets/",7);
          if (iVar9 == 0) {
            if ((pAVar10 != pAVar1) && (pAVar10 == pAVar14)) {
              uVar19 = __strlen_chk("assets/",8);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)&local_108,(ulong)pAVar18,uVar19,
                           (allocator *)0xffffffffffffffff);
              if ((local_140 & 1) != 0) {
                *(undefined1 *)local_130 = 0;
                pAStack_138 = (AudioDecoderSLES *)0x0;
                if ((local_140 & 1) != 0) {
                  operator_delete(local_130);
                }
              }
              pAStack_138 = pAStack_100;
              local_140 = (ulong)local_108;
              local_130 = local_f8;
              goto LAB_00e93c6c;
            }
            break;
          }
          pAVar10 = pAVar10 + 1;
          uVar19 = (long)pAVar1 - (long)pAVar10;
        } while (6 < (long)uVar19);
      }
    }
    else {
      uVar19 = *(ulong *)(this + 0x10);
      pAVar14 = *(AudioDecoderSLES **)(this + 0x18);
      if (6 < (long)uVar19) goto LAB_00e93ba8;
    }
    if ((AudioDecoderSLES *)&local_140 != pAVar18) {
      uVar19 = *(ulong *)(this + 0x10);
      pAVar14 = *(AudioDecoderSLES **)(this + 0x18);
      if (((byte)AVar3 & 1) == 0) {
        pAVar14 = this + 9;
        uVar19 = (ulong)((byte)AVar3 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_140,(char *)pAVar14,uVar19);
    }
LAB_00e93c6c:
    local_108 = &local_118;
    local_b8 = (mutex *)&local_c0;
    plVar15 = *(long **)(this + 0x160);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    iVar9 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_140,&local_108,&local_b8);
    *(int *)(this + 0x134) = iVar9;
    if (0 < iVar9) {
      local_108 = (AudioDecoderSLES **)CONCAT44(iVar9,0x800007bc);
      pAStack_100 = local_118;
      local_f8 = local_c0;
      local_f0 = &local_108;
      if ((local_140 & 1) != 0) {
        operator_delete(local_130);
      }
      goto LAB_00e93ce0;
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
LAB_00e93da4:
  uVar11 = 0;
LAB_00e93da8:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

