
void FUN_01160334(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  uint uVar21;
  undefined8 uVar22;
  
  lVar19 = param_1 + 0x10;
  uVar8 = FUN_0115f078(lVar19,7);
  iVar9 = FUN_0115f078(lVar19,1);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_0115f1a8(lVar19,4);
  }
  iVar10 = FUN_0115f078(lVar19,1);
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_0115f1a8(lVar19,4);
  }
  iVar11 = FUN_0115f078(lVar19,1);
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0115f1a8(lVar19,4);
  }
  iVar12 = FUN_0115f078(lVar19,1);
  if (iVar12 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = FUN_0115f1a8(lVar19,4);
  }
  iVar13 = FUN_0115f078(lVar19,1);
  iVar14 = 0;
  if (iVar13 != 0) {
    iVar14 = FUN_0115f1a8(lVar19,4);
  }
  lVar19 = 0;
  puVar20 = (uint *)(param_1 + 0x424);
  do {
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar21 = uVar8;
      if (lVar19 < 1) goto LAB_01160470;
      uVar22 = *(undefined8 *)(param_1 + 0x434);
      *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(param_1 + 0x43c);
      *(undefined8 *)(puVar20 + 4) = uVar22;
      uVar22 = *(undefined8 *)(param_1 + 0x424);
      *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(param_1 + 0x42c);
      *(undefined8 *)puVar20 = uVar22;
    }
    else {
      uVar21 = uVar8;
      if (*(int *)(param_1 + 0x88) != 0) {
        uVar21 = 0;
      }
      uVar21 = uVar21 + (int)*(char *)(param_1 + 0x8c + lVar19);
LAB_01160470:
      uVar1 = uVar21 + iVar9;
      uVar2 = uVar1;
      if (0x7e < (int)uVar1) {
        uVar2 = 0x7f;
      }
      uVar15 = (ulong)uVar2;
      if ((int)uVar1 < 1) {
        uVar15 = 0;
      }
      uVar1 = uVar21 + iVar10;
      uVar2 = uVar21;
      if (0x7e < (int)uVar21) {
        uVar2 = 0x7f;
      }
      uVar16 = (ulong)uVar2;
      if ((int)uVar21 < 1) {
        uVar16 = 0;
      }
      uVar2 = uVar21 + iVar11;
      uVar3 = uVar1;
      if (0x7e < (int)uVar1) {
        uVar3 = 0x7f;
      }
      uVar17 = (ulong)uVar3;
      if ((int)uVar1 < 1) {
        uVar17 = 0;
      }
      uVar1 = uVar2;
      if (0x7e < (int)uVar2) {
        uVar1 = 0x7f;
      }
      uVar18 = (ulong)uVar1;
      if ((int)uVar2 < 1) {
        uVar18 = 0;
      }
      uVar6 = (&DAT_01499b00)[uVar16];
      bVar4 = (&DAT_01499a80)[uVar17];
      uVar7 = (&DAT_01499b00)[uVar18];
      uVar1 = uVar21 + iVar12;
      *puVar20 = (uint)(byte)(&DAT_01499a80)[uVar15];
      puVar20[1] = (uint)uVar6;
      uVar2 = 8;
      if (0x7ffff < (uint)uVar7 * 0x18ccd) {
        uVar2 = (uint)uVar7 * 0x18ccd >> 0x10;
      }
      uVar21 = uVar21 + iVar14;
      uVar3 = uVar1;
      if (0x74 < (int)uVar1) {
        uVar3 = 0x75;
      }
      uVar15 = (ulong)uVar3;
      if ((int)uVar1 < 1) {
        uVar15 = 0;
      }
      uVar1 = uVar21;
      if (0x7e < (int)uVar21) {
        uVar1 = 0x7f;
      }
      uVar16 = (ulong)uVar1;
      if ((int)uVar21 < 1) {
        uVar16 = 0;
      }
      bVar5 = (&DAT_01499a80)[uVar15];
      uVar6 = (&DAT_01499b00)[uVar16];
      puVar20[2] = (uint)bVar4 << 1;
      puVar20[3] = uVar2;
      puVar20[6] = uVar21;
      puVar20[4] = (uint)bVar5;
      puVar20[5] = (uint)uVar6;
    }
    lVar19 = lVar19 + 1;
    puVar20 = puVar20 + 8;
    if (lVar19 == 4) {
      return;
    }
  } while( true );
}

