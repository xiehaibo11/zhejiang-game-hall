
/* v8::internal::SerializedCodeData::SourceHash(v8::internal::Handle<v8::internal::String>,
   v8::ScriptOriginOptions) */

uint v8::internal::SerializedCodeData::SourceHash(long *param_1,uint param_2)

{
  return *(uint *)(*param_1 + 7) | (param_2 & 8) << 0x1c;
}

