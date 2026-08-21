
void FUN_015efa60(long *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  uchar *puVar7;
  
  puVar7 = (uchar *)*param_1;
  if (*(ulong *)(puVar7 + 0x10) < *(ulong *)(puVar7 + 0x18)) {
    param_1[2] = *(ulong *)(puVar7 + 0x10);
    pbVar3 = *(byte **)(puVar7 + 0x10);
    if (*(int *)(puVar7 + 0x18) == (int)pbVar3) {
      v8::internal::wasm::Decoder::errorf(puVar7,(char *)pbVar3,"expected %u bytes, fell off end",1)
      ;
      uVar6 = 0;
      *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar7 + 0x18);
    }
    else {
      uVar6 = (ulong)*pbVar3;
      *(byte **)(puVar7 + 0x10) = pbVar3 + 1;
    }
    uVar1 = v8::internal::wasm::Decoder::consume_u32v((Decoder *)*param_1,"section length");
    puVar7 = (uchar *)*param_1;
    lVar5 = *(long *)(puVar7 + 0x10);
    param_1[3] = lVar5;
    uVar2 = (uint)uVar6;
    if ((uint)(*(int *)(puVar7 + 0x18) - (int)*(char **)(puVar7 + 0x10)) < uVar1) {
      v8::internal::wasm::Decoder::errorf
                (puVar7,*(char **)(puVar7 + 0x10),"expected %u bytes, fell off end");
      puVar7 = (uchar *)param_1[3];
      param_1[4] = (long)puVar7;
    }
    else {
      puVar7 = (uchar *)(lVar5 + (ulong)uVar1);
      param_1[4] = (long)puVar7;
    }
    if (uVar2 == 0) {
      uVar2 = v8::internal::wasm::ModuleDecoder::IdentifyUnknownSection((Decoder *)*param_1,puVar7);
      param_1[3] = *(long *)(*param_1 + 0x10);
    }
    else if (0x10 < uVar2 - 1) {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)*param_1,*(char **)((uchar *)*param_1 + 0x10),
                 "unknown section code #0x%02x",uVar6);
      uVar2 = 0;
    }
    puVar7 = (uchar *)*param_1;
    if ((puVar7[0x30] & 1) == 0) {
      uVar6 = (ulong)(puVar7[0x30] >> 1);
    }
    else {
      uVar6 = *(ulong *)(puVar7 + 0x38);
    }
    if (uVar6 != 0) {
      uVar2 = 0;
    }
    *(char *)(param_1 + 1) = (char)uVar2;
    if ((uVar2 & 0xff) == 0) {
      pcVar4 = *(char **)(puVar7 + 0x10);
      uVar6 = param_1[4] - (long)pcVar4;
      if (pcVar4 <= (char *)param_1[4] && uVar6 != 0) {
        if ((uint)(*(int *)(puVar7 + 0x18) - (int)pcVar4) < (uint)uVar6) {
          v8::internal::wasm::Decoder::errorf(puVar7,pcVar4,"expected %u bytes, fell off end");
          *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar7 + 0x18);
        }
        else {
          *(char **)(puVar7 + 0x10) = pcVar4 + (uVar6 & 0xffffffff);
        }
      }
    }
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

