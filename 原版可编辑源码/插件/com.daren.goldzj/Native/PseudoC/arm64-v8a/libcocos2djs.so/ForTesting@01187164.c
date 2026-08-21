
/* v8::internal::ScannerStream::ForTesting(char const*, unsigned long) */

void __thiscall
v8::internal::ScannerStream::ForTesting(ScannerStream *this,char *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  
  puVar1 = operator_new(0x448);
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  puVar1[0x87] = this;
  puVar1[0x88] = param_1;
  *in_x8 = puVar1;
  *puVar1 = &PTR__Utf16CharacterStream_01cb56c0;
  puVar1[1] = 0;
  return;
}

