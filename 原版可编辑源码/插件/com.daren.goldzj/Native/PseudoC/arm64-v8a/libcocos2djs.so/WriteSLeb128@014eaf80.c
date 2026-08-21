
/* v8::internal::EhFrameWriter::WriteSLeb128(int) */

void __thiscall v8::internal::EhFrameWriter::WriteSLeb128(EhFrameWriter *this,int param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = param_1 >> 7;
  bVar2 = (byte)param_1 & 0x7f;
  if ((uVar1 != 0 || (param_1 & 0x40U) != 0) && ((uVar1 != 0xffffffff || ((param_1 & 0x40U) == 0))))
  {
    do {
      uVar3 = uVar1;
      WriteByte(this,(byte)param_1 | 0x80);
      uVar1 = (int)uVar3 >> 7;
      if (uVar1 == 0 && (uVar3 & 0x40) == 0) break;
      param_1 = uVar3;
    } while ((uVar1 != 0xffffffff) || ((uVar3 & 0x40) == 0));
    bVar2 = (byte)uVar3 & 0x7f;
  }
  WriteByte(this,bVar2);
  return;
}

