
/* v8::internal::compiler::PipelineImpl::VerifyGeneratedCodeIsIdempotent() */

void __thiscall
v8::internal::compiler::PipelineImpl::VerifyGeneratedCodeIsIdempotent(PipelineImpl *this)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  InstructionSequence *this_00;
  uint uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  piVar10 = *(int **)(*(long *)this + 0x198);
  if (piVar10 != (int *)0x0) {
    this_00 = *(InstructionSequence **)(*(long *)this + 0x110);
    uVar5 = *(uint *)(this_00 + 0xd0);
    lVar3 = **(long **)(this_00 + 0x10);
    lVar4 = (*(long **)(this_00 + 0x10))[1];
    uVar6 = base::hash_value(uVar5);
    uVar6 = base::hash_combine(0,uVar6);
    uVar7 = base::hash_value((uint)((ulong)(lVar4 - lVar3) >> 3));
    uVar6 = base::hash_combine(uVar6,uVar7);
    lVar3 = *(long *)(this_00 + 0x88);
    if (*(long *)(this_00 + 0x90) != lVar3) {
      uVar7 = *(ulong *)(this_00 + 0xb0);
      plVar11 = (long *)(lVar3 + (uVar7 >> 6 & 0x3fffffffffffff8));
      puVar1 = (undefined8 *)
               (*(long *)(lVar3 + (*(long *)(this_00 + 0xb8) + uVar7 >> 6 & 0x3fffffffffffff8)) +
               (*(long *)(this_00 + 0xb8) + uVar7 & 0x1ff) * 8);
      puVar13 = (undefined8 *)(*plVar11 + (uVar7 & 0x1ff) * 8);
      while (puVar1 != puVar13) {
        while( true ) {
          puVar12 = puVar13 + 1;
          uVar9 = *(uint *)*puVar13;
          uVar2 = ((uint *)*puVar13)[1];
          uVar7 = base::hash_combine((ulong)(uVar2 >> 8) & 0xffff,(ulong)uVar2 & 0xff);
          uVar8 = base::hash_value(uVar9);
          uVar7 = base::hash_combine(uVar7,uVar8);
          uVar6 = base::hash_value(uVar6);
          uVar6 = base::hash_combine(uVar7,uVar6);
          puVar13 = puVar12;
          if ((long)puVar12 - *plVar11 != 0x1000) break;
          plVar11 = plVar11 + 1;
          puVar13 = (undefined8 *)*plVar11;
          if (puVar1 == puVar13) goto LAB_012a9834;
        }
      }
    }
LAB_012a9834:
    if (0 < (int)uVar5) {
      uVar9 = 0;
      do {
        uVar7 = InstructionSequence::GetRepresentation(this_00,uVar9);
        uVar7 = base::hash_combine(0,uVar7 & 0xff);
        uVar6 = base::hash_value(uVar6);
        uVar6 = base::hash_combine(uVar7,uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    if (*piVar10 == 0) {
      *(ulong *)(piVar10 + 8) = uVar6;
    }
    else if (uVar6 != *(ulong *)(piVar10 + 8)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","hash_code == jump_opt->hash_code()");
    }
  }
  return;
}

