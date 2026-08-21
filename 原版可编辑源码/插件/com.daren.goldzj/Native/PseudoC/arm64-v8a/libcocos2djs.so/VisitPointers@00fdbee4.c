
/* v8::internal::InternalizedStringTableCleaner::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::InternalizedStringTableCleaner::VisitPointers
          (InternalizedStringTableCleaner *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 < param_4) {
    uVar2 = *(uint *)(*(long *)(this + 8) + -0x87a8);
    uVar1 = *param_3;
    while( true ) {
      if ((uVar1 & 1) != 0) {
        uVar3 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000;
        uVar4 = uVar1 - uVar3;
        if ((*(uint *)(*(long *)(uVar3 + 0x10) + (uVar4 >> 7 & 0x1ffffff) * 4) >>
             (ulong)((uint)(uVar4 >> 2) & 0x1f) & 1) == 0) {
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          *param_3 = uVar2;
        }
        else if (((uint)*(undefined8 *)(uVar3 + 8) >> 6 & 1) != 0) {
          uVar3 = *(ulong *)((MemoryChunk *)(*(ulong *)(this + 0x18) & 0xfffffffffffc0000) + 8);
          if ((((uint)uVar3 >> 0xf & 1) != 0) || ((uVar3 & 0x58) == 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      ((MemoryChunk *)(*(ulong *)(this + 0x18) & 0xfffffffffffc0000),(ulong)param_3)
            ;
          }
        }
      }
      param_3 = param_3 + 1;
      if (param_4 <= param_3) break;
      uVar1 = *param_3;
    }
  }
  return;
}

