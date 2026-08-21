
/* v8::internal::compiler::ConstraintBuilder::ResolvePhis(v8::internal::compiler::InstructionBlock
   const*) */

void __thiscall
v8::internal::compiler::ConstraintBuilder::ResolvePhis
          (ConstraintBuilder *this,InstructionBlock *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  PhiMapValue *this_00;
  RegisterAllocationData *this_01;
  ParallelMove *this_02;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  PhiInstruction *pPVar10;
  Zone *pZVar11;
  long lVar12;
  ulong uVar13;
  ulong local_68;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  do {
    if (puVar1 == puVar3) {
      return;
    }
    pPVar10 = (PhiInstruction *)*puVar1;
    iVar4 = *(int *)pPVar10;
    this_00 = (PhiMapValue *)
              RegisterAllocationData::InitializePhiMap
                        (*(RegisterAllocationData **)this,param_1,pPVar10);
    lVar12 = *(long *)(pPVar10 + 0x10);
    this_01 = *(RegisterAllocationData **)this;
    if (*(long *)(pPVar10 + 0x18) != lVar12) {
      uVar13 = 0;
      do {
        lVar7 = *(long *)(this_01 + 0x10);
        lVar2 = **(long **)(lVar7 + 0x10);
        uVar9 = (ulong)*(int *)(*(long *)(param_1 + 0x20) + uVar13 * 4);
        if ((ulong)((*(long **)(lVar7 + 0x10))[1] - lVar2 >> 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_68 = (ulong)*(uint *)(lVar12 + uVar13 * 4) << 3 | 0x9800000001;
        uVar9 = ((long)*(int *)(*(long *)(lVar2 + uVar9 * 8) + 0x74) + *(long *)(lVar7 + 0xb0)) - 1;
        lVar12 = *(long *)(*(long *)(*(long *)(lVar7 + 0x88) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                          (uVar9 & 0x1ff) * 8);
        this_02 = *(ParallelMove **)(lVar12 + 0x10);
        if (this_02 == (ParallelMove *)0x0) {
          pZVar11 = *(Zone **)(lVar7 + 8);
          this_02 = *(ParallelMove **)(pZVar11 + 0x10);
          if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)this_02) < 0x20) {
            this_02 = (ParallelMove *)Zone::NewExpand(pZVar11,0x20);
          }
          else {
            *(ParallelMove **)(pZVar11 + 0x10) = this_02 + 0x20;
          }
          *(undefined8 *)this_02 = 0;
          *(undefined8 *)(this_02 + 8) = 0;
          *(undefined8 *)(this_02 + 0x10) = 0;
          *(Zone **)(this_02 + 0x18) = pZVar11;
          *(ParallelMove **)(lVar12 + 0x10) = this_02;
        }
        lVar12 = ParallelMove::AddMove
                           (this_02,(InstructionOperand *)&local_68,
                            (InstructionOperand *)(pPVar10 + 8),*(Zone **)(this_02 + 0x18));
        RegisterAllocationData::PhiMapValue::AddOperand(this_00,(InstructionOperand *)(lVar12 + 8));
        lVar12 = *(long *)(pPVar10 + 0x10);
        this_01 = *(RegisterAllocationData **)this;
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulong)(*(long *)(pPVar10 + 0x18) - lVar12 >> 2));
    }
    lVar12 = RegisterAllocationData::GetOrCreateLiveRangeFor(this_01,iVar4);
    iVar4 = *(int *)(param_1 + 0x70);
    pZVar11 = (Zone *)**(undefined8 **)this;
    piVar6 = *(int **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)piVar6) < 0x18) {
      piVar6 = (int *)Zone::NewExpand(pZVar11,0x18);
    }
    else {
      *(int **)(pZVar11 + 0x10) = piVar6 + 6;
    }
    uVar8 = *(undefined8 *)(lVar12 + 0x78);
    *piVar6 = iVar4;
    puVar1 = puVar1 + 1;
    *(InstructionOperand **)(piVar6 + 2) = (InstructionOperand *)(pPVar10 + 8);
    *(undefined8 *)(piVar6 + 4) = uVar8;
    uVar5 = *(uint *)(lVar12 + 4);
    *(int **)(lVar12 + 0x78) = piVar6;
    if (*(int *)(lVar12 + 0x84) <= iVar4) {
      iVar4 = *(int *)(lVar12 + 0x84);
    }
    *(uint *)(lVar12 + 4) = uVar5 | 8;
    *(int *)(lVar12 + 0x84) = iVar4;
    *(uint *)(lVar12 + 4) =
         uVar5 & 0xffffffe0 | uVar5 & 0xf | 8 | (*(uint *)(param_1 + 0x6c) >> 0x1f) << 4;
  } while( true );
}

