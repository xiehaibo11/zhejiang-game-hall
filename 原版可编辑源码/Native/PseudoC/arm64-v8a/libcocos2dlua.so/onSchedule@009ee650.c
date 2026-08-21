
/* universe::DownloadTask::onSchedule() */

undefined8 __thiscall universe::DownloadTask::onSchedule(DownloadTask *this)

{
  TanGaoXiong *this_00;
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
  double local_190;
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
  undefined8 local_120 [17];
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 009ee5f0 with catch @ 009ee680 */
  Device::getTime();
  uVar20 = __trunctfdf2();
  pbVar6 = (basic_string *)TanGaoXiong::getInstance();
  lVar17 = **(long **)(this + 0x68);
  universe::core::Service::_curWorkerIndex::__tls_init();
  piVar7 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
  pvVar18 = *(void **)(lVar17 + (long)*piVar7 * 8);
  if (pvVar18 == (void *)0x0) {
    pvVar18 = (void *)FUN_00a2495c();
                    /* catch() { ... } // from try @ 009ee594 with catch @ 009ee6cc */
    if (pvVar18 != (void *)0x0) {
      lVar17 = **(long **)(this + 0x68);
      universe::core::Service::_curWorkerIndex::__tls_init();
                    /* try { // try from 009ee6e8 to 00aee75f has its CatchHandler @ 009ee6e8
                       catch() { ... } // from try @ 009ee6e8 with catch @ 009ee6e8
                       catch() { ... } // from try @ 009ee768 with catch @ 009ee6e8 */
      piVar7 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
      *(void **)(lVar17 + (long)*piVar7 * 8) = pvVar18;
      goto LAB_009ee6f8;
    }
    bVar4 = false;
    this[0x70] = (DownloadTask)0x1;
LAB_009eeb30:
                    /* catch() { ... } // from try @ 009eea74 with catch @ 009eeb34
                       catch() { ... } // from try @ 009eeb18 with catch @ 009eeb34 */
    local_190 = 1.17228141546303e-316;
    local_120[0] = 0x16a0cb0;
    std::__ndk1::ios_base::init((ios_base *)local_120,(void *)((ulong)&local_190 | 8));
    local_190 = 1.17227746293786e-316;
    ppuStack_188 = &PTR__basic_streambuf_01698a08;
    local_90 = 0xffffffff;
    local_120[0] = 0x16a0c60;
    local_98 = 0;
    std::__ndk1::locale::locale((locale *)&local_180);
    uStack_150 = 0;
    local_158 = 0;
    ppuStack_188 = &PTR__basic_stringbuf_01698960;
    uStack_160 = 0;
    local_168 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_130 = 0;
    local_138 = (void *)0x0;
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
    local_190 = 1.17227746293786e-316;
    ppuStack_188 = &PTR__basic_stringbuf_01698960;
    *(undefined8 *)(this + 0xa0) = local_198;
    *(undefined8 *)(this + 0x98) = uStack_1a0;
    *(long *)pDVar19 = local_1a8;
    local_120[0] = 0x16a0c60;
    if ((local_148 & 1) != 0) {
      operator_delete(local_138);
    }
    ppuStack_188 = &PTR__basic_streambuf_01698a08;
    std::__ndk1::locale::~locale((locale *)&local_180);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_120);
    pbVar14 = extraout_x1_00;
    if (bVar4) goto LAB_009eec94;
  }
  else {
LAB_009ee6f8:
    FUN_00a24a14(pvVar18,0x2711,this);
    FUN_00a24a14(pvVar18,0x2b,1);
    FUN_00a24a14(pvVar18,0x2d,1);
    FUN_00a24a14(pvVar18,99,1);
    FUN_00a24a14(pvVar18,0x4e,5);
    FUN_00a24a14(pvVar18,0x13,1);
                    /* try { // try from 009ee760 to 00aee767 has its CatchHandler @ 009ee7dc */
    FUN_00a24a14(pvVar18,0x14,5);
                    /* try { // try from 009ee768 to 00aee813 has its CatchHandler @ 009ee6e8 */
    FUN_00a24a14(pvVar18,0x34,1);
    FUN_00a24a14(pvVar18,0x44,2);
    FUN_00a24a14(pvVar18,0x40,0);
    FUN_00a24a14(pvVar18,0x51,0);
    pDVar19 = this + 0x20;
    if (((byte)*pDVar19 & 1) == 0) {
      pDVar9 = this + 0x21;
    }
    else {
      pDVar9 = *(DownloadTask **)(this + 0x30);
    }
    FUN_00a24a14(pvVar18,0x2712,pDVar9);
    this_00 = (TanGaoXiong *)(this + 0x38);
                    /* catch() { ... } // from try @ 009ee760 with catch @ 009ee7dc */
    auVar22 = (**(code **)(*(long *)pbVar6 + 0x18))(pbVar6,this_00);
    pbVar14 = auVar22._8_8_;
    lVar17 = auVar22._0_8_;
    if (lVar17 < 1) {
LAB_009ee8d0:
      pcVar11 = "wb";
LAB_009ee8d8:
      TanGaoXiong::dirname(this_00,pbVar14);
      uVar8 = TanGaoXiong::isDirectoryExist(pbVar6);
      if (((uVar8 & 1) == 0) &&
         (pDVar9 = (DownloadTask *)(**(code **)(*(long *)pbVar6 + 0x30))(pbVar6,&local_190),
         ((ulong)pDVar9 & 1) == 0)) {
        DVar15 = (DownloadTask)0x6;
LAB_009ee984:
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
          goto LAB_009ee984;
        }
        FUN_00a24a14(pvVar18,0x4e2b,FUN_009ef2e4);
        FUN_00a24a14(pvVar18,0x2a,0);
        FUN_00a24a14(pvVar18,0x2c,0);
        if (((byte)this[200] & 1) == 0) {
          pDVar9 = this + 0xc9;
        }
        else {
          pDVar9 = *(DownloadTask **)(this + 0xd8);
        }
        FUN_00a24a14(pvVar18,0x2776,pDVar9);
        if (this[0x108] != (DownloadTask)0x0) {
          FUN_00a24a14(pvVar18,0x2b,0);
          FUN_00a24a14(pvVar18,0x4efb,FUN_009ef300);
          FUN_00a24a14(pvVar18,0x2749,this);
        }
        pDVar9 = (DownloadTask *)FUN_00a24a9c(pvVar18);
        if ((int)pDVar9 != 0) {
          pcVar11 = (char *)Translated::getInstance();
          if (((byte)*pDVar19 & 1) == 0) {
            pDVar19 = this + 0x21;
          }
          else {
            pDVar19 = *(DownloadTask **)(this + 0x30);
          }
          uVar12 = FUN_00a2af4c((ulong)pDVar9 & 0xffffffff);
                    /* try { // try from 009eea24 to 00aeea73 has its CatchHandler @ 009eea24
                       catch() { ... } // from try @ 009eea24 with catch @ 009eea24
                       catch() { ... } // from try @ 009eeac0 with catch @ 009eea24
                       catch() { ... } // from try @ 009eeb2c with catch @ 009eea24 */
          Translated::log(pcVar11,"curl get content failed: (%s)%s",pDVar19,uVar12);
          this[0x70] = (DownloadTask)0x8;
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
                    /* try { // try from 009eea74 to 00aeeabf has its CatchHandler @ 009eeb34 */
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
joined_r0x009eea98:
      if (pvVar18 == (void *)0x0) {
                    /* try { // try from 009eeb2c to 00aeeb4f has its CatchHandler @ 009eea24 */
        bVar4 = false;
      }
      else {
        if (this[0xc0] != (DownloadTask)0x0) goto LAB_009eeaa4;
LAB_009ee8a4:
        bVar4 = true;
      }
      goto LAB_009eeb30;
    }
    if (((byte)this[0x50] & 1) != 0) {
      if (*(long *)(this + 0x58) != 0) goto LAB_009ee80c;
      goto LAB_009ee8d0;
    }
    if ((byte)this[0x50] >> 1 == 0) goto LAB_009ee8d0;
LAB_009ee80c:
    FUN_00a24a14(pvVar18,0x4e2b,FUN_009eefd4);
    FUN_00a24a14(pvVar18,0x2a,1);
    FUN_00a24a14(pvVar18,0x2c,1);
    iVar5 = FUN_00a24a9c(pvVar18);
    if (iVar5 != 0) {
      pcVar11 = (char *)Translated::getInstance();
      if (((byte)*pDVar19 & 1) == 0) {
        pDVar9 = this + 0x21;
      }
      else {
        pDVar9 = *(DownloadTask **)(this + 0x30);
      }
      uVar12 = FUN_00a2af4c(iVar5);
      Translated::log(pcVar11,"curl get head failed, try download directly: (%s)%s",pDVar9,uVar12);
      pbVar14 = extraout_x1;
      goto LAB_009ee8d0;
    }
    local_1a8 = 0;
    pDVar9 = (DownloadTask *)FUN_00a24d60(pvVar18,0x200002,&local_1a8);
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
                    /* try { // try from 009eedf8 to 00aeee0b has its CatchHandler @ 009eee50 */
        this[0x70] = (DownloadTask)0x4;
        pDVar9 = (DownloadTask *)getErrMsg(this,pvVar18);
                    /* try { // try from 009eee0c to 00aeee6b has its CatchHandler @ 009eed40 */
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
                    /* catch() { ... } // from try @ 009eedac with catch @ 009eee4c */
        *(undefined ***)(this + 0xb0) = ppuStack_188;
        *(double *)pDVar19 = local_190;
                    /* catch() { ... } // from try @ 009eed90 with catch @ 009eee50
                       catch() { ... } // from try @ 009eedf8 with catch @ 009eee50 */
        DVar15 = this[0xc0];
        goto joined_r0x009eee54;
      }
      local_190 = 0.0;
                    /* try { // try from 009eeb18 to 00aeeb2b has its CatchHandler @ 009eeb34 */
      auVar22 = FUN_00a24d60(pvVar18,"gui5GList11resizeToFitEii",&local_190);
      pbVar14 = auVar22._8_8_;
      pDVar9 = auVar22._0_8_;
      if (auVar22._0_4_ == 0) {
        if (((byte)this[0xf0] & 1) != 0) {
          uVar8 = *(ulong *)(this + 0xf8);
          pDVar9 = *(DownloadTask **)(this + 0x100);
          if (0xc < (long)uVar8) goto LAB_009eee88;
          goto LAB_009ee8d0;
        }
        pDVar9 = this + 0xf1;
                    /* try { // try from 009eee6c to 00aeeebf has its CatchHandler @ 009eee6c
                       catch() { ... } // from try @ 009eee6c with catch @ 009eee6c
                       catch() { ... } // from try @ 009eef28 with catch @ 009eee6c
                       catch() { ... } // from try @ 009eef80 with catch @ 009eee6c
                       catch() { ... } // from try @ 009ef008 with catch @ 009eee6c */
        uVar8 = (ulong)((byte)this[0xf0] >> 1);
        if (uVar8 < 0xd) goto LAB_009ee8d0;
LAB_009eee88:
        pDVar1 = pDVar9 + uVar8;
        pDVar13 = pDVar9;
        do {
          if ((uVar8 - 0xc == 0) ||
             (pDVar13 = memchr(pDVar13,0x41,uVar8 - 0xc), pbVar14 = extraout_x1_03,
             pDVar13 == (DownloadTask *)0x0)) break;
                    /* try { // try from 009eeec0 to 00aeeed7 has its CatchHandler @ 009ef068 */
          iVar5 = memcmp(pDVar13,"Accept-Ranges",0xd);
          pbVar14 = extraout_x1_04;
          if (iVar5 == 0) {
            pcVar11 = "wb";
            if (pDVar13 != pDVar1) {
              if ((long)pDVar13 - (long)pDVar9 == -1) goto LAB_009ee8d8;
              pDVar9 = (DownloadTask *)0x0;
              if (local_190 == (double)lVar17) goto joined_r0x009eea98;
                    /* try { // try from 009eef18 to 00aeef27 has its CatchHandler @ 009ef01c */
              if (local_190 < (double)lVar17) goto LAB_009ee8d0;
                    /* try { // try from 009eef28 to 00aeef6b has its CatchHandler @ 009eee6c */
              FUN_00a24a14(pvVar18,0x75a4,lVar17);
              pcVar11 = "ab";
              pbVar14 = extraout_x1_05;
              goto LAB_009ee8d8;
            }
            break;
          }
          pDVar13 = pDVar13 + 1;
          uVar8 = (long)pDVar1 - (long)pDVar13;
        } while (0xc < (long)uVar8);
        pcVar11 = "wb";
        goto LAB_009ee8d8;
      }
      this[0x70] = (DownloadTask)0x5;
      goto joined_r0x009eea98;
    }
    this[0x70] = (DownloadTask)0x3;
    DVar15 = this[0xc0];
