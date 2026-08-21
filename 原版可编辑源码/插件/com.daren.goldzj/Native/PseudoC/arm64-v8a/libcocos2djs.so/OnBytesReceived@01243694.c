
/* v8::WasmStreaming::OnBytesReceived(unsigned char const*, unsigned long) */

void v8::WasmStreaming::OnBytesReceived(uchar *param_1,ulong param_2)

{
  internal::wasm::StreamingDecoder::OnBytesReceived(*(undefined8 *)(*(long *)param_1 + 8));
  return;
}

