
/* v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::UnreachableObjectsFilter::MarkingVisitor::VisitCodeTarget
          (MarkingVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long local_18;
  
  IVar1 = ((Instruction *)*param_3)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget((Instruction *)*param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar4 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar3 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar3 + (uVar4 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  lVar5 = (long)puVar2 + -0x3f;
  local_18 = lVar5;
  uVar4 = MarkAsReachable(*(UnreachableObjectsFilter **)(this + 0x10),lVar5);
  if ((uVar4 & 1) != 0) {
    if (*(long **)(this + 0x20) == *(long **)(this + 0x28)) {
      std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
      ::__push_back_slow_path<v8::internal::HeapObject_const&>
                ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                  *)(this + 0x18),(HeapObject *)&local_18);
    }
    else {
      **(long **)(this + 0x20) = lVar5;
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
    }
  }
  return;
}

