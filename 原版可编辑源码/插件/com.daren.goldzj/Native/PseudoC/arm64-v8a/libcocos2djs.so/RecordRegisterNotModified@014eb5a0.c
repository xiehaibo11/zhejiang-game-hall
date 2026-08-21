
/* v8::internal::EhFrameWriter::RecordRegisterNotModified(int) */

void __thiscall
v8::internal::EhFrameWriter::RecordRegisterNotModified(EhFrameWriter *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  
  WriteByte(this,'\b');
  do {
    uVar2 = (uint)param_1 >> 7;
    bVar1 = (byte)param_1 | 0x80;
    if (uVar2 == 0) {
      bVar1 = (byte)param_1 & 0x7f;
    }
    WriteByte(this,bVar1);
    param_1 = uVar2;
  } while (uVar2 != 0);
  return;
}

