
/* v8::internal::PropertyCell::SetValueWithInvalidation(v8::internal::Isolate*, char const*,
   v8::internal::Handle<v8::internal::PropertyCell>, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::PropertyCell::SetValueWithInvalidation
               (undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong local_48;
  
  uVar2 = *param_3;
  piVar3 = (int *)(uVar2 + 0xb);
  uVar4 = *param_4;
  if (*piVar3 != (int)uVar4) {
    *piVar3 = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar1 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar1 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,piVar3,uVar4);
        uVar1 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar1 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,piVar3,uVar4);
      }
    }
    local_48 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xf);
    DependentCode::DeoptimizeDependentCodeGroup(&local_48,param_1,2);
  }
  return;
}

