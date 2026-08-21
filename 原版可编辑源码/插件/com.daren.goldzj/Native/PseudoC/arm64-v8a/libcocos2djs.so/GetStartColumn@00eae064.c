
/* v8::Message::GetStartColumn(v8::Local<v8::Context>) const */

ulong v8::Message::GetStartColumn(Message *param_1)

{
  long lVar1;
  
  lVar1 = GetStartColumn(param_1);
  return lVar1 << 0x20 | 1;
}

