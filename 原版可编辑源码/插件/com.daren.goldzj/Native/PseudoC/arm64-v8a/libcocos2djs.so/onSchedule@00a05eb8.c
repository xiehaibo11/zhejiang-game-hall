
/* universe::DownloadTask::onSchedule() */

undefined8 __thiscall universe::DownloadTask::onSchedule(DownloadTask *this)

{
  CustomFileManager *this_00;
  DownloadTask *pDVar1;
  undefined **__n;
  undefined **ppuVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  basic_string *pbVar6;
  int *piVar7;
  ulong uVar8;
  DownloadTask *pDVar9;
  FILE *pFVar10;
  char *pcVar11;
  undefined8 uVar12;
  DownloadTask *extraout_x0;
  DownloadTask *extraout_x0_00;
  DownloadTask *extraout_x0_01;
  DownloadTask *pDVar13;
  basic_string *extraout_x1;
  basic_string *pbVar14;
  basic_string *extraout_x1_00;
  basic_string *extraout_x1_01;
  basic_string *extraout_x1_02;
  basic_string *extraout_x1_03;
  basic_string *extraout_x1_04;
  basic_string *extraout_x1_05;
  DownloadTask DVar15;
  undefined **ppuVar16;
  long lVar17;
  void *pvVar18;
  DownloadTask *pDVar19;
  undefined8 uVar20;
  longdouble lVar21;
  undefined1 auVar22 [16];
  long local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined **local_190;
  undefined **ppuStack_188;
  DownloadTask *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined **local_120 [17];
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  Device::getTime();
  uVar20 = __trunctfdf2();
  pbVar6 = (basic_string *)CustomFileManager::getInstance();
  lVar17 = **(long **)(this + 0x68);
  universe::core::Service::_curWorkerIndex::__tls_init();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a05de8 with catch @ 00a05f18
                        */
  piVar7 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
  pvVar18 = *(void **)(lVar17 + (long)*piVar7 * 8);
  if (pvVar18 == (void *)0x0) {
    pvVar18 = (void *)FUN_00a0ef74();
    if (pvVar18 != (void *)0x0) {
      lVar17 = **(long **)(this + 0x68);
      universe::core::Service::_curWorkerIndex::__tls_init();
      piVar7 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
      *(void **)(lVar17 + (long)*piVar7 * 8) = pvVar18;
      goto LAB_00a05f60;
    }
    bVar4 = false;
    this[0x70] = (DownloadTask)0x1;
LAB_00a063d0:
    local_190 = (undefined **)0x1c6c8a8;
    local_120[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_120,(void *)((ulong)&local_190 | 8));
    local_98 = 0;
    local_190 = &PTR__basic_ostringstream_01c6c858;
    ppuStack_188 = &PTR__basic_streambuf_01c671a8;
    local_90 = 0xffffffff;
    local_120[0] = &PTR__basic_ostringstream_01c6c880;
    std::__ndk1::locale::locale((locale *)&local_180);
    uStack_150 = 0;
    local_158 = 0;
    ppuStack_188 = &PTR__basic_stringbuf_01c67100;
    uStack_160 = 0;
    local_168 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_130 = 0;
    local_138 = (void *)0x0;
    uStack_140 = 0;
    local_148 = 0;
    local_128 = 0x10;
    uVar12 = Device::getTime();
    uVar20 = __extenddftf2(uVar20);
    lVar21 = (longdouble)__subtf3(uVar12,uVar20);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,lVar21);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pDVar19 = this + 0x90;
    if (((byte)*pDVar19 & 1) == 0) {
      *(undefined2 *)pDVar19 = 0;
    }
    else {
      **(undefined1 **)(this + 0xa0) = 0;
      *(undefined8 *)(this + 0x98) = 0;
      if (((byte)this[0x90] & 1) != 0) {
        operator_delete(*(void **)(this + 0xa0));
        *(undefined8 *)(this + 0x90) = 0;
      }
    }
    local_190 = &PTR__basic_ostringstream_01c6c858;
    *(undefined8 *)(this + 0xa0) = local_198;
    *(undefined8 *)(this + 0x98) = uStack_1a0;
    *(long *)pDVar19 = local_1a8;
    local_120[0] = &PTR__basic_ostringstream_01c6c880;
    ppuStack_188 = &PTR__basic_stringbuf_01c67100;
    if ((local_148 & 1) != 0) {
      operator_delete(local_138);
    }
    ppuStack_188 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale((locale *)&local_180);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_120);
    pbVar14 = extraout_x1_00;
    if (bVar4) goto LAB_00a06534;
  }
  else {
LAB_00a05f60:
    FUN_00a0f02c(pvVar18,0x2711,this);
    FUN_00a0f02c(pvVar18,0x2b,1);
    FUN_00a0f02c(pvVar18,0x2d,1);
    FUN_00a0f02c(pvVar18,99,1);
    FUN_00a0f02c(pvVar18,0x4e,5);
    FUN_00a0f02c(pvVar18,0x13,1);
    FUN_00a0f02c(pvVar18,0x14,5);
    FUN_00a0f02c(pvVar18,0x34,1);
    FUN_00a0f02c(pvVar18,0x44,2);
    FUN_00a0f02c(pvVar18,0x40,0);
    FUN_00a0f02c(pvVar18,0x51,0);
    pDVar19 = this + 0x20;
    if (((byte)*pDVar19 & 1) == 0) {
      pDVar9 = this + 0x21;
    }
    else {
      pDVar9 = *(DownloadTask **)(this + 0x30);
    }
    FUN_00a0f02c(pvVar18,0x2712,pDVar9);
    this_00 = (CustomFileManager *)(this + 0x38);
    auVar22 = (**(code **)(*(long *)pbVar6 + 0x18))(pbVar6,this_00);
    pbVar14 = auVar22._8_8_;
    lVar17 = auVar22._0_8_;
    if (lVar17 < 1) {
LAB_00a0615c:
      pcVar11 = "wb";
LAB_00a06164:
      CustomFileManager::dirname(this_00,pbVar14);
      uVar8 = CustomFileManager::isDirectoryExist(pbVar6);
      if (((uVar8 & 1) == 0) &&
         (pDVar9 = (DownloadTask *)(**(code **)(*(long *)pbVar6 + 0x30))(pbVar6,&local_190),
         ((ulong)pDVar9 & 1) == 0)) {
        DVar15 = (DownloadTask)0x6;
LAB_00a06210:
        this[0x70] = DVar15;
      }
      else {
        if (((byte)*this_00 & 1) == 0) {
          pDVar9 = this + 0x39;
        }
        else {
          pDVar9 = *(DownloadTask **)(this + 0x48);
        }
        pFVar10 = fopen((char *)pDVar9,pcVar11);
        *(FILE **)(this + 0xe8) = pFVar10;
        if (pFVar10 == (FILE *)0x0) {
          DVar15 = (DownloadTask)0x7;
          pDVar9 = (DownloadTask *)0x0;
          goto LAB_00a06210;
        }
                    /* try { // try from 00a061c0 to 00b061c3 has its CatchHandler @ 00a0625c */
                    /* try { // try from 00a061c4 to 00b0627b has its CatchHandler @ 00a06060 */
        FUN_00a0f02c(pvVar18,0x4e2b,FUN_00a06b80);
        FUN_00a0f02c(pvVar18,0x2a,0);
        FUN_00a0f02c(pvVar18,0x2c,0);
        if (((byte)this[200] & 1) == 0) {
          pDVar9 = this + 0xc9;
        }
        else {
          pDVar9 = *(DownloadTask **)(this + 0xd8);
        }
        FUN_00a0f02c(pvVar18,0x2776,pDVar9);
        if (this[0x108] != (DownloadTask)0x0) {
          FUN_00a0f02c(pvVar18,0x2b,0);
          FUN_00a0f02c(pvVar18,0x4efb,FUN_00a06b9c);
                    /* catch() { ... } // from try @ 00a061c0 with catch @ 00a0625c */
                    /* catch() { ... } // from try @ 00a06120 with catch @ 00a06260 */
          FUN_00a0f02c(pvVar18,0x2749,this);
        }
        pDVar9 = (DownloadTask *)FUN_00a0f0b4(pvVar18);
        if ((int)pDVar9 != 0) {
          pcVar11 = (char *)Translated::getInstance();
          if (((byte)*pDVar19 & 1) == 0) {
            pDVar19 = this + 0x21;
          }
          else {
            pDVar19 = *(DownloadTask **)(this + 0x30);
          }
          uVar12 = FUN_00a15564((ulong)pDVar9 & 0xffffffff);
                    /* try { // try from 00a062a0 to 00b062d7 has its CatchHandler @ 00a062a0
                       catch() { ... } // from try @ 00a062a0 with catch @ 00a062a0
                       catch() { ... } // from try @ 00a062fc with catch @ 00a062a0 */
          if (((byte)*this_00 & 1) == 0) {
            pDVar9 = this + 0x39;
          }
          else {
            pDVar9 = *(DownloadTask **)(this + 0x48);
          }
          Translated::log(pcVar11,"curl get content failed: (%s)%s %s",pDVar19,uVar12,pDVar9);
          this[0x70] = (DownloadTask)0x8;
                    /* try { // try from 00a062d8 to 00b062db has its CatchHandler @ 00a0638c */
          pDVar9 = (DownloadTask *)getErrMsg(this,pvVar18);
          pDVar19 = this + 0xa8;
          if (((byte)*pDVar19 & 1) == 0) {
            *(undefined2 *)pDVar19 = 0;
                    /* try { // try from 00a062f4 to 00b062fb has its CatchHandler @ 00a0637c */
          }
          else {
                    /* try { // try from 00a062fc to 00b0639f has its CatchHandler @ 00a062a0 */
            **(undefined1 **)(this + 0xb8) = 0;
            *(undefined8 *)(this + 0xb0) = 0;
            if (((byte)this[0xa8] & 1) != 0) {
              operator_delete(*(void **)(this + 0xb8));
              *(undefined8 *)(this + 0xa8) = 0;
              pDVar9 = extraout_x0;
            }
          }
          *(undefined8 *)(this + 0xb8) = local_198;
          *(undefined8 *)(this + 0xb0) = uStack_1a0;
          *(long *)pDVar19 = local_1a8;
        }
      }
      if (((ulong)local_190 & 1) != 0) {
        operator_delete(local_180);
        pDVar9 = extraout_x0_00;
      }
joined_r0x00a06338:
      if (pvVar18 == (void *)0x0) {
        bVar4 = false;
      }
      else {
        if (this[0xc0] != (DownloadTask)0x0) goto LAB_00a06344;
LAB_00a06130:
        bVar4 = true;
      }
      goto LAB_00a063d0;
    }
    if (((byte)this[0x50] & 1) != 0) {
      if (*(long *)(this + 0x58) != 0) goto LAB_00a06074;
      goto LAB_00a0615c;
    }
                    /* try { // try from 00a06060 to 00b0611f has its CatchHandler @ 00a06060
                       catch() { ... } // from try @ 00a06060 with catch @ 00a06060
                       catch() { ... } // from try @ 00a061c4 with catch @ 00a06060 */
    if ((byte)this[0x50] >> 1 == 0) goto LAB_00a0615c;
LAB_00a06074:
    FUN_00a0f02c(pvVar18,0x4e2b,FUN_00a06874);
    FUN_00a0f02c(pvVar18,0x2a,1);
    FUN_00a0f02c(pvVar18,0x2c,1);
    if (((byte)this[200] & 1) == 0) {
      pDVar9 = this + 0xc9;
    }
    else {
      pDVar9 = *(DownloadTask **)(this + 0xd8);
    }
    FUN_00a0f02c(pvVar18,0x2776,pDVar9);
    iVar5 = FUN_00a0f0b4(pvVar18);
    if (iVar5 != 0) {
      pcVar11 = (char *)Translated::getInstance();
      if (((byte)*pDVar19 & 1) == 0) {
        pDVar9 = this + 0x21;
      }
      else {
        pDVar9 = *(DownloadTask **)(this + 0x30);
      }
      uVar12 = FUN_00a15564(iVar5);
      Translated::log(pcVar11,"curl get head failed, try download directly: (%s)%s",pDVar9,uVar12);
      pbVar14 = extraout_x1;
      goto LAB_00a0615c;
    }
    local_1a8 = 0;
    pDVar9 = (DownloadTask *)FUN_00a0f378(pvVar18,0x200002,&local_1a8);
    if ((int)pDVar9 == 0) {
      if (local_1a8 != 200) {
        pcVar11 = (char *)Translated::getInstance();
        if (((byte)*pDVar19 & 1) == 0) {
          pDVar19 = this + 0x21;
        }
        else {
          pDVar19 = *(DownloadTask **)(this + 0x30);
        }
        Translated::log(pcVar11,
                        "When request url(%s) header info, return unexcept http response code(%ld)",
                        pDVar19,local_1a8);
        this[0x70] = (DownloadTask)0x4;
        pDVar9 = (DownloadTask *)getErrMsg(this,pvVar18);
        pDVar19 = this + 0xa8;
        if (((byte)*pDVar19 & 1) == 0) {
          *(undefined2 *)pDVar19 = 0;
        }
        else {
          **(undefined1 **)(this + 0xb8) = 0;
          *(undefined8 *)(this + 0xb0) = 0;
          if (((byte)this[0xa8] & 1) != 0) {
            operator_delete(*(void **)(this + 0xb8));
            *(undefined8 *)(this + 0xa8) = 0;
            pDVar9 = extraout_x0_01;
          }
        }
        *(DownloadTask **)(this + 0xb8) = local_180;
        *(undefined ***)(this + 0xb0) = ppuStack_188;
        *(undefined ***)pDVar19 = local_190;
        DVar15 = this[0xc0];
        goto joined_r0x00a066f8;
      }
      local_190 = (undefined **)0x0;
      auVar22 = FUN_00a0f378(pvVar18,"arameterC2ERKS2_",&local_190);
      pbVar14 = auVar22._8_8_;
      pDVar9 = auVar22._0_8_;
      if (auVar22._0_4_ == 0) {
        if (((byte)this[0xf0] & 1) != 0) {
          uVar8 = *(ulong *)(this + 0xf8);
          pDVar9 = *(DownloadTask **)(this + 0x100);
          if (0xc < (long)uVar8) goto LAB_00a0672c;
          goto LAB_00a0615c;
        }
        pDVar9 = this + 0xf1;
        uVar8 = (ulong)((byte)this[0xf0] >> 1);
        if (uVar8 < 0xd) goto LAB_00a0615c;
LAB_00a0672c:
        pDVar1 = pDVar9 + uVar8;
        pDVar13 = pDVar9;
        do {
          if ((uVar8 - 0xc == 0) ||
             (pDVar13 = memchr(pDVar13,0x41,uVar8 - 0xc), pbVar14 = extraout_x1_03,
             pDVar13 == (DownloadTask *)0x0)) break;
          iVar5 = memcmp(pDVar13,"Accept-Ranges",0xd);
          pbVar14 = extraout_x1_04;
          if (iVar5 == 0) {
            pcVar11 = "wb";
            if (pDVar13 != pDVar1) {
              if ((long)pDVar13 - (long)pDVar9 == -1) goto LAB_00a06164;
              pDVar9 = (DownloadTask *)0x0;
              if ((double)local_190 == (double)lVar17) goto joined_r0x00a06338;
              if ((double)local_190 < (double)lVar17) goto LAB_00a0615c;
              FUN_00a0f02c(pvVar18,0x75a4,lVar17);
              pcVar11 = "ab";
              pbVar14 = extraout_x1_05;
              goto LAB_00a06164;
            }
            break;
          }
          pDVar13 = pDVar13 + 1;
          uVar8 = (long)pDVar1 - (long)pDVar13;
        } while (0xc < (long)uVar8);
                    /* try { // try from 00a067dc to 00b06827 has its CatchHandler @ 00a067dc
                       catch() { ... } // from try @ 00a067dc with catch @ 00a067dc
                       catch() { ... } // from try @ 00a06850 with catch @ 00a067dc */
        pcVar11 = "wb";
        goto LAB_00a06164;
      }
      this[0x70] = (DownloadTask)0x5;
      goto joined_r0x00a06338;
    }
                    /* try { // try from 00a06120 to 00b061a7 has its CatchHandler @ 00a06260 */
    this[0x70] = (DownloadTask)0x3;
    DVar15 = this[0xc0];
joined_r0x00a066f8:
    if (DVar15 == (DownloadTask)0x0) goto LAB_00a06130;
LAB_00a06344:
    getCostTime(pDVar9,pvVar18);
    pDVar19 = this + 0x90;
    if (((byte)*pDVar19 & 1) == 0) {
      *(undefined2 *)pDVar19 = 0;
    }
    else {
      **(undefined1 **)(this + 0xa0) = 0;
      *(undefined8 *)(this + 0x98) = 0;
      if (((byte)this[0x90] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a062f4 with catch @ 00a0637c */
        operator_delete(*(void **)(this + 0xa0));
        *(undefined8 *)(this + 0x90) = 0;
      }
    }
                    /* catch() { ... } // from try @ 00a062d8 with catch @ 00a0638c */
    *(DownloadTask **)(this + 0xa0) = local_180;
    *(undefined ***)(this + 0x98) = ppuStack_188;
    *(undefined ***)pDVar19 = local_190;
LAB_00a06534:
    FUN_00a0f584(pvVar18);
    pbVar14 = extraout_x1_01;
  }
  if (*(FILE **)(this + 0xe8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
    pbVar14 = extraout_x1_02;
  }
  if (this[0x70] != (DownloadTask)0x0) goto LAB_00a06554;
  if (((byte)this[0x50] & 1) == 0) {
    if ((byte)this[0x50] >> 1 == 0) goto LAB_00a06554;
  }
  else if (*(long *)(this + 0x58) == 0) goto LAB_00a06554;
  utils::CMD5Checksum::GetMD5((CMD5Checksum *)(this + 0x38),pbVar14);
  DVar15 = this[0x50];
  ppuVar16 = (undefined **)((ulong)local_190 >> 1 & 0x7f);
  __n = ppuVar16;
  if (((ulong)local_190 & 1) != 0) {
    __n = ppuStack_188;
  }
  ppuVar2 = (undefined **)(ulong)((byte)DVar15 >> 1);
  if (((byte)DVar15 & 1) != 0) {
    ppuVar2 = *(undefined ***)(this + 0x58);
  }
  if (__n == ppuVar2) {
    pDVar9 = *(DownloadTask **)(this + 0x60);
    pDVar19 = (DownloadTask *)((ulong)&local_190 | 1);
    pDVar13 = pDVar19;
    if (((ulong)local_190 & 1) != 0) {
      pDVar13 = local_180;
    }
    if (((byte)DVar15 & 1) == 0) {
      pDVar9 = this + 0x51;
    }
    if (((ulong)local_190 & 1) == 0) {
      if (__n != (undefined **)0x0) {
        lVar17 = -(long)ppuVar16;
        do {
          if (*pDVar19 != *pDVar9) goto LAB_00a06648;
          pDVar19 = pDVar19 + 1;
          lVar17 = lVar17 + 1;
          pDVar9 = pDVar9 + 1;
        } while (lVar17 != 0);
      }
      goto LAB_00a06554;
    }
    if ((__n != (undefined **)0x0) && (iVar5 = memcmp(pDVar13,pDVar9,(size_t)__n), iVar5 != 0))
    goto LAB_00a06648;
  }
  else {
LAB_00a06648:
    this[0x70] = (DownloadTask)0x9;
    CustomFileManager::removeFile(pbVar6);
    if (((ulong)local_190 & 1) == 0) goto LAB_00a06554;
  }
  operator_delete(local_180);
LAB_00a06554:
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

