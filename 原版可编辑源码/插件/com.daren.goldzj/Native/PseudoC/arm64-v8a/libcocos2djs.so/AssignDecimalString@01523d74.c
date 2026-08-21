
/* v8::internal::Bignum::AssignDecimalString(v8::internal::Vector<char const>) */

void v8::internal::Bignum::AssignDecimalString(Bignum *param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  byte *pbVar26;
  
  if (0 < *(int *)(param_1 + 0x210)) {
    lVar22 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x200) + lVar22 * 4) = 0;
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_1 + 0x210));
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (param_3 < 0x13) {
    uVar20 = 0;
    iVar21 = param_3;
  }
  else {
    iVar25 = 0;
    pbVar26 = (byte *)(param_2 + 9);
    do {
      bVar11 = pbVar26[-9];
      bVar12 = pbVar26[-8];
      bVar13 = pbVar26[-7];
      bVar14 = pbVar26[-6];
      bVar15 = pbVar26[-5];
      bVar16 = pbVar26[-4];
      bVar17 = pbVar26[-3];
      bVar18 = pbVar26[-2];
      bVar19 = pbVar26[-1];
      bVar1 = *pbVar26;
      bVar2 = pbVar26[1];
      bVar3 = pbVar26[2];
      bVar4 = pbVar26[3];
      bVar5 = pbVar26[4];
      bVar6 = pbVar26[5];
      bVar7 = pbVar26[6];
      bVar8 = pbVar26[7];
      bVar9 = pbVar26[8];
      bVar10 = pbVar26[9];
      MultiplyByPowerOfTen(param_1,0x13);
      AddUInt64(param_1,(ulong)bVar10 +
                        ((ulong)bVar9 +
                        ((ulong)bVar8 +
                        ((ulong)bVar7 +
                        ((ulong)bVar6 +
                        ((ulong)bVar5 +
                        ((ulong)bVar4 +
                        ((ulong)bVar3 +
                        ((ulong)bVar2 +
                        ((ulong)bVar1 +
                        ((ulong)bVar19 +
                        ((ulong)bVar18 +
                        ((ulong)bVar17 +
                        ((ulong)bVar16 +
                        ((ulong)bVar15 +
                        ((ulong)bVar14 +
                        ((ulong)bVar13 + ((ulong)bVar12 + (ulong)bVar11 * 10) * 10) * 10) * 10) * 10
                        ) * 10) * 10) * 10) * 10) * 10) * 10) * 10) * 10) * 10) * 10) * 10) * 10) *
                        10 + 0x1bd9efe7cb2aaab0);
      iVar25 = iVar25 + -0x13;
      iVar21 = param_3 + iVar25;
      pbVar26 = pbVar26 + 0x13;
    } while (0x12 < iVar21);
    uVar20 = -iVar25;
  }
  if (iVar21 < 1) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    uVar23 = (ulong)uVar20;
    do {
      pbVar26 = (byte *)(param_2 + uVar23);
      uVar23 = uVar23 + 1;
      uVar24 = ((ulong)*pbVar26 + uVar24 * 10) - 0x30;
    } while ((long)uVar23 < (long)(int)(iVar21 + uVar20));
  }
  MultiplyByPowerOfTen(param_1,iVar21);
  AddUInt64(param_1,uVar24);
  uVar20 = *(uint *)(param_1 + 0x210);
  uVar23 = (ulong)uVar20;
  if ((int)uVar20 < 1) {
    if (uVar20 != 0) {
      return;
    }
  }
  else {
    do {
      if (*(int *)(*(long *)(param_1 + 0x200) + -4 + uVar23 * 4) != 0) {
        return;
      }
      iVar21 = (int)uVar23;
      uVar23 = uVar23 - 1;
      *(int *)(param_1 + 0x210) = iVar21 + -1;
    } while (0 < (long)uVar23);
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  return;
}

