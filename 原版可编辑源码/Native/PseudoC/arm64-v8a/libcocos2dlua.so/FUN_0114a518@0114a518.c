
void FUN_0114a518(undefined1 *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar1 = param_1[-0x21];
  uVar4 = (ulong)(byte)param_1[-0x20];
  uVar5 = (ulong)(byte)param_1[-0x1f];
  uVar6 = (ulong)(byte)param_1[-0x1e];
  uVar7 = (ulong)(byte)param_1[-0x1d];
  lVar2 = (ulong)(byte)param_1[-1] - (ulong)bVar1;
  *param_1 = (&DAT_0149931d)[uVar4 + lVar2];
  param_1[1] = (&DAT_0149931d)[uVar5 + lVar2];
  param_1[2] = (&DAT_0149931d)[uVar6 + lVar2];
  lVar3 = (ulong)(byte)param_1[0x1f] - (ulong)bVar1;
  param_1[3] = (&DAT_0149931d)[uVar7 + lVar2];
  param_1[0x20] = (&DAT_0149931d)[uVar4 + lVar3];
  param_1[0x21] = (&DAT_0149931d)[uVar5 + lVar3];
  param_1[0x22] = (&DAT_0149931d)[uVar6 + lVar3];
  lVar2 = (ulong)(byte)param_1[0x3f] - (ulong)bVar1;
  param_1[0x23] = (&DAT_0149931d)[uVar7 + lVar3];
  param_1[0x40] = (&DAT_0149931d)[uVar4 + lVar2];
  param_1[0x41] = (&DAT_0149931d)[uVar5 + lVar2];
  param_1[0x42] = (&DAT_0149931d)[uVar6 + lVar2];
  param_1[0x43] = (&DAT_0149931d)[uVar7 + lVar2];
  lVar2 = (ulong)(byte)param_1[0x5f] - (ulong)bVar1;
  param_1[0x60] = (&DAT_0149931d)[uVar4 + lVar2];
  param_1[0x61] = (&DAT_0149931d)[uVar5 + lVar2];
  param_1[0x62] = (&DAT_0149931d)[uVar6 + lVar2];
  param_1[99] = (&DAT_0149931d)[uVar7 + lVar2];
  return;
}

