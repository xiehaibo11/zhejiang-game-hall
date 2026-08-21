
/* v8::internal::AstRawString::IsOneByteEqualTo(char const*) const */

bool __thiscall v8::internal::AstRawString::IsOneByteEqualTo(AstRawString *this,char *param_1)

{
  int iVar1;
  size_t sVar2;
  
  if (this[0x1c] != (AstRawString)0x0) {
    iVar1 = *(int *)(this + 0x10);
    sVar2 = strlen(param_1);
    if (sVar2 == (long)iVar1) {
      iVar1 = strncmp(*(char **)(this + 8),param_1,(long)iVar1);
      return iVar1 == 0;
    }
  }
  return false;
}

