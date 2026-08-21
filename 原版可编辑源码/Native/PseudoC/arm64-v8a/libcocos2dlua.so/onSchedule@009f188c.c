
/* universe::UnzipTask::onSchedule() */

undefined8 __thiscall universe::UnzipTask::onSchedule(UnzipTask *this)

{
  size_t __n;
  size_t sVar1;
  UnzipTask *__s1;
  char *__filename;
  TanGaoXiong TVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  int iVar8;
  basic_string *pbVar9;
  ulong *puVar10;
  ulong uVar11;
  FILE *__stream;
  Service *this_00;
  basic_string *extraout_x1;
  UnzipTask UVar12;
  size_t sVar13;
  code *pcVar14;
  ulong uVar15;
  UnzipTask *pUVar16;
  ulong uVar17;
  UnzipTask *__s2;
  TanGaoXiong *this_01;
  long lVar18;
  void *pvVar19;
  void *pvVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  ulong local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
  ulong local_1b0;
  TanGaoXiong local_1a8 [16];
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
  
  lVar4 = tpidr_el0;
  local_a0 = *(long *)(lVar4 + 0x28);
  pbVar9 = (basic_string *)TanGaoXiong::getInstance();
  this_01 = (TanGaoXiong *)(this + 0x20);
  TVar2 = *this_01;
  if (((byte)TVar2 & 1) == 0) {
    uVar15 = (ulong)((byte)TVar2 >> 1);
  }
  else {
    uVar15 = *(ulong *)(this + 0x28);
  }
  if (uVar15 < 4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  if (((byte)TVar2 & 1) == 0) {
    pUVar16 = this + 0x21;
  }
  else {
    pUVar16 = *(UnzipTask **)(this + 0x30);
  }
  if (*(int *)(pUVar16 + (uVar15 - 4)) == 0x7461642e) {
    if (((byte)TVar2 & 1) == 0) {
      uVar15 = *(ulong *)(this + 0x28);
      uVar11 = (ulong)((byte)TVar2 >> 1);
      uVar17 = uVar11;
    }
    else {
      uVar15 = *(ulong *)(this + 0x28);
      uVar11 = (ulong)((byte)TVar2 >> 1);
      uVar17 = uVar15;
    }
    local_c8 = 0;
    local_c0 = (void *)0x0;
    local_d0 = 0;
    pUVar16 = *(UnzipTask **)(this + 0x30);
    if (((byte)TVar2 & 1) == 0) {
      pUVar16 = this + 0x21;
      uVar15 = uVar11;
    }
    if (uVar17 - 4 <= uVar15) {
      uVar15 = uVar17 - 4;
    }
    if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar15 < 0x17) {
      pvVar19 = (void *)((ulong)&local_d0 | 1);
      local_d0 = (ulong)(byte)((int)uVar15 << 1);
      if (uVar15 != 0) goto LAB_009f19f0;
    }
    else {
      uVar11 = uVar15 + 0x10 & 0xfffffffffffffff0;
      pvVar19 = operator_new(uVar11);
      local_d0 = uVar11 | 1;
      local_c8 = uVar15;
      local_c0 = pvVar19;
LAB_009f19f0:
      memcpy(pvVar19,pUVar16,uVar15);
    }
    *(undefined1 *)((long)pvVar19 + uVar15) = 0;
    puVar10 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 *)&local_d0,".zip",4);
    local_180 = (UnzipTask *)puVar10[2];
    uStack_188 = puVar10[1];
    local_190 = *puVar10;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    uVar15 = decrypt(this,(basic_string *)&local_190);
    if ((uVar15 & 1) == 0) {
      this[0x88] = (UnzipTask)0x1;
      if ((local_190 & 1) != 0) {
        operator_delete(local_180);
      }
      goto LAB_009f1f88;
    }
    if (this_01 != (TanGaoXiong *)&local_190) {
      uVar15 = local_190 >> 1 & 0x7f;
      pUVar16 = (UnzipTask *)((ulong)&local_190 | 1);
      if ((local_190 & 1) != 0) {
        uVar15 = uStack_188;
        pUVar16 = local_180;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             this_01,(char *)pUVar16,uVar15);
    }
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_f0,(basic_string *)(this + 0x38));
  uVar15 = local_f0 >> 1 & 0x7f;
  if ((local_f0 & 1) != 0) {
    uVar15 = uStack_e8;
  }
  if (uVar15 == 0) {
    TanGaoXiong::dirname(this_01,extraout_x1);
    if ((local_f0 & 1) != 0) {
      *local_e0 = (UnzipTask)0x0;
      uStack_e8 = 0;
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
    }
    uStack_e8 = uStack_188;
    local_f0 = local_190;
    local_e0 = local_180;
    UVar12 = this[0x20];
    sVar13 = local_190 >> 1 & 0x7f;
    __n = sVar13;
    if ((local_190 & 1) != 0) {
      __n = uStack_188;
    }
    sVar1 = (ulong)((byte)UVar12 >> 1);
    if (((byte)UVar12 & 1) != 0) {
      sVar1 = *(size_t *)(this + 0x28);
    }
    if (__n != sVar1) goto LAB_009f1b68;
    __s2 = *(UnzipTask **)(this + 0x30);
    pUVar16 = (UnzipTask *)((ulong)&local_f0 | 1);
    __s1 = pUVar16;
    if ((local_190 & 1) != 0) {
      __s1 = local_180;
    }
    if (((byte)UVar12 & 1) == 0) {
      __s2 = this + 0x21;
    }
    if ((local_190 & 1) == 0) {
      while (__n != 0) {
        if (*pUVar16 != *__s2) goto LAB_009f1b68;
        pUVar16 = pUVar16 + 1;
        __s2 = __s2 + 1;
        sVar13 = sVar13 - 1;
        __n = sVar13;
      }
    }
    else if ((__n != 0) && (iVar8 = memcmp(__s1,__s2,__n), iVar8 != 0)) goto LAB_009f1b68;
    pvVar20 = (void *)0x0;
    pvVar19 = (void *)0x0;
    lVar18 = 0;
    UVar12 = (UnzipTask)0x2;
LAB_009f1f50:
    this[0x88] = UVar12;
  }
  else {
LAB_009f1b68:
    TanGaoXiong::appendSep((basic_string *)&local_f0);
    uVar15 = TanGaoXiong::isDirectoryExist(pbVar9);
    if (((uVar15 & 1) == 0) &&
       (uVar15 = (**(code **)(*(long *)pbVar9 + 0x30))(pbVar9,&local_f0), (uVar15 & 1) == 0)) {
      pvVar20 = (void *)0x0;
      pvVar19 = (void *)0x0;
      lVar18 = 0;
      UVar12 = (UnzipTask)0x3;
      goto LAB_009f1f50;
    }
    if (((byte)*this_01 & 1) == 0) {
      pUVar16 = this + 0x21;
    }
    else {
      pUVar16 = *(UnzipTask **)(this + 0x30);
    }
                    /* try { // try from 009f1bac to 00af1c03 has its CatchHandler @ 009f1bac
                       catch() { ... } // from try @ 009f1bac with catch @ 009f1bac
                       catch() { ... } // from try @ 009f1c08 with catch @ 009f1bac */
    lVar18 = unzOpen(pUVar16);
    if (lVar18 == 0) {
      pvVar20 = (void *)0x0;
      pvVar19 = (void *)0x0;
      UVar12 = (UnzipTask)0x4;
      goto LAB_009f1f50;
    }
    iVar8 = unzGetGlobalInfo(lVar18,local_100);
    if (iVar8 != 0) {
      pvVar20 = (void *)0x0;
      pvVar19 = (void *)0x0;
      UVar12 = (UnzipTask)0x5;
      goto LAB_009f1f50;
    }
    pvVar19 = operator_new__(0x2000);
                    /* try { // try from 009f1c04 to 00af1c07 has its CatchHandler @ 009f1c64 */
                    /* try { // try from 009f1c08 to 00af1c7f has its CatchHandler @ 009f1bac */
    pvVar20 = operator_new__(0x200);
    if (local_100[0] != 0) {
      uVar15 = 0;
      fVar22 = 0.0;
      do {
                    /* catch() { ... } // from try @ 009f1c04 with catch @ 009f1c64 */
        iVar8 = unzGetCurrentFileInfo(lVar18,&local_190,pvVar20,0x200,0,0,0,0);
        if (iVar8 != 0) {
          UVar12 = (UnzipTask)0x6;
          goto LAB_009f1f50;
        }
        FUN_007c1fb0(local_1a8,&local_f0,pvVar20);
        auVar24 = __strlen_chk(pvVar20,0x200);
        cVar3 = *(char *)((long)pvVar20 + auVar24._0_8_ + -1);
        if ((cVar3 == '\\') || (cVar3 == '/')) {
          uVar11 = (**(code **)(*(long *)pbVar9 + 0x30))(pbVar9,local_1a8);
          if ((uVar11 & 1) != 0) goto LAB_009f1dcc;
          this[0x88] = (UnzipTask)0x7;
LAB_009f1df8:
          bVar5 = true;
        }
        else {
          TanGaoXiong::dirname(local_1a8,auVar24._8_8_);
          uVar11 = TanGaoXiong::isDirectoryExist(pbVar9);
          if (((uVar11 & 1) == 0) &&
             (uVar11 = (**(code **)(*(long *)pbVar9 + 0x30))(pbVar9,&local_d0), (uVar11 & 1) == 0))
          {
            this[0x88] = (UnzipTask)0x7;
          }
          else {
            iVar8 = unzOpenCurrentFile(lVar18);
            if (iVar8 == 0) {
              __filename = (char *)((ulong)local_1a8 | 1);
              if (((byte)local_1a8[0] & 1) != 0) {
                __filename = local_198;
              }
              __stream = fopen(__filename,"wb");
              if (__stream == (FILE *)0x0) {
                this[0x88] = (UnzipTask)0x9;
                unzCloseCurrentFile(lVar18);
              }
              else {
                while (iVar8 = unzReadCurrentFile(lVar18,pvVar19,0x2000), -1 < iVar8) {
                  if (iVar8 == 0) {
                    fclose(__stream);
                    bVar6 = false;
                    goto joined_r0x009f1f30;
                  }
                  fwrite(pvVar19,(long)iVar8,1,__stream);
                }
                this[0x88] = (UnzipTask)0xa;
                unzCloseCurrentFile(lVar18);
                fclose(__stream);
                unzCloseCurrentFile(lVar18);
              }
            }
            else {
              this[0x88] = (UnzipTask)0x8;
            }
          }
          bVar6 = true;
joined_r0x009f1f30:
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          bVar5 = true;
          if (!bVar6) {
LAB_009f1dcc:
            unzCloseCurrentFile(lVar18);
            if ((uVar15 + 1 < local_100[0]) && (iVar8 = unzGoToNextFile(lVar18), iVar8 != 0)) {
              this[0x88] = (UnzipTask)0xb;
              goto LAB_009f1df8;
            }
            fVar23 = (float)(((double)uVar15 + 1.0) / (double)local_100[0]);
            if ((fVar23 <= fVar22 + 0.009) && (fVar23 <= 0.98)) {
              bVar5 = false;
              goto joined_r0x009f1e40;
            }
            this_00 = (Service *)core::Service::getInstance();
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1c8,(basic_string *)(this + 0x50));
            uVar21 = *(ulong *)(this + 0x80);
            local_b0 = (ulong *)0x0;
            local_1b0 = uVar21;
            local_b0 = operator_new(0x30);
            pvVar7 = local_1b8;
            uVar17 = uStack_1c0;
            uVar11 = local_1c8;
            *local_b0 = (ulong)&PTR_FUN_016a1290;
            uStack_1c0 = 0;
            local_1b8 = (void *)0x0;
            local_1c8 = 0;
            *(float *)(local_b0 + 1) = fVar23;
            local_b0[3] = uVar17;
            local_b0[2] = uVar11;
            local_b0[4] = (ulong)pvVar7;
            local_b0[5] = uVar21;
            core::Service::performInMainThread(this_00,(function *)&local_d0);
            if (&local_d0 == local_b0) {
              pcVar14 = *(code **)(*local_b0 + 0x20);
LAB_009f1efc:
              (*pcVar14)();
            }
            else if (local_b0 != (ulong *)0x0) {
              pcVar14 = *(code **)(*local_b0 + 0x28);
              goto LAB_009f1efc;
            }
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
            bVar5 = false;
            fVar22 = fVar23;
          }
        }
joined_r0x009f1e40:
        if (((byte)local_1a8[0] & 1) != 0) {
          operator_delete(local_198);
        }
      } while ((!bVar5) && (uVar15 = uVar15 + 1, uVar15 < local_100[0]));
    }
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (lVar18 != 0) {
    unzClose(lVar18);
  }
  if (pvVar19 != (void *)0x0) {
    operator_delete__(pvVar19);
  }
  if (pvVar20 != (void *)0x0) {
    operator_delete__(pvVar20);
  }
LAB_009f1f88:
  if (*(long *)(lVar4 + 0x28) == local_a0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

