
/* universe::Downloader2::_downloadProc() */

void __thiscall universe::Downloader2::_downloadProc(Downloader2 *this)

{
  JobQueue *this_00;
  mutex *this_01;
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 **ppuVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  Downloader2 *pDVar9;
  ulonglong uVar10;
  basic_string *pbVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  DownloadJob *pDVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 **ppuVar21;
  undefined8 *puVar22;
  long lVar23;
  void *pvVar24;
  DownloadJob *pDVar25;
  DownloadJob *pDVar26;
  undefined8 uVar27;
  undefined8 uVar28;
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
  undefined **local_210;
  __fd_mask _Stack_208;
  undefined8 local_188;
  undefined4 local_180;
  fd_set local_170;
  fd_set local_f0;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
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
LAB_00a02904:
    pvVar4 = local_2b0;
    puVar17 = local_2a0;
    if (local_2d0 != (undefined8 *)0x0) {
      local_2c8 = local_2d0;
      operator_delete(local_2d0);
      pvVar4 = local_2b0;
      puVar17 = local_2a0;
    }
    while (puVar17 != (void *)0x0) {
      pvVar24 = (void *)*puVar17;
      local_2b0 = pvVar4;
      operator_delete(puVar17);
      pvVar4 = local_2b0;
      puVar17 = pvVar24;
    }
    local_2b0 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 00a02960 to 00b02967 has its CatchHandler @ 00a02bb4 */
                    /* try { // try from 00a02968 to 00b0298b has its CatchHandler @ 00a02840 */
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a0298c to 00b0299b has its CatchHandler @ 00a02c20 */
    __stack_chk_fail();
  }
  this_00 = (JobQueue *)(this + 0xa0);
  this_01 = (mutex *)(this + 0x48);
                    /* try { // try from 00a02094 to 00b020d7 has its CatchHandler @ 00a02784 */
  lVar23 = 0;
                    /* try { // try from 00a020e8 to 00b0212b has its CatchHandler @ 00a02758 */
