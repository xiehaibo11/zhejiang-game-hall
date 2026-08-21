
/* v8::internal::Deoptimizer::DoComputeInterpretedFrame(v8::internal::TranslatedFrame*, int, bool)
    */

void __thiscall
v8::internal::Deoptimizer::DoComputeInterpretedFrame
          (Deoptimizer *this,TranslatedFrame *param_1,int param_2,bool param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  Deoptimizer *pDVar8;
  FrameDescription *pFVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  Deoptimizer *pDVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  TranslatedValue *pTVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long local_f0;
  ulong local_e8;
  ulong local_e0;
  long *local_d8;
  TranslatedValue *local_d0;
  int local_c8;
  Deoptimizer *local_c0;
  FrameDescription *local_b8;
  long *local_b0;
  uint local_a8;
  long *local_a0;
  TranslatedValue *pTStack_98;
  int local_90;
  long *local_88;
  TranslatedValue *local_80;
  int local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_e8 = *(ulong *)(param_1 + 8);
  if ((int)local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!raw_shared_info_.is_null()");
  }
  local_88 = (long *)(*(long *)(param_1 + 0x30) +
                     (*(ulong *)(param_1 + 0x48) >> 4 & 0xffffffffffffff8));
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
    local_80 = (TranslatedValue *)0x0;
  }
  else {
    local_80 = (TranslatedValue *)(*local_88 + (*(ulong *)(param_1 + 0x48) & 0x7f) * 0x20);
  }
  local_78 = 0;
  uVar11 = *(uint *)(param_1 + 4);
  iVar6 = *(int *)(this + 0x40) + -1;
  uVar4 = uVar11;
  if (param_3) {
    uVar4 = *(uint *)(this + 0x34);
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar2 = *(ushort *)(local_e8 + 0x15) + 1 & 0xffff;
  InterpretedFrameInfo::InterpretedFrameInfo
            ((InterpretedFrameInfo *)&local_c0,uVar2,uVar5,iVar6 == param_2,0);
  pDVar8 = local_c0;
  uVar23 = (ulong)local_b8 & 0xffffffff;
  local_90 = local_78;
  local_78 = local_78 + 1;
  iVar15 = 1;
  local_a0 = local_88;
  pTStack_98 = local_80;
  plVar24 = local_88;
  do {
    if (*local_80 == (TranslatedValue)0x8) {
      iVar16 = *(int *)(local_80 + 0x1c);
    }
    else {
      iVar16 = 0;
    }
    local_80 = local_80 + 0x20;
    iVar15 = iVar15 + -1 + iVar16;
    if ((long)local_80 - *plVar24 == 0x1000) {
      local_80 = (TranslatedValue *)plVar24[1];
      plVar24 = plVar24 + 1;
      local_88 = plVar24;
    }
  } while (0 < iVar15);
  if (*(long **)(this + 0x110) != (long *)0x0) {
    uVar25 = (ulong)local_c0 >> 0x20;
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"  translating interpreted frame ");
    local_d8 = (long *)SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_e8);
    String::ToCString(&local_c0,&local_d8,1,1,0);
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"%s",local_c0);
    pcVar3 = " (throw)";
    if (!param_3) {
      pcVar3 = "";
    }
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),
           " => bytecode_offset=%d, variable_frame_size=%d, frame_size=%d%s\n",(ulong)uVar11,uVar25,
           uVar23,pcVar3);
    pDVar13 = local_c0;
    local_c0 = (Deoptimizer *)0x0;
    if (pDVar13 != (Deoptimizer *)0x0) {
      operator_delete__(pDVar13);
    }
  }
  pFVar9 = malloc(uVar23 + 0x240);
  *(ulong *)(pFVar9 + 0x118) = 0;
  *(ulong *)(pFVar9 + 0x110) = 0;
  *(ulong *)(pFVar9 + 0x128) = 0;
  *(ulong *)(pFVar9 + 0x120) = 0;
  *(ulong *)(pFVar9 + 0x138) = 0;
  *(ulong *)(pFVar9 + 0x130) = 0;
  *(ulong *)(pFVar9 + 0x148) = 0;
  *(ulong *)(pFVar9 + 0x140) = 0;
  *(ulong *)(pFVar9 + 0x158) = 0;
  *(ulong *)(pFVar9 + 0x150) = 0;
  *(ulong *)(pFVar9 + 0x168) = 0;
  *(ulong *)(pFVar9 + 0x160) = 0;
  *(ulong *)(pFVar9 + 0x178) = 0;
  *(ulong *)(pFVar9 + 0x170) = 0;
  *(ulong *)(pFVar9 + 0x188) = 0;
  *(ulong *)(pFVar9 + 0x180) = 0;
  *(ulong *)(pFVar9 + 0x198) = 0;
  *(ulong *)(pFVar9 + 400) = 0;
  *(ulong *)(pFVar9 + 0x1a8) = 0;
  *(ulong *)(pFVar9 + 0x1a0) = 0;
  *(ulong *)(pFVar9 + 0x1b8) = 0;
  *(ulong *)(pFVar9 + 0x1b0) = 0;
  *(ulong *)(pFVar9 + 0x1c8) = 0;
  *(ulong *)(pFVar9 + 0x1c0) = 0;
  *(ulong *)(pFVar9 + 0x1d8) = 0;
  *(ulong *)(pFVar9 + 0x1d0) = 0;
  *(ulong *)(pFVar9 + 0x1e8) = 0;
  *(ulong *)(pFVar9 + 0x1e0) = 0;
  *(ulong *)(pFVar9 + 0x1f8) = 0;
  *(ulong *)(pFVar9 + 0x1f0) = 0;
  *(ulong *)(pFVar9 + 0x208) = 0;
  *(ulong *)(pFVar9 + 0x200) = 0;
  *(ulong *)pFVar9 = uVar23;
  *(uint *)(pFVar9 + 8) = uVar2;
  *(ulong *)(pFVar9 + 0x230) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x218) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x210) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x228) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x220) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x18) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x10) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x28) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x20) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x38) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x30) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x48) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x40) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x58) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x50) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x68) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x60) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x78) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x70) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x88) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x80) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x98) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x90) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xa8) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xa0) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xb8) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xb0) = 0xbeeddead;
  *(ulong *)(pFVar9 + 200) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xc0) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xd8) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xd0) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xe8) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xe0) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xf8) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0xf0) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x108) = 0xbeeddead;
  *(ulong *)(pFVar9 + 0x100) = 0xbeeddead;
  if ((uint)local_b8 != 0) {
    uVar11 = 0;
    do {
      *(undefined8 *)(pFVar9 + (ulong)uVar11 + 0x240) = 0xbeeddead;
      uVar11 = uVar11 + 8;
    } while (uVar11 < (uint)local_b8);
  }
  local_b0 = *(long **)(this + 0x110);
  local_a8 = (uint)*(ulong *)pFVar9;
  local_c0 = this;
  local_b8 = pFVar9;
  if ((param_2 < 0) || (*(int *)(this + 0x40) <= param_2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","frame_index >= 0 && frame_index < output_count_");
  }
  if (*(long *)(*(long *)(this + 0x48) + (ulong)(uint)param_2 * 8) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(output_[frame_index]) == nullptr");
  }
  *(FrameDescription **)(*(long *)(this + 0x48) + (ulong)(uint)param_2 * 8) = pFVar9;
  if (param_2 == 0) {
    pDVar13 = this + 0x50;
  }
  else {
    pDVar13 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + (long)param_2 * 8 + -8) + 0x210);
  }
  lVar12 = *(long *)pDVar13;
  *(ulong *)(pFVar9 + 0x210) = lVar12 - uVar23;
  lVar21 = *(long *)this;
  uVar25 = ShouldPadArguments(uVar2);
  if ((uVar25 & 1) != 0) {
    plVar24 = *(long **)(lVar21 + 0xa8);
    local_a8 = local_a8 - 8;
    *(long **)(local_b8 + (ulong)local_a8 + 0x240) = plVar24;
    if (local_b0 != (long *)0x0) {
      local_d8 = plVar24;
      PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(ulong *)(local_b8 + 0x210) + (ulong)local_a8);
      if (((ulong)plVar24 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",plVar24,(ulong)(uint)((int)plVar24 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_d8,*(__sFILE **)(*local_b0 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","padding\n");
    }
  }
  if (uVar2 != 0) {
    uVar11 = 0;
    do {
      FrameWriter::PushTranslatedValue
                ((FrameWriter *)&local_c0,(iterator *)&local_88,"stack parameter");
      local_78 = local_78 + 1;
      iVar15 = 1;
      do {
        if (*local_80 == (TranslatedValue)0x8) {
          iVar16 = *(int *)(local_80 + 0x1c);
        }
        else {
          iVar16 = 0;
        }
        local_80 = local_80 + 0x20;
        iVar15 = iVar15 + -1 + iVar16;
        if ((long)local_80 - *local_88 == 0x1000) {
          local_80 = (TranslatedValue *)local_88[1];
          local_88 = local_88 + 1;
        }
      } while (0 < iVar15);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar2);
  }
  if (*(long **)(this + 0x110) != (long *)0x0) {
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"    -------------------------\n");
  }
  if (param_2 == 0) {
    pDVar13 = this + 0x60;
  }
  else {
    pDVar13 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + (long)param_2 * 8 + -8) + 0x218);
  }
  lVar22 = *(long *)pDVar13;
  local_a8 = local_a8 - 8;
  FrameDescription::SetCallerPc(local_b8,local_a8,lVar22);
  if (local_b0 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,lVar22,"caller\'s pc\n");
  }
  if (param_2 == 0) {
    pDVar13 = this + 0x58;
  }
  else {
    pDVar13 = (Deoptimizer *)(*(long *)(*(long *)(this + 0x48) + (long)param_2 * 8 + -8) + 0x220);
  }
  lVar22 = *(long *)pDVar13;
  local_a8 = local_a8 - 8;
  FrameDescription::SetCallerFp(local_b8,local_a8,lVar22);
  if (local_b0 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,lVar22,"caller\'s fp\n");
  }
  uVar23 = (lVar12 - uVar23) + (ulong)local_a8;
  *(ulong *)(pFVar9 + 0x220) = uVar23;
  if (iVar6 == param_2) {
    uVar25 = JavaScriptFrame::fp_register();
    *(ulong *)(pFVar9 + (uVar25 & 0xffffffff) * 8 + 0x10) = uVar23;
  }
  plVar14 = local_88;
  iVar16 = 1;
  iVar15 = local_78 + 1;
  local_d8 = local_88;
  local_d0 = local_80;
  local_c8 = local_78;
  plVar24 = local_88;
  pTVar17 = local_80;
  do {
    if (*pTVar17 == (TranslatedValue)0x8) {
      iVar19 = *(int *)(pTVar17 + 0x1c);
    }
    else {
      iVar19 = 0;
    }
    pTVar17 = pTVar17 + 0x20;
    iVar16 = iVar16 + -1 + iVar19;
    if ((long)pTVar17 - *plVar24 == 0x1000) {
      pTVar17 = (TranslatedValue *)plVar24[1];
      plVar24 = plVar24 + 1;
      local_88 = plVar24;
    }
  } while (0 < iVar16);
  if ((param_3) && (-1 < *(int *)(this + 0x30))) {
    iVar16 = 0;
    do {
      local_78 = local_78 + 1;
      iVar19 = 1;
      plVar24 = plVar14;
      do {
        if (*local_80 == (TranslatedValue)0x8) {
          iVar20 = *(int *)(local_80 + 0x1c);
        }
        else {
          iVar20 = 0;
        }
        local_80 = local_80 + 0x20;
        iVar19 = iVar19 + -1 + iVar20;
        if ((long)local_80 - *plVar24 == 0x1000) {
          local_80 = (TranslatedValue *)plVar24[1];
          plVar14 = plVar24 + 1;
          plVar24 = plVar14;
          local_d8 = plVar14;
        }
      } while (0 < iVar19);
      bVar1 = iVar16 < *(int *)(this + 0x30);
      iVar16 = iVar16 + 1;
      local_d0 = local_80;
      local_c8 = local_78;
    } while (bVar1);
  }
  local_80 = pTVar17;
  local_78 = iVar15;
  uVar23 = TranslatedValue::GetRawValue(local_d0);
  *(ulong *)(pFVar9 + 0x228) = uVar23;
  FrameWriter::PushTranslatedValue((FrameWriter *)&local_c0,(iterator *)&local_d8,"context");
  FrameWriter::PushTranslatedValue((FrameWriter *)&local_c0,(iterator *)&local_a0,"function");
  uVar23 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_e8);
  uVar25 = local_e8 & 0xffffffff00000000;
  uVar18 = uVar25 | *(uint *)(local_e8 + 0xf);
  if ((uVar23 & 1) == 0) {
    uVar23 = uVar25 | 7;
    if ((*(short *)(uVar23 + *(uint *)(uVar18 - 1)) == 0x5b) &&
       (*(short *)(uVar23 + *(uint *)((uVar25 | *(uint *)(uVar18 + 0x13)) - 1)) == 0x86)) {
      uVar11 = *(uint *)(uVar18 + 0xf);
    }
    else if (((*(uint *)(local_e8 + 3) & 1) == 0) ||
            (*(short *)(uVar23 + *(uint *)((uVar25 | *(uint *)(local_e8 + 3)) - 1)) != 0x86)) {
      uVar11 = *(uint *)((local_e8 & 0xffffffff00000000 | (ulong)*(uint *)(local_e8 + 3)) + 3);
    }
    else {
      uVar11 = *(uint *)(local_e8 + 3);
    }
  }
  else {
    uVar11 = *(uint *)(uVar18 + 0x13);
  }
  uVar23 = local_e8 & 0xffffffff00000000 | (ulong)uVar11;
  local_a8 = local_a8 - 8;
  *(ulong *)(local_b8 + (ulong)local_a8 + 0x240) = uVar23;
  if (local_b0 != (long *)0x0) {
    local_e0 = uVar23;
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8);
    if ((uVar11 & 1) == 0) {
      PrintF("0x%012lx <Smi %d>",uVar23,(ulong)(uint)((int)uVar11 >> 1));
    }
    else {
      Object::ShortPrint((Object *)&local_e0,*(__sFILE **)(*local_b0 + 0x90));
    }
    PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","bytecode array\n");
  }
  uVar23 = (ulong)(uVar4 + 0x21) << 1;
  uVar25 = -(ulong)(uVar4 + 0x21 >> 0x1f) & 0xfffffffe00000000 | uVar23;
  local_a8 = local_a8 - 8;
  *(ulong *)(local_b8 + (ulong)local_a8 + 0x240) = uVar25;
  if (local_b0 != (long *)0x0) {
    PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(local_b8 + 0x210) + (ulong)local_a8);
    PrintF("0x%012lx <Smi %d>",uVar25,(ulong)(uint)((int)uVar23 >> 1));
    PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","bytecode offset\n");
  }
  if (*(long **)(this + 0x110) != (long *)0x0) {
    PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"    -------------------------\n");
  }
  if (0 < (int)uVar5) {
    uVar11 = 0;
    iVar15 = *(int *)(param_1 + 0x20);
    uVar4 = uVar5 - *(int *)(param_1 + 0x1c);
    if (iVar6 != param_2 || param_3) goto LAB_00f1a3f8;
    do {
      if (this[0x1c] != (Deoptimizer)0x2) goto LAB_00f1a3f8;
      if ((int)uVar11 < (int)uVar4) goto LAB_00f1a3f8;
      if ((int)(uVar4 + iVar15) <= (int)uVar11) goto LAB_00f1a3f8;
      if (uVar11 == uVar4) {
        uVar10 = *(undefined8 *)(*(long *)(this + 0x38) + 0x10);
        local_a8 = local_a8 - 8;
        *(undefined8 *)(local_b8 + (ulong)local_a8 + 0x240) = uVar10;
        if (local_b0 != (long *)0x0) {
          PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
                 *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,uVar10,
                 "return value 0\n");
        }
        if ((int)uVar5 < (int)(uVar4 + iVar15)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","return_value_first_reg + return_value_count <= locals_count"
                  );
        }
      }
      else {
        if (uVar11 - uVar4 != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","return_index == 1");
        }
        uVar10 = *(undefined8 *)(*(long *)(this + 0x38) + 0x18);
        local_a8 = local_a8 - 8;
        *(undefined8 *)(local_b8 + (ulong)local_a8 + 0x240) = uVar10;
        if (local_b0 != (long *)0x0) {
          PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
                 *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,uVar10,
                 "return value 1\n");
        }
      }
      while( true ) {
        local_78 = local_78 + 1;
        iVar16 = 1;
        do {
          if (*local_80 == (TranslatedValue)0x8) {
            iVar19 = *(int *)(local_80 + 0x1c);
          }
          else {
            iVar19 = 0;
          }
          local_80 = local_80 + 0x20;
          iVar16 = iVar16 + -1 + iVar19;
          if ((long)local_80 - *local_88 == 0x1000) {
            local_80 = (TranslatedValue *)local_88[1];
            local_88 = local_88 + 1;
          }
        } while (0 < iVar16);
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar5) goto LAB_00f1a554;
        if (iVar6 == param_2 && !param_3) break;
