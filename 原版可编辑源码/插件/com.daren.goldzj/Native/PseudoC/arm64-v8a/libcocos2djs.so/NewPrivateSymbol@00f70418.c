
/* v8::internal::Factory::NewPrivateSymbol(v8::internal::AllocationType) */

void v8::internal::Factory::NewPrivateSymbol(void)

{
  long *plVar1;
  
  plVar1 = (long *)NewSymbol();
  *(uint *)(*plVar1 + 7) = *(uint *)(*plVar1 + 7) | 1;
  return;
}

