
/* v8::internal::RegExpImpl::IrregexpInitialize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>, int, unsigned int) */

void v8::internal::RegExpImpl::IrregexpInitialize
               (Factory *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  Factory::SetRegExpIrregexpData(param_1,param_2,2,param_3,param_4,param_5,param_6);
  return;
}

