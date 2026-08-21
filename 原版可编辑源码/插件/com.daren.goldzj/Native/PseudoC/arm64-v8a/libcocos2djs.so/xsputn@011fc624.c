
/* v8::internal::OFStreamBase::xsputn(char const*, long) */

void __thiscall v8::internal::OFStreamBase::xsputn(OFStreamBase *this,char *param_1,long param_2)

{
  fwrite(param_1,1,param_2,*(FILE **)(this + 0x40));
  return;
}

