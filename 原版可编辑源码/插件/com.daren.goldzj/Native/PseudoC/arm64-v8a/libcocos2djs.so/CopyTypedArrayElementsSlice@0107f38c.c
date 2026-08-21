
/* v8::internal::CopyTypedArrayElementsSlice(unsigned long, unsigned long, unsigned long, unsigned
   long) */

void v8::internal::CopyTypedArrayElementsSlice
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(ElementsAccessor::elements_accessors_ +
                     ((ulong)*(byte *)((param_2 & 0xffffffff00000000 | 10) +
                                      (ulong)*(uint *)(param_2 - 1)) & 0xf8));
                    /* WARNING: Could not recover jumptable at 0x0107f3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x100))(plVar1,param_1,param_2,param_3,param_4);
  return;
}

