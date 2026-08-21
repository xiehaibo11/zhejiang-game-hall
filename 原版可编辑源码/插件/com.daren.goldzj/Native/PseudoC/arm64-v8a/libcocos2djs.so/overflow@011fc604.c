
/* v8::internal::OFStreamBase::overflow(int) */

int __thiscall v8::internal::OFStreamBase::overflow(OFStreamBase *this,int param_1)

{
  int iVar1;
  
  if (param_1 != -1) {
    iVar1 = fputc(param_1,*(FILE **)(this + 0x40));
    return iVar1;
  }
  return -1;
}

