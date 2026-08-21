
/* v8::internal::Deserializer::VisitEmbeddedPointer(v8::internal::Code, v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Deserializer::VisitEmbeddedPointer
          (Deserializer *this,undefined8 param_2,undefined8 *param_3)

{
  Instruction *pIVar1;
  Instruction *pIVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar8;
  Instruction *this_00;
  undefined8 uVar9;
  Instruction *local_38;
  ulong uVar7;
  
  local_38 = (Instruction *)0x0;
  bVar3 = ReadData<v8::internal::FullMaybeObjectSlot>(this,&local_38,&stack0xffffffffffffffd0,1,0);
  pIVar2 = local_38;
  if (!bVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","filled");
  }
  this_00 = (Instruction *)*param_3;
  uVar8 = SUB84(local_38,0);
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    puVar4 = (undefined4 *)Instruction::ImmPCOffsetTarget(this_00);
    *puVar4 = uVar8;
  }
  else if (this_00[3] == (Instruction)0x58) {
    puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    *puVar5 = pIVar2;
  }
  else {
    pIVar1 = this_00;
    if (local_38 != (Instruction *)0x0) {
      pIVar1 = local_38;
    }
    Instruction::SetBranchImmTarget(this_00,pIVar1);
    FlushInstructionCache(this_00,4);
  }
  if ((((ulong)pIVar2 & 1) != 0) && (uVar9 = param_3[3], (int)uVar9 != 0)) {
    uVar7 = *(ulong *)(((ulong)pIVar2 & 0xfffffffffffc0000) + 8);
    uVar6 = (uint)uVar7;
    if ((uVar7 & 0x18) != 0) {
      Heap_GenerationalBarrierForCodeSlow(uVar9,param_3,pIVar2);
      uVar6 = (uint)*(undefined8 *)((ulong)pIVar2 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierForCodeSlow(uVar9,param_3,pIVar2);
    }
  }
  return;
}

