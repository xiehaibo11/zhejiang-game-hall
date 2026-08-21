
/* v8::internal::Serializer::ObjectSerializer::VisitOffHeapTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::VisitOffHeapTarget
          (ObjectSerializer *this,undefined8 param_2,RelocInfo *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  int iVar5;
  uchar local_14 [4];
  
  IVar1 = (*(Instruction **)param_3)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kNullAddress != addr");
  }
  lVar3 = InstructionStream::TryLookupCode(*(Isolate **)(*(long *)(this + 8) + 0x68),(ulong)puVar2);
  uVar4 = Builtins::IsIsolateIndependentBuiltin();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Builtins::IsIsolateIndependentBuiltin(target)");
  }
  this_00 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  local_14[0] = '%';
  if (*(undefined1 **)(this_00 + 8) == *(undefined1 **)(this_00 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_14);
  }
  else {
    **(undefined1 **)(this_00 + 8) = 0x25;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
  }
  SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),(char *)(long)*(int *)(lVar3 + 0x27));
  uVar4 = RelocInfo::IsCodedSpecially(param_3);
  if ((uVar4 & 1) == 0) {
    iVar5 = 4;
    if (*(char *)(*(long *)param_3 + 3) != '\x18') {
      iVar5 = 8;
    }
  }
  else {
    iVar5 = 0;
  }
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar5;
  return;
}

