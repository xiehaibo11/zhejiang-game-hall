
/* v8::internal::Factory::ToBoolean(bool) */

Factory * __thiscall v8::internal::Factory::ToBoolean(Factory *this,bool param_1)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if (!param_1) {
    lVar1 = 0xc0;
  }
  return this + lVar1;
}