joined_r0x009eee54:
    if (DVar15 == (DownloadTask)0x0) goto LAB_009ee8a4;
LAB_009eeaa4:
    getCostTime(pDVar9,pvVar18);
    pDVar19 = this + 0x90;
    if (((byte)*pDVar19 & 1) == 0) {
      *(undefined2 *)pDVar19 = 0;
                    /* try { // try from 009eeac0 to 00aeeb17 has its CatchHandler @ 009eea24 */
    }
    else {
      **(undefined1 **)(this + 0xa0) = 0;
      *(undefined8 *)(this + 0x98) = 0;
      if (((byte)this[0x90] & 1) != 0) {
        operator_delete(*(void **)(this + 0xa0));
        *(undefined8 *)(this + 0x90) = 0;
      }
    }
    *(DownloadTask **)(this + 0xa0) = local_180;
    *(undefined ***)(this + 0x98) = ppuStack_188;
    *(double *)pDVar19 = local_190;
LAB_009eec94:
    FUN_00a24f6c(pvVar18);
    pbVar14 = extraout_x1_01;
  }
  if (*(FILE **)(this + 0xe8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
    pbVar14 = extraout_x1_02;
  }
  if (this[0x70] != (DownloadTask)0x0) goto LAB_009eecb4;
  if (((byte)this[0x50] & 1) == 0) {
    if ((byte)this[0x50] >> 1 == 0) goto LAB_009eecb4;
  }
  else if (*(long *)(this + 0x58) == 0) goto LAB_009eecb4;
  utils::CMD5Checksum::GetMD5((CMD5Checksum *)(this + 0x38),pbVar14);
  DVar15 = this[0x50];
  ppuVar16 = (undefined **)((ulong)local_190 >> 1 & 0x7f);
  __n = ppuVar16;
  if (((ulong)local_190 & 1) != 0) {
    __n = ppuStack_188;
  }
                    /* try { // try from 009eed40 to 00aeed8f has its CatchHandler @ 009eed40
                       catch() { ... } // from try @ 009eed40 with catch @ 009eed40
                       catch() { ... } // from try @ 009eedc4 with catch @ 009eed40
                       catch() { ... } // from try @ 009eee0c with catch @ 009eed40 */
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
      while (__n != (undefined **)0x0) {
        if (*pDVar19 != *pDVar9) goto LAB_009eeda4;
        pDVar19 = pDVar19 + 1;
        pDVar9 = pDVar9 + 1;
        ppuVar16 = (undefined **)((long)ppuVar16 + -1);
                    /* try { // try from 009eed90 to 00aeeda7 has its CatchHandler @ 009eee50 */
        __n = ppuVar16;
      }
      goto LAB_009eecb4;
    }
    if ((__n != (undefined **)0x0) && (iVar5 = memcmp(pDVar13,pDVar9,(size_t)__n), iVar5 != 0))
    goto LAB_009eeda4;
  }
  else {
LAB_009eeda4:
    this[0x70] = (DownloadTask)0x9;
                    /* try { // try from 009eedac to 00aeedc3 has its CatchHandler @ 009eee4c */
    TanGaoXiong::removeFile(pbVar6);
    if (((ulong)local_190 & 1) == 0) goto LAB_009eecb4;
  }
                    /* try { // try from 009eedc4 to 00aeedf7 has its CatchHandler @ 009eed40 */
  operator_delete(local_180);
LAB_009eecb4:
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

