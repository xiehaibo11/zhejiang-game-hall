
/* v8::internal::compiler::CodeGenerator::AssembleArchInstruction(v8::internal::compiler::Instruction*)
    */

undefined8 __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchInstruction
          (CodeGenerator *this,Instruction *param_1)

{
  TurboAssembler *pTVar1;
  char *pcVar2;
  Instruction IVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  UseScratchRegisterScope *this_00;
  ulong uVar13;
  Zone *this_01;
  OutOfLineCode *this_02;
  undefined8 *puVar14;
  Label *pLVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 in_x7;
  char cVar21;
  float fVar22;
  long lVar23;
  Instruction *pIVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  char *pcVar30;
  ulong uVar31;
  float fVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  Assembler *pAVar37;
  undefined *puVar38;
  FrameAccessState *this_03;
  CodeGenerator **ppCVar39;
  CodeGenerator CVar40;
  CodeGenerator *pCVar41;
  CodeGenerator *pCVar42;
  CodeGenerator *pCVar43;
  CodeGenerator *pCVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined4 local_1b0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  CodeGenerator *local_170;
  Instruction *local_168;
  CodeGenerator *local_160;
  undefined8 uStack_158;
  CodeGenerator *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined8 local_128;
  ulong local_120;
  undefined1 local_118;
  undefined8 local_110;
  int local_108;
  undefined4 local_f8;
  undefined3 uStack_f4;
  CodeGenerator *local_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined4 local_d8;
  undefined3 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  CodeGenerator *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  uVar8 = *(uint *)param_1;
  local_170 = this;
  local_168 = param_1;
  pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
  local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
  switch(uVar8 & 0x1ff) {
  case 0:
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) == 3) {
      uVar20 = InstructionOperandConverter::InputCode((InstructionOperandConverter *)&local_170,0);
      TurboAssembler::Call((TurboAssembler *)(this + 0xd0),uVar20,0);
    }
    else {
      (**(code **)(*(long *)(this + 0xd0) + 0x28))
                (this + 0xd0,
                 (long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                 0xffffffffU | 0x4000000000,0);
    }
    goto LAB_01615e10;
  case 1:
  case 2:
    if ((uVar8 & 0x1ff) == 1) {
      lVar27 = ((ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff) + (ulong)(byte)*(uint *)(param_1 + 4)
      ;
      AssemblePopArgumentsAdaptorFrame
                (this,0x4000000000,0,
                 *(long *)(param_1 + lVar27 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000,0,
                 *(long *)(param_1 + lVar27 * 8 + 0x30) >> 0x23 & 0xffffffffU | 0x4000000000,0,in_x7
                 ,*(long *)(param_1 + lVar27 * 8 + 0x38) >> 0x23 & 0xffffffffU | 0x4000000000,0);
    }
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) == 3) {
      uVar20 = InstructionOperandConverter::InputCode((InstructionOperandConverter *)&local_170,0);
      TurboAssembler::Jump((TurboAssembler *)(this + 0xd0),uVar20,0,0xe);
    }
    else {
      (**(code **)(*(long *)(this + 0xd0) + 0x30))
                (this + 0xd0,
                 (long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                 0xffffffffU | 0x4000000000,0);
    }
    goto LAB_01615f98;
  case 3:
    pCVar41 = (CodeGenerator *)
              (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
              0x4000000000);
    if (FLAG_debug_code != '\0') {
      local_140 = this + 0x268;
      uStack_138 = this + 0x278;
      pTVar1 = (TurboAssembler *)(this + 0xd0);
      uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
      uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
      local_128 = *(undefined8 *)(this + 0x278);
      uVar8 = UseScratchRegisterScope::AcquireNextAvailable(local_140);
      local_180 = (CodeGenerator *)0x400000003f;
      if (uVar8 != 0x3f) {
        local_180 = (CodeGenerator *)((ulong)uVar8 | 0x4000000000);
      }
      local_178 = local_178 & 0xffffffff00000000;
      iStack_bc = 2;
      uStack_c8._0_4_ = 0.0;
      uStack_c8._4_4_ = 0xffffffff;
      uStack_c0 = 0;
      local_b8 = 0xf;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0xffffffff;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_d0 = pCVar41;
      TurboAssembler::LoadTaggedPointerField(pTVar1,(Register *)&local_180,(MemOperand *)&local_d0);
      local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
      uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0;
      local_a8 = CONCAT31(local_a8._1_3_,0x13);
      local_a0 = local_180;
      local_98 = (int)local_178;
      uStack_94 = 0;
      uStack_90 = 0xffffffff;
      uStack_8c = 0;
      Assembler::cmp((Assembler *)pTVar1,(Register *)&DAT_01a563e8,(Operand *)&local_d0);
      TurboAssembler::Assert(pTVar1,0,0x35);
      UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_140);
    }
    iStack_bc = 2;
    uStack_c8._0_4_ = 0.0;
    uStack_c8._4_4_ = -1;
    uStack_c0 = 0;
    local_b8 = 0x17;
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0xffffffff;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_d0 = pCVar41;
    TurboAssembler::LoadTaggedPointerField
              ((TurboAssembler *)(this + 0xd0),(Register *)&DAT_01a563f4,(MemOperand *)&local_d0);
    (**(code **)(*(long *)(this + 0xd0) + 0x28))((TurboAssembler *)(this + 0xd0),0x4000000002,0);
    goto LAB_01615e10;
  case 4:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!instr->InputAt(0)->IsImmediate()");
    }
LAB_016110ac:
    TurboAssembler::Jump(this + 0xd0,(long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000,0,0xe);
    goto LAB_01615f98;
  case 5:
    goto switchD_01606750_caseD_5;
  case 6:
    *(uint *)(this + 0x3cc) = uVar8 >> 0x16;
    iVar10 = TurboAssembler::PushCallerSaved(this + 0xd0,uVar8 >> 0x16,0x4000000000,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    iVar33 = iVar10 + 7;
    if (-1 < iVar10) {
      iVar33 = iVar10;
    }
    *(int *)(*(long *)(this + 0x18) + 0xc) = *(int *)(*(long *)(this + 0x18) + 0xc) + (iVar33 >> 3);
    this[0x3c8] = (CodeGenerator)0x1;
    break;
  case 7:
    iVar10 = TurboAssembler::PopCallerSaved
                       (this + 0xd0,*(undefined4 *)(this + 0x3cc),0x4000000000,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    iVar33 = iVar10 + 7;
    if (-1 < iVar10) {
      iVar33 = iVar10;
    }
    *(int *)(*(long *)(this + 0x18) + 0xc) = *(int *)(*(long *)(this + 0x18) + 0xc) - (iVar33 >> 3);
    this[0x3c8] = (CodeGenerator)0x0;
    break;
  case 8:
    local_180 = (CodeGenerator *)0x0;
    if (*(int *)**(undefined8 **)(this + 0x20) == 3) {
      local_140 = (CodeGenerator *)0x4000000008;
      uStack_138._0_4_ = 0;
      TurboAssembler::Adr((TurboAssembler *)(this + 0xd0),&local_140,&local_180,0);
      local_d0 = (CodeGenerator *)0x400000001d;
      uStack_c8._0_4_ = 0.0;
      iStack_bc = 2;
      uStack_c8._4_4_ = -1;
      uStack_c0 = 0;
      local_b8 = -0x18;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0xffffffff;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      if ((uint)uStack_138 == 0) {
        uVar7 = 0xc0000000;
        if (local_140._4_4_ != 0x40) {
          uVar7 = 0x80000000;
        }
      }
      else {
        uVar19 = local_140._4_4_ - 8U >> 3 | local_140._4_4_ << 0x1d;
        if (uVar19 < 8) {
          uVar7 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar19 * 4);
        }
        else {
          uVar7 = 0x4800000;
        }
      }
      TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,uVar7);
    }
    uVar34 = *(ulong *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28);
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) == 3) {
      if ((uVar34 & 7) == 3) {
        if (((uint)uVar34 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        }
        else {
          puVar14 = (undefined8 *)
                    (*(long *)(*(long *)(local_170 + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
          uVar20 = puVar14[1];
          local_d0 = (CodeGenerator *)*puVar14;
          uStack_c8._0_4_ = (float)uVar20;
          uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        }
        uVar34 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      }
      else {
        plVar25 = (long *)(*(long *)(local_170 + 0x28) + 0x48);
        plVar36 = (long *)*plVar25;
        if (plVar36 == (long *)0x0) {
LAB_0161671c:
          plVar26 = plVar25;
        }
        else {
          plVar26 = plVar25;
          do {
            iVar33 = (int)(uVar34 >> 3);
            if (iVar33 <= (int)plVar36[4]) {
              plVar26 = plVar36;
            }
            plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
          } while (plVar36 != (long *)0x0);
          if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_0161671c;
        }
        uVar34 = plVar26[6];
      }
      uVar20 = ExternalReference::FromRawAddress(uVar34);
      TurboAssembler::CallCFunction(this + 0xd0,uVar20,uVar8 >> 0x16,0);
    }
    else {
      TurboAssembler::CallCFunction
                ((TurboAssembler *)(this + 0xd0),(long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000,0
                 ,uVar8 >> 0x16,0);
    }
    Assembler::bind((Label *)(this + 0xd0));
    RecordSafepoint(this,*(undefined8 *)(param_1 + 0x18),0);
    FrameAccessState::SetFrameAccessToDefault(*(FrameAccessState **)(this + 0x18));
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    *(undefined4 *)(*(long *)(this + 0x18) + 0xc) = 0;
    if (this[0x3c8] != (CodeGenerator)0x0) {
      iVar10 = TurboAssembler::RequiredStackSizeForCallerSaved
                         ((Label *)(this + 0xd0),*(undefined4 *)(this + 0x3cc),0x4000000000,0);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      iVar33 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar33 = iVar10;
      }
      *(int *)(*(long *)(this + 0x18) + 0xc) =
           *(int *)(*(long *)(this + 0x18) + 0xc) + (iVar33 >> 3);
    }
    break;
  case 9:
    lVar27 = *(long *)(this + 0x18);
    if (*(char *)(lVar27 + 0x10) != '\0') {
      local_d0 = (CodeGenerator *)0x400000001d;
      iStack_bc = 2;
      uStack_c8._0_4_ = 0.0;
      uStack_c8._4_4_ = 0xffffffff;
      uStack_c0 = 0;
      local_b8 = 8;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0xffffffff;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      TurboAssembler::LoadStoreMacro
                ((TurboAssembler *)(this + 0xd0),&DAT_01a56388,&local_d0,0xc0400000);
      local_d0 = (CodeGenerator *)0x400000001d;
      iStack_bc = 2;
      uStack_c8._0_4_ = 0.0;
      uStack_c8._4_4_ = -1;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0xffffffff;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      TurboAssembler::LoadStoreMacro
                ((TurboAssembler *)(this + 0xd0),&DAT_01a5637c,&local_d0,0xc0400000);
      lVar27 = *(long *)(this + 0x18);
    }
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    *(undefined1 *)(lVar27 + 8) = 0;
    break;
  case 10:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      lVar27 = (long)(int)(float)uStack_c8;
      if ((int)local_d0 != 0) {
        lVar27 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      }
      TurboAssembler::Call((TurboAssembler *)(this + 0xd0),lVar27,local_d0._4_4_);
    }
    else {
      TurboAssembler::Call(this + 0xd0,(long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000,0);
    }
    goto LAB_01615e10;
  case 0xb:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) != 3) goto LAB_016110ac;
    if (((uint)uVar34 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
    }
    else {
      puVar14 = (undefined8 *)
                (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
      uVar20 = puVar14[1];
      local_d0 = (CodeGenerator *)*puVar14;
      uStack_c8._0_4_ = (float)uVar20;
      uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    }
    lVar27 = (long)(int)(float)uStack_c8;
    if ((int)local_d0 != 0) {
      lVar27 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    }
    TurboAssembler::Jump(this + 0xd0,lVar27,local_d0._4_4_,0xe);
LAB_01615f98:
    this[0x79] = (CodeGenerator)0x1;
    *(undefined4 *)(*(long *)(this + 0x18) + 0xc) = 0;
    FrameAccessState::SetFrameAccessToDefault(*(FrameAccessState **)(this + 0x18));
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    break;
  case 0xc:
    (**(code **)(*(long *)(this + 0xd0) + 0x20))
              (this + 0xd0,
               *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000,0);
LAB_01615e10:
    RecordCallPosition(this,param_1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    *(undefined4 *)(*(long *)(this + 0x18) + 0xc) = 0;
    break;
  case 0xd:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar32 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar32 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01613c50:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01613c50;
      }
      fVar32 = *(float *)(plVar26 + 6);
    }
    uVar34 = IsNextInAssemblyOrder(this,fVar32);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    if ((uVar34 & 1) != 0) break;
    pLVar15 = (Label *)(*(long *)(this + 0xa8) + ((long)((ulong)(uint)fVar32 << 0x20) >> 0x1d));
    goto LAB_01615454;
  case 0xe:
    AssembleArchBinarySearchSwitch(this,param_1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    break;
  case 0xf:
    AssembleArchLookupSwitch(this,param_1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    break;
  case 0x10:
    AssembleArchTableSwitch(this,param_1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    break;
  case 0x12:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = Builtins::builtin_handle((Builtins *)(*(long *)(this + 0x10) + 0x9e00),0x95);
    TurboAssembler::Call((TurboAssembler *)(this + 0xd0),uVar20,0);
    this[0x260] = CVar40;
    Assembler::debug((Assembler *)(this + 0xd0),"kArchAbortCSAAssert",0,1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    this[0x79] = (CodeGenerator)0x1;
    break;
  case 0x13:
    Assembler::debug((Assembler *)(this + 0xd0),"kArchDebugBreak",0,1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    break;
  case 0x14:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      iVar33 = (int)local_d0;
      pcVar30 = (char *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01613b88:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01613b88;
      }
      pcVar30 = (char *)plVar26[6];
      iVar33 = (int)plVar26[5];
    }
    pcVar2 = (char *)(long)(int)pcVar30;
    if (iVar33 != 0) {
      pcVar2 = pcVar30;
    }
    AssemblerBase::RecordComment((AssemblerBase *)(this + 0xd0),pcVar2);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    break;
  case 0x15:
    this[0x79] = (CodeGenerator)0x1;
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x16:
    lVar27 = BuildTranslation(this,param_1,0xffffffff,0,0xffffffffffffffff);
    pLVar15 = (Label *)(lVar27 + 0x10);
LAB_01615454:
    Assembler::b((Assembler *)(this + 0xd0),pLVar15);
    Assembler::CheckVeneerPool((Assembler *)(this + 0xd0),false,false,0x400);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x17:
    AssembleReturn(this,(InstructionOperand *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28));
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x18:
    lVar27 = *(long *)(param_1 + 0x28);
    goto LAB_01615244;
  case 0x19:
    if (*(char *)(*(long *)(this + 0x18) + 0x10) != '\0') {
      local_d0 = (CodeGenerator *)0x400000001d;
      local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
      uStack_138._0_4_ = 0;
      iStack_bc = 2;
      uStack_c8._0_4_ = 0.0;
      uStack_c8._4_4_ = 0xffffffff;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0xffffffff;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      Assembler::ldr((CPURegister *)(this + 0xd0),(MemOperand *)&local_140);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    lVar27 = *(long *)(param_1 + 0x28);
LAB_01615244:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 0.0;
    Assembler::mov((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&DAT_01a5637c);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a:
    uVar20 = *(undefined8 *)(this + 8);
    uVar17 = *(undefined8 *)(this + 0x10);
    lVar27 = *(long *)(param_1 + 0x28);
    lVar29 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    uVar7 = DetermineStubCallMode(this);
    TurboAssembler::TruncateDoubleToI
              (this + 0xd0,uVar17,uVar20,lVar27 >> 0x23 & 0xffffffffU | 0x4000000000,0,
               lVar29 >> 0x23 & 0xffffffffU | 0x4000000000,0x100000001,uVar7);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1b:
    IVar3 = param_1[4];
    uVar34 = (ulong)(byte)IVar3;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    if ((uVar8 & 0x3e00) == 0x200) {
      uVar12 = *(ulong *)(param_1 + (ulong)((byte)IVar3 + 1) * 8 + 0x28);
      if ((uVar12 & 7) == 3) {
        if (((uint)uVar12 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        }
        else {
          puVar14 = (undefined8 *)
                    (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
          uVar20 = puVar14[1];
          local_d0 = (CodeGenerator *)*puVar14;
          uStack_c8._0_4_ = (float)uVar20;
          uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        }
        lVar29 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
        iVar33 = (int)local_d0;
        uVar34 = (ulong)(byte)local_168[4];
      }
      else {
        plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
        plVar36 = (long *)*plVar25;
        if (plVar36 == (long *)0x0) {
LAB_016156a8:
          plVar26 = plVar25;
        }
        else {
          plVar26 = plVar25;
          do {
            iVar33 = (int)(uVar12 >> 3);
            if (iVar33 <= (int)plVar36[4]) {
              plVar26 = plVar36;
            }
            plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
          } while (plVar36 != (long *)0x0);
          if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_016156a8;
        }
        lVar29 = plVar26[6];
        iVar33 = (int)plVar26[5];
      }
      uVar19 = 0;
      uVar12 = 0xffffffff;
      lVar27 = (long)(int)lVar29;
      if (iVar33 != 0) {
        lVar27 = lVar29;
      }
      local_160._0_7_ = SUB87(local_d0,0);
      iVar33 = 2;
    }
    else {
      lVar27 = 0;
      iVar33 = 0;
      uVar19 = 0x40;
      uVar12 = *(long *)(param_1 + (ulong)((byte)IVar3 + 1) * 8 + 0x28) >> 0x23;
    }
    uStack_188 = uStack_188 & 0xffffffff00000000;
    local_190 = (CodeGenerator *)
                (*(long *)(local_168 + (ulong)((int)uVar34 + 2) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    this_01 = *(Zone **)(this + 8);
    this_02 = *(OutOfLineCode **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_02) < 0xb0) {
      this_02 = (OutOfLineCode *)Zone::NewExpand(this_01,0xb0);
      local_1b0 = (int)uStack_188;
    }
    else {
      local_1b0 = 0;
      *(OutOfLineCode **)(this_01 + 0x10) = this_02 + 0xb0;
    }
    pCVar42 = local_180;
    pCVar41 = local_190;
    uStack_d4 = (undefined3)((ulong)local_150 >> 0x20);
    uVar7 = (int)local_178;
    uStack_e8 = (undefined7)CONCAT44(uStack_138._4_4_,(uint)uStack_138);
    local_f0 = local_140;
    uStack_e1 = uStack_138._7_1_;
    uStack_e0 = uStack_130;
    uStack_f4 = (undefined3)((ulong)local_160 >> 0x20);
    uVar34 = uVar12 & 0xffffff8000000000 | uVar12 & 0xffffffff | (ulong)uVar19 << 0x20;
    local_f8 = local_160._0_4_;
    local_d8 = local_150._0_4_;
    uVar9 = DetermineStubCallMode(this);
    OutOfLineCode::OutOfLineCode(this_02,this);
    *(CodeGenerator **)(this_02 + 0x30) = pCVar42;
    *(undefined4 *)(this_02 + 0x38) = uVar7;
    this_02[0x40] = (OutOfLineCode)0x0;
    *(undefined ***)this_02 = &PTR__OutOfLineCode_01cca5a8;
    this_02[0x48] = (OutOfLineCode)0x0;
    *(uint *)(this_02 + 0x44) = CONCAT31(uStack_d4,local_d8._3_1_);
    *(undefined4 *)(this_02 + 0x41) = local_d8;
    this_02[0x68] = (OutOfLineCode)0x13;
    *(ulong *)(this_02 + 0x58) = CONCAT71(uStack_e0,uStack_e1);
    *(long *)(this_02 + 0x60) = lVar27;
    *(ulong *)(this_02 + 0x51) = CONCAT17(uStack_e1,uStack_e8);
    *(CodeGenerator **)(this_02 + 0x49) = local_f0;
    *(undefined4 *)(this_02 + 0x90) = local_1b0;
    uVar20 = 0xffffffff00000000;
    *(ulong *)(this_02 + 0x70) = uVar34;
    *(uint *)(this_02 + 0x94) = uVar8 >> 0x16;
    *(int *)(this_02 + 0x78) = iVar33;
    *(undefined8 *)(this_02 + 0x7c) = 0xffffffff00000000;
    *(undefined4 *)(this_02 + 0x84) = 0;
    *(CodeGenerator **)(this_02 + 0x88) = pCVar41;
    *(undefined4 *)(this_02 + 0x98) = uVar9;
    *(uint *)(this_02 + 0x6c) = CONCAT31(uStack_f4,local_f8._3_1_);
    *(undefined4 *)(this_02 + 0x69) = local_f8;
    bVar4 = *(byte *)(*(long *)(this + 0x18) + 0x10);
    *(CodeGenerator **)(this_02 + 0xa0) = this + 0x30;
    this_02[0x9c] = (OutOfLineCode)(bVar4 ^ 1);
    *(undefined8 *)(this_02 + 0xa8) = *(undefined8 *)(this + 8);
    iStack_bc = 2;
    local_d0 = local_180;
    uStack_c8._0_4_ = (float)(int)local_178;
    uStack_c8._4_4_ = -1;
    uStack_c0 = 0;
    local_b0._0_4_ = 0;
    if ((int)uVar12 == -1) {
      if ((uVar19 != 0) || (iVar33 != 2)) {
        uVar20 = 0xffffffffffffffff;
        goto LAB_01616ac8;
      }
    }
    else {
LAB_01616ac8:
      uStack_c0 = (undefined4)(uVar34 >> 0x20);
      local_a4 = 0;
      lVar27 = 0;
      local_b0._4_4_ = (int)uVar20;
      local_a8 = (undefined4)((ulong)uVar20 >> 0x20);
      uStack_c8._4_4_ = (int)uVar12;
      iStack_bc = iVar33;
    }
    local_b8 = lVar27;
    TurboAssembler::StoreTaggedField
              ((TurboAssembler *)(this + 0xd0),(Register *)&local_190,(MemOperand *)&local_d0);
    TurboAssembler::CheckPageFlag((TurboAssembler *)(this + 0xd0),&local_180,4,0,this_02 + 8);
    goto LAB_0160e254;
  case 0x1c:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    this_03 = *(FrameAccessState **)(this + 0x18);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar32 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar32 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01613f38:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01613f38;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar8 = FrameAccessState::GetFrameOffset(this_03,(int)fVar32);
    puVar14 = &DAT_01a5637c;
    if ((uVar8 & 1) != 0) {
      puVar14 = &DAT_01a56370;
    }
    local_180 = (CodeGenerator *)*puVar14;
    local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(puVar14 + 1));
    local_118 = 0x13;
    local_120 = (long)(int)uVar8 & 0xfffffffffffffffe;
    local_190 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_140 = (CodeGenerator *)((ulong)local_140 & 0xffffffffffffff00);
    uStack_138._0_4_ = (uint)uStack_138 & 0xffffff00;
    local_110 = 0xffffffff;
    local_108 = 2;
    if ((-1 < (long)(int)uVar8) || (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) == 0))
    {
      puVar14 = &local_190;
      puVar16 = &local_180;
LAB_01616538:
      puVar18 = &local_140;
LAB_0161653c:
      uVar20 = 0;
      goto LAB_01616544;
    }
    puVar14 = &local_190;
    puVar16 = &local_180;
LAB_0161578c:
    local_b0 = -local_120;
    local_98 = 2;
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    puVar18 = &local_d0;
LAB_01616494:
    uVar17 = 0x40000000;
    uVar20 = 0;
    goto LAB_01616548;
  case 0x1d:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_a0 = (CodeGenerator *)0x4000000017;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    puVar14 = &local_180;
    goto LAB_01611ff0;
  case 0x1e:
    local_140 = (CodeGenerator *)0x400000003f;
    uStack_138._0_4_ = 0;
    uVar34 = ShouldApplyOffsetToStackCheck(this,param_1,(uint *)&local_180);
    puVar38 = &DAT_01a5640c;
    if ((uVar34 & 1) != 0) {
      local_b0._0_4_ = (uint)local_180;
      local_b0._4_4_ = 0;
      local_a0 = (CodeGenerator *)0xffffffff;
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                            (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU
                  | 0x4000000000);
      local_a8 = CONCAT31(local_a8._1_3_,0x13);
      uStack_138._0_4_ = 0;
      local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
      uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
      local_98 = 2;
      TurboAssembler::AddSubMacro
                ((TurboAssembler *)(this + 0xd0),&local_140,&DAT_01a56370,&local_d0,0,0x40000000);
      if (local_140._4_4_ != 0x40) {
        puVar38 = &DAT_01a56424;
      }
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_a0 = (CodeGenerator *)
               (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),puVar38,&local_140,&local_d0,1,0x40000000);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1f:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar34 = GetStackCheckOffset(this);
    TurboAssembler::Move
              (this + 0xd0,lVar27 >> 0x23 & 0xffffffffU | 0x4000000000,0,
               -(uVar34 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar34 & 0xffffffff) << 1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x20:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldarb((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    goto LAB_01610eb4;
  case 0x21:
  case 0x1c0:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldarb((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x22:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldarh((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    goto LAB_01613434;
  case 0x23:
  case 0x1c1:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldarh((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x24:
  case 0x1c2:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    goto LAB_0160eb20;
  case 0x25:
  case 0x1c4:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlrb((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x26:
  case 0x1c5:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlrh((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x27:
  case 0x1c6:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                 0x2000000000);
    }
    goto LAB_0160dd14;
  case 0x28:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uVar34 = 0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)uVar34;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)uVar34;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)uVar34;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    lVar27 = *(long *)(local_168 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30);
    goto LAB_01610e8c;
  case 0x29:
  case 0x1dc:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    goto LAB_0160dfc4;
  case 0x2a:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uVar34 = 0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)uVar34;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)uVar34;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)uVar34;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    lVar27 = *(long *)(local_168 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30);
    goto LAB_0161340c;
  case 0x2b:
  case 0x1dd:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    goto LAB_0160dfc4;
  case 0x2c:
  case 0x1de:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    local_d0 = pCVar41;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(pIVar24 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    local_140 = pCVar41;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    goto LAB_0160df90;
  case 0x2d:
    local_190 = (CodeGenerator *)0x0;
    local_150 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8 + 0x10);
    local_a0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pLVar15,&DAT_01a56424,&local_140,&local_d0,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)pLVar15,&local_150,1);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    TurboAssembler::Cbnz((TurboAssembler *)pLVar15,(Register *)&local_d0,(Label *)&local_190);
    Assembler::bind(pLVar15);
    goto LAB_01610eb4;
  case 0x2e:
  case 0x1e0:
    local_190 = (CodeGenerator *)0x0;
    local_150 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8 + 0x10);
    local_a0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pLVar15,&DAT_01a56424,&local_140,&local_d0,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)pLVar15,&local_150,1);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    goto LAB_0160e20c;
  case 0x2f:
    local_190 = (CodeGenerator *)0x0;
    local_150 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8 + 0x10);
    local_a0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 1;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pLVar15,&DAT_01a56424,&local_140,&local_d0,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)pLVar15,&local_150,1);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    TurboAssembler::Cbnz((TurboAssembler *)pLVar15,(Register *)&local_d0,(Label *)&local_190);
    Assembler::bind(pLVar15);
    goto LAB_01613434;
  case 0x30:
  case 0x1e1:
    local_190 = (CodeGenerator *)0x0;
    local_150 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8 + 0x10);
    local_a0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 1;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pLVar15,&DAT_01a56424,&local_140,&local_d0,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)pLVar15,&local_150,1);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x40) >> 0x23 & 0xffffffffU
                  | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    goto LAB_0160e20c;
  case 0x31:
  case 0x1e2:
    local_190 = (CodeGenerator *)0x0;
    local_150 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8 + 0x10);
    local_a0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 2;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pLVar15,&DAT_01a56424,&local_140,&local_d0,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)pLVar15,&local_150,1);
    pIVar24 = local_168 + 0x28;
    local_d0 = pCVar41;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(pIVar24 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    local_140 = pCVar41;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x18) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x18) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    goto LAB_0160e1d8;
  case 0x32:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
    uVar20 = 0;
    goto LAB_0160c3fc;
  case 0x33:
  case 0x1c8:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
    uVar20 = 0;
    goto LAB_016075f4;
  case 0x34:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
    uVar20 = 0;
    goto LAB_016132f8;
  case 0x35:
  case 0x1c9:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
    uVar20 = 0;
    goto LAB_01608940;
  case 0x36:
  case 0x1ca:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
    uVar20 = 0;
    goto LAB_01608700;
  case 0x37:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    uVar20 = 0x40000000;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
