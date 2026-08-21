
/* universe::Downloader2::_downloadProc() */

void __thiscall universe::Downloader2::_downloadProc(Downloader2 *this)

{
  JobQueue *this_00;
  mutex *this_01;
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 **ppuVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  Downloader2 *pDVar10;
  ulonglong uVar11;
  basic_string *pbVar12;
  undefined8 **ppuVar13;
  long *plVar14;
  DownloadJob *pDVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 **ppuVar22;
  undefined8 *puVar23;
  long lVar24;
  void *pvVar25;
  DownloadJob *pDVar26;
  DownloadJob *pDVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  timeval local_2f0;
  int local_2dc;
  long local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  undefined8 *puStack_2c0;
  int local_2b4;
  void *local_2b0;
  undefined8 *puStack_2a8;
  undefined8 *local_2a0;
  ulong local_298;
  undefined4 local_290;
  undefined1 local_280 [16];
  __fd_mask local_270;
  __fd_mask local_268;
  __fd_mask _Stack_260;
  __fd_mask local_258;
  __fd_mask _Stack_250;
  __fd_mask _Stack_248;
  __fd_mask _Stack_240;
  ulong local_238;
  __fd_mask _Stack_230;
  void *local_228;
  __fd_mask local_220;
  __fd_mask _Stack_218;
  __fd_mask local_210;
  __fd_mask _Stack_208;
  undefined8 local_188;
  undefined4 local_180;
  fd_set local_170;
  fd_set local_f0;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puStack_2a8 = (undefined8 *)0x0;
  local_2b0 = (void *)0x0;
  local_298 = 0;
  local_2a0 = (undefined8 *)0x0;
  local_290 = 0x3f800000;
  local_2b4 = 0;
  local_2c8 = (undefined8 *)0x0;
  puStack_2c0 = (undefined8 *)0x0;
  local_2d0 = (undefined8 *)0x0;
  if (this[0x1d0] == (Downloader2)0x0) {
LAB_009ea050:
    pvVar5 = local_2b0;
    puVar17 = local_2a0;
    if (local_2d0 != (undefined8 *)0x0) {
      local_2c8 = local_2d0;
      operator_delete(local_2d0);
      pvVar5 = local_2b0;
      puVar17 = local_2a0;
    }
    while (puVar17 != (void *)0x0) {
      pvVar25 = (void *)*puVar17;
      local_2b0 = pvVar5;
      operator_delete(puVar17);
      pvVar5 = local_2b0;
      puVar17 = pvVar25;
    }
    local_2b0 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (JobQueue *)(this + 0xa0);
  this_01 = (mutex *)(this + 0x48);
  lVar24 = 0;
LAB_009e9944:
  if (local_298 == 0) {
LAB_009e9ed4:
    if (lVar24 != 0) {
      FUN_00a29e30(lVar24);
      pcVar8 = (char *)Translated::getInstance();
      Translated::log(pcVar8,"downloader2 cleanup");
    }
    lVar24 = FUN_00a26ef4();
    FUN_00a2a184(lVar24,3,2);
    pDVar26 = (DownloadJob *)JobQueue::pop((JobQueue *)(this + 0x30));
    pDVar10 = (Downloader2 *)pDVar26;
joined_r0x009e9f10:
    if (pDVar26 != (DownloadJob *)0x0) {
      uVar19 = _initJobCurl(pDVar10,pDVar26,(void **)local_280);
      if ((uVar19 & 1) == 0) {
        DownloadJob::onFinish();
        if (local_2c8 < puStack_2c0) {
          *local_2c8 = pDVar26;
          local_2c8 = local_2c8 + 1;
          local_f0.fds_bits[0] = (__fd_mask)pDVar26;
        }
        else {
          local_f0.fds_bits[0] = (__fd_mask)pDVar26;
          std::__ndk1::
          vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
          ::__push_back_slow_path<universe::Downloader2::BaseJob*>
                    ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                      *)&local_2d0,(BaseJob **)&local_f0);
        }
        JobQueue::push(this_00,(vector *)&local_2d0);
      }
      else {
        uVar7 = FUN_00a26f00(lVar24,local_280._0_8_);
        if (uVar7 == 0) {
          uVar29 = Device::getTime();
          puVar17 = (undefined8 *)FUN_009ea2cc(&local_2b0,local_280);
          uVar29 = __trunctfdf2(uVar29);
          *puVar17 = pDVar26;
          puVar17[1] = uVar29;
          goto LAB_009ea004;
        }
        pcVar8 = (char *)Translated::getInstance();
        Translated::log(pcVar8,"Downloader2._downloadProc: curl_multi_add_handle error. mcode=%d",
                        (ulong)uVar7);
        pDVar26[0x90] = (DownloadJob)0x3;
        DownloadJob::onFinish();
        if (local_2c8 < puStack_2c0) {
          *local_2c8 = pDVar26;
          local_2c8 = local_2c8 + 1;
          local_f0.fds_bits[0] = (__fd_mask)pDVar26;
        }
        else {
          local_f0.fds_bits[0] = (__fd_mask)pDVar26;
          std::__ndk1::
          vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
          ::__push_back_slow_path<universe::Downloader2::BaseJob*>
                    ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                      *)&local_2d0,(BaseJob **)&local_f0);
        }
        JobQueue::push(this_00,(vector *)&local_2d0);
      }
      local_2c8 = local_2d0;
    }
  }
  else {
    pcVar8 = (char *)Translated::getInstance();
                    /* try { // try from 009e995c to 00ae99ab has its CatchHandler @ 009e995c
                       catch() { ... } // from try @ 009e995c with catch @ 009e995c
                       catch() { ... } // from try @ 009e99d4 with catch @ 009e995c
                       catch() { ... } // from try @ 009e9a40 with catch @ 009e995c */
    Translated::log(pcVar8,"Downloader2._downloadProc: job map size = %d",local_298);
    uVar7 = 0xffffffff;
    while (uVar7 == 0xffffffff) {
      uVar7 = FUN_00a28850(lVar24,&local_2b4);
    }
    if (uVar7 != 0) {
      pcVar8 = (char *)Translated::getInstance();
      Translated::log(pcVar8,&DAT_012f4ac6,(ulong)uVar7);
joined_r0x009ea044:
      if (lVar24 != 0) {
        FUN_00a29e30(lVar24);
      }
      goto LAB_009ea050;
    }
    while( true ) {
      local_2f0.tv_sec = local_2f0.tv_sec & 0xffffffff00000000;
      piVar9 = (int *)FUN_00a2a06c(lVar24,&local_2f0);
      if (piVar9 == (int *)0x0) break;
                    /* try { // try from 009e99ac to 00ae99d3 has its CatchHandler @ 009e9a48 */
      if (*piVar9 == 1) {
        local_170.fds_bits[0] = *(__fd_mask *)(piVar9 + 2);
        iVar2 = piVar9[4];
        FUN_00a273bc(lVar24);
        pDVar10 = (Downloader2 *)FUN_009ea2cc(&local_2b0,&local_170);
        pDVar26 = *(DownloadJob **)pDVar10;
                    /* try { // try from 009e99d4 to 00ae9a2b has its CatchHandler @ 009e995c */
        if (pDVar26[0xd9] == (DownloadJob)0x0) {
          local_280._0_8_ =
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>-in-std::__ndk1::
               basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
               ::construction_vtable + 0x18;
          local_210 = 0x16a0cb0;
          std::__ndk1::ios_base::init((ios_base *)&local_210,(void *)((ulong)local_280 | 8));
                    /* try { // try from 009e9a2c to 00ae9a3f has its CatchHandler @ 009e9a48 */
          local_180 = 0xffffffff;
          local_188 = 0;
                    /* try { // try from 009e9a40 to 00ae9a63 has its CatchHandler @ 009e995c */
          local_210 = 0x16a0c60;
                    /* catch() { ... } // from try @ 009e99ac with catch @ 009e9a48
                       catch() { ... } // from try @ 009e9a2c with catch @ 009e9a48 */
          local_280._0_8_ =
               std::__ndk1::
               basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
               ::vtable + 0x18;
          local_280._8_8_ = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::locale((locale *)&local_270);
          _Stack_250 = 0;
          local_258 = 0;
          _Stack_240 = 0;
          _Stack_248 = 0;
          _Stack_260 = 0;
          local_268 = 0;
          local_280._8_8_ = &PTR__basic_stringbuf_01698960;
          _Stack_230 = 0;
          local_238 = 0;
          local_220 = 0;
          local_228 = (void *)0x0;
          _Stack_218 = CONCAT44(_Stack_218._4_4_,0x10);
          uVar29 = Device::getTime();
          uVar30 = __extenddftf2(*(undefined8 *)(pDVar10 + 8));
          __subtf3(uVar29,uVar30);
          uVar11 = __fixunstfdi();
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_280,uVar11);
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          pDVar27 = pDVar26 + 0xb0;
          if (((byte)*pDVar27 & 1) == 0) {
            *(undefined2 *)pDVar27 = 0;
          }
          else {
            **(undefined1 **)(pDVar26 + 0xc0) = 0;
            *(undefined8 *)(pDVar26 + 0xb8) = 0;
            if (((byte)pDVar26[0xb0] & 1) != 0) {
              operator_delete(*(void **)(pDVar26 + 0xc0));
              *(undefined8 *)(pDVar26 + 0xb0) = 0;
            }
          }
          *(__fd_mask *)(pDVar26 + 0xc0) = local_f0.fds_bits[2];
          *(__fd_mask *)(pDVar26 + 0xb8) = local_f0.fds_bits[1];
          *(__fd_mask *)pDVar27 = local_f0.fds_bits[0];
          local_280._0_8_ =
               std::__ndk1::
               basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
               ::vtable + 0x18;
          local_210 = 0x16a0c60;
          local_280._8_8_ = &PTR__basic_stringbuf_01698960;
          if ((local_238 & 1) != 0) {
            operator_delete(local_228);
          }
          local_280._8_8_ = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::~locale((locale *)&local_270);
          std::__ndk1::ios_base::~ios_base((ios_base *)&local_210);
          *(int *)(pDVar26 + 0x8c) = iVar2;
        }
        else {
          _getCostTime(pDVar10,(void *)local_170.fds_bits[0]);
          pDVar27 = pDVar26 + 0xb0;
          if (((byte)*pDVar27 & 1) == 0) {
            *(undefined2 *)pDVar27 = 0;
          }
          else {
            **(undefined1 **)(pDVar26 + 0xc0) = 0;
            *(undefined8 *)(pDVar26 + 0xb8) = 0;
            if (((byte)pDVar26[0xb0] & 1) != 0) {
              operator_delete(*(void **)(pDVar26 + 0xc0));
              *(undefined8 *)(pDVar26 + 0xb0) = 0;
            }
          }
          *(__fd_mask *)(pDVar26 + 0xc0) = local_270;
          *(undefined8 *)(pDVar26 + 0xb8) = local_280._8_8_;
          *(undefined8 *)pDVar27 = local_280._0_8_;
          *(int *)(pDVar26 + 0x8c) = iVar2;
        }
        if (iVar2 != 0) {
          pbVar12 = (basic_string *)TanGaoXiong::getInstance();
          pDVar10 = (Downloader2 *)TanGaoXiong::removeFile(pbVar12);
          pDVar26[0x90] = (DownloadJob)0x5;
          _getErrorMsg(pDVar10,(void *)local_170.fds_bits[0],pDVar26);
          pDVar27 = pDVar26 + 0x98;
          if (((byte)*pDVar27 & 1) == 0) {
            *(undefined2 *)pDVar27 = 0;
          }
          else {
            **(undefined1 **)(pDVar26 + 0xa8) = 0;
            *(undefined8 *)(pDVar26 + 0xa0) = 0;
            if (((byte)pDVar26[0x98] & 1) != 0) {
              operator_delete(*(void **)(pDVar26 + 0xa8));
              *(undefined8 *)(pDVar26 + 0x98) = 0;
            }
          }
          *(__fd_mask *)(pDVar26 + 0xa8) = local_270;
          *(undefined8 *)(pDVar26 + 0xa0) = local_280._8_8_;
          *(undefined8 *)pDVar27 = local_280._0_8_;
          pcVar8 = (char *)Translated::getInstance();
          if (((byte)*pDVar27 & 1) == 0) {
            pDVar27 = pDVar26 + 0x99;
          }
          else {
            pDVar27 = *(DownloadJob **)(pDVar26 + 0xa8);
          }
          if (((byte)pDVar26[0x20] & 1) == 0) {
            pDVar15 = pDVar26 + 0x21;
          }
          else {
            pDVar15 = *(DownloadJob **)(pDVar26 + 0x30);
          }
          Translated::log(pcVar8,"Downloader2: job curl failed errorMsg:%s, url:%s",pDVar27,pDVar15)
          ;
        }
        FUN_00a24ccc(local_170.fds_bits[0]);
        if (puStack_2a8 != (undefined8 *)0x0) {
          uVar29 = CONCAT17(POPCOUNT((char)((ulong)puStack_2a8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)((ulong)puStack_2a8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)((ulong)puStack_2a8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)((ulong)puStack_2a8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)((ulong)puStack_2a8
                                                                               >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)((ulong)
                                                  puStack_2a8 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)puStack_2a8 >> 8))
                                                           ,POPCOUNT((char)puStack_2a8))))))));
          uVar28 = NEON_uaddlv(uVar29,1);
          uVar19 = ((ulong)(uint)((int)local_170.fds_bits[0] << 3) + 8 ^
                   (ulong)local_170.fds_bits[0] >> 0x20) * -0x622015f714c7d297;
          uVar19 = (uVar19 ^ (ulong)local_170.fds_bits[0] >> 0x20 ^ uVar19 >> 0x2f) *
                   -0x622015f714c7d297;
          uVar18 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) & 0xffffffff;
          puVar17 = (undefined8 *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
          uVar19 = 0;
          if (puStack_2a8 != (undefined8 *)0x0) {
            uVar19 = (ulong)puVar17 / (ulong)puStack_2a8;
          }
          if (uVar18 < 2) {
            puVar23 = (undefined8 *)((ulong)puVar17 & (long)puStack_2a8 - 1U);
          }
          else {
            puVar23 = puVar17;
            if (puStack_2a8 <= puVar17) {
              puVar23 = (undefined8 *)((long)puVar17 - uVar19 * (long)puStack_2a8);
            }
          }
          puVar20 = *(undefined8 **)((long)local_2b0 + (long)puVar23 * 8);
          if ((puVar20 != (undefined8 *)0x0) &&
             (ppuVar13 = (undefined8 **)*puVar20, ppuVar13 != (undefined8 **)0x0)) {
            uVar21 = (long)puStack_2a8 - 1;
LAB_009e9ce8:
            puVar20 = ppuVar13[1];
            if (puVar20 == puVar17) {
              if (ppuVar13[2] != (undefined8 *)local_170.fds_bits[0]) goto LAB_009e9ce0;
              if (uVar18 < 2) {
                puVar17 = (undefined8 *)((ulong)puVar17 & uVar21);
              }
              else if (puStack_2a8 <= puVar17) {
                puVar17 = (undefined8 *)((long)puVar17 - uVar19 * (long)puStack_2a8);
              }
              ppuVar6 = *(undefined8 ***)((long)local_2b0 + (long)puVar17 * 8);
              do {
                ppuVar22 = ppuVar6;
                ppuVar6 = (undefined8 **)*ppuVar22;
              } while ((undefined8 **)*ppuVar22 != ppuVar13);
              if (ppuVar22 == &local_2a0) {
LAB_009e9d90:
                if (*ppuVar13 != (undefined8 *)0x0) {
                  puVar23 = (undefined8 *)(*ppuVar13)[1];
                  if (uVar18 < 2) {
                    puVar23 = (undefined8 *)((ulong)puVar23 & uVar21);
                  }
                  else if (puStack_2a8 <= puVar23) {
                    uVar19 = 0;
                    if (puStack_2a8 != (undefined8 *)0x0) {
                      uVar19 = (ulong)puVar23 / (ulong)puStack_2a8;
                    }
                    puVar23 = (undefined8 *)((long)puVar23 - uVar19 * (long)puStack_2a8);
                  }
                  if (puVar23 == puVar17) goto LAB_009e9dd0;
                }
                *(undefined8 *)((long)local_2b0 + (long)puVar17 * 8) = 0;
              }
              else {
                puVar23 = ppuVar22[1];
                if (uVar18 < 2) {
                  puVar23 = (undefined8 *)((ulong)puVar23 & uVar21);
                }
                else if (puStack_2a8 <= puVar23) {
                  uVar19 = 0;
                  if (puStack_2a8 != (undefined8 *)0x0) {
                    uVar19 = (ulong)puVar23 / (ulong)puStack_2a8;
                  }
                  puVar23 = (undefined8 *)((long)puVar23 - uVar19 * (long)puStack_2a8);
                }
                if (puVar23 != puVar17) goto LAB_009e9d90;
              }
LAB_009e9dd0:
              puVar23 = *ppuVar13;
              if (puVar23 != (undefined8 *)0x0) {
                puVar20 = (undefined8 *)puVar23[1];
                if (uVar18 < 2) {
                  puVar20 = (undefined8 *)((ulong)puVar20 & uVar21);
                }
                else if (puStack_2a8 <= puVar20) {
                  uVar19 = 0;
                  if (puStack_2a8 != (undefined8 *)0x0) {
                    uVar19 = (ulong)puVar20 / (ulong)puStack_2a8;
                  }
                  puVar20 = (undefined8 *)((long)puVar20 - uVar19 * (long)puStack_2a8);
                }
                if (puVar20 != puVar17) {
                  *(undefined8 ***)((long)local_2b0 + (long)puVar20 * 8) = ppuVar22;
                  puVar23 = *ppuVar13;
                }
              }
              *ppuVar22 = puVar23;
              *ppuVar13 = (undefined8 *)0x0;
              local_298 = local_298 - 1;
              operator_delete(ppuVar13);
            }
            else {
              if (uVar18 < 2) {
                puVar20 = (undefined8 *)((ulong)puVar20 & uVar21);
              }
              else if (puStack_2a8 <= puVar20) {
                uVar3 = 0;
                if (puStack_2a8 != (undefined8 *)0x0) {
                  uVar3 = (ulong)puVar20 / (ulong)puStack_2a8;
                }
                puVar20 = (undefined8 *)((long)puVar20 - uVar3 * (long)puStack_2a8);
              }
              if (puVar20 == puVar23) goto LAB_009e9ce0;
            }
          }
        }
