
/* v8::Message::GetEndColumn(v8::Local<v8::Context>) const */

ulong v8::Message::GetEndColumn(Message *param_1)

{
  long lVar1;
  
  lVar1 = GetEndColumn(param_1);
  return lVar1 << 0x20 | 1;
}

