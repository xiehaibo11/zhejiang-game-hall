
ulong FUN_015ede44(Decoder *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uchar *puVar5;
  ulong uVar6;
  uchar *puVar7;
  
  uVar3 = v8::internal::wasm::Decoder::consume_u32v(param_1,"string length");
  puVar7 = *(uchar **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x20);
  if (uVar3 != 0) {
    if ((uint)(*(int *)(param_1 + 0x18) - (int)puVar7) < uVar3) {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar7,"expected %u bytes, fell off end",(ulong)uVar3);
      puVar5 = *(uchar **)(param_1 + 0x18);
    }
    else {
      puVar5 = puVar7 + uVar3;
    }
    *(uchar **)(param_1 + 0x10) = puVar5;
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 != 0) goto LAB_015edeec;
    }
    else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015edeec;
    if (((param_2 & 1) != 0) &&
       (uVar4 = unibrow::Utf8::ValidateEncoding(puVar7,(ulong)uVar3), (uVar4 & 1) == 0)) {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar7,"%s: no valid UTF-8 string",param_3);
    }
  }
LAB_015edeec:
  if (((byte)param_1[0x30] & 1) == 0) {
    uVar4 = (ulong)((byte)param_1[0x30] >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x38);
  }
  uVar6 = (ulong)uVar3 << 0x20;
  if (uVar4 != 0) {
    uVar6 = 0;
  }
  return uVar6 | (uint)(iVar2 + ((int)puVar7 - iVar1));
}

