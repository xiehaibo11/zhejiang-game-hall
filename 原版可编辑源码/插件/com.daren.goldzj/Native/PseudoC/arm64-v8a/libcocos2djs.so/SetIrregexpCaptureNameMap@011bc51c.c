
/* v8::internal::RegExpImpl::SetIrregexpCaptureNameMap(v8::internal::FixedArray,
   v8::internal::Handle<v8::internal::FixedArray>) */

void v8::internal::RegExpImpl::SetIrregexpCaptureNameMap(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 == (ulong *)0x0) {
    *(undefined4 *)(param_1 + 0x2b) = 0;
  }
  else {
    uVar2 = *param_2;
    *(int *)(param_1 + 0x2b) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar1 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar1 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(param_1,param_1 + 0x2b,uVar2);
        uVar1 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar1 & 0x18) != 0) && ((*(byte *)((param_1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(param_1,param_1 + 0x2b,uVar2);
        return;
      }
    }
  }
  return;
}

