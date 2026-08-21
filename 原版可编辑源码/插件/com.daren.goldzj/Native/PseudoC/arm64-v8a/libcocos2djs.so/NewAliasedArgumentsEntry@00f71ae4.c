
/* v8::internal::Factory::NewAliasedArgumentsEntry(int) */

void __thiscall v8::internal::Factory::NewAliasedArgumentsEntry(Factory *this,int param_1)

{
  long *plVar1;
  
  plVar1 = (long *)NewStruct(this,0x53,0);
  *(int *)(*plVar1 + 3) = param_1 << 1;
  return;
}

