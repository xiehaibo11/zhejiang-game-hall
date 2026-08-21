
/* v8::internal::Factory::NewOneByteInternalizedString(v8::internal::Vector<unsigned char const>
   const&, unsigned int) */

long * __thiscall
v8::internal::Factory::NewOneByteInternalizedString(Factory *this,Vector *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = (long *)AllocateRawOneByteInternalizedString(this,*(int *)(param_1 + 8),param_2);
  MemCopy((void *)(*plVar1 + 0xb),*(void **)param_1,(long)*(int *)(param_1 + 8));
  return plVar1;
}

