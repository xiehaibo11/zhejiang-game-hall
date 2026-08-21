
/* v8::internal::ScannerStream::For(v8::ScriptCompiler::ExternalSourceStream*,
   v8::ScriptCompiler::StreamedSource::Encoding) */

void v8::internal::ScannerStream::For(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = operator_new(0x460);
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = 0;
    puVar2[0x88] = param_1;
    puVar2[0x89] = 0;
    puVar2[0x8b] = 0;
    *puVar2 = &PTR__BufferedCharacterStream_01cb5758;
    puVar2[1] = 0;
    puVar2[0x87] = &PTR_ProcessChunk_01cb5798;
    puVar2[0x8a] = 0;
  }
  else if (param_2 == 2) {
    puVar2 = operator_new(0x478);
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    lVar1 = (long)puVar2 + 0x32;
    puVar2[2] = lVar1;
    puVar2[3] = lVar1;
    *puVar2 = &PTR__Utf8ExternalStreamingStream_01cb5578;
    puVar2[1] = lVar1;
    puVar2[0x88] = 0;
    puVar2[0x87] = 0;
    puVar2[0x8a] = 0;
    puVar2[0x89] = 0;
    puVar2[0x8c] = 0;
    puVar2[0x8b] = 0;
    *(undefined4 *)(puVar2 + 0x8d) = 0;
    *(undefined1 *)((long)puVar2 + 0x46c) = 0xc;
    puVar2[0x8e] = param_1;
  }
  else {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar2 = operator_new(0x60);
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[9] = 0;
    *puVar2 = &PTR__UnbufferedCharacterStream_01cb5700;
    puVar2[1] = 0;
    puVar2[7] = &PTR_ProcessChunk_01cb5740;
    puVar2[8] = param_1;
  }
  return;
}

