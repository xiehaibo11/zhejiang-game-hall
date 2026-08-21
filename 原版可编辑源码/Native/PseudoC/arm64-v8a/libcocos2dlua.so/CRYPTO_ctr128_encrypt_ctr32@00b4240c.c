
void CRYPTO_ctr128_encrypt_ctr32
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,char *param_5,
               undefined8 *param_6,uint *param_7,code *param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = *param_7;
  if ((uVar10 != 0) && (uVar5 = param_3, pbVar7 = param_2, pbVar8 = param_1, param_3 != 0)) {
    do {
      param_1 = pbVar8 + 1;
      uVar6 = (ulong)uVar10;
      uVar10 = uVar10 + 1 & 0xf;
      param_3 = uVar5 - 1;
      param_2 = pbVar7 + 1;
      *pbVar7 = *(byte *)((long)param_6 + uVar6) ^ *pbVar8;
      if (uVar10 == 0) break;
      bVar4 = uVar5 != 1;
      uVar5 = param_3;
      pbVar7 = param_2;
      pbVar8 = param_1;
    } while (bVar4);
  }
  uVar3 = (*(uint *)(param_5 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_5 + 0xc) & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  for (; 0xf < param_3; param_3 = param_3 + lVar9 * -0x10) {
    uVar5 = param_3 >> 4;
    if (param_3 >> 0x20 != 0) {
      uVar5 = 0x10000000;
    }
    uVar11 = uVar3 + (int)uVar5;
    uVar6 = (ulong)uVar11;
    uVar3 = 0;
    if (uVar5 <= uVar6) {
      uVar6 = 0;
      uVar3 = uVar11;
    }
    lVar9 = uVar5 - uVar6;
    (*param_8)(param_1,param_2,lVar9,param_4,param_5);
    uVar11 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar11 >> 0x10 | uVar11 << 0x10;
    if (uVar3 == 0) {
      bVar2 = param_5[0xb];
      param_5[0xb] = (char)(bVar2 + 1);
      uVar11 = (uint)(byte)param_5[10] + (bVar2 + 1 >> 8);
      param_5[10] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[9] + (uVar11 >> 8);
      param_5[9] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[8] + (uVar11 >> 8);
      param_5[8] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[7] + (uVar11 >> 8);
      param_5[7] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[6] + (uVar11 >> 8);
      param_5[6] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[5] + (uVar11 >> 8);
      param_5[5] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[4] + (uVar11 >> 8);
      param_5[4] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[3] + (uVar11 >> 8);
      param_5[3] = (char)uVar11;
      uVar11 = (uint)(byte)param_5[2] + (uVar11 >> 8);
      param_5[2] = (char)uVar11;
      iVar1 = (uint)(byte)param_5[1] + (uVar11 >> 8);
      param_5[1] = (char)iVar1;
      *param_5 = *param_5 + (char)((uint)iVar1 >> 8);
    }
    param_2 = param_2 + lVar9 * 0x10;
    param_1 = param_1 + lVar9 * 0x10;
  }
  uVar11 = uVar10;
  if (param_3 != 0) {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar3 = uVar3 + 1;
    uVar11 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar11 >> 0x10 | uVar11 << 0x10;
    if (uVar3 == 0) {
      bVar2 = param_5[0xb];
      param_5[0xb] = (char)(bVar2 + 1);
      uVar3 = (uint)(byte)param_5[10] + (bVar2 + 1 >> 8);
      param_5[10] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[9] + (uVar3 >> 8);
      param_5[9] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[8] + (uVar3 >> 8);
      param_5[8] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[7] + (uVar3 >> 8);
      param_5[7] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[6] + (uVar3 >> 8);
      param_5[6] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[5] + (uVar3 >> 8);
      param_5[5] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[4] + (uVar3 >> 8);
      param_5[4] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[3] + (uVar3 >> 8);
      param_5[3] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[2] + (uVar3 >> 8);
      param_5[2] = (char)uVar3;
      iVar1 = (uint)(byte)param_5[1] + (uVar3 >> 8);
      param_5[1] = (char)iVar1;
      *param_5 = *param_5 + (char)((uint)iVar1 >> 8);
    }
    uVar11 = uVar10 + (int)param_3;
    do {
      uVar5 = (ulong)uVar10;
      param_3 = param_3 - 1;
      uVar10 = uVar10 + 1;
      param_2[uVar5] = *(byte *)((long)param_6 + uVar5) ^ param_1[uVar5];
    } while (param_3 != 0);
  }
  *param_7 = uVar11;
  return;
}

