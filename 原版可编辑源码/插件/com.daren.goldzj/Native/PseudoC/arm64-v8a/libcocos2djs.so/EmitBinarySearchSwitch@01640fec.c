
/* v8::internal::compiler::InstructionSelector::EmitBinarySearchSwitch(v8::internal::compiler::SwitchInfo
   const&, v8::internal::compiler::InstructionOperand const&) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitBinarySearchSwitch
          (InstructionSelector *this,SwitchInfo *param_1,InstructionOperand *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  InstructionOperand *pIVar7;
  Instruction *this_00;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  InstructionSequence *this_01;
  ulong uVar11;
  InstructionOperand *pIVar12;
  long *plVar13;
  long lVar14;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  
  pZVar3 = *(Zone **)this;
  pIVar7 = *(InstructionOperand **)(pZVar3 + 0x10);
  uVar1 = ((*(long **)param_1)[1] - **(long **)param_1 >> 3) + 2;
  uVar8 = uVar1 * 8;
  if (uVar8 < (ulong)(*(long *)(pZVar3 + 0x18) - (long)pIVar7) ||
      uVar8 - (*(long *)(pZVar3 + 0x18) - (long)pIVar7) == 0) {
    *(InstructionOperand **)(pZVar3 + 0x10) = pIVar7 + uVar8;
  }
  else {
    pIVar7 = (InstructionOperand *)Zone::NewExpand(pZVar3,uVar8);
  }
  *(undefined8 *)pIVar7 = *(undefined8 *)param_2;
  local_68 = (long)*(int *)(*(long *)(param_1 + 0x18) + 4);
  local_70 = 7;
  local_6c = 0x13;
  uVar4 = InstructionSequence::AddImmediate
                    (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
  *(undefined8 *)(pIVar7 + 8) = uVar4;
  puVar9 = (undefined8 *)**(long **)param_1;
  puVar2 = (undefined8 *)(*(long **)param_1)[1];
  uVar8 = (long)puVar2 - (long)puVar9;
  if (uVar8 == 0) {
    puVar5 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)uVar8 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar5 = operator_new(uVar8);
    puVar10 = puVar5;
    for (; puVar9 != puVar2; puVar9 = puVar9 + 2) {
      uVar4 = *puVar9;
      puVar10[1] = puVar9[1];
      *puVar10 = uVar4;
      puVar10 = puVar10 + 2;
    }
  }
  lVar14 = (long)puVar10 - (long)puVar5;
  uVar8 = lVar14 >> 4;
  if (0x800 < lVar14) {
    uVar11 = uVar8;
    if (0x7fffffffffffffe < (long)uVar8) {
      uVar11 = 0x7ffffffffffffff;
    }
    do {
      pvVar6 = operator_new(uVar11 << 4,(nothrow_t *)&std::nothrow);
      if (pvVar6 != (void *)0x0) {
        std::__ndk1::
        __stable_sort<v8::internal::compiler::SwitchInfo::CasesSortedByValue()const::_lambda(v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo)_1_&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                  (puVar5,puVar10,&local_70,uVar8,pvVar6,uVar11);
        operator_delete(pvVar6);
        goto joined_r0x01641160;
      }
      uVar11 = uVar11 >> 1;
    } while (uVar11 != 0);
  }
  std::__ndk1::
  __stable_sort<v8::internal::compiler::SwitchInfo::CasesSortedByValue()const::_lambda(v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo)_1_&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
            (puVar5,puVar10,&local_70,uVar8,0,0);
joined_r0x01641160:
  if (0x800 < lVar14) {
    uVar11 = uVar8;
    if (0x7fffffffffffffe < (long)uVar8) {
      uVar11 = 0x7ffffffffffffff;
    }
    do {
      pvVar6 = operator_new(uVar11 << 4,(nothrow_t *)&std::nothrow);
      if (pvVar6 != (void *)0x0) {
        FUN_01643828(puVar5,puVar10,&local_70,uVar8,pvVar6,uVar11);
        operator_delete(pvVar6);
        goto joined_r0x016411dc;
      }
      uVar11 = uVar11 >> 1;
    } while (uVar11 != 0);
  }
  FUN_01643828(puVar5,puVar10,&local_70,uVar8,0,0);
joined_r0x016411dc:
  if (lVar14 != 0) {
    uVar11 = 0;
    pIVar12 = pIVar7 + 0x18;
    plVar13 = puVar5 + 1;
    do {
      this_01 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant((Constant *)&local_70,(int)plVar13[-1]);
      uVar4 = InstructionSequence::AddImmediate(this_01,(Constant *)&local_70);
      *(undefined8 *)(pIVar12 + -8) = uVar4;
      local_68 = (long)*(int *)(*plVar13 + 4);
      local_70 = 7;
      local_6c = 0x13;
      uVar4 = InstructionSequence::AddImmediate
                        (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
      uVar11 = uVar11 + 1;
      *(undefined8 *)pIVar12 = uVar4;
      pIVar12 = pIVar12 + 0x10;
      plVar13 = plVar13 + 2;
    } while (uVar11 < uVar8);
  }
  if (uVar1 < 0xffff) {
    if (0xffff < (uint)uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","InputCountField::is_valid(input_count)");
    }
    pZVar3 = *(Zone **)(*(long *)(this + 0x10) + 8);
    this_00 = *(Instruction **)(pZVar3 + 0x10);
    uVar8 = 0x30;
    if (uVar1 != 0) {
      uVar8 = (long)((uVar1 << 0x23) + 0x2800000000) >> 0x20;
    }
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_00) < uVar8) {
      this_00 = (Instruction *)Zone::NewExpand(pZVar3,uVar8);
    }
    else {
      *(Instruction **)(pZVar3 + 0x10) = this_00 + uVar8;
    }
    Instruction::Instruction
              (this_00,0xe,0,(InstructionOperand *)0x0,uVar1,pIVar7,0,(InstructionOperand *)0x0);
    Emit(this,this_00);
  }
  else {
    this[0x178] = (InstructionSelector)0x1;
  }
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  return;
}

