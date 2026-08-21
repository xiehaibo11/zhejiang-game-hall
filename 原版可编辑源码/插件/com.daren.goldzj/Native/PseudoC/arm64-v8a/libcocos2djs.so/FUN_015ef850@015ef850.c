
void FUN_015ef850(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  uchar *puVar5;
  
  puVar5 = (uchar *)*param_1;
  pcVar2 = *(char **)(puVar5 + 0x10);
  if (pcVar2 < (char *)param_1[4]) {
    uVar3 = (long)param_1[4] - (long)pcVar2;
    if ((uint)(*(int *)(puVar5 + 0x18) - (int)pcVar2) < (uint)uVar3) {
      v8::internal::wasm::Decoder::errorf(puVar5,pcVar2,"expected %u bytes, fell off end");
      pcVar2 = *(char **)(puVar5 + 0x18);
    }
    else {
      pcVar2 = pcVar2 + (uVar3 & 0xffffffff);
    }
    *(char **)(puVar5 + 0x10) = pcVar2;
  }
  pcVar4 = (char *)param_1[4];
  pcVar2 = *(char **)((uchar *)*param_1 + 0x10);
  if (pcVar2 != pcVar4) {
    pcVar1 = "shorter";
    if (pcVar4 <= pcVar2) {
      pcVar1 = "longer";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)*param_1,pcVar2,
               "section was %s than expected size (%u bytes expected, %zu decoded)",pcVar1,
               (ulong)(uint)((int)pcVar4 - (int)param_1[2]),(long)pcVar2 - param_1[2]);
  }
  FUN_015efa60(param_1);
  return;
}

