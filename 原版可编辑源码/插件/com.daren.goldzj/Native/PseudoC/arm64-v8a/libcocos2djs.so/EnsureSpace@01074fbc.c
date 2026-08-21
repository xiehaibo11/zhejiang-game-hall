
/* v8::internal::DependentCode::EnsureSpace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DependentCode>) */

long * v8::internal::DependentCode::EnsureSpace(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long local_28;
  
  local_28 = *param_2;
  uVar3 = Compact((DependentCode *)&local_28);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(uint *)(*param_2 + 0xb) >> 4 & 0x7ffffff;
    uVar1 = uVar2 * 5 >> 2;
    if (uVar2 < 5) {
      uVar1 = uVar2 + 1;
    }
    param_2 = (long *)Factory::CopyWeakFixedArrayAndGrow
                                (param_1,param_2,(uVar1 - (*(int *)(*param_2 + 3) >> 1)) + 2);
  }
  return param_2;
}

