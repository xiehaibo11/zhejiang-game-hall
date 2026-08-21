
/* v8::internal::compiler::PropertyAccessInfo::Merge(v8::internal::compiler::PropertyAccessInfo
   const*, v8::internal::compiler::AccessMode, v8::internal::Zone*) */

undefined8 v8::internal::compiler::PropertyAccessInfo::Merge(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == *param_2) && (*(long *)(param_1 + 0x16) == *(long *)(param_2 + 0x16))) {
                    /* WARNING: Could not recover jumptable at 0x017e4ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_017e4ae8 + (ulong)(byte)(&DAT_01a64113)[*param_1] * 4))(0);
    return uVar1;
  }
  return 0;
}

