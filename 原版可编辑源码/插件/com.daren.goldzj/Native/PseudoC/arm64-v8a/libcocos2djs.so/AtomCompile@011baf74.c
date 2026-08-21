
/* v8::internal::RegExpImpl::AtomCompile(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>, v8::internal::Handle<v8::internal::String>)
    */

void v8::internal::RegExpImpl::AtomCompile
               (Factory *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  Factory::SetRegExpAtomData(param_1,param_2,1,param_3,param_4,param_5);
  return;
}

