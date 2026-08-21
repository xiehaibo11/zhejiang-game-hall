
/* v8::internal::EhFrameWriter::WriteULeb128(unsigned int) */

void __thiscall v8::internal::EhFrameWriter::WriteULeb128(EhFrameWriter *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  do {
    uVar2 = param_1 >> 7;
    bVar1 = (byte)param_1 | 0x80;
    if (uVar2 == 0) {
      bVar1 = (byte)param_1 & 0x7f;
    }
    WriteByte(this,bVar1);
    param_1 = uVar2;
  } while (uVar2 != 0);
  return;
}

