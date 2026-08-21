
/* v8::internal::Deoptimizer::DoComputeBuiltinContinuation(v8::internal::TranslatedFrame*, int,
   v8::internal::BuiltinContinuationMode) */

void __thiscall
v8::internal::Deoptimizer::DoComputeBuiltinContinuation
          (Deoptimizer *this,long param_1,int param_2,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  FrameDescription *pFVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  iterator *piVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  Deoptimizer *pDVar22;
  int iVar23;
  TranslatedValue *pTVar24;
  int iVar25;
  long lVar26;
  short *psVar27;
  long *plVar28;
  long lVar29;
  __sFILE *p_Var30;
  void *pvVar31;
  long local_110;
  void *local_108;
  void *local_100;
  undefined8 uStack_f8;
  BuiltinContinuationFrameInfo local_f0 [4];
  uint local_ec;
  uint local_e8;
  uint local_e4;
  int iStack_e0;
  Builtins aBStack_d8 [8];
  uint *local_d0;
  ulong local_c8;
  long *local_c0;
  TranslatedValue *pTStack_b8;
  int local_b0;
  Deoptimizer *local_a8;
  FrameDescription *local_a0;
  long *local_98;
  uint local_90;
  long *local_88;
  TranslatedValue *pTStack_80;
  int local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_88 = (long *)(*(long *)(param_1 + 0x30) +
                     (*(ulong *)(param_1 + 0x48) >> 4 & 0xffffffffffffff8));
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
    pTStack_80 = (TranslatedValue *)0x0;
  }
  else {
    pTStack_80 = (TranslatedValue *)(*local_88 + (*(ulong *)(param_1 + 0x48) & 0x7f) * 0x20);
  }
  local_78 = 0;
  uVar6 = Builtins::GetBuiltinFromBailoutId(*(undefined4 *)(param_1 + 4));
  Builtins::CallInterfaceDescriptorFor(aBStack_d8);
  lVar8 = RegisterConfiguration::Default();
  iVar23 = *(int *)(this + 0x40) + -1;
  BuiltinContinuationFrameInfo::BuiltinContinuationFrameInfo
            (local_f0,*(undefined4 *)(param_1 + 0x18),aBStack_d8,lVar8,iVar23 == param_2,this[0x1c],
             param_4,0);
  uVar13 = (ulong)local_e4;
  uVar1 = *local_d0;
  if ((int)uVar1 < 1) {
    bVar4 = false;
  }
  else {
    lVar26 = 0;
    bVar4 = false;
    psVar27 = (short *)(*(long *)(local_d0 + 8) + (long)(int)local_d0[1] * 2);
    do {
      if (*psVar27 == 0x204) {
        if (*(int *)(*(long *)(local_d0 + 6) + lVar26) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","code == kJavaScriptCallArgCountRegister.code()");
        }
        bVar4 = true;
      }
      else if (2 < (*psVar27 - 6U & 0xff)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsAnyTagged(type.representation())");
      }
      lVar26 = lVar26 + 0xc;
      psVar27 = psVar27 + 1;
    } while ((ulong)uVar1 * 0xc - lVar26 != 0);
  }
  uVar2 = param_4 - 1;
  if (uVar2 < 3) {
    if (!bVar4) {
LAB_00f1bde0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","BuiltinContinuationModeIsJavaScript(mode) == has_argc");
    }
  }
  else {
    if (param_4 != 0) goto LAB_00f1ca4c;
    if (bVar4) goto LAB_00f1bde0;
  }
  if (*(long **)(this + 0x110) != (long *)0x0) {
    p_Var30 = *(__sFILE **)(**(long **)(this + 0x110) + 0x90);
    uVar9 = Builtins::name(uVar6);
    PrintF(p_Var30,
           "  translating BuiltinContinuation to %s, => register_param_count=%d, stack_param_count=%d, frame_size=%d\n"
           ,uVar9,(ulong)uVar1,(ulong)local_e8,uVar13);
  }
  pFVar10 = malloc(uVar13 + 0x240);
  *(ulong *)(pFVar10 + 0x1f8) = 0;
  *(ulong *)(pFVar10 + 0x1f0) = 0;
  *(ulong *)(pFVar10 + 0x208) = 0;
  *(ulong *)(pFVar10 + 0x200) = 0;
  *(ulong *)(pFVar10 + 0x1d8) = 0;
  *(ulong *)(pFVar10 + 0x1d0) = 0;
  *(ulong *)(pFVar10 + 0x1e8) = 0;
  *(ulong *)(pFVar10 + 0x1e0) = 0;
  *(ulong *)(pFVar10 + 0x1b8) = 0;
  *(ulong *)(pFVar10 + 0x1b0) = 0;
  *(ulong *)(pFVar10 + 0x1c8) = 0;
  *(ulong *)(pFVar10 + 0x1c0) = 0;
  *(ulong *)(pFVar10 + 0x198) = 0;
  *(ulong *)(pFVar10 + 400) = 0;
  *(ulong *)(pFVar10 + 0x1a8) = 0;
  *(ulong *)(pFVar10 + 0x1a0) = 0;
  *(ulong *)(pFVar10 + 0x178) = 0;
  *(ulong *)(pFVar10 + 0x170) = 0;
  *(ulong *)(pFVar10 + 0x188) = 0;
  *(ulong *)(pFVar10 + 0x180) = 0;
  *(ulong *)(pFVar10 + 0x158) = 0;
  *(ulong *)(pFVar10 + 0x150) = 0;
  *(ulong *)(pFVar10 + 0x168) = 0;
  *(ulong *)(pFVar10 + 0x160) = 0;
  *(ulong *)(pFVar10 + 0x138) = 0;
  *(ulong *)(pFVar10 + 0x130) = 0;
  *(ulong *)(pFVar10 + 0x148) = 0;
  *(ulong *)(pFVar10 + 0x140) = 0;
  *(ulong *)(pFVar10 + 0x118) = 0;
  *(ulong *)(pFVar10 + 0x110) = 0;
  *(ulong *)(pFVar10 + 0x128) = 0;
  *(ulong *)(pFVar10 + 0x120) = 0;
  *(ulong *)pFVar10 = uVar13;
  *(ulong *)(pFVar10 + 0x230) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x218) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x210) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x228) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x220) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x18) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x10) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x28) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x20) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x38) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x30) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x48) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x40) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x58) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x50) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x68) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x60) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x78) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x70) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x88) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x80) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x98) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x90) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xa8) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xa0) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xb8) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xb0) = 0xbeeddead;
  *(ulong *)(pFVar10 + 200) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xc0) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xd8) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xd0) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xe8) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xe0) = 0xbeeddead;
  *(uint *)(pFVar10 + 8) = local_e8;
  *(ulong *)(pFVar10 + 0xf8) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0xf0) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x108) = 0xbeeddead;
  *(ulong *)(pFVar10 + 0x100) = 0xbeeddead;
  if (local_e4 != 0) {
    uVar19 = 0;
    do {
      *(undefined8 *)(pFVar10 + (ulong)uVar19 + 0x240) = 0xbeeddead;
      uVar19 = uVar19 + 8;
    } while (uVar19 < local_e4);
  }
  lVar26 = (long)param_2;
  *(FrameDescription **)(*(long *)(this + 0x48) + (long)param_2 * 8) = pFVar10;
  local_98 = *(long **)(this + 0x110);
  local_90 = (uint)*(ulong *)pFVar10;
  if (param_2 == 0) {
    pDVar22 = this + 0x50;
  }
  else {
    pDVar22 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + lVar26 * 8 + -8) + 0x210);
  }
  lVar20 = *(long *)pDVar22;
  *(ulong *)(pFVar10 + 0x210) = lVar20 - uVar13;
  local_a8 = this;
  local_a0 = pFVar10;
  uVar9 = TranslatedValue::GetRawValue(pTStack_80);
  local_78 = local_78 + 1;
  iVar7 = 1;
  do {
    if (*pTStack_80 == (TranslatedValue)0x8) {
      iVar25 = *(int *)(pTStack_80 + 0x1c);
    }
    else {
      iVar25 = 0;
    }
    pTStack_80 = pTStack_80 + 0x20;
    iVar7 = iVar7 + -1 + iVar25;
    if ((long)pTStack_80 - *local_88 == 0x1000) {
      pTStack_80 = (TranslatedValue *)local_88[1];
      local_88 = local_88 + 1;
    }
  } while (0 < iVar7);
  lVar29 = *(long *)this;
  uVar11 = ShouldPadArguments(local_e8);
  if ((uVar11 & 1) != 0) {
    pvVar31 = *(void **)(lVar29 + 0xa8);
    local_90 = local_90 - 8;
    *(void **)(local_a0 + (ulong)local_90 + 0x240) = pvVar31;
    if (local_98 != (long *)0x0) {
      local_108 = pvVar31;
      PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(ulong *)(local_a0 + 0x210) + (ulong)local_90);
      if (((ulong)pvVar31 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",pvVar31,(ulong)(uint)((int)pvVar31 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_108,*(__sFILE **)(*local_98 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_98 + 0x90)," ;  %s","padding\n");
    }
  }
  if (local_ec != 0) {
    uVar19 = 0;
    do {
      FrameWriter::PushTranslatedValue
                ((FrameWriter *)&local_a8,(iterator *)&local_88,"stack parameter");
      local_78 = local_78 + 1;
      iVar7 = 1;
      do {
        if (*pTStack_80 == (TranslatedValue)0x8) {
          iVar25 = *(int *)(pTStack_80 + 0x1c);
        }
        else {
          iVar25 = 0;
        }
        pTStack_80 = pTStack_80 + 0x20;
        iVar7 = iVar7 + -1 + iVar25;
        if ((long)pTStack_80 - *local_88 == 0x1000) {
          pTStack_80 = (TranslatedValue *)local_88[1];
          local_88 = local_88 + 1;
        }
      } while (0 < iVar7);
      uVar19 = uVar19 + 1;
    } while (uVar19 < local_ec);
  }
  if (param_4 == 2) {
    uVar11 = *(ulong *)(lVar29 + 0xa8);
    local_90 = local_90 - 8;
    *(ulong *)(local_a0 + (ulong)local_90 + 0x240) = uVar11;
    if (local_98 != (long *)0x0) {
      local_108 = (void *)uVar11;
      PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(ulong *)(local_a0 + 0x210) + (ulong)local_90);
      if ((uVar11 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",uVar11,(ulong)(uint)((int)uVar11 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_108,*(__sFILE **)(*local_98 + 0x90));
      }
      lVar21 = *local_98;
      pcVar12 = "placeholder for exception on lazy deopt\n";
LAB_00f1c01c:
      PrintF(*(__sFILE **)(lVar21 + 0x90)," ;  %s",pcVar12);
    }
  }
  else if (param_4 == 3) {
    uVar11 = *(ulong *)(*(long *)(this + 0x38) + 0x10);
    local_90 = local_90 - 8;
    *(ulong *)(local_a0 + (ulong)local_90 + 0x240) = uVar11;
    if (local_98 != (long *)0x0) {
      local_108 = (void *)uVar11;
      PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(ulong *)(local_a0 + 0x210) + (ulong)local_90);
      if ((uVar11 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",uVar11,(ulong)(uint)((int)uVar11 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_108,*(__sFILE **)(*local_98 + 0x90));
      }
      lVar21 = *local_98;
      pcVar12 = "exception (from accumulator)\n";
      goto LAB_00f1c01c;
    }
  }
  if (local_f0[0] != (BuiltinContinuationFrameInfo)0x0) {
    uVar11 = *(ulong *)(lVar29 + 0xa8);
    local_90 = local_90 - 8;
    *(ulong *)(local_a0 + (ulong)local_90 + 0x240) = uVar11;
    if (local_98 != (long *)0x0) {
      local_108 = (void *)uVar11;
      PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(ulong *)(local_a0 + 0x210) + (ulong)local_90);
      if ((uVar11 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",uVar11,(ulong)(uint)((int)uVar11 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_108,*(__sFILE **)(*local_98 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_98 + 0x90)," ;  %s",
             "placeholder for return result on lazy deopt\n");
    }
  }
  local_100 = (void *)0x0;
  uStack_f8 = 0;
  local_108 = (void *)0x0;
  if (*(int *)(lVar8 + 8) != 0) {
    std::__ndk1::
    vector<v8::internal::TranslatedFrame::iterator,std::__ndk1::allocator<v8::internal::TranslatedFrame::iterator>>
    ::__append((vector<v8::internal::TranslatedFrame::iterator,std::__ndk1::allocator<v8::internal::TranslatedFrame::iterator>>
                *)&local_108,(long)*(int *)(lVar8 + 8),(iterator *)&local_88);
  }
  if (0 < (int)uVar1) {
    uVar11 = 0;
    do {
      plVar28 = (long *)((long)local_108 +
                        (long)*(int *)(*(long *)(local_d0 + 6) + uVar11 * 0xc) * 0x18);
      *(int *)(plVar28 + 2) = local_78;
      plVar28[1] = (long)pTStack_80;
      *plVar28 = (long)local_88;
      local_78 = local_78 + 1;
      iVar7 = 1;
      do {
        if (*pTStack_80 == (TranslatedValue)0x8) {
          iVar25 = *(int *)(pTStack_80 + 0x1c);
        }
        else {
          iVar25 = 0;
        }
        pTStack_80 = pTStack_80 + 0x20;
        iVar7 = iVar7 + -1 + iVar25;
        if ((long)pTStack_80 - *local_88 == 0x1000) {
          pTStack_80 = (TranslatedValue *)local_88[1];
          local_88 = local_88 + 1;
        }
      } while (0 < iVar7);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  uVar11 = TranslatedValue::GetRawValue(pTStack_80);
  plVar5 = local_88;
  local_b0 = local_78;
  iVar7 = 1;
  local_c0 = local_88;
  pTStack_b8 = pTStack_80;
  plVar28 = local_88;
  pTVar24 = pTStack_80;
  do {
    if (*pTVar24 == (TranslatedValue)0x8) {
      iVar25 = *(int *)(pTVar24 + 0x1c);
    }
    else {
      iVar25 = 0;
    }
    pTVar24 = pTVar24 + 0x20;
    iVar7 = iVar7 + -1 + iVar25;
    if ((long)pTVar24 - *plVar28 == 0x1000) {
      pTVar24 = (TranslatedValue *)plVar28[1];
      plVar28 = plVar28 + 1;
      local_88 = plVar28;
    }
  } while (0 < iVar7);
  *(int *)((long)local_108 + 0x298) = local_78;
  *(TranslatedValue **)((long)local_108 + 0x290) = pTStack_80;
  *(long **)((long)local_108 + 0x288) = plVar5;
  *(ulong *)(pFVar10 + 0x228) = uVar11;
  *(ulong *)(pFVar10 + 0xe8) = uVar11;
  if (param_2 == 0) {
    pDVar22 = this + 0x60;
  }
  else {
    pDVar22 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + lVar26 * 8 + -8) + 0x218);
  }
  lVar21 = *(long *)pDVar22;
  local_90 = local_90 - 8;
  pTStack_80 = pTVar24;
  local_78 = local_78 + 1;
  FrameDescription::SetCallerPc(local_a0,local_90,lVar21);
  if (local_98 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_a0 + 0x210) + (ulong)local_90,(ulong)local_90,lVar21,"caller\'s pc\n");
  }
  if (param_2 == 0) {
    pDVar22 = this + 0x58;
  }
  else {
    pDVar22 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + lVar26 * 8 + -8) + 0x220);
  }
  lVar26 = *(long *)pDVar22;
  local_90 = local_90 - 8;
  FrameDescription::SetCallerFp(local_a0,local_90,lVar26);
  if (local_98 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_a0 + 0x210) + (ulong)local_90,(ulong)local_90,lVar26,"caller\'s fp\n");
  }
  uVar13 = (lVar20 - uVar13) + (ulong)local_90;
  *(ulong *)(pFVar10 + 0x220) = uVar13;
  if (3 < param_4) goto LAB_00f1ca4c;
  uVar18 = *(undefined8 *)(&DAT_019a9300 + (long)(int)param_4 * 8);
  local_90 = local_90 - 8;
  *(undefined8 *)(local_a0 + (ulong)local_90 + 0x240) = uVar18;
  if (local_98 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_a0 + 0x210) + (ulong)local_90,(ulong)local_90,uVar18,
           "context (builtin continuation sentinel)\n");
  }
  if (uVar2 < 3) {
    uVar1 = local_90 - 8;
    *(undefined8 *)(local_a0 + (ulong)uVar1 + 0x240) = uVar9;
    if (local_98 != (long *)0x0) {
      uVar11 = (ulong)uVar1;
      p_Var30 = *(__sFILE **)(*local_98 + 0x90);
      lVar26 = *(long *)(local_a0 + 0x210) + uVar11;
      pcVar12 = "JSFunction\n";
LAB_00f1c43c:
      local_90 = local_90 - 8;
      PrintF(p_Var30,"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",lVar26,uVar11,uVar9,pcVar12);
      uVar1 = local_90;
    }
  }
  else {
    if (param_4 != 0) goto LAB_00f1ca4c;
    uVar1 = local_90 - 8;
    *(undefined8 *)(local_a0 + (ulong)uVar1 + 0x240) = 0;
    if (local_98 != (long *)0x0) {
      uVar11 = (ulong)uVar1;
      p_Var30 = *(__sFILE **)(*local_98 + 0x90);
      lVar26 = *(long *)(local_a0 + 0x210) + uVar11;
      pcVar12 = "unused\n";
      uVar9 = 0;
      goto LAB_00f1c43c;
    }
  }
  local_90 = uVar1;
  local_90 = local_90 - 8;
  lVar26 = (long)iStack_e0 << 1;
  *(long *)(local_a0 + (ulong)local_90 + 0x240) = lVar26;
  if (local_98 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_a0 + 0x210) + (ulong)local_90);
    PrintF("0x%012lx <Smi %d>",lVar26,(ulong)(uint)((int)lVar26 >> 1));
    PrintF(*(__sFILE **)(*local_98 + 0x90)," ;  %s","frame height at deoptimization\n");
  }
  FrameWriter::PushTranslatedValue
            ((FrameWriter *)&local_a8,(iterator *)&local_c0,"builtin JavaScript context\n");
  uVar11 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
  local_90 = local_90 - 8;
  *(ulong *)(local_a0 + (ulong)local_90 + 0x240) = uVar11;
  if (local_98 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_a0 + 0x210) + (ulong)local_90);
    PrintF("0x%012lx <Smi %d>",uVar11,(ulong)(uint)((int)((ulong)uVar6 << 1) >> 1));
    PrintF(*(__sFILE **)(*local_98 + 0x90)," ;  %s","builtin index\n");
  }
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (0 < (int)uVar1) {
    lVar26 = 0;
    do {
      iVar7 = *(int *)(*(long *)(lVar8 + 0x38) + lVar26);
      lVar20 = (long)iVar7;
      pcVar12 = operator_new__(0x80,(nothrow_t *)&std::nothrow);
      if (pcVar12 == (char *)0x0) {
        plVar28 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar28 + 0x18))();
        pcVar12 = operator_new__(0x80,(nothrow_t *)&std::nothrow);
        if (pcVar12 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
      }
      pcVar15 = "";
      if (*(long *)(this + 0x110) == 0) {
        piVar14 = (iterator *)((long)local_108 + lVar20 * 0x18);
      }
      else {
        pcVar16 = "builtin register argument %s\n";
        if (uVar2 < 3) {
          if (iVar7 == -1) {
LAB_00f1c660:
            pcVar17 = "invalid";
          }
          else {
            if (iVar7 != 0) goto LAB_00f1c650;
            pcVar17 = "x0";
            pcVar16 = "tagged argument count %s (will be untagged by continuation)\n";
          }
        }
        else {
          if (param_4 != 0) goto LAB_00f1ca4c;
          if (iVar7 == -1) goto LAB_00f1c660;
LAB_00f1c650:
          pcVar17 = (char *)(&RegisterName(v8::internal::Register)::Names)[lVar20];
        }
        SNPrintF(pcVar12,0x80,pcVar16,pcVar17);
        piVar14 = (iterator *)((long)local_108 + lVar20 * 0x18);
        if (*(long *)(this + 0x110) != 0) {
          pcVar15 = pcVar12;
        }
      }
      FrameWriter::PushTranslatedValue((FrameWriter *)&local_a8,piVar14,pcVar15);
      operator_delete__(pcVar12);
      lVar26 = lVar26 + 4;
    } while ((ulong)uVar1 * 4 - lVar26 != 0);
  }
  iVar7 = BuiltinContinuationFrameConstants::PaddingSlotCount(uVar1);
  if (0 < iVar7) {
    do {
      uVar11 = *(ulong *)(lVar29 + 0xa8);
      local_90 = local_90 - 8;
      *(ulong *)(local_a0 + (ulong)local_90 + 0x240) = uVar11;
      if (local_98 != (long *)0x0) {
        local_c8 = uVar11;
        PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
               *(long *)(local_a0 + 0x210) + (ulong)local_90);
        if ((uVar11 & 1) == 0) {
          PrintF("0x%012lx <Smi %d>",uVar11,(ulong)(uint)((int)uVar11 >> 1));
        }
        else {
          Object::ShortPrint((Object *)&local_c8,*(__sFILE **)(*local_98 + 0x90));
        }
        PrintF(*(__sFILE **)(*local_98 + 0x90)," ;  %s","padding\n");
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (iVar23 == param_2) {
    uVar11 = *(ulong *)(lVar29 + 0xa8);
    local_90 = local_90 - 8;
    *(ulong *)(local_a0 + (ulong)local_90 + 0x240) = uVar11;
    if (local_98 != (long *)0x0) {
      local_c8 = uVar11;
      PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(long *)(local_a0 + 0x210) + (ulong)local_90);
      if ((uVar11 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",uVar11,(ulong)(uint)((int)uVar11 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_c8,*(__sFILE **)(*local_98 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_98 + 0x90)," ;  %s","padding\n");
    }
    if (local_f0[0] == (BuiltinContinuationFrameInfo)0x0) {
      uVar11 = *(ulong *)(lVar29 + 0xa0);
      local_90 = local_90 - 8;
      *(ulong *)(local_a0 + (ulong)local_90 + 0x240) = uVar11;
      if (local_98 != (long *)0x0) {
        local_c8 = uVar11;
        PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- ",
               *(long *)(local_a0 + 0x210) + (ulong)local_90);
        if ((uVar11 & 1) == 0) {
          PrintF("0x%012lx <Smi %d>",uVar11,(ulong)(uint)((int)uVar11 >> 1));
        }
        else {
          Object::ShortPrint((Object *)&local_c8,*(__sFILE **)(*local_98 + 0x90));
        }
        PrintF(*(__sFILE **)(*local_98 + 0x90)," ;  %s","callback result\n");
      }
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 0x10);
      local_90 = local_90 - 8;
      *(undefined8 *)(local_a0 + (ulong)local_90 + 0x240) = uVar9;
      if (local_98 != (long *)0x0) {
        PrintF(*(__sFILE **)(*local_98 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
               *(long *)(local_a0 + 0x210) + (ulong)local_90,(ulong)local_90,uVar9,
               "callback result\n");
      }
    }
  }
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
    pTVar24 = (TranslatedValue *)0x0;
  }
  else {
    uVar11 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50);
    pTVar24 = (TranslatedValue *)
              (*(long *)(*(long *)(param_1 + 0x30) + (uVar11 >> 4 & 0xffffffffffffff8)) +
              (uVar11 & 0x7f) * 0x20);
  }
  if (pTVar24 != pTStack_80) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","translated_frame->end() == value_iterator");
  }
  if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0u == frame_writer.top_offset()");
  }
  if (iVar23 == param_2) {
    uVar11 = JavaScriptFrame::context_register();
    *(undefined8 *)(pFVar10 + (uVar11 & 0xffffffff) * 8 + 0x10) = 0;
  }
  uVar11 = JavaScriptFrame::fp_register();
  *(ulong *)(pFVar10 + (uVar11 & 0xffffffff) * 8 + 0x10) = uVar13;
  if (uVar2 < 3) {
    iVar23 = 0x48;
  }
  else {
    if (param_4 != 0) {
LAB_00f1ca4c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar23 = 0x46;
  }
  if (local_f0[0] != (BuiltinContinuationFrameInfo)0x0) {
    iVar23 = iVar23 + 1;
  }
  local_c8 = Builtins::builtin((Builtins *)(*(long *)this + 0x9e00),iVar23);
  if (*(int *)(local_c8 + 0x17) < 0) {
    uVar13 = Code::OffHeapInstructionStart((Code *)&local_c8);
  }
  else {
    uVar13 = local_c8 + 0x3f;
  }
  *(ulong *)(pFVar10 + 0x218) = uVar13;
  local_110 = Builtins::builtin((Builtins *)(*(long *)this + 0x9e00),0x45);
  if (*(int *)(local_110 + 0x17) < 0) {
    uVar13 = Code::OffHeapInstructionStart((Code *)&local_110);
  }
  else {
    uVar13 = local_110 + 0x3f;
  }
  *(ulong *)(pFVar10 + 0x238) = uVar13;
  if (local_108 != (void *)0x0) {
    local_100 = local_108;
    operator_delete(local_108);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

