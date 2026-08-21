
/* v8::internal::ParserBase<v8::internal::PreParser>::CheckClassMethodName(v8::internal::PreParserIdentifier,
   v8::internal::ParsePropertyKind, v8::base::Flags<v8::internal::ParseFunctionFlag, int>, bool,
   bool*) */

void v8::internal::ParserBase<v8::internal::PreParser>::CheckClassMethodName
               (ParserBase<v8::internal::PreParser> *param_1,long param_2,undefined8 param_3,
               byte param_4,uint param_5,uint param_6,char *param_7)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  if (*(long *)(lVar2 + 400) == param_2) {
    ReportMessage(param_1,0xe6);
    return;
  }
  if ((param_6 & 1) == 0) {
    if (*(long *)(lVar2 + 0xb0) == param_2) {
      if (param_5 == 0) {
        if (1 < param_4) {
          if (*param_7 != '\0') {
            ReportMessage(param_1,0xe8);
            return;
          }
          *param_7 = '\x01';
          return;
        }
      }
      else if ((param_5 & 1) != 0) {
        ReportMessage(param_1,0xe4);
        return;
      }
      uVar1 = 0xe3;
      if ((param_5 & 2) != 0) {
        uVar1 = 0xe5;
      }
      ReportMessage(param_1,uVar1);
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x1a0) == param_2) {
    ReportMessage(param_1,0xa2);
    return;
  }
  return;
}

