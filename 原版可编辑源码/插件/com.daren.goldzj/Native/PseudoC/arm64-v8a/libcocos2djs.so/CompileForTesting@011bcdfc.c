
/* v8::internal::RegExp::CompileForTesting(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::RegExpCompileData*, v8::base::Flags<v8::internal::JSRegExp::Flag, int>,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>, bool) */

void v8::internal::RegExp::CompileForTesting(void)

{
  RegExpImpl::Compile();
  return;
}

