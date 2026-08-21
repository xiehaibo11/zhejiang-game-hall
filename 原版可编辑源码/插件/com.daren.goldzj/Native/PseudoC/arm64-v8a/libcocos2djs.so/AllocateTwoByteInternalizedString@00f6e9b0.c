
/* v8::internal::Factory::AllocateTwoByteInternalizedString(v8::internal::Vector<unsigned short
   const> const&, unsigned int) */

long * __thiscall
v8::internal::Factory::AllocateTwoByteInternalizedString(Factory *this,Vector *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = (long *)AllocateRawTwoByteInternalizedString(this,*(int *)(param_1 + 8),param_2);
  MemCopy((void *)(*plVar1 + 0xb),*(void **)param_1,(long)(*(int *)(param_1 + 8) << 1));
  return plVar1;
}