LAB_0160c3fc:
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,uVar20);
LAB_01610dc8:
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrb((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    lVar27 = *(long *)(local_168 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38);
LAB_01610e8c:
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_c8._0_4_ = 0.0;
    TurboAssembler::Cbnz((TurboAssembler *)(this + 0xd0),(Register *)&local_d0,(Label *)&local_190);
LAB_01610eb4:
    lVar27 = *(long *)(local_168 + 0x28);
    iVar33 = 7;
LAB_01613450:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
LAB_01613474:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    Assembler::sbfm((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,0,iVar33
                   );
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x38:
  case 0x1cc:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    uVar20 = 0x40000000;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
LAB_016075f4:
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,uVar20);
LAB_01608e88:
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrb((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
LAB_0160e958:
    lVar27 = *(long *)(local_168 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38);
    goto LAB_0160e974;
  case 0x39:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    uVar20 = 0x40000000;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
LAB_016132f8:
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,uVar20);
LAB_01613348:
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrh((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    lVar27 = *(long *)(local_168 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38);
LAB_0161340c:
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_c8._0_4_ = 0.0;
    TurboAssembler::Cbnz((TurboAssembler *)(this + 0xd0),(Register *)&local_d0,(Label *)&local_190);
LAB_01613434:
    lVar27 = *(long *)(local_168 + 0x28);
    iVar33 = 0xf;
    goto LAB_01613450;
  case 0x3a:
  case 0x1cd:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    uVar20 = 0x40000000;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
LAB_01608940:
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,uVar20);
LAB_01608990:
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x38) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlxrh((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180);
    goto LAB_0160e958;
  case 0x3b:
  case 0x1ce:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    uVar20 = 0x40000000;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(local_168 + 0x28);
LAB_01608700:
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,uVar20);
LAB_01608750:
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x10) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(pIVar24 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x10) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
LAB_0160e924:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::stlxr((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                     (Register *)&local_180);
    goto LAB_0160e958;
  case 0x3c:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar20 = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_180 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_a0 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    goto LAB_01610dc4;
  case 0x3d:
  case 0x1d0:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar20 = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_180 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_a0 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    goto LAB_01608e84;
  case 0x3e:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0);
    goto LAB_01613348;
  case 0x3f:
  case 0x1d1:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0);
    goto LAB_01608990;
  case 0x40:
  case 0x1d2:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    pCVar41 = (CodeGenerator *)0x200000003f;
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                            (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = pCVar41;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0);
    goto LAB_01608750;
  case 0x41:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x20000000;
    goto LAB_01610d38;
  case 0x42:
  case 0x1d4:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x20000000;
    goto LAB_01608df8;
  case 0x43:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x20000000;
    goto LAB_0160b500;
  case 0x44:
  case 0x1d5:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x20000000;
    goto LAB_01607e9c;
  case 0x45:
  case 0x1d6:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x20000000;
    goto LAB_016073e4;
  case 0x46:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x40000000;
LAB_01610d38:
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30
                       ) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30) >>
                   0x23 & 0xffffffffU | 0x2000000000);
    }
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
LAB_01610dc4:
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_8c = 0;
    uStack_90 = 0xffffffff;
    uStack_94 = 0;
    local_98 = 0;
    local_b0._4_4_ = 0;
    local_b0._0_4_ = 0;
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,uVar20);
    goto LAB_01610dc8;
  case 0x47:
  case 0x1d8:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrb((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x40000000;
LAB_01608df8:
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30
                       ) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30) >>
                   0x23 & 0xffffffffU | 0x2000000000);
    }
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
LAB_01608e84:
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_8c = 0;
    uStack_90 = 0xffffffff;
    uStack_94 = 0;
    local_98 = 0;
    local_b0._4_4_ = 0;
    local_b0._0_4_ = 0;
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,uVar20);
    goto LAB_01608e88;
  case 0x48:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x40000000;
LAB_0160b500:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30
                       ) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30) >>
                   0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,uVar20);
    goto LAB_01613348;
  case 0x49:
  case 0x1d9:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxrh((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x40000000;
LAB_01607e9c:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30
                       ) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30) >>
                   0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,uVar20);
    goto LAB_01608990;
  case 0x4a:
  case 0x1da:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    lVar27 = *(long *)(local_168 + 0x28);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x40000000;
LAB_016073e4:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30
                       ) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 +
                            (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30) >>
                   0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU
                 | 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,uVar20);
    goto LAB_01608750;
  case 0x4b:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_acos_function();
    goto LAB_01613160;
  case 0x4c:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_acosh_function();
    goto LAB_01613160;
  case 0x4d:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_asin_function();
    goto LAB_01613160;
  case 0x4e:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_asinh_function();
    goto LAB_01613160;
  case 0x4f:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_atan_function();
    goto LAB_01613160;
  case 0x50:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_atanh_function();
    goto LAB_01613160;
  case 0x51:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_atan2_function();
    goto LAB_016125ec;
  case 0x52:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_cbrt_function();
    goto LAB_01613160;
  case 0x53:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_cos_function();
    goto LAB_01613160;
  case 0x54:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_cosh_function();
    goto LAB_01613160;
  case 0x55:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_exp_function();
    goto LAB_01613160;
  case 0x56:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_expm1_function();
    goto LAB_01613160;
  case 0x57:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_log_function();
    goto LAB_01613160;
  case 0x58:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_log1p_function();
    goto LAB_01613160;
  case 0x59:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_log10_function();
    goto LAB_01613160;
  case 0x5a:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_log2_function();
    goto LAB_01613160;
  case 0x5b:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_pow_function();
    goto LAB_016125ec;
  case 0x5c:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_sin_function();
    goto LAB_01613160;
  case 0x5d:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_sinh_function();
    goto LAB_01613160;
  case 0x5e:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_tan_function();
    goto LAB_01613160;
  case 0x5f:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::ieee754_tanh_function();
LAB_01613160:
    uVar17 = 1;
LAB_01613168:
    TurboAssembler::CallCFunction(this + 0xd0,uVar20,0,uVar17);
    this[0x260] = CVar40;
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x60:
    local_190 = (CodeGenerator *)0x400000001f;
    if ((uVar8 & 0x1c000) == 0) {
      local_178 = (ulong)local_178._4_4_ << 0x20;
      local_180 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
      uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
      uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
      if ((uVar34 & 7) != 3) {
        local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
      }
      Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
LAB_0161651c:
      if ((((((int)local_110 != -1) || (local_110._4_4_ != 0)) || (local_108 != 2)) ||
          ((local_140._0_1_ != (Register)0x0 || (-1 < (long)local_120)))) ||
         (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) == 0)) {
        puVar14 = &local_180;
        puVar16 = &local_190;
        goto LAB_01616538;
      }
      puVar14 = &local_180;
      puVar16 = &local_190;
      goto LAB_0161578c;
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    if ((uVar34 & 7) != 3) {
      local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    goto LAB_016153cc;
  case 0x61:
    if ((uVar8 & 0x1c000) == 0) {
      lVar27 = *(long *)(param_1 + 0x28);
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      local_178 = (ulong)local_178._4_4_ << 0x20;
      uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
      if ((uVar34 & 7) == 3) {
        local_190 = (CodeGenerator *)0x200000001f;
      }
      else {
        local_190 = (CodeGenerator *)0x200000003f;
        if ((int)((long)uVar34 >> 0x23) != 0x3f) {
          local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
        }
      }
      uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
      Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
      goto LAB_0161651c;
    }
    lVar27 = *(long *)(param_1 + 0x28);
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_190 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_190 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_016153cc:
    if ((((int)local_110 == -1) && (local_110._4_4_ == 0)) &&
       ((local_108 == 2 &&
        (((local_140._0_1_ == (Register)0x0 && ((long)local_120 < 0)) &&
         (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) != 0)))))) {
      puVar14 = &local_180;
      puVar16 = &local_190;
LAB_01616798:
      local_b0 = -local_120;
      local_98 = 2;
      local_a0 = (CodeGenerator *)&DAT_ffffffff;
      local_a8 = CONCAT31(local_a8._1_3_,0x13);
      uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
      local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
      puVar18 = &local_d0;
LAB_01615350:
      uVar20 = 1;
      uVar17 = 0x40000000;
    }
    else {
      puVar14 = &local_180;
      puVar16 = &local_190;
LAB_016153e8:
      puVar18 = &local_140;
LAB_016153ec:
      uVar20 = 1;
LAB_01616544:
      uVar17 = 0;
    }
