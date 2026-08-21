
/* v8::internal::EhFrameWriter::RecordRegisterSavedToStack(int, int) */

void __thiscall
v8::internal::EhFrameWriter::RecordRegisterSavedToStack(EhFrameWriter *this,int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 / -8;
  if (-1 < (int)uVar4) {
    WriteByte(this,(byte)param_1 & 0x3f | 0x80);
    do {
      uVar1 = uVar4 >> 7;
      bVar2 = (byte)uVar4 | 0x80;
      if (uVar1 == 0) {
        bVar2 = (byte)uVar4 & 0x7f;
      }
      WriteByte(this,bVar2);
      uVar4 = uVar1;
    } while (uVar1 != 0);
    return;
  }
  WriteByte(this,'\x11');
  do {
    uVar1 = (uint)param_1 >> 7;
    bVar2 = (byte)param_1 | 0x80;
    if (uVar1 == 0) {
      bVar2 = (byte)param_1 & 0x7f;
    }
    WriteByte(this,bVar2);
    param_1 = uVar1;
  } while (uVar1 != 0);
  uVar1 = (int)uVar4 >> 7;
  bVar2 = (byte)uVar4 & 0x7f;
  if ((uVar1 != 0 || (uVar4 & 0x40) != 0) && (((uVar4 & 0x40) == 0 || (uVar1 != 0xffffffff)))) {
    do {
      uVar3 = uVar1;
      WriteByte(this,(byte)uVar4 | 0x80);
      uVar1 = (int)uVar3 >> 7;
      if (uVar1 == 0 && (uVar3 & 0x40) == 0) break;
      uVar4 = uVar3;
    } while (((uVar3 & 0x40) == 0) || (uVar1 != 0xffffffff));
    bVar2 = (byte)uVar3 & 0x7f;
  }
  WriteByte(this,bVar2);
  return;
}