LAB_00f1a3f8:
        FrameWriter::PushTranslatedValue
                  ((FrameWriter *)&local_c0,(iterator *)&local_88,"stack parameter");
      }
    } while( true );
  }
LAB_00f1a554:
  if (uVar5 < (uint)pDVar8) {
    iVar15 = (uint)pDVar8 - uVar5;
    do {
      uVar23 = *(ulong *)(lVar21 + 0xa8);
      local_a8 = local_a8 - 8;
      *(ulong *)(local_b8 + (ulong)local_a8 + 0x240) = uVar23;
      if (local_b0 != (long *)0x0) {
        local_e0 = uVar23;
        PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
               *(long *)(local_b8 + 0x210) + (ulong)local_a8);
        if ((uVar23 & 1) == 0) {
          PrintF("0x%012lx <Smi %d>",uVar23,(ulong)(uint)((int)uVar23 >> 1));
        }
        else {
          Object::ShortPrint((Object *)&local_e0,*(__sFILE **)(*local_b0 + 0x90));
        }
        PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","padding\n");
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (iVar6 == param_2) {
    uVar23 = *(ulong *)(lVar21 + 0xa8);
    local_a8 = local_a8 - 8;
    *(ulong *)(local_b8 + (ulong)local_a8 + 0x240) = uVar23;
    if (local_b0 != (long *)0x0) {
      local_e0 = uVar23;
      PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
             *(long *)(local_b8 + 0x210) + (ulong)local_a8);
      if ((uVar23 & 1) == 0) {
        PrintF("0x%012lx <Smi %d>",uVar23,(ulong)(uint)((int)uVar23 >> 1));
      }
      else {
        Object::ShortPrint((Object *)&local_e0,*(__sFILE **)(*local_b0 + 0x90));
      }
      PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","padding\n");
    }
    if (param_3) {
      uVar23 = *(ulong *)(*(long *)(this + 0x38) + 0x10);
      local_a8 = local_a8 - 8;
      *(ulong *)(local_b8 + (ulong)local_a8 + 0x240) = uVar23;
      if (local_b0 != (long *)0x0) {
        local_e0 = uVar23;
        PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- ",
               *(long *)(local_b8 + 0x210) + (ulong)local_a8);
        if ((uVar23 & 1) == 0) {
          PrintF("0x%012lx <Smi %d>",uVar23,(ulong)(uint)((int)uVar23 >> 1));
        }
        else {
          Object::ShortPrint((Object *)&local_e0,*(__sFILE **)(*local_b0 + 0x90));
        }
        PrintF(*(__sFILE **)(*local_b0 + 0x90)," ;  %s","accumulator\n");
      }
    }
    else if (((this[0x1c] == (Deoptimizer)0x2) && (*(int *)(param_1 + 0x1c) == 0)) &&
            (0 < *(int *)(param_1 + 0x20))) {
      if (*(int *)(param_1 + 0x20) != 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","translated_frame->return_value_count() == 1");
      }
      uVar10 = *(undefined8 *)(*(long *)(this + 0x38) + 0x10);
      local_a8 = local_a8 - 8;
      *(undefined8 *)(local_b8 + (ulong)local_a8 + 0x240) = uVar10;
      if (local_b0 != (long *)0x0) {
        PrintF(*(__sFILE **)(*local_b0 + 0x90),"    0x%012lx: [top + %3d] <- 0x%012lx ;  %s",
               *(long *)(local_b8 + 0x210) + (ulong)local_a8,(ulong)local_a8,uVar10,
               "return value 0\n");
      }
    }
    else {
      FrameWriter::PushTranslatedValue((FrameWriter *)&local_c0,(iterator *)&local_88,"accumulator")
      ;
    }
    iVar15 = 1;
    do {
      if (*local_80 == (TranslatedValue)0x8) {
        iVar16 = *(int *)(local_80 + 0x1c);
      }
      else {
        iVar16 = 0;
      }
      local_80 = local_80 + 0x20;
      iVar15 = iVar15 + -1 + iVar16;
      if ((long)local_80 - *local_88 == 0x1000) {
        local_80 = (TranslatedValue *)local_88[1];
        local_88 = local_88 + 1;
      }
    } while (0 < iVar15);
  }
  else {
    iVar15 = 1;
    do {
      if (*local_80 == (TranslatedValue)0x8) {
        iVar16 = *(int *)(local_80 + 0x1c);
      }
      else {
        iVar16 = 0;
      }
      local_80 = local_80 + 0x20;
      iVar15 = iVar15 + -1 + iVar16;
      if ((long)local_80 - *local_88 == 0x1000) {
        local_80 = (TranslatedValue *)local_88[1];
        local_88 = local_88 + 1;
      }
    } while (0 < iVar15);
  }
  local_78 = local_78 + 1;
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
    if (local_80 != (TranslatedValue *)0x0) goto LAB_00f1a914;
  }
  else if ((TranslatedValue *)
           (*(long *)(*(long *)(param_1 + 0x30) +
                     ((ulong)(*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50)) >> 4 &
                     0xffffffffffffff8)) +
           (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50) & 0x7fU) * 0x20) != local_80) {
LAB_00f1a914:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","translated_frame->end() == value_iterator");
  }
  if (local_a8 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0u == frame_writer.top_offset()");
  }
  lVar12 = *(long *)this;
  if (((iVar6 == param_2) && (this[0x1c] != (Deoptimizer)0x2)) || (param_3)) {
    iVar15 = 0x40;
  }
  else {
    iVar15 = 0x3f;
  }
  local_e0 = Builtins::builtin((Builtins *)(lVar12 + 0x9e00),iVar15);
  if (*(int *)(local_e0 + 0x17) < 0) {
    uVar23 = Code::OffHeapInstructionStart((Code *)&local_e0);
  }
  else {
    uVar23 = local_e0 + 0x3f;
  }
  *(ulong *)(pFVar9 + 0x218) = uVar23;
  if (iVar6 == param_2) {
    uVar23 = JavaScriptFrame::context_register();
    *(undefined8 *)(pFVar9 + (uVar23 & 0xffffffff) * 8 + 0x10) = 0;
    local_f0 = Builtins::builtin((Builtins *)(lVar12 + 0x9e00),0x45);
    if (*(int *)(local_f0 + 0x17) < 0) {
      uVar23 = Code::OffHeapInstructionStart((Code *)&local_f0);
    }
    else {
      uVar23 = local_f0 + 0x3f;
    }
    *(ulong *)(pFVar9 + 0x238) = uVar23;
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