LAB_009e9e30:
        DownloadJob::onFinish();
        local_280._0_8_ = pDVar26;
        if (local_2c8 < puStack_2c0) {
          *local_2c8 = pDVar26;
          local_2c8 = local_2c8 + 1;
        }
        else {
          std::__ndk1::
          vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
          ::__push_back_slow_path<universe::Downloader2::BaseJob*>
                    ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                      *)&local_2d0,(BaseJob **)local_280);
        }
      }
    }
    if (local_2c8 != local_2d0) {
      JobQueue::push(this_00,(vector *)&local_2d0);
      local_2c8 = local_2d0;
    }
    if (local_298 < 0x20) {
      if (local_298 == 0) goto LAB_009e9ed4;
      uVar19 = std::__ndk1::mutex::try_lock(this_01);
      if ((uVar19 & 1) != 0) {
        lVar16 = *(long *)(this + 0x40);
        if (lVar16 != 0) {
          plVar14 = *(long **)(this + 0x38);
          lVar1 = *plVar14;
          pDVar26 = (DownloadJob *)plVar14[2];
          *(long *)(lVar1 + 8) = plVar14[1];
          *(long *)plVar14[1] = lVar1;
          *(long *)(this + 0x40) = lVar16 + -1;
          operator_delete(plVar14);
          pDVar10 = (Downloader2 *)std::__ndk1::mutex::unlock(this_01);
          goto joined_r0x009e9f10;
        }
        std::__ndk1::mutex::unlock(this_01);
      }
    }
  }
