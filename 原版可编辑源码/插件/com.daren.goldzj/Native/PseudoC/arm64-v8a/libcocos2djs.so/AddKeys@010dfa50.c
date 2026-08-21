
/* v8::internal::KeyAccumulator::AddKeys(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::AddKeyConversion) */

void __thiscall
v8::internal::KeyAccumulator::AddKeys(KeyAccumulator *this,ulong *param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(ElementsAccessor::elements_accessors_ +
                     ((ulong)*(byte *)((*param_2 & 0xffffffff00000000 | 10) +
                                      (ulong)*(uint *)(*param_2 - 1)) & 0xf8));
                    /* WARNING: Could not recover jumptable at 0x010dfa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2,this,param_3);
  return;
}

