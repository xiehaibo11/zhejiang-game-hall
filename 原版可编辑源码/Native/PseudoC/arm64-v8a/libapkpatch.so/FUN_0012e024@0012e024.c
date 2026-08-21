
uint FUN_0012e024(uint param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_2 != (uint *)0x0) {
    param_1 = ~param_1;
    puVar3 = param_2;
    for (; (param_3 != 0 && (((ulong)param_2 & 3) != 0)); param_2 = (uint *)((long)param_2 + 1)) {
      param_3 = param_3 - 1;
      param_1 = *(uint *)(&DAT_0011b788 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar3) * 4) ^
                param_1 >> 8;
      puVar3 = (uint *)((long)puVar3 + 1);
    }
    for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
      param_1 = *puVar3 ^ param_1;
      uVar1 = *(uint *)(&DAT_0011bf88 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0011c388 + (ulong)(param_1 & 0xff) * 4) ^
              *(uint *)(&DAT_0011bb88 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0011b788 + (ulong)(param_1 >> 0x18) * 4) ^ puVar3[1];
      uVar1 = *(uint *)(&DAT_0011bf88 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0011c388 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0011bb88 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0011b788 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[2];
      uVar1 = *(uint *)(&DAT_0011bf88 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0011c388 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0011bb88 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0011b788 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[3];
      uVar1 = *(uint *)(&DAT_0011bf88 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0011c388 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0011bb88 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0011b788 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[4];
      uVar1 = *(uint *)(&DAT_0011bf88 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0011c388 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0011bb88 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0011b788 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[5];
      puVar2 = puVar3 + 7;
      uVar1 = *(uint *)(&DAT_0011bf88 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0011c388 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0011bb88 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0011b788 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[6];
      puVar3 = puVar3 + 8;
      uVar1 = *(uint *)(&DAT_0011bf88 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0011c388 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0011bb88 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0011b788 + (ulong)(uVar1 >> 0x18) * 4) ^ *puVar2;
      param_1 = *(uint *)(&DAT_0011bf88 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0011c388 + (ulong)(uVar1 & 0xff) * 4) ^
                *(uint *)(&DAT_0011bb88 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0011b788 + (ulong)(uVar1 >> 0x18) * 4);
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      param_1 = *puVar3 ^ param_1;
      param_1 = *(uint *)(&DAT_0011bf88 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0011c388 + (ulong)(param_1 & 0xff) * 4) ^
                *(uint *)(&DAT_0011bb88 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0011b788 + (ulong)(param_1 >> 0x18) * 4);
      puVar3 = puVar3 + 1;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      param_1 = *(uint *)(&DAT_0011b788 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar3) * 4) ^
                param_1 >> 8;
      puVar3 = (uint *)((long)puVar3 + 1);
    }
    return ~param_1;
  }
  return 0;
}