LAB_01616548:
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),puVar14,puVar16,puVar18,uVar20,uVar17);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    break;
  case 0x62:
    local_180 = (CodeGenerator *)0x400000001f;
    if ((uVar8 & 0x1c000) == 0) {
      uStack_138._0_4_ = 0;
      local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
      uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
      local_178 = (ulong)local_178._4_4_ << 0x20;
      if ((uVar34 & 7) != 3) {
        local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
      }
      Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
      goto LAB_016164cc;
    }
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    if ((uVar34 & 7) != 3) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
LAB_01615388:
    puVar14 = &local_140;
    puVar16 = &local_180;
    goto LAB_01615390;
  case 99:
    if ((uVar8 & 0x1c000) != 0) {
      lVar27 = *(long *)(param_1 + 0x28);
      local_140 = (CodeGenerator *)0x200000003f;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      uStack_138._0_4_ = 0;
      uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
      if ((uVar34 & 7) == 3) {
        local_180 = (CodeGenerator *)0x200000001f;
      }
      else {
        local_180 = (CodeGenerator *)0x200000003f;
        if ((int)((long)uVar34 >> 0x23) != 0x3f) {
          local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
        }
      }
      local_178 = (ulong)local_178._4_4_ << 0x20;
      Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
      goto LAB_01615388;
    }
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_180 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_016164cc:
    puVar14 = &local_180;
    goto LAB_01611ff0;
  case 100:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x400000001f;
    if ((uVar34 & 7) != 3) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    goto LAB_01613e60;
  case 0x65:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_180 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_01613e60:
    puVar14 = &local_140;
    puVar16 = &local_180;
    uVar20 = 0x200000;
