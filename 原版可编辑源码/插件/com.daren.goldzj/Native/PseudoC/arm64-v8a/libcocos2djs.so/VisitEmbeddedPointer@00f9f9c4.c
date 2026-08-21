
/* v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitEmbeddedPointer
          (MarkingVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  uint *puVar2;
  ulong uVar3;
  Instruction *this_00;
  long lVar4;
  ulong *puVar5;
  ulong *local_28;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar4 = param_3[3];
    puVar2 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar5 = (ulong *)(lVar4 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this_00[3];
    puVar5 = (ulong *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      puVar5 = (ulong *)*puVar5;
    }
  }
  local_28 = puVar5;
  uVar3 = MarkAsReachable(*(UnreachableObjectsFilter **)(this + 0x10),puVar5);
  if ((uVar3 & 1) != 0) {
    if (*(ulong **)(this + 0x20) == *(ulong **)(this + 0x28)) {
      std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
      ::__push_back_slow_path<v8::internal::HeapObject_const&>
                ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                  *)(this + 0x18),(HeapObject *)&local_28);
    }
    else {
      **(ulong **)(this + 0x20) = (ulong)puVar5;
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
    }
  }
  return;
}

