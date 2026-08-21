
/* v8::internal::ParserBase<v8::internal::Parser>::CheckClassMethodName(v8::internal::AstRawString
   const*, v8::internal::ParsePropertyKind, v8::base::Flags<v8::internal::ParseFunctionFlag, int>,
   bool, bool*) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::CheckClassMethodName
          (ParserBase<v8::internal::Parser> *this,long param_1,byte param_3,uint param_4,
          uint param_5,char *param_6)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(this + 0x60) + 0x38);
  if (*(long *)(lVar2 + 400) == param_1) {
    ReportMessage(this,0xe6);
    return;
  }
  if ((param_5 & 1) == 0) {
    if (*(long *)(lVar2 + 0xb0) == param_1) {
      if (param_4 == 0) {
        if (1 < param_3) {
          if (*param_6 != '\0') {
            ReportMessage(this,0xe8);
            return;
          }
          *param_6 = '\x01';
          return;
        }
      }
      else if ((param_4 & 1) != 0) {
        ReportMessage(this,0xe4);
        return;
      }
      uVar1 = 0xe3;
      if ((param_4 & 2) != 0) {
        uVar1 = 0xe5;
      }
      ReportMessage(this,uVar1);
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x1a0) == param_1) {
    ReportMessage(this,0xa2);
    return;
  }
  return;
}

