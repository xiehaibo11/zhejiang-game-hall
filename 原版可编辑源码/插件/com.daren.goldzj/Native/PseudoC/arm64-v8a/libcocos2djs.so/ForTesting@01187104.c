
/* v8::internal::ScannerStream::ForTesting(char const*) */

void __thiscall v8::internal::ScannerStream::ForTesting(ScannerStream *this,char *param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  
  sVar1 = strlen((char *)this);
  puVar2 = operator_new(0x448);
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  puVar2[0x87] = this;
  puVar2[0x88] = sVar1;
  *in_x8 = puVar2;
  *puVar2 = &PTR__Utf16CharacterStream_01cb56c0;
  puVar2[1] = 0;
  return;
}