LAB_009ea004:
  if (this[0x1d0] == (Downloader2)0x0) goto joined_r0x009ea044;
  if (0 < local_2b4) {
    local_2d8 = -1;
    FUN_00a2ad10(lVar24,&local_2d8);
    if (local_2d8 < 1000) {
      local_2d8 = 1000;
    }
    local_2dc = -1;
    local_280._8_8_ = (undefined **)0x0;
    local_280._0_8_ = (DownloadJob *)0x0;
    local_268 = 0;
    local_270 = 0;
    local_258 = 0;
    _Stack_260 = 0;
    _Stack_248 = 0;
    _Stack_250 = 0;
    local_238 = 0;
    _Stack_240 = 0;
    local_228 = (void *)0x0;
    _Stack_230 = 0;
    _Stack_218 = 0;
    local_220 = 0;
    _Stack_208 = 0;
    local_210 = 0;
    local_f0.fds_bits[1] = 0;
    local_f0.fds_bits[0] = 0;
    local_f0.fds_bits[3] = 0;
    local_f0.fds_bits[2] = 0;
    local_f0.fds_bits[5] = 0;
    local_f0.fds_bits[4] = 0;
    local_f0.fds_bits[7] = 0;
    local_f0.fds_bits[6] = 0;
    local_f0.fds_bits[9] = 0;
    local_f0.fds_bits[8] = 0;
    local_f0.fds_bits[0xb] = 0;
    local_f0.fds_bits[10] = 0;
    local_f0.fds_bits[0xd] = 0;
    local_f0.fds_bits[0xc] = 0;
    local_f0.fds_bits[0xf] = 0;
    local_f0.fds_bits[0xe] = 0;
    local_170.fds_bits[0xd] = 0;
    local_170.fds_bits[0xc] = 0;
    local_170.fds_bits[0xf] = 0;
    local_170.fds_bits[0xe] = 0;
    local_170.fds_bits[9] = 0;
    local_170.fds_bits[8] = 0;
    local_170.fds_bits[0xb] = 0;
    local_170.fds_bits[10] = 0;
    local_170.fds_bits[5] = 0;
    local_170.fds_bits[4] = 0;
    local_170.fds_bits[7] = 0;
    local_170.fds_bits[6] = 0;
    local_170.fds_bits[1] = 0;
    local_170.fds_bits[0] = 0;
    local_170.fds_bits[3] = 0;
    local_170.fds_bits[2] = 0;
    uVar7 = FUN_00a27f9c(lVar24,local_280,&local_f0,&local_170,&local_2dc);
    if (uVar7 != 0) {
      pcVar8 = (char *)Translated::getInstance();
                    /* try { // try from 009ea0c4 to 00aea11b has its CatchHandler @ 009ea0c4
                       catch() { ... } // from try @ 009ea0c4 with catch @ 009ea0c4
                       catch() { ... } // from try @ 009ea120 with catch @ 009ea0c4 */
      Translated::log(pcVar8,&DAT_012f4a22,(ulong)uVar7);
      goto joined_r0x009ea044;
    }
    if (local_2dc == -1) {
      local_2f0.tv_sec = 50000;
      std::__ndk1::this_thread::sleep_for((duration *)&local_2f0);
    }
    else {
      local_2f0.tv_sec = local_2d8 / 1000;
      local_2f0.tv_usec = (local_2d8 % 1000) * 1000;
      uVar7 = select(local_2dc + 1,(fd_set *)local_280,&local_f0,&local_170,&local_2f0);
      if ((int)uVar7 < 0) {
        pcVar8 = (char *)Translated::getInstance();
        Translated::log(pcVar8,&DAT_012f4a5e,(ulong)uVar7);
      }
    }
  }
  goto LAB_009e9944;
LAB_009e9ce0:
  ppuVar13 = (undefined8 **)*ppuVar13;
  if (ppuVar13 == (undefined8 **)0x0) goto LAB_009e9e30;
  goto LAB_009e9ce8;
}

