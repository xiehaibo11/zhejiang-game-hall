
/* v8::internal::Deoptimizer::DoComputeConstructStubFrame(v8::internal::TranslatedFrame*, int) */

void __thiscall
v8::internal::Deoptimizer::DoComputeConstructStubFrame
          (Deoptimizer *this,TranslatedFrame *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  FrameDescription *pFVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long local_100;
  long *local_f8;
  char *pcStack_f0;
  int local_e8;
  long *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  Deoptimizer *local_c0;
  FrameDescription *local_b8;
  long *local_b0;
  uint local_a8;
  long *local_a0;
  char *pcStack_98;
  int local_90;
  long *local_88;
  char *pcStack_80;
  int local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_88 = (long *)(*(long *)(param_1 + 0x30) +
                     (*(ulong *)(param_1 + 0x48) >> 4 & 0xffffffffffffff8));
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
    pcStack_80 = (char *)0x0;
  }
  else {
    pcStack_80 = (char *)(*local_88 + (*(ulong *)(param_1 + 0x48) & 0x7f) * 0x20);
  }
  local_78 = 0;
  iVar3 = *(int *)(this + 0x40) + -1;
  if ((iVar3 == param_2) && (this[0x1c] != (Deoptimizer)0x2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!is_topmost || deopt_kind_ == DeoptimizeKind::kLazy");
  }
  local_100 = Builtins::builtin((Builtins *)(*(long *)this + 0x9e00),0x1d);
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 4);
  ConstructStubFrameInfo::ConstructStubFrameInfo
            ((ConstructStubFrameInfo *)&local_c0,iVar1,iVar3 == param_2,0);
  local_90 = local_78;
  local_78 = local_78 + 1;
  uVar17 = (ulong)local_c0 >> 0x20;
  iVar10 = 1;
  local_a0 = local_88;
  pcStack_98 = pcStack_80;
  plVar15 = local_88;
  do {
    if (*pcStack_80 == '\b') {
      iVar12 = *(int *)(pcStack_80 + 0x1c);
    }
    else {
      iVar12 = 0;
    }
    pcStack_80 = pcStack_80 + 0x20;
    iVar10 = iVar10 + -1 + iVar12;
    if ((long)pcStack_80 - *plVar15 == 0x1000) {
      pcStack_80 = (char *)plVar15[1];
      plVar15 = plVar15 + 1;
      local_88 = plVar15;
    }
  } while (0 < iVar10);
  if (*(long **)(this + 0x110) != (long *)0x0) {
    pcVar9 = "create";
    if (uVar2 != 1) {
      pcVar9 = "invoke";
    }
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),
           "  translating construct stub => bailout_id=%d (%s), variable_frame_size=%d, frame_size=%d\n"
           ,(ulong)uVar2,pcVar9,local_c0,uVar17);
  }
  pFVar5 = malloc(uVar17 + 0x240);
  *(ulong *)(pFVar5 + 0x118) = 0;
  *(ulong *)(pFVar5 + 0x110) = 0;
  *(ulong *)(pFVar5 + 0x128) = 0;
  *(ulong *)(pFVar5 + 0x120) = 0;
  *(ulong *)(pFVar5 + 0x138) = 0;
  *(ulong *)(pFVar5 + 0x130) = 0;
  *(ulong *)(pFVar5 + 0x148) = 0;
  *(ulong *)(pFVar5 + 0x140) = 0;
  *(ulong *)(pFVar5 + 0x158) = 0;
  *(ulong *)(pFVar5 + 0x150) = 0;
  *(ulong *)(pFVar5 + 0x168) = 0;
  *(ulong *)(pFVar5 + 0x160) = 0;
  *(ulong *)(pFVar5 + 0x178) = 0;
  *(ulong *)(pFVar5 + 0x170) = 0;
  *(ulong *)(pFVar5 + 0x188) = 0;
  *(ulong *)(pFVar5 + 0x180) = 0;
  *(ulong *)(pFVar5 + 0x198) = 0;
  *(ulong *)(pFVar5 + 400) = 0;
  *(ulong *)(pFVar5 + 0x1a8) = 0;
  *(ulong *)(pFVar5 + 0x1a0) = 0;
  *(ulong *)(pFVar5 + 0x1b8) = 0;
  *(ulong *)(pFVar5 + 0x1b0) = 0;
  *(ulong *)(pFVar5 + 0x1c8) = 0;
  *(ulong *)(pFVar5 + 0x1c0) = 0;
  *(ulong *)(pFVar5 + 0x1d8) = 0;
  *(ulong *)(pFVar5 + 0x1d0) = 0;
  *(ulong *)(pFVar5 + 0x1e8) = 0;
  *(ulong *)(pFVar5 + 0x1e0) = 0;
  *(ulong *)(pFVar5 + 0x1f8) = 0;
  *(ulong *)(pFVar5 + 0x1f0) = 0;
  *(ulong *)(pFVar5 + 0x208) = 0;
  *(ulong *)(pFVar5 + 0x200) = 0;
  *(ulong *)pFVar5 = uVar17;
  *(int *)(pFVar5 + 8) = iVar1;
  *(ulong *)(pFVar5 + 0x230) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x218) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x210) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x228) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x220) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x18) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x10) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x28) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x20) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x38) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x30) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x48) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x40) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x58) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x50) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x68) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x60) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x78) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x70) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x88) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x80) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x98) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x90) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xa8) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xa0) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xb8) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xb0) = 0xbeeddead;
  *(ulong *)(pFVar5 + 200) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xc0) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xd8) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xd0) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xe8) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xe0) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xf8) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0xf0) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x108) = 0xbeeddead;
  *(ulong *)(pFVar5 + 0x100) = 0xbeeddead;
  uVar16 = (uint)((ulong)local_c0 >> 0x20);
  if (uVar16 != 0) {
    uVar8 = 0;
    do {
      *(undefined8 *)(pFVar5 + (ulong)uVar8 + 0x240) = 0xbeeddead;
      uVar8 = uVar8 + 8;
    } while (uVar8 < uVar16);
  }
  local_b0 = *(long **)(this + 0x110);
  local_a8 = (uint)*(ulong *)pFVar5;
  lVar13 = (long)param_2 + -1;
  *(FrameDescription **)(*(long *)(this + 0x48) + (long)param_2 * 8) = pFVar5;
  uVar17 = *(long *)(*(long *)(*(long *)(this + 0x48) + lVar13 * 8) + 0x210) - uVar17;
  *(ulong *)(pFVar5 + 0x210) = uVar17;
  lVar18 = *(long *)this;
  local_c0 = this;
  local_b8 = pFVar5;
  uVar6 = ShouldPadArguments(iVar1);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(lVar18 + 0xa8);
    local_a8 = local_a8 - 8;
    *(ulong *)(local_b8 + (ulong)local_a8 + 0x240) = uVar6;
    if (local_b0 != (long *)0x0) {
      local_e0 = (long *)uVar6;
      PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(ulong *)(local_b8 + 0x210) + (ulong)local_a8);
      if ((uVar6 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",uVar6,(ulong)(uint)((int)uVar6 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_e0,*(__sFILE **)(*local_b0 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","padding\n");
    }
  }
  local_d0 = CONCAT44(uStack_74,local_78);
  pcStack_d8 = pcStack_80;
  local_e0 = local_88;
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      FrameWriter::PushTranslatedValue
                ((FrameWriter *)&local_c0,(iterator *)&local_88,"stack parameter");
      local_78 = local_78 + 1;
      iVar12 = 1;
      do {
        if (*pcStack_80 == '\b') {
          iVar11 = *(int *)(pcStack_80 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        pcStack_80 = pcStack_80 + 0x20;
        iVar12 = iVar12 + -1 + iVar11;
        if ((long)pcStack_80 - *local_88 == 0x1000) {
          pcStack_80 = (char *)local_88[1];
          local_88 = local_88 + 1;
        }
      } while (0 < iVar12);
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  local_a8 = local_a8 - 8;
  lVar14 = *(long *)(*(long *)(*(long *)(this + 0x48) + lVar13 * 8) + 0x218);
  FrameDescription::SetCallerPc(local_b8,local_a8,lVar14);
  if (local_b0 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,lVar14,"caller\'s pc\n");
  }
  local_a8 = local_a8 - 8;
  lVar13 = *(long *)(*(long *)(*(long *)(this + 0x48) + lVar13 * 8) + 0x220);
  FrameDescription::SetCallerFp(local_b8,local_a8,lVar13);
  if (local_b0 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,lVar13,"caller\'s fp\n");
  }
  uVar17 = uVar17 + local_a8;
  *(ulong *)(pFVar5 + 0x220) = uVar17;
  if (iVar3 == param_2) {
    uVar6 = JavaScriptFrame::fp_register();
    *(ulong *)(pFVar5 + (uVar6 & 0xffffffff) * 8 + 0x10) = uVar17;
  }
  local_a8 = local_a8 - 8;
  *(undefined8 *)(local_b8 + (ulong)local_a8 + 0x240) = 0x24;
  if (local_b0 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,0x24,
           "context (construct stub sentinel)\n");
  }
  local_e8 = local_78;
  local_78 = local_78 + 1;
  iVar10 = 1;
  local_f8 = local_88;
  pcStack_f0 = pcStack_80;
  plVar15 = local_88;
  do {
    if (*pcStack_80 == '\b') {
      iVar12 = *(int *)(pcStack_80 + 0x1c);
    }
    else {
      iVar12 = 0;
    }
    pcStack_80 = pcStack_80 + 0x20;
    iVar10 = iVar10 + -1 + iVar12;
    if ((long)pcStack_80 - *plVar15 == 0x1000) {
      pcStack_80 = (char *)plVar15[1];
      plVar15 = plVar15 + 1;
      local_88 = plVar15;
    }
  } while (0 < iVar10);
  FrameWriter::PushTranslatedValue((FrameWriter *)&local_c0,(iterator *)&local_f8,"context");
  local_a8 = local_a8 - 8;
  uVar17 = (ulong)(iVar1 - 1U) << 1;
  uVar6 = -(ulong)(iVar1 - 1U >> 0x1f) & 0xfffffffe00000000 | uVar17;
  *(ulong *)(local_b8 + (ulong)local_a8 + 0x240) = uVar6;
  if (local_b0 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8);
    PrintF("0x%012lx <Smi %d>",uVar6,(ulong)(uint)((int)uVar17 >> 1));
    PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","argc\n");
  }
  FrameWriter::PushTranslatedValue
            ((FrameWriter *)&local_c0,(iterator *)&local_a0,"constructor function\n");
  plVar15 = *(long **)(lVar18 + 0xa8);
  local_a8 = local_a8 - 8;
  *(long **)(local_b8 + (ulong)local_a8 + 0x240) = plVar15;
  if (local_b0 != (long *)0x0) {
    local_f8 = plVar15;
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8);
    if (((ulong)plVar15 & 1) == 0) {
      PrintF("0x%012lx <Smi %d>",plVar15,(ulong)(uint)((int)plVar15 >> 1));
    }
    else {
      Object::ShortPrint((Object *)&local_f8,*(__sFILE **)(*local_b0 + 0x90));
    }
    PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","padding\n");
  }
  if (1 < uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "bailout_id == BailoutId::ConstructStubCreate() || bailout_id == BailoutId::ConstructStubInvoke()"
            );
  }
  pcVar9 = "new target\n";
  if (uVar2 != 1) {
    pcVar9 = "allocated receiver\n";
  }
  FrameWriter::PushTranslatedValue((FrameWriter *)&local_c0,(iterator *)&local_e0,pcVar9);
  if (iVar3 == param_2) {
    plVar15 = *(long **)(lVar18 + 0xa8);
    local_a8 = local_a8 - 8;
    *(long **)(local_b8 + (ulong)local_a8 + 0x240) = plVar15;
    if (local_b0 != (long *)0x0) {
      local_f8 = plVar15;
      PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(long *)(local_b8 + 0x210) + (ulong)local_a8);
      if (((ulong)plVar15 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",plVar15,(ulong)(uint)((int)plVar15 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_f8,*(__sFILE **)(*local_b0 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","padding\n");
    }
    uVar7 = *(undefined8 *)(*(long *)(this + 0x38) + 0x10);
    local_a8 = local_a8 - 8;
    *(undefined8 *)(local_b8 + (ulong)local_a8 + 0x240) = uVar7;
    if (local_b0 != (long *)0x0) {
      PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
             *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,uVar7,"subcall result\n")
      ;
    }
  }
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = (char *)(*(long *)(*(long *)(param_1 + 0x30) +
                               ((ulong)(*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50)) >> 4
                               & 0xffffffffffffff8)) +
                     (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50) & 0x7fU) * 0x20);
  }
  if (pcVar9 != pcStack_80) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","translated_frame->end() == value_iterator");
  }
  if (local_a8 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0u == frame_writer.top_offset()");
  }
  if (*(int *)(local_100 + 0x17) < 0) {
    lVar13 = Code::OffHeapInstructionStart((Code *)&local_100);
  }
  else {
    lVar13 = local_100 + 0x3f;
  }
  lVar18 = 0xff8;
  if (uVar2 != 1) {
    lVar18 = 0x1000;
  }
  *(long *)(pFVar5 + 0x218) = lVar13 + (*(int *)(*(long *)this + lVar18) >> 1);
  if (iVar3 == param_2) {
    uVar17 = JavaScriptFrame::context_register();
    *(undefined8 *)(pFVar5 + (uVar17 & 0xffffffff) * 8 + 0x10) = 0;
    local_f8 = (long *)Builtins::builtin((Builtins *)(*(long *)this + 0x9e00),0x45);
    if (*(int *)((long)local_f8 + 0x17) < 0) {
      uVar17 = Code::OffHeapInstructionStart((Code *)&local_f8);
    }
    else {
      uVar17 = (long)local_f8 + 0x3f;
    }
    *(ulong *)(pFVar5 + 0x238) = uVar17;
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

