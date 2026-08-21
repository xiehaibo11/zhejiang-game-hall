
/* v8::internal::Debug::IsBreakOnException(v8::internal::ExceptionBreakType) */

Debug __thiscall v8::internal::Debug::IsBreakOnException(Debug *this,int param_2)

{
  long lVar1;
  
  lVar1 = 0xe;
  if (param_2 == 1) {
    lVar1 = 0xf;
  }
  return this[lVar1];
}

