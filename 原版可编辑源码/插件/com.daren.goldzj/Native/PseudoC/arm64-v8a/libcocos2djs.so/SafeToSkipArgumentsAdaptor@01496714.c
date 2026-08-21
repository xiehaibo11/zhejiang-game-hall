
/* v8::internal::FunctionLiteral::SafeToSkipArgumentsAdaptor() const */

bool __thiscall v8::internal::FunctionLiteral::SafeToSkipArgumentsAdaptor(FunctionLiteral *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x28);
  if ((*(byte *)(lVar1 + 0x81) & 1) == 0) {
    return false;
  }
  if (*(long *)(lVar1 + 200) != 0) {
    return false;
  }
  if ((*(byte *)(lVar1 + 0x83) >> 3 & 1) == 0) {
    return true;
  }
  return *(long *)(*(long *)(lVar1 + 0x90) + (long)*(int *)(lVar1 + 0x9c) * 8 + -8) == 0;
}

