
void FUN_00905c44(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  
  puVar2 = DAT_01d37188;
  for (puVar1 = DAT_01d37180; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    pbVar3 = (byte *)*puVar1;
    if (pbVar3 != (byte *)0x0) {
      if (*(ulong **)(pbVar3 + 0x38) != (ulong *)0x0) {
        v8::V8::DisposeGlobal(*(ulong **)(pbVar3 + 0x38));
        pbVar3[0x38] = 0;
        pbVar3[0x39] = 0;
        pbVar3[0x3a] = 0;
        pbVar3[0x3b] = 0;
        pbVar3[0x3c] = 0;
        pbVar3[0x3d] = 0;
        pbVar3[0x3e] = 0;
        pbVar3[0x3f] = 0;
      }
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + 0x10));
      }
      operator_delete(pbVar3);
    }
  }
  DAT_01d37188 = DAT_01d37180;
  return;
}