LAB_00a0220c:
  if (local_298 == 0) {
LAB_00a02784:
                    /* catch() { ... } // from try @ 00a01f38 with catch @ 00a02784
                       catch() { ... } // from try @ 00a02094 with catch @ 00a02784 */
    if (lVar23 != 0) {
      FUN_00a14448(lVar23);
      pcVar7 = (char *)Translated::getInstance();
                    /* catch() { ... } // from try @ 00a01ed8 with catch @ 00a0279c */
      Translated::log(pcVar7,"downloader2 cleanup");
    }
                    /* catch() { ... } // from try @ 00a01ecc with catch @ 00a027a0 */
    lVar23 = FUN_00a1150c();
                    /* catch() { ... } // from try @ 00a01eac with catch @ 00a027a4 */
    FUN_00a1479c(lVar23,3,2);
                    /* catch() { ... } // from try @ 00a01ee4 with catch @ 00a027b4
                       catch() { ... } // from try @ 00a02154 with catch @ 00a027b4 */
    pDVar26 = (DownloadJob *)JobQueue::pop((JobQueue *)(this + 0x30));
    pDVar9 = (Downloader2 *)pDVar26;
joined_r0x00a027c0:
    if (pDVar26 != (DownloadJob *)0x0) {
      uVar19 = _initJobCurl(pDVar9,pDVar26,(void **)local_280);
      if ((uVar19 & 1) == 0) {
        DownloadJob::onFinish();
                    /* try { // try from 00a02840 to 00b0295f has its CatchHandler @ 00a02840
                       catch() { ... } // from try @ 00a02840 with catch @ 00a02840
                       catch() { ... } // from try @ 00a02968 with catch @ 00a02840
                       catch() { ... } // from try @ 00a02b60 with catch @ 00a02840
                       catch() { ... } // from try @ 00a02bb4 with catch @ 00a02840 */
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
        uVar6 = FUN_00a11518(lVar23,local_280._0_8_);
        if (uVar6 == 0) {
          uVar27 = Device::getTime();
          puVar17 = (undefined8 *)FUN_00a02b74(&local_2b0,local_280);
          uVar27 = __trunctfdf2(uVar27);
          *puVar17 = pDVar26;
          puVar17[1] = uVar27;
          goto LAB_00a028c4;
        }
        pcVar7 = (char *)Translated::getInstance();
        Translated::log(pcVar7,"Downloader2._downloadProc: curl_multi_add_handle error. mcode=%d",
                        (ulong)uVar6);
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
    pcVar7 = (char *)Translated::getInstance();
    Translated::log(pcVar7,"Downloader2._downloadProc: job map size = %d",local_298);
    uVar6 = 0xffffffff;
    while (uVar6 == 0xffffffff) {
      uVar6 = FUN_00a12e68(lVar23,&local_2b4);
    }
                    /* try { // try from 00a02248 to 00b0224f has its CatchHandler @ 00a0263c */
    if (uVar6 != 0) {
      pcVar7 = (char *)Translated::getInstance();
      Translated::log(pcVar7,"Downloader2._downloadProc: curl_multi_perform error. mcode=%d",
                      (ulong)uVar6);
joined_r0x00a028f8:
      if (lVar23 != 0) {
        FUN_00a14448(lVar23);
      }
      goto LAB_00a02904;
    }
    while( true ) {
      local_2f0.tv_sec = local_2f0.tv_sec & 0xffffffff00000000;
      piVar8 = (int *)FUN_00a14684(lVar23,&local_2f0);
      if (piVar8 == (int *)0x0) break;
      if (*piVar8 == 1) {
        local_170.fds_bits[0] = *(__fd_mask *)(piVar8 + 2);
        iVar2 = piVar8[4];
        FUN_00a119d4(lVar23);
        pDVar9 = (Downloader2 *)FUN_00a02b74(&local_2b0,&local_170);
        pDVar26 = *(DownloadJob **)pDVar9;
        if (pDVar26[0xd9] == (DownloadJob)0x0) {
          local_280._0_8_ =
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>-in-std::__ndk1::
               basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
               ::construction_vtable + 0x18;
          local_210 = (undefined **)0x1c6c8d0;
                    /* try { // try from 00a022fc to 00b02313 has its CatchHandler @ 00a026c4 */
          std::__ndk1::ios_base::init((ios_base *)&local_210,(void *)((ulong)local_280 | 8));
          local_188 = 0;
          local_180 = 0xffffffff;
          local_210 = &PTR__basic_ostringstream_01c6c880;
          local_280._0_8_ = &PTR__basic_ostringstream_01c6c858;
          local_280._8_8_ = &PTR__basic_streambuf_01c671a8;
          std::__ndk1::locale::locale((locale *)&local_270);
          _Stack_250 = 0;
          local_258 = 0;
          _Stack_240 = 0;
          _Stack_248 = 0;
          _Stack_260 = 0;
          local_268 = 0;
          local_280._8_8_ = &PTR__basic_stringbuf_01c67100;
          _Stack_230 = 0;
          local_238 = 0;
          local_220 = 0;
          local_228 = (void *)0x0;
          _Stack_218 = CONCAT44(_Stack_218._4_4_,0x10);
          uVar27 = Device::getTime();
          uVar28 = __extenddftf2(*(undefined8 *)(pDVar9 + 8));
                    /* try { // try from 00a02374 to 00b0237b has its CatchHandler @ 00a026ac */
          __subtf3(uVar27,uVar28);
          uVar10 = __fixunstfdi();
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_280,uVar10);
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          pDVar25 = pDVar26 + 0xb0;
          if (((byte)*pDVar25 & 1) == 0) {
            *(undefined2 *)pDVar25 = 0;
          }
          else {
            **(undefined1 **)(pDVar26 + 0xc0) = 0;
            *(undefined8 *)(pDVar26 + 0xb8) = 0;
            if (((byte)pDVar26[0xb0] & 1) != 0) {
              operator_delete(*(void **)(pDVar26 + 0xc0));
              *(undefined8 *)(pDVar26 + 0xb0) = 0;
            }
          }
                    /* try { // try from 00a02410 to 00b02427 has its CatchHandler @ 00a026c0 */
          *(__fd_mask *)(pDVar26 + 0xc0) = local_f0.fds_bits[2];
          *(__fd_mask *)(pDVar26 + 0xb8) = local_f0.fds_bits[1];
          *(__fd_mask *)pDVar25 = local_f0.fds_bits[0];
          local_280._0_8_ = &PTR__basic_ostringstream_01c6c858;
          local_210 = &PTR__basic_ostringstream_01c6c880;
          local_280._8_8_ = &PTR__basic_stringbuf_01c67100;
          if ((local_238 & 1) != 0) {
            operator_delete(local_228);
          }
                    /* try { // try from 00a02464 to 00b0246b has its CatchHandler @ 00a0262c */
          local_280._8_8_ = &PTR__basic_streambuf_01c671a8;
                    /* try { // try from 00a0246c to 00b024e3 has its CatchHandler @ 00a01e4c */
          std::__ndk1::locale::~locale((locale *)&local_270);
          std::__ndk1::ios_base::~ios_base((ios_base *)&local_210);
          *(int *)(pDVar26 + 0x8c) = iVar2;
        }
        else {
          _getCostTime(pDVar9,(void *)local_170.fds_bits[0]);
          pDVar25 = pDVar26 + 0xb0;
          if (((byte)*pDVar25 & 1) == 0) {
            *(undefined2 *)pDVar25 = 0;
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
          *(undefined8 *)pDVar25 = local_280._0_8_;
          *(int *)(pDVar26 + 0x8c) = iVar2;
        }
        if (iVar2 != 0) {
          pbVar11 = (basic_string *)CustomFileManager::getInstance();
          pDVar9 = (Downloader2 *)CustomFileManager::removeFile(pbVar11);
          pDVar26[0x90] = (DownloadJob)0x5;
          _getErrorMsg(pDVar9,(void *)local_170.fds_bits[0],pDVar26);
          pDVar25 = pDVar26 + 0x98;
          if (((byte)*pDVar25 & 1) == 0) {
            *(undefined2 *)pDVar25 = 0;
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
                    /* try { // try from 00a024e4 to 00b024eb has its CatchHandler @ 00a0261c */
          *(undefined8 *)(pDVar26 + 0xa0) = local_280._8_8_;
          *(undefined8 *)pDVar25 = local_280._0_8_;
          pcVar7 = (char *)Translated::getInstance();
                    /* try { // try from 00a024ec to 00b0250f has its CatchHandler @ 00a01e4c */
          if (((byte)*pDVar25 & 1) == 0) {
            pDVar25 = pDVar26 + 0x99;
          }
          else {
            pDVar25 = *(DownloadJob **)(pDVar26 + 0xa8);
          }
          if (((byte)pDVar26[0x20] & 1) == 0) {
            pDVar14 = pDVar26 + 0x21;
                    /* try { // try from 00a02510 to 00b02523 has its CatchHandler @ 00a02640 */
          }
          else {
            pDVar14 = *(DownloadJob **)(pDVar26 + 0x30);
          }
          Translated::log(pcVar7,"Downloader2: job curl failed errorMsg:%s, url:%s",pDVar25,pDVar14)
          ;
        }
        FUN_00a0f2e4(local_170.fds_bits[0]);
        if (puStack_2a8 != (undefined8 *)0x0) {
          uVar18 = (long)puStack_2a8 - 1;
                    /* try { // try from 00a0254c to 00b0255b has its CatchHandler @ 00a026c0 */
          uVar19 = ((local_170.fds_bits[0] & 0x1fffffffU) * 8 + 8 ^
                   (ulong)local_170.fds_bits[0] >> 0x20) * -0x622015f714c7d297;
          uVar16 = (uVar19 ^ (ulong)local_170.fds_bits[0] >> 0x20 ^ uVar19 >> 0x2f) *
                   -0x622015f714c7d297;
                    /* try { // try from 00a0255c to 00b02603 has its CatchHandler @ 00a01e4c */
          uVar19 = uVar18 & (ulong)puStack_2a8;
          puVar17 = (undefined8 *)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
          if (uVar19 == 0) {
            puVar20 = (undefined8 *)((ulong)puVar17 & uVar18);
          }
          else {
            puVar20 = puVar17;
            if (puStack_2a8 <= puVar17) {
              uVar16 = 0;
              if (puStack_2a8 != (undefined8 *)0x0) {
                uVar16 = (ulong)puVar17 / (ulong)puStack_2a8;
              }
              puVar20 = (undefined8 *)((long)puVar17 - uVar16 * (long)puStack_2a8);
            }
          }
          puVar22 = *(undefined8 **)((long)local_2b0 + (long)puVar20 * 8);
          if ((puVar22 != (undefined8 *)0x0) &&
             (ppuVar12 = (undefined8 **)*puVar22, ppuVar12 != (undefined8 **)0x0)) {
LAB_00a0259c:
            puVar22 = ppuVar12[1];
            if (puVar22 == puVar17) {
              if (ppuVar12[2] != (undefined8 *)local_170.fds_bits[0]) goto LAB_00a025dc;
              if (uVar19 == 0) {
                puVar17 = (undefined8 *)((ulong)puVar17 & uVar18);
              }
              else if (puStack_2a8 <= puVar17) {
                uVar16 = 0;
                if (puStack_2a8 != (undefined8 *)0x0) {
                  uVar16 = (ulong)puVar17 / (ulong)puStack_2a8;
                }
                puVar17 = (undefined8 *)((long)puVar17 - uVar16 * (long)puStack_2a8);
              }
                    /* try { // try from 00a02604 to 00b0260b has its CatchHandler @ 00a0263c */
              ppuVar5 = *(undefined8 ***)((long)local_2b0 + (long)puVar17 * 8);
              do {
                ppuVar21 = ppuVar5;
                    /* try { // try from 00a0260c to 00b02613 has its CatchHandler @ 00a0262c */
                ppuVar5 = (undefined8 **)*ppuVar21;
                    /* try { // try from 00a02614 to 00b0261b has its CatchHandler @ 00a0261c */
              } while ((undefined8 **)*ppuVar21 != ppuVar12);
                    /* catch() { ... } // from try @ 00a024e4 with catch @ 00a0261c
                       catch() { ... } // from try @ 00a02614 with catch @ 00a0261c
                       try { // try from 00a0261c to 00b0280b has its CatchHandler @ 00a01e4c */
              if (ppuVar21 == &local_2a0) {
LAB_00a02644:
                if (*ppuVar12 != (undefined8 *)0x0) {
                  puVar20 = (undefined8 *)(*ppuVar12)[1];
                  if (uVar19 == 0) {
                    puVar20 = (undefined8 *)((ulong)puVar20 & uVar18);
                  }
                  else if (puStack_2a8 <= puVar20) {
                    uVar16 = 0;
                    if (puStack_2a8 != (undefined8 *)0x0) {
                      uVar16 = (ulong)puVar20 / (ulong)puStack_2a8;
                    }
                    puVar20 = (undefined8 *)((long)puVar20 - uVar16 * (long)puStack_2a8);
                  }
                  if (puVar20 == puVar17) goto LAB_00a02690;
                }
                *(undefined8 *)((long)local_2b0 + (long)puVar17 * 8) = 0;
              }
              else {
                puVar20 = ppuVar21[1];
                if (uVar19 == 0) {
                  puVar20 = (undefined8 *)((ulong)puVar20 & uVar18);
                }
                else {
                    /* catch() { ... } // from try @ 00a02464 with catch @ 00a0262c
                       catch() { ... } // from try @ 00a0260c with catch @ 00a0262c */
                  if (puStack_2a8 <= puVar20) {
                    uVar16 = 0;
                    if (puStack_2a8 != (undefined8 *)0x0) {
                      uVar16 = (ulong)puVar20 / (ulong)puStack_2a8;
                    }
                    puVar20 = (undefined8 *)((long)puVar20 - uVar16 * (long)puStack_2a8);
                  }
                }
                if (puVar20 != puVar17) goto LAB_00a02644;
              }
LAB_00a02690:
              puVar20 = *ppuVar12;
              if (puVar20 != (undefined8 *)0x0) {
                puVar22 = (undefined8 *)puVar20[1];
                if (uVar19 == 0) {
                  puVar22 = (undefined8 *)((ulong)puVar22 & uVar18);
                }
                else if (puStack_2a8 <= puVar22) {
                  uVar19 = 0;
                  if (puStack_2a8 != (undefined8 *)0x0) {
                    uVar19 = (ulong)puVar22 / (ulong)puStack_2a8;
                  }
                    /* catch() { ... } // from try @ 00a02374 with catch @ 00a026ac */
                  puVar22 = (undefined8 *)((long)puVar22 - uVar19 * (long)puStack_2a8);
                }
                if (puVar22 != puVar17) {
                  *(undefined8 ***)((long)local_2b0 + (long)puVar22 * 8) = ppuVar21;
                    /* catch() { ... } // from try @ 00a02410 with catch @ 00a026c0
                       catch() { ... } // from try @ 00a0254c with catch @ 00a026c0 */
                  puVar20 = *ppuVar12;
                }
              }
                    /* catch() { ... } // from try @ 00a022fc with catch @ 00a026c4 */
              *ppuVar21 = puVar20;
              *ppuVar12 = (undefined8 *)0x0;
              local_298 = local_298 - 1;
                    /* catch() { ... } // from try @ 00a01fdc with catch @ 00a026d4 */
              operator_delete(ppuVar12);
            }
            else {
              if (uVar19 == 0) {
                puVar22 = (undefined8 *)((ulong)puVar22 & uVar18);
              }
              else if (puStack_2a8 <= puVar22) {
                uVar16 = 0;
                if (puStack_2a8 != (undefined8 *)0x0) {
                  uVar16 = (ulong)puVar22 / (ulong)puStack_2a8;
                }
                puVar22 = (undefined8 *)((long)puVar22 - uVar16 * (long)puStack_2a8);
              }
              if (puVar22 == puVar20) goto LAB_00a025dc;
            }
          }
        }
LAB_00a026dc:
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
      if (local_298 == 0) goto LAB_00a02784;
      uVar19 = std::__ndk1::mutex::try_lock(this_01);
      if ((uVar19 & 1) != 0) {
        lVar15 = *(long *)(this + 0x40);
        if (lVar15 != 0) {
          plVar13 = *(long **)(this + 0x38);
                    /* catch() { ... } // from try @ 00a01f54 with catch @ 00a02758
                       catch() { ... } // from try @ 00a020e8 with catch @ 00a02758 */
          lVar1 = *plVar13;
          pDVar26 = (DownloadJob *)plVar13[2];
          *(long *)(lVar1 + 8) = plVar13[1];
          *(long *)plVar13[1] = lVar1;
          *(long *)(this + 0x40) = lVar15 + -1;
          operator_delete(plVar13);
          pDVar9 = (Downloader2 *)std::__ndk1::mutex::unlock(this_01);
          goto joined_r0x00a027c0;
        }
        std::__ndk1::mutex::unlock(this_01);
      }
    }
  }
LAB_00a028c4:
  if (this[0x1d0] == (Downloader2)0x0) goto joined_r0x00a028f8;
  if (0 < local_2b4) {
    local_2d8 = -1;
    FUN_00a15328(lVar23,&local_2d8);
    if (local_2d8 < 1000) {
      local_2d8 = 1000;
    }
    local_2dc = -1;
    _Stack_218 = 0;
    local_220 = 0;
    _Stack_208 = 0;
    local_210 = (undefined **)0x0;
    local_238 = 0;
    _Stack_240 = 0;
    local_228 = (void *)0x0;
    _Stack_230 = 0;
    local_258 = 0;
    _Stack_260 = 0;
    _Stack_248 = 0;
    _Stack_250 = 0;
    local_280._8_8_ = (undefined **)0x0;
    local_280._0_8_ = (DownloadJob *)0x0;
    local_268 = 0;
    local_270 = 0;
    local_f0.fds_bits[0xd] = 0;
    local_f0.fds_bits[0xc] = 0;
    local_f0.fds_bits[0xf] = 0;
    local_f0.fds_bits[0xe] = 0;
    local_f0.fds_bits[9] = 0;
    local_f0.fds_bits[8] = 0;
    local_f0.fds_bits[0xb] = 0;
    local_f0.fds_bits[10] = 0;
    local_f0.fds_bits[5] = 0;
    local_f0.fds_bits[4] = 0;
    local_f0.fds_bits[7] = 0;
    local_f0.fds_bits[6] = 0;
                    /* try { // try from 00a02154 to 00b0218f has its CatchHandler @ 00a027b4 */
    local_f0.fds_bits[1] = 0;
    local_f0.fds_bits[0] = 0;
    local_f0.fds_bits[3] = 0;
    local_f0.fds_bits[2] = 0;
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
    uVar6 = FUN_00a125b4(lVar23,local_280,&local_f0,&local_170,&local_2dc);
    if (uVar6 != 0) {
      pcVar7 = (char *)Translated::getInstance();
      Translated::log(pcVar7,"Downloader2._downloadProc: curl_multi_fdset error. mcode=%d",
                      (ulong)uVar6);
      goto joined_r0x00a028f8;
    }
    if (local_2dc == -1) {
      local_2f0.tv_sec = 50000;
      std::__ndk1::this_thread::sleep_for((duration *)&local_2f0);
    }
    else {
      local_2f0.tv_sec = local_2d8 / 1000;
      local_2f0.tv_usec = (local_2d8 % 1000) * 1000;
      uVar6 = select(local_2dc + 1,(fd_set *)local_280,&local_f0,&local_170,&local_2f0);
      if ((int)uVar6 < 0) {
        pcVar7 = (char *)Translated::getInstance();
        Translated::log(pcVar7,"Downloader2._downloadProc: select return unexpect code: %d",
                        (ulong)uVar6);
      }
    }
  }
  goto LAB_00a0220c;
LAB_00a025dc:
  ppuVar12 = (undefined8 **)*ppuVar12;
  if (ppuVar12 == (undefined8 **)0x0) goto LAB_00a026dc;
  goto LAB_00a0259c;
}

