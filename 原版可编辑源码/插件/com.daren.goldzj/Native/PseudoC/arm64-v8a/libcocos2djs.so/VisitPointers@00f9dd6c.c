
/* v8::internal::StringTableVerifier::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::StringTableVerifier::VisitPointers
          (StringTableVerifier *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  while( true ) {
    if (param_4 <= param_3) {
      return;
    }
    uVar1 = *param_3;
    if (((((uVar1 & 1) != 0) && (uVar1 != *(uint *)(*(long *)(this + 8) + 0xa8))) &&
        (uVar1 != *(uint *)(*(long *)(this + 8) + 0xa0))) &&
       (0x1f < *(ushort *)
                (((ulong)param_3 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(((ulong)param_3 & 0xffffffff00000000 | (ulong)uVar1) - 1)))) break;
    param_3 = param_3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "object.IsTheHole(isolate_) || object.IsUndefined(isolate_) || object.IsInternalizedString()"
          );
}

