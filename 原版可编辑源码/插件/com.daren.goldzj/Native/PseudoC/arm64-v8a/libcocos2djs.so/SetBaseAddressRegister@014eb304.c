
/* v8::internal::EhFrameWriter::SetBaseAddressRegister(v8::internal::Register) */

void v8::internal::EhFrameWriter::SetBaseAddressRegister
               (EhFrameWriter *param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = RegisterToDwarfCode(param_2,param_3);
  WriteByte(param_1,'\r');
  uVar2 = uVar2 & 0xffffffff;
  do {
    iVar3 = (int)(uVar2 >> 7);
    bVar1 = (byte)uVar2 | 0x80;
    if (iVar3 == 0) {
      bVar1 = (byte)uVar2 & 0x7f;
    }
    WriteByte(param_1,bVar1);
    uVar2 = uVar2 >> 7;
  } while (iVar3 != 0);
  *(undefined8 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

