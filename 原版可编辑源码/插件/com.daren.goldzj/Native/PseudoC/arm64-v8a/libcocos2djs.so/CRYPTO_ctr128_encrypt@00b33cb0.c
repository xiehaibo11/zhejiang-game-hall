
void CRYPTO_ctr128_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,char *param_5,
               ulong *param_6,uint *param_7,code *param_8)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  
  for (uVar9 = *param_7; (uVar8 = uVar9, param_3 != 0 && (uVar8 = 0, uVar9 != 0));
      uVar9 = uVar9 + 1 & 0xf) {
    param_3 = param_3 - 1;
    *(byte *)param_2 = *(byte *)((long)param_6 + (ulong)uVar9) ^ (byte)*param_1;
    param_2 = (ulong *)((long)param_2 + 1);
    param_1 = (ulong *)((long)param_1 + 1);
  }
  uVar7 = param_3 - 0x10;
  if (0xf < param_3) {
    uVar6 = uVar7 & 0xfffffffffffffff0;
    lVar2 = uVar6 + 0x10;
    puVar4 = (ulong *)((long)param_2 + lVar2);
    puVar10 = param_1;
    do {
      (*param_8)(param_5,param_6,param_4);
      bVar5 = param_5[0xf];
      param_3 = param_3 - 0x10;
      param_5[0xf] = (char)(bVar5 + 1);
      uVar9 = (uint)(byte)param_5[0xe] + (bVar5 + 1 >> 8);
      param_5[0xe] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[0xd] + (uVar9 >> 8);
      param_5[0xd] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[0xc] + (uVar9 >> 8);
      param_5[0xc] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[0xb] + (uVar9 >> 8);
      param_5[0xb] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[10] + (uVar9 >> 8);
      param_5[10] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[9] + (uVar9 >> 8);
      param_5[9] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[8] + (uVar9 >> 8);
      param_5[8] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[7] + (uVar9 >> 8);
      param_5[7] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[6] + (uVar9 >> 8);
      param_5[6] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[5] + (uVar9 >> 8);
      param_5[5] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[4] + (uVar9 >> 8);
      param_5[4] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[3] + (uVar9 >> 8);
      param_5[3] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[2] + (uVar9 >> 8);
      param_5[2] = (char)uVar9;
      iVar3 = (uint)(byte)param_5[1] + (uVar9 >> 8);
      param_5[1] = (char)iVar3;
      *param_5 = *param_5 + (char)((uint)iVar3 >> 8);
      *param_2 = *param_6 ^ *puVar10;
      puVar1 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      param_2[1] = param_6[1] ^ *puVar1;
      param_2 = param_2 + 2;
    } while (0xf < param_3);
    uVar8 = 0;
    param_3 = uVar7 - uVar6;
    param_1 = (ulong *)((long)param_1 + lVar2);
    param_2 = puVar4;
  }
  uVar9 = uVar8;
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    bVar5 = param_5[0xf];
    param_5[0xf] = (char)(bVar5 + 1);
    uVar9 = (uint)(byte)param_5[0xe] + (bVar5 + 1 >> 8);
    param_5[0xe] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[0xd] + (uVar9 >> 8);
    param_5[0xd] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[0xc] + (uVar9 >> 8);
    param_5[0xc] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[0xb] + (uVar9 >> 8);
    param_5[0xb] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[10] + (uVar9 >> 8);
    param_5[10] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[9] + (uVar9 >> 8);
    param_5[9] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[8] + (uVar9 >> 8);
    param_5[8] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[7] + (uVar9 >> 8);
    param_5[7] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[6] + (uVar9 >> 8);
    param_5[6] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[5] + (uVar9 >> 8);
    param_5[5] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[4] + (uVar9 >> 8);
    param_5[4] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[3] + (uVar9 >> 8);
    param_5[3] = (char)uVar9;
    uVar9 = (uint)(byte)param_5[2] + (uVar9 >> 8);
    param_5[2] = (char)uVar9;
    iVar3 = (uint)(byte)param_5[1] + (uVar9 >> 8);
    param_5[1] = (char)iVar3;
    uVar9 = uVar8 + (int)param_3;
    *param_5 = *param_5 + (char)((uint)iVar3 >> 8);
    do {
      uVar7 = (ulong)uVar8;
      param_3 = param_3 - 1;
      uVar8 = uVar8 + 1;
      *(byte *)((long)param_2 + uVar7) =
           *(byte *)((long)param_6 + uVar7) ^ *(byte *)((long)param_1 + uVar7);
    } while (param_3 != 0);
  }
  *param_7 = uVar9;
  return;
}

