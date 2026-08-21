
uint FUN_00f42354(long param_1,ulong param_2,long param_3)

{
  Builtins *this;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong local_50;
  ulong local_48;
  ulong local_28;
  
  this = (Builtins *)(param_1 + 0x9e00);
  uVar3 = v8::internal::Builtins::builtin(this,0x38);
  local_28 = uVar3;
  local_48 = v8::internal::Builtins::builtin(this,0x3f);
  local_50 = v8::internal::Builtins::builtin(this,0x40);
  if (((((-1 < *(int *)(uVar3 + 0x17)) ||
        (uVar3 = v8::internal::Code::OffHeapInstructionStart((Code *)&local_28), param_2 < uVar3))
       || (uVar3 = v8::internal::Code::OffHeapInstructionEnd((Code *)&local_28), uVar3 <= param_2))
      && (((uVar3 = local_28 - 1, param_2 < uVar3 ||
           (iVar2 = v8::internal::HeapObject::SizeFromMap
                              ((HeapObject *)&local_28,
                               local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)),
           uVar3 + (long)iVar2 <= param_2)) &&
          ((-1 < *(int *)(local_48 + 0x17) ||
           ((uVar3 = v8::internal::Code::OffHeapInstructionStart((Code *)&local_48), param_2 < uVar3
            || (uVar3 = v8::internal::Code::OffHeapInstructionEnd((Code *)&local_48),
               uVar3 <= param_2)))))))) &&
     (((uVar3 = local_48 - 1, param_2 < uVar3 ||
       (iVar2 = v8::internal::HeapObject::SizeFromMap
                          ((HeapObject *)&local_48,
                           local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)),
       uVar3 + (long)iVar2 <= param_2)) &&
      ((((-1 < *(int *)(local_50 + 0x17) ||
         (uVar3 = v8::internal::Code::OffHeapInstructionStart((Code *)&local_50), param_2 < uVar3))
        || (uVar3 = v8::internal::Code::OffHeapInstructionEnd((Code *)&local_50), uVar3 <= param_2))
       && ((uVar3 = local_50 - 1, param_2 < uVar3 ||
           (iVar2 = v8::internal::HeapObject::SizeFromMap
                              ((HeapObject *)&local_50,
                               local_50 & 0xffffffff00000000 | (ulong)*(uint *)(local_50 - 1)),
           uVar3 + (long)iVar2 <= param_2)))))))) {
    if ((v8::internal::FLAG_interpreted_frames_native_stack != '\0') &&
       ((*(uint *)(*(long *)(param_3 + 8) + -8) & *(uint *)(*(long *)(param_3 + 8) + -0x10) & 1) !=
        0)) {
      uVar3 = v8::internal::Heap::InSpaceSlow((Heap *)(param_1 + 0x8850),param_2,3);
      if ((uVar3 & 1) != 0) {
        lVar4 = v8::internal::Heap::GcSafeFindCodeForInnerPointer
                          ((Heap *)(param_1 + 0x8850),param_2);
        uVar1 = *(int *)(lVar4 + 0x27) - 0x38;
        if (uVar1 < 9) {
          return 0x181U >> (ulong)(uVar1 & 0x1f) & 1;
        }
      }
    }
    return 0;
  }
  return 1;
}

