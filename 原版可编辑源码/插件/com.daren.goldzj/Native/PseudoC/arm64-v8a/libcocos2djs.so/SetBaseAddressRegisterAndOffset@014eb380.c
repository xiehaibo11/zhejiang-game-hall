
/* v8::internal::EhFrameWriter::SetBaseAddressRegisterAndOffset(v8::internal::Register, int) */

void v8::internal::EhFrameWriter::SetBaseAddressRegisterAndOffset
               (EhFrameWriter *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = RegisterToDwarfCode(param_2,param_3);
  WriteByte(param_1,'\f');
  uVar4 = uVar4 & 0xffffffff;
  do {
    iVar5 = (int)(uVar4 >> 7);
    bVar1 = (byte)uVar4 | 0x80;
    if (iVar5 == 0) {
      bVar1 = (byte)uVar4 & 0x7f;
    }
    WriteByte(param_1,bVar1);
    uVar4 = uVar4 >> 7;
    uVar2 = param_4;
  } while (iVar5 != 0);
  do {
    uVar3 = uVar2 >> 7;
    bVar1 = (byte)uVar2 | 0x80;
    if (uVar3 == 0) {
      bVar1 = (byte)uVar2 & 0x7f;
    }
    WriteByte(param_1,bVar1);
    uVar2 = uVar3;
  } while (uVar3 != 0);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(uint *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0xc) = param_2;
  return;
}

