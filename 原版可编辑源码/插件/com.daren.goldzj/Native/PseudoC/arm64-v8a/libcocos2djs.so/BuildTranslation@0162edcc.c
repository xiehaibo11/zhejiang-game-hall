
/* WARNING: Removing unreachable block (ram,0x0162efdc) */
/* v8::internal::compiler::CodeGenerator::BuildTranslation(v8::internal::compiler::Instruction*,
   int, unsigned long, v8::internal::compiler::OutputFrameStateCombine) */

undefined4 * __thiscall
v8::internal::compiler::CodeGenerator::BuildTranslation
          (CodeGenerator *this,long param_1,undefined4 param_2,long param_3,undefined8 param_5)

{
  TranslationBuffer *this_00;
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  InstructionSequence *this_01;
  undefined8 *puVar6;
  Zone *this_02;
  undefined4 *puVar7;
  InstructionSequence *pIVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  InstructionSequence *pIVar12;
  ulong uVar13;
  InstructionSequence *pIVar14;
  FrameStateDescriptor *this_03;
  long local_b0;
  long lStack_a8;
  undefined4 local_a0 [2];
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TranslationBuffer *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  this_01 = *(InstructionSequence **)(this + 0x28);
  uVar11 = *(ulong *)(param_1 + ((ulong)*(byte *)(param_1 + 4) + param_3) * 8 + 0x28);
  if ((uVar11 & 7) == 3) {
    if (((uint)uVar11 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_80,(int)(uVar11 >> 0x20));
      this_01 = *(InstructionSequence **)(this + 0x28);
    }
    else {
      puVar6 = (undefined8 *)(*(long *)(this_01 + 0x60) + ((long)uVar11 >> 0x20) * 0x10);
      uStack_78 = puVar6[1];
      local_80 = (TranslationBuffer *)*puVar6;
    }
    iVar5 = (int)uStack_78;
    goto LAB_0162ee98;
  }
  pIVar8 = this_01 + 0x48;
  pIVar14 = *(InstructionSequence **)pIVar8;
  if (pIVar14 == (InstructionSequence *)0x0) {
LAB_0162ee78:
    pIVar12 = pIVar8;
  }
  else {
    pIVar12 = pIVar8;
    do {
      iVar5 = (int)(uVar11 >> 3);
      if (iVar5 <= *(int *)(pIVar14 + 0x20)) {
        pIVar12 = pIVar14;
      }
      pIVar14 = *(InstructionSequence **)(pIVar14 + (ulong)(*(int *)(pIVar14 + 0x20) < iVar5) * 8);
    } while (pIVar14 != (InstructionSequence *)0x0);
    if ((pIVar12 == pIVar8) || (iVar5 < *(int *)(pIVar12 + 0x20))) goto LAB_0162ee78;
  }
  iVar5 = (int)*(undefined8 *)(pIVar12 + 0x30);
LAB_0162ee98:
  puVar6 = (undefined8 *)InstructionSequence::GetDeoptimizationEntry(this_01,iVar5);
  lVar9 = puVar6[2];
  iVar5 = *(int *)(puVar6 + 3);
  this_03 = (FrameStateDescriptor *)*puVar6;
  this_00 = (TranslationBuffer *)(this + 0x398);
  iVar3 = FrameStateDescriptor::GetFrameCount(this_03);
  iVar4 = FrameStateDescriptor::GetJSFrameCount(this_03);
  local_70 = *(undefined8 *)(this + 8);
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)*(undefined8 *)(this + 0x3a0));
  local_80 = this_00;
  TranslationBuffer::Add(this_00,0);
  TranslationBuffer::Add(this_00,iVar3);
  TranslationBuffer::Add(this_00,iVar4);
  TranslationBuffer::Add(this_00,(uint)(lVar9 != 0 && iVar5 != -1));
  if ((puVar6[2] != 0) && (*(int *)(puVar6 + 3) != -1)) {
    local_a0[0] = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_98 = puVar6[2];
    iVar5 = DefineDeoptimizationLiteral(this,local_a0);
    Translation::AddUpdateFeedback((Translation *)&local_80,iVar5,*(int *)(puVar6 + 3));
  }
  local_b0 = param_1;
  lStack_a8 = param_3 + 1;
  BuildTranslationForFrameStateDescriptor(this,this_03,&local_b0,&local_80,param_5);
  this_02 = *(Zone **)(this + 8);
  puVar7 = *(undefined4 **)(this_02 + 0x10);
  if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar7) < 0x28) {
    puVar7 = (undefined4 *)Zone::NewExpand(this_02,0x28);
  }
  else {
    *(undefined4 **)(this_02 + 0x10) = puVar7 + 10;
  }
  uVar10 = *(undefined8 *)(this + 200);
  uVar1 = *(undefined4 *)(this_03 + 4);
  uVar2 = *(undefined2 *)(puVar6 + 1);
  *(undefined8 *)(puVar7 + 4) = 0;
  puVar7[8] = param_2;
  *puVar7 = 0x8000;
  *(undefined8 *)(puVar7 + 2) = uVar10;
  puVar7[6] = uVar1;
  puVar7[7] = (undefined4)uStack_78;
  *(undefined2 *)(puVar7 + 9) = uVar2;
  *(undefined1 *)((long)puVar7 + 0x26) = 0;
  lVar9 = *(long *)(this + 0x2f8);
  uVar11 = 0;
  if (*(long *)(this + 0x300) - lVar9 != 0) {
    uVar11 = (*(long *)(this + 0x300) - lVar9) * 0x40 - 1;
  }
  uVar13 = *(long *)(this + 0x328) + *(long *)(this + 800);
  if (uVar11 == uVar13) {
    std::__ndk1::
    deque<v8::internal::compiler::DeoptimizationExit*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::DeoptimizationExit*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>>
                *)(this + 0x2f0));
    lVar9 = *(long *)(this + 0x2f8);
    uVar13 = *(long *)(this + 800) + *(long *)(this + 0x328);
  }
  *(undefined4 **)(*(long *)(lVar9 + (uVar13 >> 6 & 0x3fffffffffffff8)) + (uVar13 & 0x1ff) * 8) =
       puVar7;
  *(long *)(this + 0x328) = *(long *)(this + 0x328) + 1;
  return puVar7;
}

