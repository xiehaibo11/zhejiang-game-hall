
/* v8::Module::GetIdentityHash() const */

int __thiscall v8::Module::GetIdentityHash(Module *this)

{
  return *(int *)(*(long *)this + 7) >> 1;
}

