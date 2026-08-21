
/* v8::internal::compiler::InstructionSelector::EmitLookupSwitch(v8::internal::compiler::SwitchInfo
   const&, v8::internal::compiler::InstructionOperand const&) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitLookupSwitch
          (InstructionSelector *this,SwitchInfo *param_1,InstructionOperand *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  Zone *pZVar4;
  undefined8 uVar5;
  InstructionOperand *pIVar6;
  Instruction *this_00;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  InstructionSequence *this_01;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  InstructionOperand *pIVar14;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  
  puVar8 = (undefined8 *)**(long **)param_1;
  puVar1 = (undefined8 *)(*(long **)param_1)[1];
  uVar10 = (long)puVar1 - (long)puVar8;
  if (uVar10 == 0) {
    puVar2 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)uVar10 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar2 = operator_new(uVar10);
    puVar11 = puVar2;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 2) {
      uVar5 = *puVar8;
      puVar11[1] = puVar8[1];
      *puVar11 = uVar5;
      puVar11 = puVar11 + 2;
    }
  }
  lVar13 = (long)puVar11 - (long)puVar2;
  uVar10 = lVar13 >> 4;
  if (0x800 < lVar13) {
    uVar12 = uVar10;
    if (0x7fffffffffffffe < (long)uVar10) {
      uVar12 = 0x7ffffffffffffff;
    }
    do {
      pvVar3 = operator_new(uVar12 << 4,(nothrow_t *)&std::nothrow);
      if (pvVar3 != (void *)0x0) {
        std::__ndk1::
        __stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                  (puVar2,puVar11,&local_70,uVar10,pvVar3,uVar12);
        operator_delete(pvVar3);
        goto LAB_01640e34;
      }
      uVar12 = uVar12 >> 1;
    } while (uVar12 != 0);
  }
  std::__ndk1::
  __stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
            (puVar2,puVar11,&local_70,uVar10,0,0);
LAB_01640e34:
  pZVar4 = *(Zone **)this;
  pIVar6 = *(InstructionOperand **)(pZVar4 + 0x10);
  uVar12 = ((*(long **)param_1)[1] - **(long **)param_1 >> 3) + 2;
  uVar7 = uVar12 * 8;
  if (uVar7 < (ulong)(*(long *)(pZVar4 + 0x18) - (long)pIVar6) ||
      uVar7 - (*(long *)(pZVar4 + 0x18) - (long)pIVar6) == 0) {
    *(InstructionOperand **)(pZVar4 + 0x10) = pIVar6 + uVar7;
  }
  else {
    pIVar6 = (InstructionOperand *)Zone::NewExpand(pZVar4,uVar7);
  }
  *(undefined8 *)pIVar6 = *(undefined8 *)param_2;
  local_68 = (long)*(int *)(*(long *)(param_1 + 0x18) + 4);
  local_70 = 7;
  local_6c = 0x13;
  uVar5 = InstructionSequence::AddImmediate
                    (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
  *(undefined8 *)(pIVar6 + 8) = uVar5;
  if (lVar13 != 0) {
    uVar7 = 0;
    plVar9 = puVar2 + 1;
    pIVar14 = pIVar6 + 0x18;
    do {
      this_01 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant((Constant *)&local_70,(int)plVar9[-1]);
      uVar5 = InstructionSequence::AddImmediate(this_01,(Constant *)&local_70);
      *(undefined8 *)(pIVar14 + -8) = uVar5;
      local_68 = (long)*(int *)(*plVar9 + 4);
      local_70 = 7;
      local_6c = 0x13;
      uVar5 = InstructionSequence::AddImmediate
                        (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
      uVar7 = uVar7 + 1;
      *(undefined8 *)pIVar14 = uVar5;
      plVar9 = plVar9 + 2;
      pIVar14 = pIVar14 + 0x10;
    } while (uVar7 < uVar10);
  }
  if (uVar12 < 0xffff) {
    if (0xffff < (uint)uVar12) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","InputCountField::is_valid(input_count)");
    }
    pZVar4 = *(Zone **)(*(long *)(this + 0x10) + 8);
    this_00 = *(Instruction **)(pZVar4 + 0x10);
    uVar10 = 0x30;
    if (uVar12 != 0) {
      uVar10 = (long)((uVar12 << 0x23) + 0x2800000000) >> 0x20;
    }
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)this_00) < uVar10) {
      this_00 = (Instruction *)Zone::NewExpand(pZVar4,uVar10);
    }
    else {
      *(Instruction **)(pZVar4 + 0x10) = this_00 + uVar10;
    }
    Instruction::Instruction
              (this_00,0xf,0,(InstructionOperand *)0x0,uVar12,pIVar6,0,(InstructionOperand *)0x0);
    Emit(this,this_00);
  }
  else {
    this[0x178] = (InstructionSelector)0x1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  return;
}

