
/* v8::internal::JSArray::SetLength(v8::internal::Handle<v8::internal::JSArray>, unsigned int) */

void v8::internal::JSArray::SetLength(ulong *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong local_28;
  
  local_28 = *param_1;
  uVar1 = SetLengthWouldNormalize((JSArray *)&local_28,param_2);
  if ((uVar1 & 1) != 0) {
    JSObject::NormalizeElements(param_1);
  }
  plVar2 = *(long **)(ElementsAccessor::elements_accessors_ +
                     ((ulong)*(byte *)((*param_1 & 0xffffffff00000000 | 10) +
                                      (ulong)*(uint *)(*param_1 - 1)) & 0xf8));
                    /* WARNING: Could not recover jumptable at 0x0110f1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2);
  return;
}

