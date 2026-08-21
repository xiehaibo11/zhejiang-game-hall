
/* v8::internal::Deoptimizer::DoComputeArgumentsAdaptorFrame(v8::internal::TranslatedFrame*, int) */

void __thiscall
v8::internal::Deoptimizer::DoComputeArgumentsAdaptorFrame
          (Deoptimizer *this,TranslatedFrame *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  FrameDescription *pFVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  Deoptimizer *pDVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong local_c0;
  Deoptimizer *local_b8;
  FrameDescription *local_b0;
  long *local_a8;
  uint local_a0;
  long *local_98;
  char *pcStack_90;
  int local_88;
  long *local_80;
  char *local_78;
  int local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (long *)(*(long *)(param_1 + 0x30) +
                     (*(ulong *)(param_1 + 0x48) >> 4 & 0xffffffffffffff8));
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
    local_78 = (char *)0x0;
  }
  else {
    local_78 = (char *)(*local_80 + (*(ulong *)(param_1 + 0x48) & 0x7f) * 0x20);
  }
  local_70 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  ArgumentsAdaptorFrameInfo::ArgumentsAdaptorFrameInfo((ArgumentsAdaptorFrameInfo *)&local_b8,iVar1)
  ;
  local_88 = local_70;
  local_70 = local_70 + 1;
  uVar15 = (ulong)local_b8 >> 0x20;
  iVar10 = 1;
  local_98 = local_80;
  pcStack_90 = local_78;
  plVar6 = local_80;
  do {
    if (*local_78 == '\b') {
      iVar12 = *(int *)(local_78 + 0x1c);
    }
    else {
      iVar12 = 0;
    }
    local_78 = local_78 + 0x20;
    iVar10 = iVar10 + -1 + iVar12;
    if ((long)local_78 - *plVar6 == 0x1000) {
      local_78 = (char *)plVar6[1];
      plVar6 = plVar6 + 1;
      local_80 = plVar6;
    }
  } while (0 < iVar10);
  if (*(long **)(this + 0x110) != (long *)0x0) {
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),
           "  translating arguments adaptor => variable_frame_size=%d, frame_size=%d\n",local_b8,
           uVar15);
  }
  pFVar3 = malloc(uVar15 + 0x240);
  *(ulong *)(pFVar3 + 0x118) = 0;
  *(ulong *)(pFVar3 + 0x110) = 0;
  *(ulong *)(pFVar3 + 0x128) = 0;
  *(ulong *)(pFVar3 + 0x120) = 0;
  *(ulong *)(pFVar3 + 0x138) = 0;
  *(ulong *)(pFVar3 + 0x130) = 0;
  *(ulong *)(pFVar3 + 0x148) = 0;
  *(ulong *)(pFVar3 + 0x140) = 0;
  *(ulong *)(pFVar3 + 0x158) = 0;
  *(ulong *)(pFVar3 + 0x150) = 0;
  *(ulong *)(pFVar3 + 0x168) = 0;
  *(ulong *)(pFVar3 + 0x160) = 0;
  *(ulong *)(pFVar3 + 0x178) = 0;
  *(ulong *)(pFVar3 + 0x170) = 0;
  *(ulong *)(pFVar3 + 0x188) = 0;
  *(ulong *)(pFVar3 + 0x180) = 0;
  *(ulong *)(pFVar3 + 0x198) = 0;
  *(ulong *)(pFVar3 + 400) = 0;
  *(ulong *)(pFVar3 + 0x1a8) = 0;
  *(ulong *)(pFVar3 + 0x1a0) = 0;
  *(ulong *)(pFVar3 + 0x1b8) = 0;
  *(ulong *)(pFVar3 + 0x1b0) = 0;
  *(ulong *)(pFVar3 + 0x1c8) = 0;
  *(ulong *)(pFVar3 + 0x1c0) = 0;
  *(ulong *)(pFVar3 + 0x1d8) = 0;
  *(ulong *)(pFVar3 + 0x1d0) = 0;
  *(ulong *)(pFVar3 + 0x1e8) = 0;
  *(ulong *)(pFVar3 + 0x1e0) = 0;
  *(ulong *)(pFVar3 + 0x1f8) = 0;
  *(ulong *)(pFVar3 + 0x1f0) = 0;
  *(ulong *)(pFVar3 + 0x208) = 0;
  *(ulong *)(pFVar3 + 0x200) = 0;
  *(ulong *)pFVar3 = uVar15;
  *(int *)(pFVar3 + 8) = iVar1;
  *(ulong *)(pFVar3 + 0x230) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x218) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x210) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x228) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x220) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x18) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x10) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x28) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x20) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x38) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x30) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x48) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x40) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x58) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x50) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x68) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x60) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x78) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x70) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x88) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x80) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x98) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x90) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xa8) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xa0) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xb8) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xb0) = 0xbeeddead;
  *(ulong *)(pFVar3 + 200) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xc0) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xd8) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xd0) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xe8) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xe0) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xf8) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0xf0) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x108) = 0xbeeddead;
  *(ulong *)(pFVar3 + 0x100) = 0xbeeddead;
  uVar14 = (uint)((ulong)local_b8 >> 0x20);
  if (uVar14 != 0) {
    uVar5 = 0;
    do {
      *(undefined8 *)(pFVar3 + (ulong)uVar5 + 0x240) = 0xbeeddead;
      uVar5 = uVar5 + 8;
    } while (uVar5 < uVar14);
  }
  local_a8 = *(long **)(this + 0x110);
  local_a0 = (uint)*(ulong *)pFVar3;
  local_b8 = this;
  local_b0 = pFVar3;
  if (*(int *)(this + 0x40) + -1 <= param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","frame_index < output_count_ - 1");
  }
  if (*(long *)(*(long *)(this + 0x48) + (long)param_2 * 8) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(output_[frame_index]) == nullptr");
  }
  lVar16 = (long)param_2;
  *(FrameDescription **)(*(long *)(this + 0x48) + lVar16 * 8) = pFVar3;
  if (param_2 == 0) {
    pDVar8 = this + 0x50;
  }
  else {
    pDVar8 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + lVar16 * 8 + -8) + 0x210);
  }
  lVar7 = *(long *)pDVar8;
  *(ulong *)(pFVar3 + 0x210) = lVar7 - uVar15;
  lVar17 = *(long *)this;
  uVar4 = ShouldPadArguments(iVar1);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(lVar17 + 0xa8);
    local_a0 = local_a0 - 8;
    *(ulong *)(local_b0 + (ulong)local_a0 + 0x240) = uVar4;
    if (local_a8 != (long *)0x0) {
      local_c0 = uVar4;
      PrintF(*(__sFILE **)(*local_a8 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(ulong *)(local_b0 + 0x210) + (ulong)local_a0);
      if ((uVar4 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",uVar4,(ulong)(uint)((int)uVar4 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_c0,*(__sFILE **)(*local_a8 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_a8 + 0x90)," ;  %s","padding\n");
    }
  }
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      FrameWriter::PushTranslatedValue
                ((FrameWriter *)&local_b8,(iterator *)&local_80,"stack parameter");
      local_70 = local_70 + 1;
      iVar12 = 1;
      do {
        if (*local_78 == '\b') {
          iVar11 = *(int *)(local_78 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        local_78 = local_78 + 0x20;
        iVar12 = iVar12 + -1 + iVar11;
        if ((long)local_78 - *local_80 == 0x1000) {
          local_78 = (char *)local_80[1];
          local_80 = local_80 + 1;
        }
      } while (0 < iVar12);
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  if (param_2 == 0) {
    pDVar8 = this + 0x60;
  }
  else {
    pDVar8 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + lVar16 * 8 + -8) + 0x218);
  }
  lVar13 = *(long *)pDVar8;
  local_a0 = local_a0 - 8;
  FrameDescription::SetCallerPc(local_b0,local_a0,lVar13);
  if (local_a8 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_a8 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b0 + 0x210) + (ulong)local_a0,(ulong)local_a0,lVar13,"caller\'s pc\n");
  }
  if (param_2 == 0) {
    pDVar8 = this + 0x58;
  }
  else {
    pDVar8 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + lVar16 * 8 + -8) + 0x220);
  }
  lVar16 = *(long *)pDVar8;
  local_a0 = local_a0 - 8;
  FrameDescription::SetCallerFp(local_b0,local_a0,lVar16);
  if (local_a8 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_a8 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b0 + 0x210) + (ulong)local_a0,(ulong)local_a0,lVar16,"caller\'s fp\n");
  }
  uVar4 = (ulong)local_a0;
  local_a0 = local_a0 - 8;
  *(ulong *)(pFVar3 + 0x220) = (lVar7 - uVar15) + uVar4;
  *(undefined8 *)(local_b0 + (ulong)local_a0 + 0x240) = 0x26;
  if (local_a8 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_a8 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b0 + 0x210) + (ulong)local_a0,(ulong)local_a0,0x26,
           "context (adaptor sentinel)\n");
  }
  FrameWriter::PushTranslatedValue((FrameWriter *)&local_b8,(iterator *)&local_98,"function\n");
  uVar15 = (ulong)(iVar1 - 1U) << 1;
  uVar4 = -(ulong)(iVar1 - 1U >> 0x1f) & 0xfffffffe00000000 | uVar15;
  local_a0 = local_a0 - 8;
  *(ulong *)(local_b0 + (ulong)local_a0 + 0x240) = uVar4;
  if (local_a8 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_a8 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_b0 + 0x210) + (ulong)local_a0);
    PrintF("0x%012lx <Smi %d>",uVar4,(ulong)(uint)((int)uVar15 >> 1));
    PrintF(*(__sFILE **)(*local_a8 + 0x90)," ;  %s","argc\n");
  }
  uVar15 = *(ulong *)(lVar17 + 0xa8);
  local_a0 = local_a0 - 8;
  *(ulong *)(local_b0 + (ulong)local_a0 + 0x240) = uVar15;
  if (local_a8 != (long *)0x0) {
    local_c0 = uVar15;
    PrintF(*(__sFILE **)(*local_a8 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_b0 + 0x210) + (ulong)local_a0);
    if ((uVar15 & 1) == 0) {
      PrintF("0x%012lx <Smi %d>",uVar15,(ulong)(uint)((int)uVar15 >> 1));
    }
    else {
      Object::ShortPrint((Object *)&local_c0,*(__sFILE **)(*local_a8 + 0x90));
    }
    PrintF(*(__sFILE **)(*local_a8 + 0x90)," ;  %s","padding\n");
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
  if (pcVar9 == local_78) {
    local_c0 = Builtins::builtin((Builtins *)(*(long *)this + 0x9e00),3);
    if (*(int *)(local_c0 + 0x17) < 0) {
      lVar16 = Code::OffHeapInstructionStart((Code *)&local_c0);
    }
    else {
      lVar16 = local_c0 + 0x3f;
    }
    *(long *)(pFVar3 + 0x218) = lVar16 + (*(int *)(*(long *)this + 0xff0) >> 1);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","translated_frame->end() == value_iterator");
}

