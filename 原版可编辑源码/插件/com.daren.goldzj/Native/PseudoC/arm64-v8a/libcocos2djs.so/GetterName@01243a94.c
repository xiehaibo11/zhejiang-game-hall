
/* v8::internal::GetterName(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>) */

void v8::internal::GetterName(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = Name::ToFunctionName(param_1,param_2,param_1 + 0x700);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

