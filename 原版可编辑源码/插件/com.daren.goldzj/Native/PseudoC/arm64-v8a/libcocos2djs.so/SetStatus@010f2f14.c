
/* v8::internal::Module::SetStatus(v8::internal::Module::Status) */

void __thiscall v8::internal::Module::SetStatus(Module *this,int param_2)

{
  *(int *)(*(long *)this + 0xb) = param_2 << 1;
  return;
}

