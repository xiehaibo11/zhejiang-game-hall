
/* v8::internal::EhFrameWriter::SetBaseAddressOffset(int) */

void __thiscall v8::internal::EhFrameWriter::SetBaseAddressOffset(EhFrameWriter *this,int param_1)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  WriteByte(this,'\x0e');
  uVar2 = (ulong)(uint)param_1;
  do {
    iVar3 = (int)(uVar2 >> 7);
    bVar1 = (byte)uVar2 | 0x80;
    if (iVar3 == 0) {
      bVar1 = (byte)uVar2 & 0x7f;
    }
    WriteByte(this,bVar1);
    uVar2 = uVar2 >> 7;
  } while (iVar3 != 0);
  *(int *)(this + 0x18) = param_1;
  return;
}

