
/* v8::ScriptCompiler::CreateCodeCache(v8::Local<v8::UnboundScript>) */

void v8::ScriptCompiler::CreateCodeCache(void)

{
  internal::CodeSerializer::Serialize();
  return;
}

