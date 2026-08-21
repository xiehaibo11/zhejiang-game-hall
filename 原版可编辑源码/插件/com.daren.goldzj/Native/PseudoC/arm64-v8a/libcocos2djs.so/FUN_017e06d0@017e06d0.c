
undefined8 FUN_017e06d0(uchar *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar7 = 0;
    uVar4 = 0;
    do {
      puVar9 = param_2 + 2;
      if (uVar1 != 1) {
        puVar9 = (uint *)(*(long *)(param_2 + 2) + lVar7);
      }
      bVar3 = *(byte *)(*(long *)(param_1 + 0x4c0) + (ulong)uVar1 * -0x10 + 8 + lVar7);
      bVar2 = (byte)puVar9[2];
      if (bVar2 != bVar3) {
        iVar8 = (int)(char)bVar3;
        if (((iVar8 != 8 || bVar2 != 9) && (bVar2 != 6 || 2 < (iVar8 - 7U & 0xff))) &&
           (iVar8 != 8 || bVar2 != 7)) {
          if (bVar2 < 0xb) {
            pcVar5 = (&PTR_s_<stmt>_01cdb088)[(char)bVar2];
          }
          else {
            pcVar5 = "<unknown>";
          }
          if (bVar3 < 0xb) {
            pcVar6 = (&PTR_s_<stmt>_01cdb088)[(char)bVar3];
          }
          else {
            pcVar6 = "<unknown>";
          }
          v8::internal::wasm::Decoder::errorf
                    (param_1,*(char **)(param_1 + 0x10),
                     "type error in merge[%u] (expected %s, got %s)",uVar4,pcVar5,pcVar6);
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar4 < uVar1);
  }
  return 1;
}

