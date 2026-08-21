
/* v8::internal::parsing::ParseAny(v8::internal::ParseInfo*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, v8::internal::Isolate*,
   v8::internal::parsing::ReportErrorsAndStatisticsMode) */

void v8::internal::parsing::ParseAny
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    ParseFunction();
    return;
  }
  ParseProgram(param_1,param_3,param_4);
  return;
}

