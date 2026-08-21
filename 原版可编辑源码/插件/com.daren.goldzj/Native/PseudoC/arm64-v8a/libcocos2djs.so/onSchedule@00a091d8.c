
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* universe::UnzipTask::onSchedule() */

undefined8 __thiscall universe::UnzipTask::onSchedule(UnzipTask *this)

{
  size_t sVar1;
  UnzipTask *__s1;
  char *__filename;
  CustomFileManager CVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  basic_string *pbVar7;
  ulong *puVar8;
  size_t sVar9;
  ulong uVar10;
  FILE *__stream;
  Service *this_00;
  void *__dest;
  basic_string *extraout_x1;
  basic_string *extraout_x1_00;
  basic_string *pbVar11;
  basic_string *extraout_x1_01;
  basic_string *extraout_x1_02;
  void *pvVar12;
  UnzipTask UVar13;
  UnzipTask *pUVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  UnzipTask *__s2;
  CustomFileManager *this_01;
  void *pvVar18;
  char *__s;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
  ulong local_1b0;
  CustomFileManager local_1a8 [16];
  char *local_198;
  ulong local_190;
  ulong uStack_188;
  UnzipTask *local_180;
  ulong local_100 [2];
  ulong local_f0;
  ulong uStack_e8;
  UnzipTask *local_e0;
  ulong local_d0;
  ulong local_c8;
  void *local_c0;
  ulong *local_b0;
  long local_a0;
  
                    /* try { // try from 00a091e0 to 00b092b3 has its CatchHandler @ 00a09728 */
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  auVar23 = CustomFileManager::getInstance();
  pbVar11 = auVar23._8_8_;
  pbVar7 = auVar23._0_8_;
  this_01 = (CustomFileManager *)(this + 0x20);
  CVar2 = *this_01;
  if (((byte)CVar2 & 1) == 0) {
    uVar16 = (ulong)((byte)CVar2 >> 1);
  }
  else {
    uVar16 = *(ulong *)(this + 0x28);
  }
  if (uVar16 < 4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  if (((byte)CVar2 & 1) == 0) {
    pUVar14 = this + 0x21;
  }
  else {
    pUVar14 = *(UnzipTask **)(this + 0x30);
  }
  if (*(int *)(pUVar14 + (uVar16 - 4)) == 0x7461642e) {
    if (((byte)CVar2 & 1) == 0) {
      uVar16 = *(ulong *)(this + 0x28);
      uVar10 = (ulong)((byte)CVar2 >> 1);
      uVar20 = uVar10;
    }
    else {
      uVar16 = *(ulong *)(this + 0x28);
      uVar10 = (ulong)((byte)CVar2 >> 1);
      uVar20 = uVar16;
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = (void *)0x0;
    pUVar14 = *(UnzipTask **)(this + 0x30);
    if (((byte)CVar2 & 1) == 0) {
      pUVar14 = this + 0x21;
      uVar16 = uVar10;
    }
    if (uVar20 - 4 <= uVar16) {
      uVar16 = uVar20 - 4;
    }
                    /* try { // try from 00a09378 to 00b0937f has its CatchHandler @ 00a0957c */
    if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar16 < 0x17) {
                    /* try { // try from 00a09388 to 00b093b3 has its CatchHandler @ 00a09564 */
      pvVar18 = (void *)((ulong)&local_d0 | 1);
      local_d0 = (ulong)(byte)((int)uVar16 << 1);
      if (uVar16 != 0) goto LAB_00a093c0;
    }
    else {
      uVar10 = uVar16 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = operator_new(uVar10);
      local_d0 = uVar10 | 1;
      local_c8 = uVar16;
      local_c0 = pvVar18;
LAB_00a093c0:
                    /* try { // try from 00a093c0 to 00b0942f has its CatchHandler @ 00a09520 */
      memcpy(pvVar18,pUVar14,uVar16);
    }
    *(undefined1 *)((long)pvVar18 + uVar16) = 0;
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_d0,".zip",4);
    local_180 = (UnzipTask *)puVar8[2];
    uStack_188 = puVar8[1];
    local_190 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    auVar23 = decrypt(this,(basic_string *)&local_190);
    pbVar11 = auVar23._8_8_;
    if ((auVar23._0_8_ & 1) == 0) {
      this[0x88] = (UnzipTask)0x1;
      if ((local_190 & 1) != 0) {
                    /* try { // try from 00a09474 to 00b0948b has its CatchHandler @ 00a09520 */
        operator_delete(local_180);
      }
      goto LAB_00a099e4;
    }
    if (this_01 != (CustomFileManager *)&local_190) {
                    /* try { // try from 00a09430 to 00b0943b has its CatchHandler @ 00a0951c */
      uVar16 = local_190 >> 1 & 0x7f;
      pUVar14 = (UnzipTask *)((ulong)&local_190 | 1);
      if ((local_190 & 1) != 0) {
        uVar16 = uStack_188;
        pUVar14 = local_180;
      }
                    /* try { // try from 00a09448 to 00b0946b has its CatchHandler @ 00a09504 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             this_01,(char *)pUVar14,uVar16);
      pbVar11 = extraout_x1_00;
    }
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
      pbVar11 = extraout_x1_01;
    }
  }
  uStack_e8 = 0;
  local_e0 = (UnzipTask *)0x0;
  local_f0 = 0;
  if (((byte)this[0x38] & 1) == 0) {
    local_e0 = *(UnzipTask **)(this + 0x48);
    uStack_e8 = *(ulong *)(this + 0x40);
    local_f0 = *(ulong *)(this + 0x38);
  }
  else {
    uVar16 = *(ulong *)(this + 0x40);
    if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar18 = *(void **)(this + 0x48);
    if (uVar16 < 0x17) {
      pUVar14 = (UnzipTask *)((ulong)&local_f0 | 1);
      local_f0 = (ulong)(byte)((int)uVar16 << 1);
      if (uVar16 != 0) goto LAB_00a09300;
    }
    else {
      uVar10 = uVar16 + 0x10 & 0xfffffffffffffff0;
      pUVar14 = operator_new(uVar10);
      local_f0 = uVar10 | 1;
      uStack_e8 = uVar16;
      local_e0 = pUVar14;
LAB_00a09300:
      memcpy(pUVar14,pvVar18,uVar16);
      pbVar11 = extraout_x1;
    }
    pUVar14[uVar16] = (UnzipTask)0x0;
  }
  uVar16 = local_f0 >> 1 & 0x7f;
  if ((local_f0 & 1) != 0) {
    uVar16 = uStack_e8;
  }
  if (uVar16 == 0) {
    CustomFileManager::dirname(this_01,pbVar11);
    if ((local_f0 & 1) != 0) {
      *local_e0 = (UnzipTask)0x0;
                    /* try { // try from 00a0948c to 00b09783 has its CatchHandler @ 00a08ed8 */
      uStack_e8 = 0;
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
    }
    uStack_e8 = uStack_188;
    local_f0 = local_190;
    local_e0 = local_180;
    UVar13 = this[0x20];
    uVar16 = local_190 >> 1 & 0x7f;
    sVar9 = uVar16;
    if ((local_190 & 1) != 0) {
      sVar9 = uStack_188;
    }
    sVar1 = (ulong)((byte)UVar13 >> 1);
    if (((byte)UVar13 & 1) != 0) {
      sVar1 = *(size_t *)(this + 0x28);
    }
    if (sVar9 != sVar1) goto LAB_00a0953c;
    __s2 = *(UnzipTask **)(this + 0x30);
    pUVar14 = (UnzipTask *)((ulong)&local_f0 | 1);
    __s1 = pUVar14;
    if ((local_190 & 1) != 0) {
      __s1 = local_180;
    }
    if (((byte)UVar13 & 1) == 0) {
      __s2 = this + 0x21;
    }
    if ((local_190 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a09448 with catch @ 00a09504 */
      if (sVar9 != 0) {
        lVar17 = -uVar16;
        do {
          if (*pUVar14 != *__s2) goto LAB_00a0953c;
                    /* catch() { ... } // from try @ 00a09430 with catch @ 00a0951c */
          pUVar14 = pUVar14 + 1;
                    /* catch() { ... } // from try @ 00a093c0 with catch @ 00a09520
                       catch() { ... } // from try @ 00a09474 with catch @ 00a09520 */
          lVar17 = lVar17 + 1;
          __s2 = __s2 + 1;
        } while (lVar17 != 0);
      }
    }
    else if ((sVar9 != 0) && (iVar6 = memcmp(__s1,__s2,sVar9), iVar6 != 0)) goto LAB_00a0953c;
    __s = (char *)0x0;
    pvVar18 = (void *)0x0;
    lVar17 = 0;
    UVar13 = (UnzipTask)0x2;
LAB_00a099ac:
    this[0x88] = UVar13;
  }
  else {
LAB_00a0953c:
    CustomFileManager::appendSep((basic_string *)&local_f0);
    uVar16 = CustomFileManager::isDirectoryExist(pbVar7);
                    /* catch() { ... } // from try @ 00a09388 with catch @ 00a09564 */
    if (((uVar16 & 1) == 0) &&
       (uVar16 = (**(code **)(*(long *)pbVar7 + 0x30))(pbVar7,&local_f0), (uVar16 & 1) == 0)) {
      __s = (char *)0x0;
      pvVar18 = (void *)0x0;
      lVar17 = 0;
                    /* catch() { ... } // from try @ 00a0917c with catch @ 00a095c8 */
      UVar13 = (UnzipTask)0x3;
                    /* catch() { ... } // from try @ 00a09104 with catch @ 00a095cc */
      goto LAB_00a099ac;
    }
    if (((byte)*this_01 & 1) == 0) {
      pUVar14 = this + 0x21;
    }
    else {
                    /* catch() { ... } // from try @ 00a09378 with catch @ 00a0957c */
      pUVar14 = *(UnzipTask **)(this + 0x30);
    }
                    /* catch() { ... } // from try @ 00a08f18 with catch @ 00a09580 */
    lVar17 = unzOpen(pUVar14);
    if (lVar17 == 0) {
      __s = (char *)0x0;
      pvVar18 = (void *)0x0;
      UVar13 = (UnzipTask)0x4;
      goto LAB_00a099ac;
    }
                    /* catch() { ... } // from try @ 00a091b0 with catch @ 00a09594 */
    iVar6 = unzGetGlobalInfo(lVar17,local_100);
    if (iVar6 != 0) {
      __s = (char *)0x0;
      pvVar18 = (void *)0x0;
      UVar13 = (UnzipTask)0x5;
      goto LAB_00a099ac;
    }
    pvVar18 = operator_new__(0x2000);
                    /* catch() { ... } // from try @ 00a09074 with catch @ 00a095e0 */
    __s = operator_new__(0x200);
    if (local_100[0] != 0) {
      uVar16 = 0;
      fVar21 = 0.0;
                    /* catch() { ... } // from try @ 00a09048 with catch @ 00a0962c */
      do {
                    /* catch() { ... } // from try @ 00a0901c with catch @ 00a0964c */
        iVar6 = unzGetCurrentFileInfo(lVar17,&local_190,__s,0x200,0,0,0,0);
        if (iVar6 != 0) {
          UVar13 = (UnzipTask)0x6;
          goto LAB_00a099ac;
        }
        FUN_008d57d4(local_1a8,&local_f0,__s);
        sVar9 = strlen(__s);
        if ((__s[sVar9 - 1] == '\\') || (__s[sVar9 - 1] == '/')) {
                    /* catch() { ... } // from try @ 00a08ffc with catch @ 00a0968c */
          uVar10 = (**(code **)(*(long *)pbVar7 + 0x30))(pbVar7,local_1a8);
                    /* catch() { ... } // from try @ 00a08fd0 with catch @ 00a0969c */
          if ((uVar10 & 1) != 0) goto LAB_00a097b4;
          this[0x88] = (UnzipTask)0x7;
LAB_00a097e4:
          bVar4 = true;
        }
        else {
                    /* catch() { ... } // from try @ 00a08fa4 with catch @ 00a096ac */
          CustomFileManager::dirname(local_1a8,extraout_x1_02);
          uVar10 = CustomFileManager::isDirectoryExist(pbVar7);
                    /* catch() { ... } // from try @ 00a08f98 with catch @ 00a096c0 */
                    /* catch() { ... } // from try @ 00a08f80 with catch @ 00a096c8 */
                    /* catch() { ... } // from try @ 00a08f68 with catch @ 00a096d0 */
                    /* catch() { ... } // from try @ 00a08f50 with catch @ 00a096d8 */
          if (((uVar10 & 1) == 0) &&
             (uVar10 = (**(code **)(*(long *)pbVar7 + 0x30))(pbVar7,&local_d0), (uVar10 & 1) == 0))
          {
            this[0x88] = (UnzipTask)0x7;
          }
          else {
                    /* catch() { ... } // from try @ 00a08f44 with catch @ 00a096e0 */
            iVar6 = unzOpenCurrentFile(lVar17);
            if (iVar6 == 0) {
                    /* catch() { ... } // from try @ 00a090cc with catch @ 00a096f8 */
              __filename = (char *)((ulong)local_1a8 | 1);
                    /* catch() { ... } // from try @ 00a08f88 with catch @ 00a09708 */
              if (((byte)local_1a8[0] & 1) != 0) {
                __filename = local_198;
              }
                    /* catch() { ... } // from try @ 00a08f70 with catch @ 00a09710 */
              __stream = fopen(__filename,"wb");
                    /* catch() { ... } // from try @ 00a08f58 with catch @ 00a09718 */
              if (__stream == (FILE *)0x0) {
                    /* catch() { ... } // from try @ 00a08f34 with catch @ 00a09720 */
                this[0x88] = (UnzipTask)0x9;
                    /* catch() { ... } // from try @ 00a0915c with catch @ 00a09728
                       catch() { ... } // from try @ 00a091e0 with catch @ 00a09728 */
                unzCloseCurrentFile(lVar17);
              }
              else {
                while (iVar6 = unzReadCurrentFile(lVar17,pvVar18,0x2000), -1 < iVar6) {
                  if (iVar6 == 0) {
                    fclose(__stream);
                    bVar5 = false;
                    goto joined_r0x00a0976c;
                  }
                  fwrite(pvVar18,(long)iVar6,1,__stream);
                }
                this[0x88] = (UnzipTask)0xa;
                    /* catch() { ... } // from try @ 00a09a08 with catch @ 00a09784 */
                unzCloseCurrentFile(lVar17);
                fclose(__stream);
                unzCloseCurrentFile(lVar17);
              }
            }
            else {
                    /* catch() { ... } // from try @ 00a09134 with catch @ 00a096e8 */
              this[0x88] = (UnzipTask)0x8;
            }
          }
          bVar5 = true;
joined_r0x00a0976c:
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          bVar4 = true;
          if (!bVar5) {
LAB_00a097b4:
            unzCloseCurrentFile(lVar17);
            if ((uVar16 + 1 < local_100[0]) && (iVar6 = unzGoToNextFile(lVar17), iVar6 != 0)) {
                    /* try { // try from 00a097dc to 00b097df has its CatchHandler @ 00a09a6c */
              this[0x88] = (UnzipTask)0xb;
              goto LAB_00a097e4;
            }
            fVar22 = (float)(((double)uVar16 + 1.0) / (double)local_100[0]);
                    /* try { // try from 00a09808 to 00b0981b has its CatchHandler @ 00a09ad8 */
            if ((fVar22 <= fVar21 + 0.009) && (fVar22 <= 0.98)) {
                    /* try { // try from 00a09820 to 00b09823 has its CatchHandler @ 00a09aa4 */
              bVar4 = false;
              goto joined_r0x00a0982c;
            }
            this_00 = (Service *)core::Service::getInstance();
                    /* try { // try from 00a09858 to 00b09863 has its CatchHandler @ 00a09a70 */
            uStack_1c0 = 0;
            local_1b8 = (void *)0x0;
            local_1c8 = 0;
                    /* try { // try from 00a0986c to 00b09873 has its CatchHandler @ 00a09aa0 */
            if (((byte)this[0x50] & 1) == 0) {
              local_1b8 = *(void **)(this + 0x60);
              uStack_1c0 = *(ulong *)(this + 0x58);
              local_1c8 = *(ulong *)(this + 0x50);
            }
            else {
                    /* try { // try from 00a09884 to 00b09897 has its CatchHandler @ 00a09aa8 */
              uVar10 = *(ulong *)(this + 0x58);
              if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              pvVar12 = *(void **)(this + 0x60);
              if (uVar10 < 0x17) {
                    /* try { // try from 00a098a8 to 00b098b3 has its CatchHandler @ 00a09a88 */
                local_1c8 = (ulong)(byte)((int)uVar10 << 1);
                __dest = (void *)((long)&local_1c8 + 1);
                if (uVar10 != 0) goto LAB_00a098dc;
              }
              else {
                    /* try { // try from 00a098bc to 00b09a07 has its CatchHandler @ 00a09ae8 */
                uVar20 = uVar10 + 0x10 & 0xfffffffffffffff0;
                __dest = operator_new(uVar20);
                local_1c8 = uVar20 | 1;
                uStack_1c0 = uVar10;
                local_1b8 = __dest;
LAB_00a098dc:
                memcpy(__dest,pvVar12,uVar10);
              }
              *(undefined1 *)((long)__dest + uVar10) = 0;
            }
            uVar19 = *(ulong *)(this + 0x80);
            local_b0 = (ulong *)0x0;
            local_1b0 = uVar19;
            local_b0 = operator_new(0x30);
            pvVar12 = local_1b8;
            uVar20 = uStack_1c0;
            uVar10 = local_1c8;
            *local_b0 = (ulong)&PTR_FUN_01c6cdc8;
            uStack_1c0 = 0;
            local_1b8 = (void *)0x0;
            local_1c8 = 0;
            *(float *)(local_b0 + 1) = fVar22;
            local_b0[3] = uVar20;
            local_b0[2] = uVar10;
            local_b0[4] = (ulong)pvVar12;
            local_b0[5] = uVar19;
            core::Service::performInMainThread(this_00,(function *)&local_d0);
            if (&local_d0 == local_b0) {
              pcVar15 = *(code **)(*local_b0 + 0x20);
LAB_00a09970:
              (*pcVar15)();
            }
            else if (local_b0 != (ulong *)0x0) {
              pcVar15 = *(code **)(*local_b0 + 0x28);
              goto LAB_00a09970;
            }
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
            bVar4 = false;
            fVar21 = fVar22;
          }
        }
joined_r0x00a0982c:
        if (((byte)local_1a8[0] & 1) != 0) {
                    /* try { // try from 00a09834 to 00b09847 has its CatchHandler @ 00a09aac */
          operator_delete(local_198);
        }
      } while ((!bVar4) && (uVar16 = uVar16 + 1, uVar16 < local_100[0]));
    }
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (lVar17 != 0) {
    unzClose(lVar17);
  }
  if (pvVar18 != (void *)0x0) {
    operator_delete__(pvVar18);
  }
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
LAB_00a099e4:
  if (*(long *)(lVar3 + 0x28) == local_a0) {
                    /* try { // try from 00a09a08 to 00b09b13 has its CatchHandler @ 00a09784 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