LAB_01615398:
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),puVar14,puVar16,&local_d0,uVar20);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x66:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_0160f65c;
  case 0x67:
    lVar27 = *(long *)(param_1 + 0x28);
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
LAB_0160f65c:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    Assembler::clz((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x68:
    local_180 = (CodeGenerator *)0x400000001f;
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) != 3) {
      local_180 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    if (((((int)local_110 != -1) || (local_110._4_4_ != 0)) ||
        ((local_108 != 2 || ((local_140._0_1_ != (Register)0x0 || (-1 < (long)local_120)))))) ||
       (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) == 0)) {
      puVar14 = (undefined8 *)&DAT_01a5640c;
      puVar16 = &local_180;
      goto LAB_0161534c;
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_b0 = -local_120;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    puVar14 = (undefined8 *)&DAT_01a5640c;
    puVar16 = &local_180;
    puVar18 = &local_d0;
    goto LAB_016153ec;
  case 0x69:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      pCVar41 = (CodeGenerator *)0x200000001f;
    }
    else {
      pCVar41 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        pCVar41 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = pCVar41;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
    puVar14 = (undefined8 *)&DAT_01a5640c;
    if ((ulong)pCVar41 >> 0x20 != 0x40) {
      puVar14 = (undefined8 *)&DAT_01a56424;
    }
    if ((((int)local_110 == -1) && (local_110._4_4_ == 0)) &&
       ((local_108 == 2 &&
        (((local_140._0_1_ == (Register)0x0 && ((long)local_120 < 0)) &&
         (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) != 0)))))) {
      local_a8 = CONCAT31(local_a8._1_3_,0x13);
      local_a0 = (CodeGenerator *)&DAT_ffffffff;
      local_98 = 2;
      local_b0 = -local_120;
      local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
      uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
      puVar18 = &local_d0;
LAB_01614d18:
      puVar16 = &local_180;
      uVar20 = 1;
      goto LAB_01616544;
    }
    puVar18 = &local_140;
    goto LAB_016145b4;
  case 0x6a:
    local_180 = (CodeGenerator *)0x400000001f;
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) != 3) {
      local_180 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    if (((((int)local_110 != -1) || (local_110._4_4_ != 0)) || (local_108 != 2)) ||
       (((local_140._0_1_ != (Register)0x0 || (-1 < (long)local_120)) ||
        (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) == 0)))) {
      puVar14 = (undefined8 *)&DAT_01a5640c;
      puVar16 = &local_180;
      goto LAB_016153e8;
    }
    puVar14 = (undefined8 *)&DAT_01a5640c;
    puVar16 = &local_180;
    goto LAB_01616798;
  case 0x6b:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      pCVar41 = (CodeGenerator *)0x200000001f;
    }
    else {
      pCVar41 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        pCVar41 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = pCVar41;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
    puVar14 = (undefined8 *)&DAT_01a5640c;
    if ((ulong)pCVar41 >> 0x20 != 0x40) {
      puVar14 = (undefined8 *)&DAT_01a56424;
    }
    if ((((int)local_110 != -1) || (local_110._4_4_ != 0)) ||
       (((local_108 != 2 || ((local_140._0_1_ != (Register)0x0 || (-1 < (long)local_120)))) ||
        (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) == 0)))) {
      puVar18 = &local_140;
      goto LAB_01614d18;
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    local_b0 = -local_120;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    puVar18 = &local_d0;
LAB_016145b4:
    puVar16 = &local_180;
    uVar20 = 1;
    uVar17 = 0x40000000;
    goto LAB_01616548;
  case 0x6c:
    local_140 = (CodeGenerator *)0x400000001f;
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) != 3) {
      local_140 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    puVar14 = (undefined8 *)&DAT_01a5640c;
    goto LAB_01614548;
  case 0x6d:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      pCVar41 = (CodeGenerator *)0x200000001f;
    }
    else {
      pCVar41 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        pCVar41 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
    puVar14 = (undefined8 *)&DAT_01a5640c;
    if ((ulong)pCVar41 >> 0x20 != 0x40) {
      puVar14 = (undefined8 *)&DAT_01a56424;
    }
LAB_01614548:
    puVar16 = &local_140;
LAB_01615390:
    uVar20 = 0x60000000;
    goto LAB_01615398;
  case 0x6e:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x400000001f;
    if ((uVar34 & 7) != 3) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    goto LAB_01613fb4;
  case 0x6f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_180 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_01613fb4:
    puVar14 = &local_140;
    puVar16 = &local_180;
    uVar20 = 0x20000000;
    goto LAB_01615398;
  case 0x70:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x400000001f;
    if ((uVar34 & 7) != 3) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    goto LAB_016150ec;
  case 0x71:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_180 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_016150ec:
    puVar14 = &local_140;
    puVar16 = &local_180;
    uVar20 = 0x20200000;
    goto LAB_01615398;
  case 0x72:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x400000001f;
    if ((uVar34 & 7) != 3) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    goto LAB_01613ec8;
  case 0x73:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_180 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_01613ec8:
    puVar14 = &local_140;
    puVar16 = &local_180;
    uVar20 = 0x40000000;
    goto LAB_01615398;
  case 0x74:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x400000001f;
    if ((uVar34 & 7) != 3) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    goto LAB_016150b0;
  case 0x75:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_180 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_016150b0:
    puVar14 = &local_140;
    puVar16 = &local_180;
    uVar20 = 0x40200000;
    goto LAB_01615398;
  case 0x76:
    if ((uVar8 & 0x1c000) == 0) {
      local_178 = (ulong)local_178._4_4_ << 0x20;
      local_180 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
      uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
      uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
      local_190 = (CodeGenerator *)0x400000001f;
      if ((uVar34 & 7) != 3) {
        local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
      }
      Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
LAB_01616474:
      if ((((((int)local_110 == -1) && (local_110._4_4_ == 0)) && (local_108 == 2)) &&
          ((local_140._0_1_ == (Register)0x0 && ((long)local_120 < 0)))) &&
         (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) != 0)) {
        local_a8 = CONCAT31(local_a8._1_3_,0x13);
        local_a0 = (CodeGenerator *)&DAT_ffffffff;
        local_98 = 2;
        local_b0 = -local_120;
        local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
        uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
        puVar14 = &local_180;
        puVar16 = &local_190;
        puVar18 = &local_d0;
        goto LAB_0161653c;
      }
      puVar14 = &local_180;
      puVar16 = &local_190;
      puVar18 = &local_140;
      goto LAB_01616494;
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_190 = (CodeGenerator *)0x400000001f;
    if ((uVar34 & 7) != 3) {
      local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    }
    Arm64OperandConverter::InputOperand2_64((ulong)&local_170);
    goto LAB_01615330;
  case 0x77:
    if ((uVar8 & 0x1c000) == 0) {
      lVar27 = *(long *)(param_1 + 0x28);
      local_180 = (CodeGenerator *)0x200000003f;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      local_178 = (ulong)local_178._4_4_ << 0x20;
      uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
      if ((uVar34 & 7) == 3) {
        local_190 = (CodeGenerator *)0x200000001f;
      }
      else {
        local_190 = (CodeGenerator *)0x200000003f;
        if ((int)((long)uVar34 >> 0x23) != 0x3f) {
          local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
        }
      }
      uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
      Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
      goto LAB_01616474;
    }
    lVar27 = *(long *)(param_1 + 0x28);
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((uVar34 & 7) == 3) {
      local_190 = (CodeGenerator *)0x200000001f;
    }
    else {
      local_190 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        local_190 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    Arm64OperandConverter::InputOperand2_32((ulong)&local_170);
LAB_01615330:
    if ((((int)local_110 == -1) && (local_110._4_4_ == 0)) &&
       ((local_108 == 2 &&
        (((local_140._0_1_ == (Register)0x0 && ((long)local_120 < 0)) &&
         (uVar34 = Assembler::IsImmAddSub(-local_120), (uVar34 & 1) != 0)))))) {
      local_a8 = CONCAT31(local_a8._1_3_,0x13);
      local_a0 = (CodeGenerator *)&DAT_ffffffff;
      local_98 = 2;
      local_b0 = -local_120;
      local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
      uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
      puVar14 = &local_180;
      puVar16 = &local_190;
      puVar18 = &local_d0;
      goto LAB_016153ec;
    }
    puVar14 = &local_180;
    puVar16 = &local_190;
LAB_0161534c:
    puVar18 = &local_140;
    goto LAB_01615350;
  case 0x78:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_01611bd8;
  case 0x79:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    local_d0 = local_180;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_140 = local_180;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_01611bd8:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::mul((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                   (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x7a:
    pIVar24 = param_1 + 0x28;
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::smull((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                     (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x7b:
    pIVar24 = param_1 + 0x28;
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::umaddl((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_180,(Register *)&DAT_01a5640c);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x7c:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)IVar3 * 8) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_190 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_01611b4c;
  case 0x7d:
    pIVar24 = param_1 + 0x28;
    local_190 = (CodeGenerator *)0x200000003f;
    local_d0 = local_190;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    IVar3 = param_1[4];
    local_140 = local_190;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)IVar3 * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)IVar3 * 8) >> 0x23 & 0xffffffffU | 0x2000000000)
      ;
    }
    local_180 = local_190;
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_01611b4c:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    Assembler::madd((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180,(Register *)&local_190);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x7e:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)IVar3 * 8) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_190 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_016121d8;
  case 0x7f:
    pIVar24 = param_1 + 0x28;
    local_190 = (CodeGenerator *)0x200000003f;
    local_d0 = local_190;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    IVar3 = param_1[4];
    local_140 = local_190;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)IVar3 * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)IVar3 * 8) >> 0x23 & 0xffffffffU | 0x2000000000)
      ;
    }
    local_180 = local_190;
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_016121d8:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    Assembler::msub((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180,(Register *)&local_190);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x80:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_0160d07c;
  case 0x81:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    local_d0 = local_180;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_140 = local_180;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_0160d07c:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    Assembler::mneg((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x82:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_01611020;
  case 0x83:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    local_d0 = local_180;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_140 = local_180;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_01611020:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    Assembler::sdiv((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x84:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_01612f90;
  case 0x85:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    local_d0 = local_180;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_140 = local_180;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_01612f90:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::udiv((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x86:
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar8 = UseScratchRegisterScope::AcquireNextAvailable(local_d0);
    local_140 = (CodeGenerator *)0x400000003f;
    if (uVar8 != 0x3f) {
      local_140 = (CodeGenerator *)((ulong)uVar8 | 0x4000000000);
    }
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_190 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x4000000000);
    uStack_188 = uStack_188 & 0xffffffff00000000;
    Assembler::sdiv((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,
                    (Register *)&local_190);
    goto LAB_0161287c;
  case 0x87:
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar8 = UseScratchRegisterScope::AcquireNextAvailable(local_d0);
    local_190 = (CodeGenerator *)0x200000003f;
    local_140 = local_190;
    if (uVar8 != 0x3f) {
      local_140 = (CodeGenerator *)((ulong)uVar8 | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = local_190;
    if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = uStack_188 & 0xffffffff00000000;
    Assembler::sdiv((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,
                    (Register *)&local_190);
    goto LAB_01612774;
  case 0x88:
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar8 = UseScratchRegisterScope::AcquireNextAvailable(local_d0);
    local_140 = (CodeGenerator *)0x400000003f;
    if (uVar8 != 0x3f) {
      local_140 = (CodeGenerator *)((ulong)uVar8 | 0x4000000000);
    }
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_190 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x4000000000);
    uStack_188 = uStack_188 & 0xffffffff00000000;
    Assembler::udiv((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,
                    (Register *)&local_190);
LAB_0161287c:
    pIVar24 = local_168 + 0x28;
    local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_190 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_150 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
LAB_016128cc:
    local_178 = local_178 & 0xffffffff00000000;
    uStack_188 = uStack_188 & 0xffffffff00000000;
    uStack_148 = (ulong)uStack_148._4_4_ << 0x20;
    Assembler::msub((Assembler *)(this + 0xd0),(Register *)&local_180,(Register *)&local_140,
                    (Register *)&local_190,(Register *)&local_150);
    this_00 = (UseScratchRegisterScope *)&local_d0;
LAB_01614788:
    UseScratchRegisterScope::~UseScratchRegisterScope(this_00);
    pCVar41 = uStack_c8;
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x89:
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar8 = UseScratchRegisterScope::AcquireNextAvailable(local_d0);
    local_190 = (CodeGenerator *)0x200000003f;
    local_140 = local_190;
    if (uVar8 != 0x3f) {
      local_140 = (CodeGenerator *)((ulong)uVar8 | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = local_190;
    if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    if ((int)(*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = uStack_188 & 0xffffffff00000000;
    Assembler::udiv((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,
                    (Register *)&local_190);
LAB_01612774:
    pIVar24 = local_168 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 8) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    local_150 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8) >> 0x23) != 0x3f) {
      local_150 = (CodeGenerator *)
                  (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    goto LAB_016128cc;
  case 0x8a:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if (((uVar34 & 0x1c) == 4) && (((uint)(uVar34 >> 5) & 0xff) < 0xb)) {
      local_a0 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
      local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
      uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0;
      local_a8 = CONCAT31(local_a8._1_3_,0x13);
      uStack_90 = 0xffffffff;
      uStack_8c = 0;
      local_98 = 0;
      uStack_94 = 0;
    }
    else {
LAB_01612ecc:
      uStack_138._0_4_ = 0;
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
    }
    goto LAB_01612ed8;
  case 0x8b:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = *(ulong *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) goto LAB_01612ecc;
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)((long)uVar34 >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
LAB_01612ed8:
    TurboAssembler::Mvn((TurboAssembler *)(this + 0xd0),(Register *)&local_140,(Operand *)&local_d0)
    ;
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x8c:
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000)
      ;
      uVar8 = -(uint)local_b0 & 0x3f;
      uVar19 = ~(uint)local_b0 & 0x3f;
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU
                  | 0x4000000000);
LAB_01614fb0:
      uStack_c8._0_4_ = 0.0;
      uStack_138._0_4_ = 0;
      Assembler::ubfm((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,uVar8,
                      uVar19);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    goto LAB_01612d94;
  case 0x8d:
    pCVar41 = (CodeGenerator *)0x200000003f;
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    local_d0 = pCVar41;
    local_140 = pCVar41;
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      lVar27 = *(long *)(local_168 + 0x28);
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      uVar8 = -(uint)local_b0 & 0x1f;
      uVar19 = ~(uint)local_b0 & 0x1f;
      lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8);
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      goto LAB_01614fb0;
    }
    lVar27 = *(long *)(param_1 + 0x28);
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_180 = pCVar41;
    if ((int)((long)uVar34 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
LAB_01612d94:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::lslv((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x8e:
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      uStack_c8._0_4_ = 0.0;
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000)
      ;
      uStack_138._0_4_ = 0;
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU
                  | 0x4000000000);
      Assembler::ubfm((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (uint)local_b0 & 0x3f,0x3f);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    goto LAB_01610098;
  case 0x8f:
    pCVar41 = (CodeGenerator *)0x200000003f;
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    local_d0 = pCVar41;
    local_140 = pCVar41;
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      lVar27 = *(long *)(local_168 + 0x28);
      uStack_c8._0_4_ = 0.0;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8);
      uStack_138._0_4_ = 0;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      Assembler::ubfm((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (uint)local_b0 & 0x1f,0x1f);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    lVar27 = *(long *)(param_1 + 0x28);
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_180 = pCVar41;
    if ((int)((long)uVar34 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
LAB_01610098:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::lsrv((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x90:
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      uStack_c8._0_4_ = 0.0;
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000)
      ;
      uStack_138._0_4_ = 0;
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU
                  | 0x4000000000);
      Assembler::sbfm((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (uint)local_b0 & 0x3f,0x3f);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    goto LAB_01611c60;
  case 0x91:
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      lVar27 = *(long *)(local_168 + 0x28);
      uStack_c8._0_4_ = 0.0;
      local_d0 = (CodeGenerator *)0x200000003f;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8);
      uStack_138._0_4_ = 0;
      local_140 = (CodeGenerator *)0x200000003f;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      Assembler::sbfm((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (uint)local_b0 & 0x1f,0x1f);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    lVar27 = *(long *)(param_1 + 0x28);
    local_180 = (CodeGenerator *)0x200000003f;
    local_d0 = local_180;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_140 = local_180;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    if ((int)((long)uVar34 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
LAB_01611c60:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    Assembler::asrv((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x92:
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      uVar8 = (uint)local_b0 & 0x3f;
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000)
      ;
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU
                  | 0x4000000000);
LAB_01615028:
      uStack_c8._0_4_ = 0.0;
      uStack_138._0_4_ = 0;
      Assembler::extr((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                      (Register *)&local_140,uVar8);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x4000000000);
    goto LAB_01612e3c;
  case 0x93:
    uVar34 = *(ulong *)(param_1 + ((ulong)(byte)param_1[4] + 1) * 8 + 0x28);
    if (((uVar34 & 0x1c) != 4) || (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      Arm64OperandConverter::ToImmediate((InstructionOperand *)&local_170);
      lVar27 = *(long *)(local_168 + 0x28);
      uVar8 = (uint)local_b0 & 0x1f;
      local_d0 = (CodeGenerator *)0x200000003f;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      lVar27 = *(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8);
      local_140 = (CodeGenerator *)0x200000003f;
      if ((int)(lVar27 >> 0x23) != 0x3f) {
        local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
      goto LAB_01615028;
    }
    lVar27 = *(long *)(param_1 + 0x28);
    local_180 = (CodeGenerator *)0x200000003f;
    local_d0 = local_180;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_140 = local_180;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    if ((int)((long)uVar34 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
LAB_01612e3c:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    Assembler::rorv((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                    (Register *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x94:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_a0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_a0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::Mov((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x95:
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + 0x28) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    IVar3 = param_1[4];
    goto LAB_0160d5f8;
  case 0x96:
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + 0x28) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    IVar3 = param_1[4];
    goto LAB_01610a44;
  case 0x97:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
LAB_0160d5f8:
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    iVar33 = 7;
    goto LAB_01613474;
  case 0x98:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
LAB_01610a44:
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    iVar33 = 0xf;
    goto LAB_01613474;
  case 0x99:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    iVar33 = 0x1f;
    goto LAB_01613474;
  case 0x9a:
    pIVar24 = param_1 + 0x28;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = (ulong)(byte)param_1[4];
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + uVar34 * 8) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar12 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = (ulong)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01613c9c:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01613c9c;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar34 = *(ulong *)(local_168 + (ulong)((int)uVar34 + 2) * 8 + 0x28);
    uVar8 = (uint)fVar32 & 0x3f;
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar32 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar32 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_016154fc:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_016154fc;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar19 = (uint)fVar32 & 0x3f;
    goto LAB_016158c8;
  case 0x9b:
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = (ulong)(byte)param_1[4];
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + uVar34 * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + uVar34 * 8) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uVar12 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = (ulong)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614050:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614050;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar34 = *(ulong *)(local_168 + (ulong)((int)uVar34 + 2) * 8 + 0x28);
    uVar8 = (uint)fVar32 & 0x1f;
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar32 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar32 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_016158a4:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_016158a4;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar19 = (uint)fVar32 & 0x1f;
LAB_016158c8:
    Assembler::sbfm((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,uVar8,
                    uVar8 + uVar19 + -1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x9c:
    pIVar24 = param_1 + 0x28;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = (ulong)(byte)param_1[4];
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + uVar34 * 8) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar12 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = (ulong)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01613dac:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01613dac;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar34 = *(ulong *)(local_168 + (ulong)((int)uVar34 + 2) * 8 + 0x28);
    uVar8 = (uint)fVar32 & 0x3f;
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) != 0) goto LAB_0161614c;
LAB_0161562c:
      Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_016161a0:
        plVar26 = plVar25;
      }
      else {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
LAB_0161618c:
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_016161a0;
      }
      fVar32 = (float)plVar26[6];
    }
    goto LAB_016161a8;
  case 0x9d:
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = (ulong)(byte)param_1[4];
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + uVar34 * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + uVar34 * 8) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uVar12 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = (ulong)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614e6c:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614e6c;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar34 = *(ulong *)(local_168 + (ulong)((int)uVar34 + 2) * 8 + 0x28);
    uVar8 = (uint)fVar32 & 0x1f;
    if ((uVar34 & 7) != 3) {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 != (long *)0x0) {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        goto LAB_0161618c;
      }
      goto LAB_016161a0;
    }
    if (((uint)uVar34 >> 3 & 1) == 0) goto LAB_0161562c;
LAB_0161614c:
    puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
    uVar20 = puVar14[1];
    local_d0 = (CodeGenerator *)*puVar14;
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    fVar32 = (float)uStack_c8;
LAB_016161a8:
    Assembler::ubfm((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,uVar8,
                    uVar8 + (int)fVar32 + -1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x9e:
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    uVar34 = (ulong)(byte)param_1[4];
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 + uVar34 * 8) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(pIVar24 + uVar34 * 8) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uVar12 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = (ulong)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01613d60:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01613d60;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar34 = *(ulong *)(local_168 + (ulong)((int)uVar34 + 2) * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar22 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar22 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_016155a8:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_016155a8;
      }
      fVar22 = (float)plVar26[6];
    }
    Assembler::ubfm((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,
                    local_140._4_4_ - ((uint)fVar32 & 0x1f) & local_140._4_4_ - 1U,
                    ((uint)fVar22 & 0x1f) - 1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x9f:
    pIVar24 = param_1 + 0x28;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar34 = (ulong)(byte)param_1[4];
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + uVar34 * 8 + 8) >> 0x23 & 0xffffffffU | 0x4000000000);
    uVar12 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 2) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = (ulong)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614c20:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614c20;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar34 = *(ulong *)(local_168 + (ulong)((int)uVar34 + 3) * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar22 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar22 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01616038:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01616038;
      }
      fVar22 = (float)plVar26[6];
    }
    Assembler::bfm((Assembler *)(this + 0xd0),(Register *)&local_140,(Register *)&local_180,
                   local_140._4_4_ - ((uint)fVar32 & 0x3f) & local_140._4_4_ - 1U,
                   ((uint)fVar22 & 0x3f) - 1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xa0:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_0160f7b8;
  case 0xa1:
    lVar27 = *(long *)(param_1 + 0x28);
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
LAB_0160f7b8:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    Assembler::rbit((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xa2:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_0160ee24;
  case 0xa3:
    lVar27 = *(long *)(param_1 + 0x28);
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    lVar27 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
LAB_0160ee24:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    Assembler::rev((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xa8:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614db8:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614db8;
      }
      uVar34 = plVar26[6];
    }
    TurboAssembler::AssertSpAligned((TurboAssembler *)(this + 0xd0));
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (0 < (int)uVar34) {
      lVar27 = (uVar34 & 0xffffffff) << 3;
      if ((uVar34 & 0xffffffff) != 0) {
        local_b0._0_4_ = (uint)lVar27;
        local_b0._4_4_ = (int)((ulong)lVar27 >> 0x20);
        local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
        uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
        local_a8 = CONCAT31(local_a8._1_3_,0x13);
        local_a0 = (CodeGenerator *)&DAT_ffffffff;
        local_98 = 2;
        TurboAssembler::AddSubMacro
                  ((TurboAssembler *)(this + 0xd0),&DAT_01a56370,&DAT_01a56370,&local_d0,0,
                   0x40000000);
      }
      *(int *)(*(long *)(this + 0x18) + 0xc) = *(int *)(*(long *)(this + 0x18) + 0xc) + (int)uVar34;
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    }
    break;
  case 0xa9:
    uVar34 = (ulong)(byte)param_1[4];
    uVar12 = *(ulong *)(param_1 + uVar34 * 8 + 0x30);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_140,(int)(uVar12 >> 0x20));
        uVar34 = (ulong)(byte)param_1[4];
      }
      else {
        uVar20 = *(undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar12 >> 0x20) * 0x10 + 8);
        uStack_138._0_4_ = (uint)uVar20;
        uStack_138._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
      }
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_0161507c:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_0161507c;
      }
      uStack_138._0_4_ = (uint)plVar26[6];
    }
    local_b0._0_4_ = (uint)uStack_138 << 3;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_b0._4_4_ = (int)(uint)local_b0 >> 0x1f;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    uVar34 = *(ulong *)(param_1 + uVar34 * 8 + 0x28);
    if ((uVar34 & 0x1ffc) == 0x1a4) {
      lVar27 = *(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28);
      uVar34 = 0x8000000000;
LAB_016163f0:
      uStack_138._0_4_ = 1;
      uStack_138._4_4_ = 1;
      local_140 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    }
    else {
      if (((uVar34 & 0x1c) == 4) && (10 < ((uint)(uVar34 >> 5) & 0xff))) {
        lVar27 = *(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28);
        uVar34 = 0x4000000000;
        goto LAB_016163f0;
      }
      uStack_138._0_4_ = 0;
      local_140 = (CodeGenerator *)0x400000001f;
      if ((*(ulong *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28) & 7) != 3) {
        local_140 = (CodeGenerator *)
                    ((long)*(ulong *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28) >> 0x23 &
                     0xffffffffU | 0x4000000000);
      }
    }
    TurboAssembler::Poke
              ((TurboAssembler *)(this + 0xd0),(CPURegister *)&local_140,(Operand *)&local_d0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xaa:
    uVar34 = (ulong)(byte)param_1[4];
    uVar12 = *(ulong *)(param_1 + uVar34 * 8 + 0x38);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        uVar34 = (ulong)(byte)param_1[4];
      }
      else {
        uStack_c8._4_4_ =
             (int)((ulong)*(undefined8 *)
                           (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar12 >> 0x20) * 0x10
                           + 8) >> 0x20);
      }
    }
    else {
      lVar27 = *(long *)(*(long *)(this + 0x28) + 0x48);
      if (lVar27 != 0) {
        do {
          lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < (int)(uVar12 >> 3)) * 8);
        } while (lVar27 != 0);
      }
    }
    if (((*(ulong *)(param_1 + uVar34 * 8 + 0x28) & 0x1c) == 4) &&
       (10 < ((uint)(*(ulong *)(param_1 + uVar34 * 8 + 0x28) >> 5) & 0xff))) {
      lVar29 = *(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x30);
      uStack_c8._0_4_ = 1.4013e-45;
      uStack_c8._4_4_ = 1;
      lVar27 = *(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28);
      uStack_138._0_4_ = 1;
      uStack_138._4_4_ = 1;
    }
    else {
      lVar29 = *(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x30);
      uStack_c8._0_4_ = 0.0;
      lVar27 = *(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x28);
      uStack_138._0_4_ = 0;
    }
    local_d0 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
    TurboAssembler::PokePair((CPURegister *)(this + 0xd0),(CPURegister *)&local_d0,(int)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xab:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      }
      else {
        uStack_c8._0_4_ =
             (float)*(undefined8 *)
                     (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614918:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614918;
      }
      uStack_c8._0_4_ = (float)plVar26[6];
    }
    iVar33 = (*(int *)(**(long **)(this + 0x18) + 4) - (int)(float)uStack_c8) * -8 + 8;
    if (((*(ulong *)(param_1 + 0x28) & 0x1c) == 4) &&
       (10 < ((uint)(*(ulong *)(param_1 + 0x28) >> 5) & 0xff))) {
      local_b8 = (long)iVar33;
      local_d0 = (CodeGenerator *)0x400000001d;
      iStack_bc = 2;
      uStack_c8._0_4_ = 0.0;
      uStack_c8._4_4_ = 0xffffffff;
      uStack_c0 = 0;
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
      uStack_138._0_4_ = 1;
      uStack_138._4_4_ = 1;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0xffffffff;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      TurboAssembler::LoadStoreMacro
                ((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,0xc4400000);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    }
    else {
      local_d0 = (CodeGenerator *)0x400000001d;
      local_b8 = (long)iVar33;
      uStack_c8._0_4_ = 0.0;
      uStack_c8._4_4_ = 0xffffffff;
      uStack_c0 = 0;
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
      iStack_bc = 2;
      uStack_138._0_4_ = 0;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0xffffffff;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      TurboAssembler::LoadStoreMacro
                ((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,0xc0400000);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    }
    break;
  case 0xac:
    uVar12 = (ulong)(byte)param_1[4];
    uVar34 = *(ulong *)(param_1 + uVar12 * 8 + 0x30);
    if (((uVar34 & 0x1c) == 4) && (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      uVar35 = 0x2000000000;
      uVar31 = 0x2000000000;
LAB_01612c48:
      local_140 = (CodeGenerator *)(uVar35 | (long)uVar34 >> 0x23 & 0xffffffffU);
      local_d0 = (CodeGenerator *)
                 (uVar31 | *(long *)(param_1 + uVar12 * 8 + 0x28) >> 0x23 & 0xffffffffU);
      uStack_c8._0_4_ = 1.4013e-45;
      uStack_c8._4_4_ = 1;
      uStack_138._0_4_ = 1;
      uStack_138._4_4_ = 1;
      Assembler::fcmp((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar12 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    local_178 = 0x100000001;
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar32 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar32 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01616204:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01616204;
      }
      fVar32 = (float)plVar26[6];
    }
    dVar45 = (double)fVar32;
    if (fVar32 == 0.0) {
LAB_01616330:
      Assembler::fcmp(this + 0xd0,dVar45);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
      break;
    }
    goto LAB_01616bd0;
  case 0xad:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x2000000000;
    goto LAB_01612bec;
  case 0xae:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x2000000000;
    goto LAB_01612b8c;
  case 0xaf:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x2000000000;
    goto LAB_01611398;
  case 0xb0:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x2000000000;
    goto LAB_01610944;
  case 0xb1:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
    goto LAB_01612c9c;
  case 0xb2:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
    goto LAB_0160d228;
  case 0xb3:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
    goto LAB_01611d0c;
  case 0xb4:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x2000000000;
    goto LAB_01612b2c;
  case 0xb5:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
    goto LAB_0160b0ec;
  case 0xb6:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x2000000000;
    goto LAB_01612acc;
  case 0xb7:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x2000000000;
    goto LAB_0160ed78;
  case 0xb8:
    uVar12 = (ulong)(byte)param_1[4];
    uVar34 = *(ulong *)(param_1 + uVar12 * 8 + 0x30);
    if (((uVar34 & 0x1c) == 4) && (10 < ((uint)(uVar34 >> 5) & 0xff))) {
      uVar35 = 0x4000000000;
      uVar31 = 0x4000000000;
      goto LAB_01612c48;
    }
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar12 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = 0x100000001;
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      dVar45 = (double)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01616320:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01616320;
      }
      dVar45 = (double)plVar26[6];
    }
    if (dVar45 == 0.0) goto LAB_01616330;
LAB_01616bd0:
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    auVar46 = UseScratchRegisterScope::AcquireSameSizeAs
                        ((UseScratchRegisterScope *)&local_d0,(VRegister *)&local_180);
    local_140 = auVar46._0_8_;
    uStack_138._0_4_ = auVar46._8_4_;
    uStack_138._4_4_ = auVar46._12_4_;
    TurboAssembler::Fmov(dVar45,(Assembler *)(this + 0xd0),local_140,auVar46._8_8_);
    Assembler::fcmp((Assembler *)(this + 0xd0),(VRegister *)&local_180,(VRegister *)&local_140);
    this_00 = (UseScratchRegisterScope *)&local_d0;
    goto LAB_01614788;
  case 0xb9:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x4000000000;
    goto LAB_01612bec;
  case 0xba:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x4000000000;
    goto LAB_01612b8c;
  case 0xbb:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x4000000000;
    goto LAB_01611398;
  case 0xbc:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x4000000000;
    goto LAB_01610944;
  case 0xbd:
    CVar40 = this[0x260];
    this[0x260] = (CodeGenerator)0x1;
    uVar20 = ExternalReference::mod_two_doubles_operation();
LAB_016125ec:
    uVar17 = 2;
    goto LAB_01613168;
  case 0xbe:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x4000000000;
    goto LAB_01612acc;
  case 0xbf:
    pIVar24 = param_1 + 0x28;
    local_178 = 0x100000001;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x4000000000;
    goto LAB_0160ed78;
  case 0xc0:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
LAB_01612c9c:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::fabs((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xc1:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
LAB_0160d228:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::fneg((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xc2:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
LAB_01611d0c:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::fsqrt((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xc3:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    lVar27 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    uVar34 = 0x4000000000;
LAB_01612b2c:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_138._4_4_ = 1;
    uStack_138._0_4_ = 1;
    local_180 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    local_178 = 0x100000001;
    Assembler::fnmul((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                     (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xc4:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
LAB_0160b0ec:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::frintm((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xc5:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
    goto LAB_01612ce0;
  case 0xc6:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
LAB_01612ce0:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::frintp((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 199:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::frinta((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 200:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
    goto LAB_0160d008;
  case 0xc9:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
LAB_0160d008:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::frintz((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xca:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
    goto LAB_0160ec08;
  case 0xcb:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
LAB_0160ec08:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::frintn((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xcc:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    TurboAssembler::CanonicalizeNaN
              ((TurboAssembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xcd:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar34 = 0x4000000000;
    uVar12 = 0x2000000000;
    goto LAB_0160aabc;
  case 0xce:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar34 = 0x2000000000;
    uVar12 = 0x4000000000;
LAB_0160aabc:
    local_d0 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    local_140 = (CodeGenerator *)
                (uVar12 | *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                          0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::fcvt((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xcf:
    lVar27 = *(long *)(param_1 + 0x28);
    pCVar41 = (CodeGenerator *)0x200000003f;
    local_140 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    pAVar37 = (Assembler *)(this + 0xd0);
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzs(pAVar37,(Register *)&local_140,(VRegister *)&local_d0,0);
    local_b0._0_4_ = 1;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_98 = 2;
    TurboAssembler::AddSubMacro((TurboAssembler *)pAVar37,&DAT_01a56424,&local_140,&local_d0,1,0);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000)
      ;
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    Assembler::csinc(pAVar37,&local_d0,&local_140,&local_180,7);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xd0:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzs((Assembler *)(this + 0xd0),(Register *)&local_140,(VRegister *)&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xd1:
    lVar27 = *(long *)(param_1 + 0x28);
    pCVar41 = (CodeGenerator *)0x200000003f;
    local_140 = pCVar41;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    pAVar37 = (Assembler *)(this + 0xd0);
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzu(pAVar37,(Register *)&local_140,(VRegister *)&local_d0,0);
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_b0._0_4_ = 1;
    local_b0._4_4_ = 0;
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_a8._0_1_ = 0x13;
    local_a0 = (CodeGenerator *)0xffffffff;
    local_98 = 2;
    TurboAssembler::AddSubMacro((TurboAssembler *)pAVar37,&DAT_01a56424,&local_140,&local_d0,1,0);
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::AddSubWithCarryMacro
              ((TurboAssembler *)pAVar37,&local_140,&local_180,&local_d0,0,0x1a000000);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xd2:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzu((Assembler *)(this + 0xd0),(Register *)&local_140,(VRegister *)&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xd3:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzs((Assembler *)(this + 0xd0),(Register *)&local_140,(VRegister *)&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((*(uint *)(local_168 + 4) & 0xfe) == 0) break;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 + ((ulong)*(uint *)(local_168 + 4) & 0xff) * 8 + 0x28) >> 0x23
                 & 0xffffffffU | 0x2000000000);
    goto LAB_01612084;
  case 0xd4:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzs((Assembler *)(this + 0xd0),(Register *)&local_140,(VRegister *)&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((*(uint *)(local_168 + 4) & 0xfe) == 0) break;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 + ((ulong)*(uint *)(local_168 + 4) & 0xff) * 8 + 0x28) >> 0x23
                 & 0xffffffffU | 0x4000000000);
LAB_01612084:
    uStack_c8 = this + 0x278;
    local_178 = 0x100000001;
    pAVar37 = (Assembler *)(this + 0xd0);
    local_d0 = this + 0x268;
    uStack_c0 = (undefined4)*(undefined8 *)local_d0;
    iStack_bc = (int)((ulong)*(undefined8 *)local_d0 >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    auVar46 = UseScratchRegisterScope::AcquireSameSizeAs
                        ((UseScratchRegisterScope *)&local_d0,(VRegister *)&local_180);
    local_140 = auVar46._0_8_;
    uStack_138._0_4_ = auVar46._8_4_;
    uStack_138._4_4_ = auVar46._12_4_;
    TurboAssembler::Fmov(0xc3e0000000000000,pAVar37,local_140,auVar46._8_8_);
    Assembler::fcmp(pAVar37,(VRegister *)&local_180,(VRegister *)&local_140);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_d0);
    local_b0._0_4_ = 1;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_140 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_98 = 2;
    TurboAssembler::ConditionalCompareMacro
              ((TurboAssembler *)pAVar37,&local_140,&local_d0,0x10000000,10,0x20000000);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x30) >> 0x23 & 0xffffffffU | 0x4000000000);
    Assembler::cset(pAVar37,&local_d0,7);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xd5:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x2000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzu((Assembler *)(this + 0xd0),(Register *)&local_140,(VRegister *)&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((*(uint *)(local_168 + 4) & 0xfe) == 0) break;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 + ((ulong)*(uint *)(local_168 + 4) & 0xff) * 8 + 0x28) >> 0x23
                 & 0xffffffffU | 0x2000000000);
    goto LAB_01612978;
  case 0xd6:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 1;
    Assembler::fcvtzu((Assembler *)(this + 0xd0),(Register *)&local_140,(VRegister *)&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((*(uint *)(local_168 + 4) & 0xfe) == 0) break;
    local_180 = (CodeGenerator *)
                (*(long *)(local_168 + ((ulong)*(uint *)(local_168 + 4) & 0xff) * 8 + 0x28) >> 0x23
                 & 0xffffffffU | 0x4000000000);
LAB_01612978:
    uStack_c8 = this + 0x278;
    local_178 = 0x100000001;
    pAVar37 = (Assembler *)(this + 0xd0);
    local_d0 = this + 0x268;
    uStack_c0 = (undefined4)*(undefined8 *)local_d0;
    iStack_bc = (int)((ulong)*(undefined8 *)local_d0 >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    auVar46 = UseScratchRegisterScope::AcquireSameSizeAs
                        ((UseScratchRegisterScope *)&local_d0,(VRegister *)&local_180);
    local_140 = auVar46._0_8_;
    uStack_138._0_4_ = auVar46._8_4_;
    uStack_138._4_4_ = auVar46._12_4_;
    TurboAssembler::Fmov(0xbff0000000000000,pAVar37,local_140,auVar46._8_8_);
    Assembler::fcmp(pAVar37,(VRegister *)&local_180,(VRegister *)&local_140);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_d0);
    local_b0._0_4_ = 1;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_140 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_98 = 2;
    TurboAssembler::ConditionalCompareMacro
              ((TurboAssembler *)pAVar37,&local_140,&local_d0,0x40000000,0xc,0x20000000);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x30) >> 0x23 & 0xffffffffU | 0x4000000000);
    Assembler::cset(pAVar37,&local_d0,1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xd7:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    goto LAB_01611ec0;
  case 0xd8:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
LAB_01611ec0:
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_01611ef0:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_138._0_4_ = 0;
    Assembler::scvtf((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(Register *)&local_140,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xd9:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    goto LAB_01610f50;
  case 0xda:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
LAB_01610f50:
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_01611ef0;
  case 0xdb:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    goto LAB_01612684;
  case 0xdc:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
LAB_01612684:
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
LAB_016126b4:
    uStack_c8._4_4_ = 1;
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_138._0_4_ = 0;
    Assembler::ucvtf((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(Register *)&local_140,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xdd:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    goto LAB_016113d4;
  case 0xde:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
LAB_016113d4:
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    goto LAB_016126b4;
  case 0xdf:
    lVar27 = *(long *)(param_1 + 0x28);
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x2000000000);
    goto LAB_0160b3b4;
  case 0xe0:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x4000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 2;
    Assembler::umov((Assembler *)(this + 0xd0),(Register *)&local_140,(VRegister *)&local_d0,1);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xe1:
    lVar27 = *(long *)(param_1 + 0x28);
    lVar29 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8 + 8);
    iVar33 = 0;
    goto LAB_0160ec70;
  case 0xe2:
    lVar27 = *(long *)(param_1 + 0x28);
    lVar29 = *(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8 + 8);
    iVar33 = 1;
LAB_0160ec70:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_c8._4_4_ = 2;
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar29 >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    Assembler::ins((Assembler *)(this + 0xd0),(VRegister *)&local_d0,iVar33,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xe3:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
               0x4000000000);
    uStack_c8._0_4_ = 0.0;
    Assembler::fmov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(Register *)&local_d0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xe4:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
LAB_0160b3b4:
    uStack_c8._0_4_ = 0.0;
    uStack_138._4_4_ = 1;
    uStack_138._0_4_ = 1;
    Assembler::fmov((Assembler *)(this + 0xd0),(Register *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xe5:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar34 = 0x2000000000;
    goto LAB_0160ebc8;
  case 0xe6:
    bVar6 = (*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) == 3;
    local_140 = (CodeGenerator *)0x200000001f;
    if (!bVar6) {
      local_140 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uVar7 = 0x84000000;
    uVar9 = 0x80000000;
    goto LAB_01611cc0;
  case 0xe7:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar34 = 0x4000000000;
LAB_0160ebc8:
    FUN_01618900(this,uVar8,&local_170,uVar34 | lVar27 >> 0x23 & 0xffffffffU,0x100000001);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xe8:
    uVar7 = 0xc4000000;
    bVar6 = (*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) == 3;
    local_140 = (CodeGenerator *)0x400000001f;
    if (!bVar6) {
      local_140 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    uVar9 = 0xc0000000;
LAB_01611cc0:
    uStack_138._0_4_ = (uint)!bVar6;
    if (!bVar6) {
      uVar9 = uVar7;
    }
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,uVar9);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xe9:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar7 = 0x4c00000;
    goto LAB_01614d70;
  case 0xea:
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar7 = 0x4800000;
    goto LAB_01614d70;
  case 0xeb:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar20 = 0x400000;
    goto LAB_01611f84;
  case 0xec:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar20 = 0x800000;
    goto LAB_01611f84;
  case 0xed:
    local_140 = (CodeGenerator *)0x400000001f;
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) != 3) {
      local_140 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xee:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar20 = 0x40400000;
    goto LAB_01611f84;
  case 0xef:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar20 = 0x40800000;
    goto LAB_01611f84;
  case 0xf0:
    local_140 = (CodeGenerator *)0x400000001f;
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) != 3) {
      local_140 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar7 = 0x40000000;
    goto LAB_01614d70;
  case 0xf1:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar20 = 0x80800000;
    goto LAB_01611f84;
  case 0xf2:
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,0x80400000);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((uVar8 & 0xffc00000) != 0x800000) break;
    lVar27 = *(long *)(local_168 + 0x28);
    goto LAB_01611fdc;
  case 0xf3:
    uVar34 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      pCVar41 = (CodeGenerator *)0x200000001f;
    }
    else {
      pCVar41 = (CodeGenerator *)0x200000003f;
      if ((int)((long)uVar34 >> 0x23) != 0x3f) {
        pCVar41 = (CodeGenerator *)((long)uVar34 >> 0x23 & 0xffffffffU | 0x2000000000);
      }
    }
    uStack_138._0_4_ = 0;
    local_140 = pCVar41;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar7 = 0xc0000000;
    if ((ulong)pCVar41 >> 0x20 != 0x40) {
      uVar7 = 0x80000000;
    }
    goto LAB_01614d70;
  case 0xf4:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar20 = 0xc0400000;
LAB_01611f84:
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,uVar20);
LAB_01611f8c:
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((uVar8 & 0xffc00000) == 0x800000) {
      lVar27 = *(long *)(local_168 + 0x28);
LAB_01611fdc:
      local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
      local_a0 = (CodeGenerator *)0x4000000017;
      local_a8 = CONCAT31(local_a8._1_3_,0x13);
      local_b0._4_4_ = 0;
      local_b0._0_4_ = 0;
      uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
      local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
      uStack_138._0_4_ = 0;
      puVar14 = &local_140;
      uStack_90 = 0xffffffff;
      uStack_8c = 0;
      local_98 = 0;
      uStack_94 = 0;
LAB_01611ff0:
      TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_140,puVar14,&local_d0,0);
      pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    }
    break;
  case 0xf5:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    TurboAssembler::DecompressTaggedSigned
              ((TurboAssembler *)(this + 0xd0),(Register *)&local_140,(MemOperand *)&local_d0);
    goto LAB_01611f8c;
  case 0xf6:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    TurboAssembler::DecompressTaggedPointer
              ((TurboAssembler *)(this + 0xd0),(Register *)&local_140,(MemOperand *)&local_d0);
    goto LAB_01611f8c;
  case 0xf7:
    local_140 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    TurboAssembler::DecompressAnyTagged
              ((TurboAssembler *)(this + 0xd0),(Register *)&local_140,(MemOperand *)&local_d0);
    goto LAB_01611f8c;
  case 0xf8:
    local_140 = (CodeGenerator *)0x400000001f;
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) != 3) {
      local_140 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    uVar7 = 0xc0000000;
LAB_01614d70:
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_d0,uVar7);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xf9:
    local_140 = (CodeGenerator *)0x400000001f;
    if ((*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) & 7) != 3) {
      local_140 = (CodeGenerator *)
                  ((long)*(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x4000000000);
    }
    uStack_138._0_4_ = 0;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    TurboAssembler::StoreTaggedField
              ((TurboAssembler *)(this + 0xd0),(Register *)&local_140,(MemOperand *)&local_d0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xfa:
    Assembler::dmb((Assembler *)(this + 0xd0),2,3);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xfb:
    Assembler::dsb((Assembler *)(this + 0xd0),3,3);
    Assembler::isb((Assembler *)(this + 0xd0));
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0xfc:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_c8._4_4_ = 2;
    IVar3 = param_1[4];
    uVar34 = 0x4000000000;
    goto LAB_0160cf68;
  case 0xfd:
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x200000001;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) != 0) goto LAB_0160d5b8;
LAB_0160a9d8:
      uStack_138._4_4_ = 1;
      uStack_138._0_4_ = 1;
      Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      goto LAB_0160d5c8;
    }
    plVar25 = (long *)(lVar27 + 0x48);
    plVar36 = (long *)*plVar25;
    if (plVar36 == (long *)0x0) {
LAB_01614268:
      plVar26 = plVar25;
    }
    else {
      iVar33 = (int)(uVar34 >> 3);
      plVar26 = plVar25;
      do {
        if (iVar33 <= (int)plVar36[4]) {
          plVar26 = plVar36;
        }
        plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
      } while (plVar36 != (long *)0x0);
LAB_01614254:
      if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614268;
    }
    uStack_138._4_4_ = 1;
    uStack_138._0_4_ = 1;
    cVar21 = (char)plVar26[6];
    goto LAB_01614270;
  case 0xfe:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 2;
    uVar34 = (ulong)(byte)param_1[4];
    lVar29 = *(long *)(param_1 + 0x28 + uVar34 * 8);
    local_180 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x200000001;
    if ((int)(lVar27 >> 0x23) != (int)(lVar29 >> 0x23)) {
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar34 = (ulong)(byte)local_168[4];
    }
    uVar8 = (uint)uVar34;
    uVar34 = *(ulong *)(local_168 + (ulong)(uVar8 + 1) * 8 + 0x28);
    lVar27 = *(long *)(local_170 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) goto LAB_0160ae50;
LAB_01610380:
      uStack_c8._0_1_ =
           (char)*(undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10 + 8);
      goto LAB_01610390;
    }
    plVar25 = (long *)(lVar27 + 0x48);
    plVar36 = (long *)*plVar25;
    if (plVar36 == (long *)0x0) {
LAB_01614ba0:
      plVar26 = plVar25;
    }
    else {
      iVar33 = (int)(uVar34 >> 3);
      plVar26 = plVar25;
      do {
        if (iVar33 <= (int)plVar36[4]) {
          plVar26 = plVar36;
        }
        plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
      } while (plVar36 != (long *)0x0);
LAB_01614b8c:
      if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614ba0;
    }
    uStack_c8._0_1_ = (char)plVar26[6];
    goto LAB_01614ba8;
  case 0xff:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
    goto LAB_0160fff0;
  case 0x100:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
    goto LAB_016109e4;
  case 0x101:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
    goto LAB_016108cc;
  case 0x102:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160f968;
  case 0x103:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160fa18;
  case 0x104:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01610754;
  case 0x105:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01610914;
  case 0x106:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160ed48;
  case 0x107:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01611328;
  case 0x108:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01610ee4;
  case 0x109:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160bb4c;
  case 0x10a:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160be0c;
  case 0x10b:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160a8dc;
  case 0x10c:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01611a60;
  case 0x10d:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_016115e0;
  case 0x10e:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_c8._4_4_ = 4;
    IVar3 = param_1[4];
    uVar34 = 0x2000000000;
LAB_0160cf68:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (uVar34 | *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    Assembler::dup((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x10f:
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x400000001;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) != 3) {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 != (long *)0x0) {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        goto LAB_01614254;
      }
      goto LAB_01614268;
    }
    if (((uint)uVar34 >> 3 & 1) == 0) goto LAB_0160a9d8;
LAB_0160d5b8:
    uStack_138._4_4_ = 1;
    uStack_138._0_4_ = 1;
    puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
    uVar20 = puVar14[1];
    local_d0 = (CodeGenerator *)*puVar14;
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
LAB_0160d5c8:
    cVar21 = SUB41((float)uStack_c8,0);
LAB_01614270:
    Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180,
                   (int)cVar21);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x110:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    uVar34 = (ulong)(byte)param_1[4];
    lVar29 = *(long *)(param_1 + 0x28 + uVar34 * 8);
    local_180 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x400000001;
    if ((int)(lVar27 >> 0x23) != (int)(lVar29 >> 0x23)) {
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar34 = (ulong)(byte)local_168[4];
    }
    uVar8 = (uint)uVar34;
    uVar34 = *(ulong *)(local_168 + (ulong)(uVar8 + 1) * 8 + 0x28);
    lVar27 = *(long *)(local_170 + 0x28);
    if ((uVar34 & 7) != 3) {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 != (long *)0x0) {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        goto LAB_01614b8c;
      }
      goto LAB_01614ba0;
    }
    if (((uint)uVar34 >> 3 & 1) != 0) goto LAB_01610380;
LAB_0160ae50:
    Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
LAB_01610390:
    uVar8 = (uint)(byte)local_168[4];
LAB_01614ba8:
    iVar33 = (int)(char)uStack_c8;
    local_d0 = (CodeGenerator *)
               (*(long *)(local_168 + (ulong)(uVar8 + 2) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,iVar33,(VRegister *)&local_d0,
                   0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x111:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    Assembler::scvtf((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x112:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    Assembler::ucvtf((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x113:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
LAB_0160fff0:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fabs((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x114:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
LAB_016109e4:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fneg((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x115:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
LAB_016108cc:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fsqrt((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x116:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    Assembler::frecpe((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x117:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    Assembler::frsqrte((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x118:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_0160f968:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    lVar27 = *(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28);
    uVar34 = 0x8000000000;
LAB_01612bec:
    local_180 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fadd((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x119:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x400000001;
    Assembler::faddp((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                     (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x11a:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_0160fa18:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    lVar27 = *(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28);
    uVar34 = 0x8000000000;
LAB_01612b8c:
    local_180 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fsub((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x11b:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_01610754:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    lVar27 = *(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28);
    uVar34 = 0x8000000000;
LAB_01611398:
    local_180 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fmul((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x11c:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_01610914:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    lVar27 = *(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28);
    uVar34 = 0x8000000000;
LAB_01610944:
    local_180 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fdiv((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x11d:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_0160ed48:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    lVar27 = *(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28);
    uVar34 = 0x8000000000;
LAB_0160ed78:
    local_180 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fmin((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x11e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_01611328:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    lVar27 = *(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28);
    uVar34 = 0x8000000000;
LAB_01612acc:
    local_180 = (CodeGenerator *)(uVar34 | lVar27 >> 0x23 & 0xffffffffU);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fmax((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x11f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_01610ee4:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fcmeq((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                     (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x120:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_0160bb4c:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fcmeq((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                     (VRegister *)&local_180);
    goto LAB_0160fe04;
  case 0x121:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_0160be0c:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28 + 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fcmgt((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                     (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x122:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_0160a8dc:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28 + 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fcmge((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                     (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x123:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_01611a60:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x30) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 2) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fmla((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x124:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
LAB_016115e0:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x30) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 2) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::fmls((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                    (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x125:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 2;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::dup((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x126:
    pIVar24 = param_1 + 0x28;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._4_4_ = 2;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) goto LAB_0161085c;
LAB_016109bc:
      uStack_138._0_4_ = 1;
      puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
      uVar20 = puVar14[1];
      local_d0 = (CodeGenerator *)*puVar14;
      uStack_c8._0_4_ = (float)uVar20;
      uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      goto LAB_016109cc;
    }
    plVar25 = (long *)(lVar27 + 0x48);
    plVar36 = (long *)*plVar25;
    if (plVar36 == (long *)0x0) {
LAB_01614c94:
      plVar26 = plVar25;
    }
    else {
      iVar33 = (int)(uVar34 >> 3);
      plVar26 = plVar25;
      do {
        if (iVar33 <= (int)plVar36[4]) {
          plVar26 = plVar36;
        }
        plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
      } while (plVar36 != (long *)0x0);
LAB_01614c80:
      if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614c94;
    }
    uStack_138._0_4_ = 1;
    cVar21 = (char)plVar26[6];
    goto LAB_01614c9c;
  case 0x127:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 2;
    uVar34 = (ulong)(byte)param_1[4];
    lVar29 = *(long *)(param_1 + 0x28 + uVar34 * 8);
    local_180 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x200000001;
    if ((int)(lVar27 >> 0x23) != (int)(lVar29 >> 0x23)) {
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar34 = (ulong)(byte)local_168[4];
    }
    uVar8 = (uint)uVar34;
    uVar34 = *(ulong *)(local_168 + (ulong)(uVar8 + 1) * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      }
      else {
        uVar20 = *(undefined8 *)
                  (*(long *)(*(long *)(local_170 + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10 + 8
                  );
        uStack_c8._0_1_ = (char)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar8 = (uint)(byte)local_168[4];
    }
    else {
      plVar25 = (long *)(*(long *)(local_170 + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01613f80:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01613f80;
      }
      uStack_c8._0_1_ = (char)plVar26[6];
    }
    iVar33 = (int)(char)uStack_c8;
    local_d0 = (CodeGenerator *)
               (*(long *)(local_168 + (ulong)(uVar8 + 2) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    uStack_c8._0_4_ = 0.0;
    Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,iVar33,(Register *)&local_d0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x128:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
    goto LAB_016106f8;
  case 0x129:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x4000000000);
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0x3f;
    local_b0._4_4_ = 0;
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x200000001;
    goto LAB_01611500;
  case 0x12a:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x4000000000);
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0x3f;
    local_b0._4_4_ = 0;
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x200000001;
    goto LAB_01611770;
  case 299:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160c760;
  case 300:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160fd4c;
  case 0x12d:
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    pAVar37 = (Assembler *)(this + 0xd0);
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 1;
    lVar27 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8);
    lVar29 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8 + 8);
    uVar34 = UseScratchRegisterScope::AcquireSameSizeAs
                       ((UseScratchRegisterScope *)&local_d0,(VRegister *)&local_140);
    uVar12 = UseScratchRegisterScope::AcquireSameSizeAs
                       ((UseScratchRegisterScope *)&local_d0,(VRegister *)&local_140);
    lVar23 = *(long *)(pIVar24 +
                      (((ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff) +
                      (ulong)(byte)*(uint *)(param_1 + 4)) * 8);
    pCVar44 = (CodeGenerator *)(uVar12 & 0xffffffff | 0x8000000000);
    pCVar43 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x400000001;
    uStack_188 = 0x400000001;
    local_190 = pCVar43;
    local_180 = pCVar44;
    Assembler::rev64(pAVar37,(VRegister *)&local_180,(VRegister *)&local_190);
    pCVar41 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x400000001;
    uStack_188 = 0x400000001;
    uStack_148 = 0x400000001;
    local_190 = pCVar44;
    local_180 = pCVar44;
    local_150 = pCVar41;
    Assembler::mul(pAVar37,(VRegister *)&local_180,(VRegister *)&local_190);
    pCVar42 = (CodeGenerator *)(uVar34 & 0xffffffff | 0x4000000000);
    local_178 = 0x200000001;
    uStack_188 = 0x200000001;
    local_190 = pCVar41;
    local_180 = pCVar42;
    Assembler::xtn(pAVar37,(VRegister *)&local_180);
    local_178 = 0x400000001;
    uStack_188 = 0x400000001;
    uStack_148 = 0x400000001;
    local_190 = pCVar44;
    local_180 = pCVar44;
    local_150 = pCVar44;
    Assembler::addp(pAVar37,(VRegister *)&local_180,(VRegister *)&local_190);
    pCVar41 = (CodeGenerator *)(lVar23 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = 0x200000001;
    uStack_188 = 0x200000001;
    local_190 = pCVar43;
    local_180 = pCVar41;
    Assembler::xtn(pAVar37,(VRegister *)&local_180);
    local_180 = (CodeGenerator *)((ulong)local_140 & 0xffffffff | 0x8000000000);
    local_190 = (CodeGenerator *)(uVar12 & 0xffffffff | 0x4000000000);
    local_178 = 0x200000001;
    uStack_188 = 0x200000001;
    Assembler::shll(pAVar37,(VRegister *)&local_180,(int)&local_190);
    local_180 = (CodeGenerator *)((ulong)local_140 & 0xffffffff | 0x8000000000);
    uStack_188 = 0x200000001;
    local_178 = 0x200000001;
    uStack_148 = 0x200000001;
    local_190 = pCVar41;
    local_150 = pCVar42;
    Assembler::umlal(pAVar37,(VRegister *)&local_180,(VRegister *)&local_190);
    goto LAB_01615ca4;
  case 0x12e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160ff20;
  case 0x12f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_0160fdb0;
  case 0x130:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01610100;
  case 0x131:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01610ae8;
  case 0x132:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x4000000000);
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0x3f;
    local_b0._4_4_ = 0;
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x200000001;
    goto LAB_0160da20;
  case 0x133:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01610468;
  case 0x134:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x200000001;
    goto LAB_01610694;
  case 0x135:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uVar20 = 0x400000001;
    goto LAB_0160bec0;
  case 0x136:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._4_4_ = 4;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) != 3) {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 != (long *)0x0) {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        goto LAB_01614c80;
      }
      goto LAB_01614c94;
    }
    if (((uint)uVar34 >> 3 & 1) != 0) goto LAB_016109bc;
LAB_0161085c:
    uStack_138._0_4_ = 1;
    Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
LAB_016109cc:
    cVar21 = SUB41((float)uStack_c8,0);
LAB_01614c9c:
    Assembler::mov((Assembler *)(this + 0xd0),(Register *)&local_180,(VRegister *)&local_140,
                   (int)cVar21);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x137:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    uVar34 = (ulong)(byte)param_1[4];
    lVar29 = *(long *)(param_1 + 0x28 + uVar34 * 8);
    local_180 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x400000001;
    if ((int)(lVar27 >> 0x23) != (int)(lVar29 >> 0x23)) {
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar34 = (ulong)(byte)local_168[4];
    }
    uVar8 = (uint)uVar34;
    uVar34 = *(ulong *)(local_168 + (ulong)(uVar8 + 1) * 8 + 0x28);
    lVar27 = *(long *)(local_170 + 0x28);
    if ((uVar34 & 7) != 3) {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) goto LAB_016147cc;
      iVar33 = (int)(uVar34 >> 3);
      plVar26 = plVar25;
      do {
        if (iVar33 <= (int)plVar36[4]) {
          plVar26 = plVar36;
        }
        plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
      } while (plVar36 != (long *)0x0);
LAB_016147b8:
      if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_016147cc;
      goto LAB_016147d0;
    }
LAB_0160f844:
    if (((uint)uVar34 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
    }
    else {
      uVar20 = *(undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10 + 8);
      uStack_c8._0_1_ = (char)uVar20;
      uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    }
    uVar8 = (uint)(byte)local_168[4];
    goto LAB_016147d4;
  case 0x138:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    Assembler::fcvtzs((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x139:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    goto LAB_0160f5f8;
  case 0x13a:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_c8._4_4_ = 4;
    IVar3 = param_1[4];
    uVar20 = 0x800000001;
    goto LAB_0160fbfc;
  case 0x13b:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    goto LAB_016106f8;
  case 0x13c:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0x1f;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x400000001;
    goto LAB_01611500;
  case 0x13d:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0x1f;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x400000001;
    goto LAB_01611770;
  case 0x13e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160c760;
  case 0x13f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160c580;
  case 0x140:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160fd4c;
  case 0x141:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160e3bc;
  case 0x142:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_016103c4;
  case 0x143:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_01610a84;
  case 0x144:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160ff20;
  case 0x145:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160fdb0;
  case 0x146:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_01610100;
  case 0x147:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_01610ae8;
  case 0x148:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 4;
    Assembler::fcvtzu((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x149:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    goto LAB_0160e28c;
  case 0x14a:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_c8._4_4_ = 4;
    IVar3 = param_1[4];
    uVar20 = 0x800000001;
    goto LAB_01610898;
  case 0x14b:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0x1f;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x400000001;
    goto LAB_0160da20;
  case 0x14c:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160fa5c;
  case 0x14d:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160d4ac;
  case 0x14e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_01610468;
  case 0x14f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_01610694;
  case 0x150:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uVar20 = 0x800000001;
    goto LAB_0160bec0;
  case 0x151:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._4_4_ = 8;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) != 0) goto LAB_0160fc84;
LAB_0160f18c:
      uStack_138._0_4_ = 1;
      Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      goto LAB_0160fc94;
    }
    plVar25 = (long *)(lVar27 + 0x48);
    plVar36 = (long *)*plVar25;
    if (plVar36 == (long *)0x0) {
LAB_01614960:
      plVar26 = plVar25;
    }
    else {
      iVar33 = (int)(uVar34 >> 3);
      plVar26 = plVar25;
      do {
        if (iVar33 <= (int)plVar36[4]) {
          plVar26 = plVar36;
        }
        plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
      } while (plVar36 != (long *)0x0);
LAB_0161494c:
      if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614960;
    }
    uStack_138._0_4_ = 1;
    cVar21 = (char)plVar26[6];
    goto LAB_01614968;
  case 0x152:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._4_4_ = 8;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) goto LAB_0160f030;
LAB_0160f350:
      uStack_138._0_4_ = 1;
      puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
      uVar20 = puVar14[1];
      local_d0 = (CodeGenerator *)*puVar14;
      uStack_c8._0_4_ = (float)uVar20;
      uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      cVar21 = (char)uVar20;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614604:
        plVar26 = plVar25;
      }
      else {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
LAB_016145f0:
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614604;
      }
      uStack_138._0_4_ = 1;
      cVar21 = (char)plVar26[6];
    }
    goto LAB_0161460c;
  case 0x153:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 8;
    uVar34 = (ulong)(byte)param_1[4];
    lVar29 = *(long *)(param_1 + 0x28 + uVar34 * 8);
    local_180 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x800000001;
    if ((int)(lVar27 >> 0x23) != (int)(lVar29 >> 0x23)) {
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar34 = (ulong)(byte)local_168[4];
    }
    uVar8 = (uint)uVar34;
    uVar34 = *(ulong *)(local_168 + (ulong)(uVar8 + 1) * 8 + 0x28);
    lVar27 = *(long *)(local_170 + 0x28);
    if ((uVar34 & 7) == 3) goto LAB_0160f844;
    plVar25 = (long *)(lVar27 + 0x48);
    plVar36 = (long *)*plVar25;
    if (plVar36 != (long *)0x0) {
      iVar33 = (int)(uVar34 >> 3);
      plVar26 = plVar25;
      do {
        if (iVar33 <= (int)plVar36[4]) {
          plVar26 = plVar36;
        }
        plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
      } while (plVar36 != (long *)0x0);
      goto LAB_016147b8;
    }
    goto LAB_016147cc;
  case 0x154:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
LAB_0160f5f8:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::sxtl((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x155:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_c8._4_4_ = 8;
    IVar3 = param_1[4];
    uVar20 = 0x1000000001;
LAB_0160fbfc:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)uVar20;
    uStack_138._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
    Assembler::sxtl2((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x156:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
    goto LAB_016106f8;
  case 0x157:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0xf;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x800000001;
    goto LAB_01611500;
  case 0x158:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0xf;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x800000001;
    goto LAB_01611770;
  case 0x159:
    pIVar24 = param_1 + 0x28;
    lVar28 = *(long *)pIVar24;
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uVar35 = lVar28 >> 0x23;
    lVar27 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8);
    lVar29 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8 + 8);
    uVar31 = lVar29 >> 0x23;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_c8);
    lVar23 = RegisterSizeInBitsFromFormat(0x40800000);
    uVar12 = IsVectorFormat(0x40800000);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0x100000001;
    }
    else {
      lVar11 = LaneCountFromFormat(0x40800000);
      uVar12 = lVar11 << 0x20 | 1;
    }
    uVar13 = 0x400000001;
    local_140 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar23 << 0x20);
    uStack_138._0_4_ = (uint)uVar12;
    uStack_138._4_4_ = (undefined4)(uVar12 >> 0x20);
    if ((int)(lVar28 >> 0x23) == (int)(lVar29 >> 0x23)) {
      local_180 = (CodeGenerator *)(uVar31 & 0xffffffff | 0x8000000000);
      local_178 = 0x400000001;
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar31 = (ulong)local_140 & 0xffffffff;
    }
    local_180 = (CodeGenerator *)(uVar35 & 0xffffffff | 0x4000000000);
    local_190 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x400000001;
    uStack_188 = 0x400000001;
    Assembler::sqxtn((Assembler *)(this + 0xd0),(VRegister *)&local_180);
    local_178 = 0x800000001;
    goto LAB_01614894;
  case 0x15a:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160c760;
  case 0x15b:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160b7f8;
  case 0x15c:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
LAB_0160c580:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::addp(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x15d:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160fd4c;
  case 0x15e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160bc00;
  case 0x15f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160e3bc;
  case 0x160:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_016103c4;
  case 0x161:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_01610a84;
  case 0x162:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160ff20;
  case 0x163:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160fdb0;
  case 0x164:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_01610100;
  case 0x165:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_01610ae8;
  case 0x166:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
LAB_0160e28c:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x4000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::uxtl((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x167:
    lVar27 = *(long *)(param_1 + 0x28);
    uStack_c8._4_4_ = 8;
    IVar3 = param_1[4];
    uVar20 = 0x1000000001;
LAB_01610898:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)uVar20;
    uStack_138._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
    Assembler::uxtl2((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x168:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 0xf;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x800000001;
    goto LAB_0160da20;
  case 0x169:
    pIVar24 = param_1 + 0x28;
    lVar28 = *(long *)pIVar24;
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uVar35 = lVar28 >> 0x23;
    lVar27 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8);
    lVar29 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8 + 8);
    uVar31 = lVar29 >> 0x23;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_c8);
    lVar23 = RegisterSizeInBitsFromFormat(0x40800000);
    uVar12 = IsVectorFormat(0x40800000);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0x100000001;
    }
    else {
      lVar11 = LaneCountFromFormat(0x40800000);
      uVar12 = lVar11 << 0x20 | 1;
    }
    uVar13 = 0x400000001;
    local_140 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar23 << 0x20);
    uStack_138._0_4_ = (uint)uVar12;
    uStack_138._4_4_ = (undefined4)(uVar12 >> 0x20);
    if ((int)(lVar28 >> 0x23) == (int)(lVar29 >> 0x23)) {
      local_180 = (CodeGenerator *)(uVar31 & 0xffffffff | 0x8000000000);
      local_178 = 0x400000001;
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar31 = (ulong)local_140 & 0xffffffff;
    }
    local_180 = (CodeGenerator *)(uVar35 & 0xffffffff | 0x4000000000);
    local_190 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x400000001;
    uStack_188 = 0x400000001;
    Assembler::sqxtun((Assembler *)(this + 0xd0),(VRegister *)&local_180);
    local_178 = 0x800000001;
    goto LAB_01614a74;
  case 0x16a:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160e358;
  case 0x16b:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160c6b0;
  case 0x16c:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160fa5c;
  case 0x16d:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160d4ac;
  case 0x16e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_01610468;
  case 0x16f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_01610694;
  case 0x170:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uVar20 = 0x1000000001;
LAB_0160bec0:
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                  0x2000000000);
    }
    uStack_138._0_4_ = 0;
    Assembler::dup((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x171:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._4_4_ = 0x10;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) != 3) {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 != (long *)0x0) {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        goto LAB_0161494c;
      }
      goto LAB_01614960;
    }
    if (((uint)uVar34 >> 3 & 1) == 0) goto LAB_0160f18c;
LAB_0160fc84:
    uStack_138._0_4_ = 1;
    puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
    uVar20 = puVar14[1];
    local_d0 = (CodeGenerator *)*puVar14;
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
LAB_0160fc94:
    cVar21 = SUB41((float)uStack_c8,0);
LAB_01614968:
    Assembler::umov((Assembler *)(this + 0xd0),(Register *)&local_180,(VRegister *)&local_140,
                    (int)cVar21);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x172:
    pIVar24 = param_1 + 0x28;
    local_180 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)pIVar24 >> 0x23) != 0x3f) {
      local_180 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._4_4_ = 0x10;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar27 = *(long *)(this + 0x28);
    if ((uVar34 & 7) != 3) {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 != (long *)0x0) {
        iVar33 = (int)(uVar34 >> 3);
        plVar26 = plVar25;
        do {
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        goto LAB_016145f0;
      }
      goto LAB_01614604;
    }
    if (((uint)uVar34 >> 3 & 1) != 0) goto LAB_0160f350;
LAB_0160f030:
    uStack_138._0_4_ = 1;
    Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
    cVar21 = SUB41((float)uStack_c8,0);
LAB_0161460c:
    Assembler::smov((Assembler *)(this + 0xd0),(Register *)&local_180,(VRegister *)&local_140,
                    (int)cVar21);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x173:
    lVar27 = *(long *)(param_1 + 0x28);
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    uVar34 = (ulong)(byte)param_1[4];
    lVar29 = *(long *)(param_1 + 0x28 + uVar34 * 8);
    local_180 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x1000000001;
    if ((int)(lVar27 >> 0x23) != (int)(lVar29 >> 0x23)) {
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar34 = (ulong)(byte)local_168[4];
    }
    uVar8 = (uint)uVar34;
    uVar34 = *(ulong *)(local_168 + (ulong)(uVar8 + 1) * 8 + 0x28);
    lVar27 = *(long *)(local_170 + 0x28);
    if ((uVar34 & 7) == 3) goto LAB_0160f844;
    plVar25 = (long *)(lVar27 + 0x48);
    plVar36 = (long *)*plVar25;
    if (plVar36 != (long *)0x0) {
      iVar33 = (int)(uVar34 >> 3);
      plVar26 = plVar25;
      do {
        if (iVar33 <= (int)plVar36[4]) {
          plVar26 = plVar36;
        }
        plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
      } while (plVar36 != (long *)0x0);
      goto LAB_016147b8;
    }
LAB_016147cc:
    plVar26 = plVar25;
LAB_016147d0:
    uStack_c8._0_1_ = (char)plVar26[6];
LAB_016147d4:
    iVar33 = (int)(char)uStack_c8;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 + (ulong)(uVar8 + 2) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 + (ulong)(uVar8 + 2) * 8 + 0x28) >> 0x23 & 0xffffffffU |
                 0x2000000000);
    }
    uStack_c8._0_4_ = 0.0;
    Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,iVar33,(Register *)&local_d0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x174:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x1000000001;
LAB_016106f8:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::neg(this + 0xd0,(VRegister *)&local_d0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x175:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 7;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x1000000001;
LAB_01611500:
    pCVar41 = (CodeGenerator *)(uVar34 & 0xffffffff | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_d0 = pCVar41;
    Assembler::dup((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(Register *)&local_190);
LAB_016117a0:
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = pCVar41;
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::sshl(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x176:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 7;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x1000000001;
LAB_01611770:
    pCVar41 = (CodeGenerator *)(uVar34 & 0xffffffff | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uVar7 = (float)uStack_c8;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    uVar9 = uStack_c8._4_4_;
    local_d0 = pCVar41;
    Assembler::dup((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(Register *)&local_190);
    local_140 = pCVar41;
    uStack_138._0_4_ = uVar7;
    uStack_138._4_4_ = uVar9;
    local_d0 = pCVar41;
    uStack_c8._0_4_ = (float)uVar7;
    uStack_c8._4_4_ = uVar9;
    Assembler::neg((Assembler *)(this + 0xd0),(VRegister *)&local_d0);
    goto LAB_016117a0;
  case 0x177:
    pIVar24 = param_1 + 0x28;
    lVar28 = *(long *)pIVar24;
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uVar35 = lVar28 >> 0x23;
    lVar27 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8);
    lVar29 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8 + 8);
    uVar31 = lVar29 >> 0x23;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_c8);
    lVar23 = RegisterSizeInBitsFromFormat(0x40400000);
    uVar12 = IsVectorFormat(0x40400000);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0x100000001;
    }
    else {
      lVar11 = LaneCountFromFormat(0x40400000);
      uVar12 = lVar11 << 0x20 | 1;
    }
    uVar13 = 0x800000001;
    local_140 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar23 << 0x20);
    uStack_138._0_4_ = (uint)uVar12;
    uStack_138._4_4_ = (undefined4)(uVar12 >> 0x20);
    if ((int)(lVar28 >> 0x23) == (int)(lVar29 >> 0x23)) {
      local_180 = (CodeGenerator *)(uVar31 & 0xffffffff | 0x8000000000);
      local_178 = 0x800000001;
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar31 = (ulong)local_140 & 0xffffffff;
    }
    local_180 = (CodeGenerator *)(uVar35 & 0xffffffff | 0x4000000000);
    local_190 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x800000001;
    uStack_188 = 0x800000001;
    Assembler::sqxtn((Assembler *)(this + 0xd0),(VRegister *)&local_180);
    local_178 = 0x1000000001;
LAB_01614894:
    local_190 = (CodeGenerator *)(uVar31 & 0xffffffff | 0x8000000000);
    local_180 = (CodeGenerator *)(uVar35 & 0xffffffff | 0x8000000000);
    uStack_188 = uVar13;
    Assembler::sqxtn2(this + 0xd0,(VRegister *)&local_180);
    goto LAB_01615ca4;
  case 0x178:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160c760:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::add(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x179:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160b7f8:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::sqadd(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x17a:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160fd4c:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::sub(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x17b:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160bc00:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::sqsub(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x17c:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160e3bc:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::mul(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x17d:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_016103c4:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::smin(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x17e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_01610a84:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::smax(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x17f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160ff20:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::cmeq(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x180:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160fdb0:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::cmeq(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
LAB_0160fe04:
    Assembler::mvn((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_d0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x181:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_01610100:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::cmgt(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x182:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_01610ae8:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::cmge(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x183:
    uVar12 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uVar34 = (ulong)(*(uint *)(param_1 + 4) >> 8) & 0xffff;
    uVar8 = (int)uVar12 + 1;
    local_190 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)(uVar8 + (int)uVar34) * 8 + 0x28) >> 0x23 &
                   0xffffffffU | 0x2000000000);
    }
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_b0._0_4_ = 7;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uVar34 = *(long *)(param_1 + (uVar34 + uVar12) * 8 + 0x28) >> 0x23;
    local_140 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23) != 0x3f) {
      local_140 = (CodeGenerator *)
                  (*(long *)(param_1 + (ulong)uVar8 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000
                  );
    }
    uStack_138._0_4_ = 0;
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)(this + 0xd0),&local_190,&local_140,&local_d0,0);
    local_178 = 0x1000000001;
LAB_0160da20:
    pAVar37 = (Assembler *)(this + 0xd0);
    pCVar41 = (CodeGenerator *)(uVar34 & 0xffffffff | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uVar7 = (float)uStack_c8;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    uVar9 = uStack_c8._4_4_;
    local_d0 = pCVar41;
    Assembler::dup(pAVar37,(VRegister *)&local_d0,(Register *)&local_190);
    local_140 = pCVar41;
    uStack_138._0_4_ = uVar7;
    uStack_138._4_4_ = uVar9;
    local_d0 = pCVar41;
    uStack_c8._0_4_ = (float)uVar7;
    uStack_c8._4_4_ = uVar9;
    Assembler::neg(pAVar37,(VRegister *)&local_d0);
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = pCVar41;
    uStack_138._0_4_ = uVar7;
    uStack_138._4_4_ = uVar9;
    uStack_c8._0_4_ = (float)uVar7;
    uStack_c8._4_4_ = uVar9;
    Assembler::ushl(pAVar37,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x184:
    pIVar24 = param_1 + 0x28;
    lVar28 = *(long *)pIVar24;
    local_d0 = this + 0x268;
    uStack_c8 = this + 0x278;
    uVar35 = lVar28 >> 0x23;
    lVar27 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8);
    lVar29 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8 + 8);
    uVar31 = lVar29 >> 0x23;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_c8);
    lVar23 = RegisterSizeInBitsFromFormat(0x40400000);
    uVar12 = IsVectorFormat(0x40400000);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0x100000001;
    }
    else {
      lVar11 = LaneCountFromFormat(0x40400000);
      uVar12 = lVar11 << 0x20 | 1;
    }
    uVar13 = 0x800000001;
    local_140 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar23 << 0x20);
    uStack_138._0_4_ = (uint)uVar12;
    uStack_138._4_4_ = (undefined4)(uVar12 >> 0x20);
    if ((int)(lVar28 >> 0x23) == (int)(lVar29 >> 0x23)) {
      local_180 = (CodeGenerator *)(uVar31 & 0xffffffff | 0x8000000000);
      local_178 = 0x800000001;
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180);
      uVar31 = (ulong)local_140 & 0xffffffff;
    }
    local_180 = (CodeGenerator *)(uVar35 & 0xffffffff | 0x4000000000);
    local_190 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x800000001;
    uStack_188 = 0x800000001;
    Assembler::sqxtun((Assembler *)(this + 0xd0),(VRegister *)&local_180);
    local_178 = 0x1000000001;
LAB_01614a74:
    local_190 = (CodeGenerator *)(uVar31 & 0xffffffff | 0x8000000000);
    local_180 = (CodeGenerator *)(uVar35 & 0xffffffff | 0x8000000000);
    uStack_188 = uVar13;
    Assembler::sqxtun2(this + 0xd0,(VRegister *)&local_180);
    goto LAB_01615ca4;
  case 0x185:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160e358:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::uqadd(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x186:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160c6b0:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::uqsub(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x187:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160fa5c:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::umin(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x188:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160d4ac:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::umax(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x189:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_01610468:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::cmhi(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x18a:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_01610694:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::cmhs(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x18b:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    TurboAssembler::Movi((TurboAssembler *)(this + 0xd0),&local_d0,0,0,0);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x18c:
    pIVar24 = param_1 + 0x28;
    lVar29 = *(long *)pIVar24;
    lVar27 = *(long *)(this + 0x28);
    uVar34 = (ulong)(byte)param_1[4];
    uVar12 = *(ulong *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    lVar23 = *(long *)(pIVar24 + uVar34 * 8);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar34 = (ulong)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614220:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614220;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar34 = *(ulong *)(local_168 + (ulong)((int)uVar34 + 2) * 8 + 0x28);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      fVar22 = (float)uStack_c8;
      if (fVar32 == 2.24208e-44) goto LAB_01615d40;
LAB_01615d78:
      if (fVar32 == 1.12104e-44) {
        uVar20 = 0x800000001;
      }
      else {
        if (fVar32 != 5.60519e-45) {
switchD_01606750_caseD_5:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar20 = 0x400000001;
      }
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01615d30:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01615d30;
      }
      fVar22 = (float)plVar26[6];
      if (fVar32 != 2.24208e-44) goto LAB_01615d78;
LAB_01615d40:
      uVar20 = 0x1000000001;
    }
    local_d0 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_140 = (CodeGenerator *)(lVar23 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::dup((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                   (int)fVar22);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x18d:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x1000000001;
    Assembler::and_(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x18e:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x1000000001;
    Assembler::orr(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 399:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x1000000001;
    Assembler::eor(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 400:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    Assembler::mvn((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x191:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8 + 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 2) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x1000000001;
    Assembler::bsl(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x192:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160f718;
  case 0x193:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160fb24;
  case 0x194:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160fac0;
  case 0x195:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160fcd4;
  case 0x196:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160c7d8;
  case 0x197:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x400000001;
    goto LAB_0160f4a8;
  case 0x198:
    pIVar24 = param_1 + 0x28;
    lVar29 = *(long *)pIVar24;
    local_180 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x400000001;
    uStack_c8 = this + 0x278;
    lVar28 = *(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8);
    local_190 = (CodeGenerator *)(lVar28 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_188 = 0x400000001;
    lVar23 = *(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8);
    local_d0 = this + 0x268;
    local_150 = (CodeGenerator *)(lVar23 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_148 = 0x400000001;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    pAVar37 = (Assembler *)(this + 0xd0);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_c8);
    lVar27 = RegisterSizeInBitsFromFormat(0x40800000);
    uVar12 = IsVectorFormat(0x40800000);
    if ((uVar12 & 1) == 0) {
      uStack_158 = (CodeGenerator *)0x100000001;
    }
    else {
      lVar11 = LaneCountFromFormat(0x40800000);
      uStack_158 = (CodeGenerator *)(lVar11 << 0x20 | 1);
    }
    local_160 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    iVar33 = (int)(lVar29 >> 0x23);
    if (iVar33 == (int)(lVar28 >> 0x23)) {
      ppCVar39 = (CodeGenerator **)&local_190;
LAB_016140d0:
      Assembler::mov(pAVar37,(VRegister *)&local_160,(VRegister *)ppCVar39);
      pCVar41 = local_160;
      ppCVar39[1] = uStack_158;
      *ppCVar39 = pCVar41;
    }
    else if (iVar33 == (int)(lVar23 >> 0x23)) {
      ppCVar39 = &local_150;
      goto LAB_016140d0;
    }
    uVar34 = *(ulong *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_140,(int)(uVar34 >> 0x20));
        uVar8 = (uint)uStack_138;
      }
      else {
        uStack_138._0_4_ =
             (uint)*(undefined8 *)
                    (*(long *)(*(long *)(local_170 + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10 +
                    8);
        uVar8 = (uint)uStack_138;
      }
    }
    else {
      plVar25 = (long *)(*(long *)(local_170 + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614158:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614158;
      }
      uVar8 = (uint)plVar26[6];
    }
    uVar19 = uVar8 & 7;
    uStack_138._0_4_ = (uint)uStack_188;
    uStack_138._4_4_ = (undefined4)(uStack_188 >> 0x20);
    local_140 = local_190;
    if (3 < uVar19) {
      uVar19 = uVar8 & 3;
      uStack_138._0_4_ = (uint)uStack_148;
      uStack_138._4_4_ = (undefined4)(uStack_148 >> 0x20);
      local_140 = local_150;
    }
    Assembler::mov(pAVar37,(VRegister *)&local_180,0,(VRegister *)&local_140,uVar19);
    uVar19 = uVar8 >> 8 & 7;
    uStack_138._0_4_ = (uint)uStack_188;
    uStack_138._4_4_ = (undefined4)(uStack_188 >> 0x20);
    local_140 = local_190;
    if (3 < uVar19) {
      uVar19 = uVar8 >> 8 & 3;
      uStack_138._0_4_ = (uint)uStack_148;
      uStack_138._4_4_ = (undefined4)(uStack_148 >> 0x20);
      local_140 = local_150;
    }
    Assembler::mov(pAVar37,(VRegister *)&local_180,1,(VRegister *)&local_140,uVar19);
    uVar19 = uVar8 >> 0x10 & 7;
    uStack_138._0_4_ = (uint)uStack_188;
    uStack_138._4_4_ = (undefined4)(uStack_188 >> 0x20);
    local_140 = local_190;
    if (3 < uVar19) {
      uVar19 = uVar8 >> 0x10 & 3;
      uStack_138._0_4_ = (uint)uStack_148;
      uStack_138._4_4_ = (undefined4)(uStack_148 >> 0x20);
      local_140 = local_150;
    }
    Assembler::mov(pAVar37,(VRegister *)&local_180,2,(VRegister *)&local_140,uVar19);
    uVar19 = uVar8 >> 0x18 & 7;
    uStack_138._0_4_ = (uint)uStack_188;
    uStack_138._4_4_ = (undefined4)(uStack_188 >> 0x20);
    local_140 = local_190;
    if (3 < uVar19) {
      uVar19 = uVar8 >> 0x18 & 3;
      uStack_138._0_4_ = (uint)uStack_148;
      uStack_138._4_4_ = (undefined4)(uStack_148 >> 0x20);
      local_140 = local_150;
    }
    Assembler::mov(pAVar37,(VRegister *)&local_180,3,(VRegister *)&local_140,uVar19);
    goto LAB_01615ca4;
  case 0x199:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160f718;
  case 0x19a:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160fb24;
  case 0x19b:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160fac0;
  case 0x19c:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160fcd4;
  case 0x19d:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160c7d8;
  case 0x19e:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x800000001;
    goto LAB_0160f4a8;
  case 0x19f:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160f718:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::zip1(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a0:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160fb24:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::zip2(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a1:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160fac0:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::uzp1(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a2:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160fcd4:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::uzp2(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a3:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160c7d8:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::trn1(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a4:
    lVar27 = *(long *)(param_1 + 0x28);
    local_178 = 0x1000000001;
LAB_0160f4a8:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)local_178;
    uStack_c8._4_4_ = (int)(local_178 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)((byte)param_1[4] + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU
                | 0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::trn2(this + 0xd0,(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a5:
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    IVar3 = param_1[4];
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)IVar3 * 8) >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x1000000001;
    local_190 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_188 = 0x1000000001;
    uVar34 = *(ulong *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8);
    if ((uVar34 & 7) == 3) {
      if (((uint)uVar34 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar34 >> 0x20));
        fVar32 = (float)uStack_c8;
      }
      else {
        puVar14 = (undefined8 *)
                  (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar34 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
        fVar32 = (float)uStack_c8;
      }
    }
    else {
      plVar25 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01614004:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar34 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01614004;
      }
      fVar32 = (float)plVar26[6];
    }
    Assembler::ext((Assembler *)(this + 0xd0),(VRegister *)&local_140,(VRegister *)&local_180,
                   (VRegister *)&local_190,(uint)fVar32 & 0xf);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a6:
    pIVar24 = param_1 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)param_1[4] + 1) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    local_178 = 0x1000000001;
    Assembler::tbl((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140,
                   (VRegister *)&local_180);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a7:
    pIVar24 = param_1 + 0x28;
    local_140 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    IVar3 = param_1[4];
    uVar12 = (ulong)(byte)IVar3;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 + uVar12 * 8) >> 0x23 & 0xffffffffU | 0x8000000000);
    local_178 = 0x1000000001;
    local_190 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_188 = 0x1000000001;
    uVar35 = *(ulong *)(pIVar24 + (ulong)((byte)IVar3 + 2) * 8);
    uVar34 = 0xf0f0f0f;
    if ((int)(*(long *)(pIVar24 + uVar12 * 8) >> 0x23) !=
        (int)(*(long *)(pIVar24 + (ulong)((byte)IVar3 + 1) * 8) >> 0x23)) {
      uVar34 = 0x1f1f1f1f;
    }
    lVar27 = *(long *)(this + 0x28);
    if ((uVar35 & 7) == 3) {
      if (((uint)uVar35 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar35 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar35 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar35 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      uVar12 = (ulong)(byte)local_168[4];
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_0161409c:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar35 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_0161409c;
      }
      uVar35 = plVar26[6];
    }
    uVar8 = (uint)uVar12;
    uVar12 = *(ulong *)(local_168 + (ulong)(uVar8 + 3) * 8 + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar8 = (uint)(byte)local_168[4];
      fVar32 = (float)uStack_c8;
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01615974:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01615974;
      }
      fVar32 = (float)plVar26[6];
    }
    uVar12 = *(ulong *)(local_168 + (ulong)(uVar8 + 4) * 8 + 0x28);
    if ((uVar12 & 7) == 3) {
      if (((uint)uVar12 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar12 >> 0x20));
        lVar27 = *(long *)(local_170 + 0x28);
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar12 >> 0x20) * 0x10);
        uVar20 = puVar14[1];
        local_d0 = (CodeGenerator *)*puVar14;
        uStack_c8._0_4_ = (float)uVar20;
        uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
      }
      uVar12 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      uVar8 = (uint)(byte)local_168[4];
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01615a14:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar12 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01615a14;
      }
      uVar12 = plVar26[6];
    }
    uVar31 = *(ulong *)(local_168 + (ulong)(uVar8 + 5) * 8 + 0x28);
    if ((uVar31 & 7) == 3) {
      if (((uint)uVar31 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_d0,(int)(uVar31 >> 0x20));
      }
      else {
        uStack_c8._0_4_ =
             (float)*(undefined8 *)(*(long *)(lVar27 + 0x60) + ((long)uVar31 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar25 = (long *)(lVar27 + 0x48);
      plVar36 = (long *)*plVar25;
      if (plVar36 == (long *)0x0) {
LAB_01615aa8:
        plVar26 = plVar25;
      }
      else {
        plVar26 = plVar25;
        do {
          iVar33 = (int)(uVar31 >> 3);
          if (iVar33 <= (int)plVar36[4]) {
            plVar26 = plVar36;
          }
          plVar36 = (long *)plVar36[(int)plVar36[4] < iVar33];
        } while (plVar36 != (long *)0x0);
        if ((plVar26 == plVar25) || (iVar33 < (int)plVar26[4])) goto LAB_01615aa8;
      }
      uStack_c8._0_4_ = (float)plVar26[6];
    }
    local_d0 = this + 0x268;
    uVar8 = (uint)uVar34 & (uint)(float)uStack_c8;
    uStack_c0 = (undefined4)*(undefined8 *)(this + 0x268);
    iStack_bc = (int)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
    local_b8 = *(long *)(this + 0x278);
    pTVar1 = (TurboAssembler *)(this + 0xd0);
    uStack_c8 = this + 0x278;
    uVar31 = UseScratchRegisterScope::AcquireNextAvailable(this + 0x278);
    lVar27 = RegisterSizeInBitsFromFormat(0x40000000);
    uVar13 = IsVectorFormat(0x40000000);
    if ((uVar13 & 1) == 0) {
      uStack_148 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x40000000);
      uStack_148 = lVar29 << 0x20 | 1;
    }
    local_150 = (CodeGenerator *)(uVar31 & 0xffffffff | lVar27 << 0x20);
    TurboAssembler::Movi
              (pTVar1,(VRegister *)&local_150,uVar12 & uVar34 | (ulong)uVar8 << 0x20,
               uVar35 & uVar34 | (ulong)((uint)uVar34 & (uint)fVar32) << 0x20);
    if ((uint)local_180 == (uint)local_190) {
      if (local_180._4_4_ == local_190._4_4_) {
        if ((int)local_178 == (int)uStack_188) {
          local_160 = (CodeGenerator *)((ulong)local_150 & 0xffffffff | 0x8000000000);
          uStack_158 = (CodeGenerator *)0x1000000001;
          Assembler::tbl((Assembler *)pTVar1,(VRegister *)&local_140,(VRegister *)&local_180,
                         (VRegister *)&local_160);
          goto LAB_01615ca4;
        }
      }
    }
    local_160 = (CodeGenerator *)((ulong)local_150 & 0xffffffff | 0x8000000000);
    uStack_158 = (CodeGenerator *)0x1000000001;
    Assembler::tbl((Assembler *)pTVar1,(VRegister *)&local_140,(VRegister *)&local_180,
                   (VRegister *)&local_190,(VRegister *)&local_160);
LAB_01615ca4:
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_d0);
    pCVar41 = uStack_c8;
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1a8:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    goto LAB_0160f5a8;
  case 0x1a9:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
    goto LAB_0160f5a8;
  case 0x1aa:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
    goto LAB_0160f560;
  case 0x1ab:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x1000000001;
LAB_0160f5a8:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::rev64((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1ac:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x1000000001;
LAB_0160f560:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = (uint)(float)uStack_c8;
    uStack_138._4_4_ = uStack_c8._4_4_;
    Assembler::rev32((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1ad:
    local_d0 = (CodeGenerator *)(*(long *)(param_1 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 0x10;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + 0x28 + (ulong)(byte)param_1[4] * 8) >> 0x23 & 0xffffffffU |
                0x8000000000);
    uStack_138._0_4_ = 1;
    uStack_138._4_4_ = 0x10;
    Assembler::rev16((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1ae:
  case 0x1b0:
    local_140 = this + 0x268;
    uStack_138 = this + 0x278;
    uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
    uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
    local_128 = *(undefined8 *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_138);
    lVar27 = RegisterSizeInBitsFromFormat(0x10800000);
    uVar12 = IsVectorFormat(0x10800000);
    if ((uVar12 & 1) == 0) {
      local_178 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x10800000);
      local_178 = lVar29 << 0x20 | 1;
    }
    local_180 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    uVar20 = 0x400000001;
    lVar27 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    goto LAB_016144ac;
  case 0x1af:
    local_140 = this + 0x268;
    pCVar41 = this + 0x278;
    uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
    uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
    local_128 = *(undefined8 *)(this + 0x278);
    pAVar37 = (Assembler *)(this + 0xd0);
    uStack_138 = pCVar41;
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(pCVar41);
    lVar27 = RegisterSizeInBitsFromFormat(0x40c00000);
    uVar12 = IsVectorFormat(0x40c00000);
    if ((uVar12 & 1) == 0) {
      local_178 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x40c00000);
      local_178 = lVar29 << 0x20 | 1;
    }
    local_180 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(pCVar41);
    lVar27 = RegisterSizeInBitsFromFormat(0x10800000);
    uVar12 = IsVectorFormat(0x10800000);
    if ((uVar12 & 1) == 0) {
      uStack_188 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x10800000);
      uStack_188 = lVar29 << 0x20 | 1;
    }
    local_190 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    local_d0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 2;
    Assembler::cmeq(pAVar37,(VRegister *)&local_180,(int)&stack0xffffffffffffff90 + -0x60);
    local_d0 = (CodeGenerator *)((ulong)local_180 & 0xffffffff | 0x8000000000);
    uStack_c8._0_4_ = 1.4013e-45;
    uStack_c8._4_4_ = 4;
    Assembler::umaxv(pAVar37,(VRegister *)&local_190);
    local_160 = (CodeGenerator *)0x200000003f;
    local_d0 = local_160;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000)
      ;
    }
    uStack_c8._0_4_ = 0.0;
    Assembler::umov(pAVar37,(Register *)&local_d0,(VRegister *)&local_190,0);
    uStack_148 = (ulong)uStack_148._4_4_ << 0x20;
    local_150 = local_160;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_150 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_b0._0_4_ = 1;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_160 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_158 = (CodeGenerator *)((ulong)uStack_158._4_4_ << 0x20);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_98 = 2;
    TurboAssembler::AddSubMacro((TurboAssembler *)pAVar37,&local_150,&local_160,&local_d0,0,0);
    goto LAB_01614784;
  case 0x1b1:
    local_140 = this + 0x268;
    uStack_138 = this + 0x278;
    uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
    uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
    local_128 = *(undefined8 *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_138);
    lVar27 = RegisterSizeInBitsFromFormat(0x10800000);
    uVar12 = IsVectorFormat(0x10800000);
    if ((uVar12 & 1) == 0) {
      local_178 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x10800000);
      local_178 = lVar29 << 0x20 | 1;
    }
    local_180 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    IVar3 = param_1[4];
    uVar20 = 0x400000001;
    goto LAB_0161467c;
  case 0x1b2:
    local_140 = this + 0x268;
    uStack_138 = this + 0x278;
    uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
    uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
    local_128 = *(undefined8 *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_138);
    lVar27 = RegisterSizeInBitsFromFormat(0x10400000);
    uVar12 = IsVectorFormat(0x10400000);
    if ((uVar12 & 1) == 0) {
      local_178 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x10400000);
      local_178 = lVar29 << 0x20 | 1;
    }
    local_180 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    IVar3 = param_1[4];
    uVar20 = 0x800000001;
    goto LAB_01614490;
  case 0x1b3:
    local_140 = this + 0x268;
    uStack_138 = this + 0x278;
    uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
    uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
    local_128 = *(undefined8 *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_138);
    lVar27 = RegisterSizeInBitsFromFormat(0x10400000);
    uVar12 = IsVectorFormat(0x10400000);
    if ((uVar12 & 1) == 0) {
      local_178 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x10400000);
      local_178 = lVar29 << 0x20 | 1;
    }
    local_180 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    IVar3 = param_1[4];
    uVar20 = 0x800000001;
LAB_0161467c:
    lVar27 = *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28);
LAB_01614698:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    Assembler::uminv(this + 0xd0,(VRegister *)&local_180);
LAB_016146a0:
    pAVar37 = (Assembler *)(this + 0xd0);
    pCVar41 = (CodeGenerator *)0x200000003f;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000)
      ;
    }
    uStack_c8._0_4_ = 0.0;
    Assembler::umov(pAVar37,(Register *)&local_d0,(VRegister *)&local_180,0);
    local_a0 = (CodeGenerator *)&DAT_ffffffff;
    local_190 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_190 = (CodeGenerator *)
                  (*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_98 = 2;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pAVar37,&DAT_01a56424,&local_190,&local_d0,1,0x40000000);
    uStack_c8._0_4_ = 0.0;
    local_d0 = pCVar41;
    if ((int)(*(long *)(local_168 + 0x28) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000)
      ;
    }
    Assembler::cset(pAVar37,&local_d0,1);
LAB_01614784:
    this_00 = (UseScratchRegisterScope *)&local_140;
    goto LAB_01614788;
  case 0x1b4:
    local_140 = this + 0x268;
    uStack_138 = this + 0x278;
    uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
    uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
    local_128 = *(undefined8 *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_138);
    lVar27 = RegisterSizeInBitsFromFormat(0x10000000);
    uVar12 = IsVectorFormat(0x10000000);
    if ((uVar12 & 1) == 0) {
      local_178 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x10000000);
      local_178 = lVar29 << 0x20 | 1;
    }
    local_180 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    IVar3 = param_1[4];
    uVar20 = 0x1000000001;
LAB_01614490:
    lVar27 = *(long *)(param_1 + (ulong)(byte)IVar3 * 8 + 0x28);
LAB_016144ac:
    local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_c8._0_4_ = (float)uVar20;
    uStack_c8._4_4_ = (int)((ulong)uVar20 >> 0x20);
    Assembler::umaxv(this + 0xd0,(VRegister *)&local_180);
    goto LAB_016146a0;
  case 0x1b5:
    local_140 = this + 0x268;
    uStack_138 = this + 0x278;
    uStack_130 = (undefined7)*(undefined8 *)(this + 0x268);
    uStack_129 = (undefined1)((ulong)*(undefined8 *)(this + 0x268) >> 0x38);
    local_128 = *(undefined8 *)(this + 0x278);
    uVar34 = UseScratchRegisterScope::AcquireNextAvailable(uStack_138);
    lVar27 = RegisterSizeInBitsFromFormat(0x10000000);
    uVar12 = IsVectorFormat(0x10000000);
    if ((uVar12 & 1) == 0) {
      local_178 = 0x100000001;
    }
    else {
      lVar29 = LaneCountFromFormat(0x10000000);
      local_178 = lVar29 << 0x20 | 1;
    }
    local_180 = (CodeGenerator *)(uVar34 & 0xffffffff | lVar27 << 0x20);
    uVar20 = 0x1000000001;
    lVar27 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28);
    goto LAB_01614698;
  case 0x1b6:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x1000000001;
    goto LAB_0160e9b4;
  case 0x1b7:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
    goto LAB_0160e9b4;
  case 0x1b8:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    goto LAB_0160e9b4;
  case 0x1b9:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
LAB_0160e9b4:
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x8000000000);
    uStack_138._0_4_ = (uint)uVar20;
    uStack_138._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    Assembler::ld1r(this + 0xd0,(MemOperand *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1ba:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
    goto LAB_0160e9fc;
  case 0x1bb:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x800000001;
    goto LAB_0160e6a8;
  case 0x1bc:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    goto LAB_0160e9fc;
  case 0x1bd:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x400000001;
    goto LAB_0160e6a8;
  case 0x1be:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
LAB_0160e9fc:
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = (uint)uVar20;
    uVar7 = (uint)uStack_138;
    uStack_138._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
    uVar9 = uStack_138._4_4_;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    Assembler::ld1((Assembler *)(this + 0xd0),(MemOperand *)&local_140);
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    local_140 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = uVar7;
    uStack_138._4_4_ = uVar9;
    uStack_c8._0_4_ = (float)uVar7;
    uStack_c8._4_4_ = uVar9;
    Assembler::sxtl((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1bf:
    lVar27 = *(long *)(param_1 + 0x28);
    uVar20 = 0x200000001;
LAB_0160e6a8:
    local_140 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = (uint)uVar20;
    uVar7 = (uint)uStack_138;
    uStack_138._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
    uVar9 = uStack_138._4_4_;
    Arm64OperandConverter::MemoryOperand((ulong)&local_170);
    Assembler::ld1((Assembler *)(this + 0xd0),(MemOperand *)&local_140);
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x8000000000);
    local_140 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = uVar7;
    uStack_138._4_4_ = uVar9;
    uStack_c8._0_4_ = (float)uVar7;
    uStack_c8._4_4_ = uVar9;
    Assembler::uxtl((Assembler *)(this + 0xd0),(VRegister *)&local_d0,(VRegister *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1c3:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)(*(long *)pIVar24 >> 0x23 & 0xffffffffU | 0x4000000000);
LAB_0160eb20:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 +
                          (((ulong)(*(uint *)(pIVar24 + -0x24) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(pIVar24 + -0x24)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldar((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1c7:
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,0)
    ;
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)
               (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
               0x4000000000);
LAB_0160dd14:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::stlr((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1cb:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    lVar29 = *(long *)(pIVar24 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8);
    lVar27 = *(long *)(local_168 + 0x28);
    uVar20 = 0;
    goto LAB_0160e870;
  case 0x1cf:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    uVar20 = 0x40000000;
    lVar29 = *(long *)(pIVar24 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8);
    lVar27 = *(long *)(local_168 + 0x28);
LAB_0160e870:
    local_140 = (CodeGenerator *)(lVar29 >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)
               (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,0,uVar20);
LAB_0160e8b0:
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x10) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(pIVar24 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x10) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 +
                          (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                          (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                 0xffffffffU | 0x4000000000);
    goto LAB_0160e924;
  case 0x1d3:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                          (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                 0xffffffffU | 0x4000000000);
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)
               (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0);
    goto LAB_0160e8b0;
  case 0x1d7:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x20000000;
    goto LAB_0160dbd0;
  case 0x1db:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uVar8 = *(uint *)(local_168 + 4);
    uVar20 = 0x40000000;
LAB_0160dbd0:
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 +
                          (((ulong)uVar8 & 0xff) + (ulong)(ushort)(uVar8 >> 8)) * 8 + 0x30) >> 0x23
                 & 0xffffffffU | 0x4000000000);
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a0 = (CodeGenerator *)
               (*(long *)(local_168 + (ulong)(byte)local_168[4] * 8 + 0x38) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)(this + 0xd0),&local_140,&local_180,&local_d0,uVar20);
    goto LAB_0160e8b0;
  case 0x1df:
    local_190 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(pIVar24 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 & 0xffffffffU |
                0x4000000000);
LAB_0160df90:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_178 = local_178 & 0xffffffff00000000;
    Assembler::stlxr((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                     (Register *)&local_180);
LAB_0160dfc4:
    lVar27 = *(long *)(local_168 +
                      (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30);
LAB_0160e974:
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(lVar27 >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)(lVar27 >> 0x23 & 0xffffffffU | 0x2000000000);
    }
    uStack_c8._0_4_ = 0.0;
    TurboAssembler::Cbnz((TurboAssembler *)(this + 0xd0),(Register *)&local_d0,(Label *)&local_190);
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
    break;
  case 0x1e3:
    local_190 = (CodeGenerator *)0x0;
    local_150 = (CodeGenerator *)0x0;
    pLVar15 = (Label *)(this + 0xd0);
    uVar34 = (ulong)*(uint *)(param_1 + 4) & 0xff;
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(param_1 + (uVar34 + (ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x28) >>
                 0x23 & 0xffffffffU | 0x4000000000);
    local_180 = (CodeGenerator *)
                (*(long *)(param_1 + uVar34 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_a0 = (CodeGenerator *)
               (*(long *)(param_1 + (ulong)((int)uVar34 + 1) * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0._1_7_ << 8);
    uStack_c8._0_4_ = (float)((uint)uStack_c8._1_3_ << 8);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_1_ = 0x13;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)pLVar15,&local_140,&local_180,&local_d0,0,0);
    Assembler::bind(pLVar15);
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)
                (*(long *)(local_168 + 0x28 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    Assembler::ldaxr((Assembler *)pLVar15,(Register *)&local_d0,(Register *)&local_140);
    uStack_138._0_4_ = 0;
    local_140 = (CodeGenerator *)(*(long *)(local_168 + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000);
    local_a0 = (CodeGenerator *)
               (*(long *)(local_168 + 0x28 + (ulong)(byte)local_168[4] * 8 + 0x10) >> 0x23 &
                0xffffffffU | 0x4000000000);
    local_d0 = (CodeGenerator *)((ulong)local_d0 & 0xffffffffffffff00);
    uStack_c8._0_4_ = (float)((uint)(float)uStack_c8 & 0xffffff00);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,0x13);
    uStack_90 = 3;
    uStack_8c = 0;
    local_98 = 0;
    uStack_94 = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pLVar15,&DAT_01a5640c,&local_140,&local_d0,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)pLVar15,&local_150,1);
    pIVar24 = local_168 + 0x28;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(pIVar24 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23) != 0x3f) {
      local_d0 = (CodeGenerator *)
                 (*(long *)(pIVar24 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 8) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    local_140 = (CodeGenerator *)
                (*(long *)(pIVar24 + (ulong)(byte)local_168[4] * 8 + 0x18) >> 0x23 & 0xffffffffU |
                0x4000000000);
LAB_0160e1d8:
    uStack_c8._0_4_ = 0.0;
    uStack_138._0_4_ = 0;
    local_180 = (CodeGenerator *)
                (*(long *)(pIVar24 +
                          (((ulong)(*(uint *)(local_168 + 4) >> 8) & 0xffff) +
                          (ulong)(byte)*(uint *)(local_168 + 4)) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000);
    local_178 = local_178 & 0xffffffff00000000;
    Assembler::stlxr((Assembler *)(this + 0xd0),(Register *)&local_d0,(Register *)&local_140,
                     (Register *)&local_180);
LAB_0160e20c:
    uStack_c8._0_4_ = 0.0;
    local_d0 = (CodeGenerator *)0x200000003f;
    if ((int)(*(long *)(local_168 +
                       (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                       (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23) != 0x3f)
    {
      local_d0 = (CodeGenerator *)
                 (*(long *)(local_168 +
                           (((ulong)*(uint *)(local_168 + 4) & 0xff) +
                           (ulong)(ushort)(*(uint *)(local_168 + 4) >> 8)) * 8 + 0x30) >> 0x23 &
                  0xffffffffU | 0x2000000000);
    }
    TurboAssembler::Cbnz((TurboAssembler *)(this + 0xd0),(Register *)&local_d0,(Label *)&local_190);
LAB_0160e254:
    Assembler::bind((Label *)(this + 0xd0));
    pCVar41 = (CodeGenerator *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0);
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
    uStack_c8 = pCVar41;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

