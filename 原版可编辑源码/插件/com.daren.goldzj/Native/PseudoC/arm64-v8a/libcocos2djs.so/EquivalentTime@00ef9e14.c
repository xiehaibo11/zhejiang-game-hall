
/* v8::internal::DateCache::EquivalentTime(long) */

long __thiscall v8::internal::DateCache::EquivalentTime(DateCache *this,long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int local_3c;
  int local_38;
  uint local_34;
  
  lVar3 = param_1;
  if (param_1 < 0) {
    lVar3 = param_1 + -86399999;
  }
  iVar6 = (int)(lVar3 / 86400000);
  YearMonthDayFromDays(this,iVar6,(int *)&local_34,&local_38,&local_3c);
  iVar1 = local_34 + 399999;
  iVar8 = local_34 + 0x61a82;
  if (-1 < iVar1) {
    iVar8 = iVar1;
  }
  iVar9 = (int)((ulong)((long)iVar1 * -0x51eb851f) >> 0x20);
  piVar10 = &DAT_019a6b70;
  if (((local_34 & 3) == 0) &&
     (uVar4 = local_34 * -0x3d70a3d7 + 0x51eb850, piVar10 = &DAT_019a6ba0,
     0xa3d70a < (uVar4 >> 4 | local_34 * -0x70000000) &&
     (uVar4 >> 2 | local_34 * 0x40000000) < 0x28f5c29)) {
    piVar10 = &DAT_019a6b70;
  }
  iVar1 = ((iVar8 >> 2) + iVar1 * 0x16d + ((iVar9 >> 5) - (iVar9 >> 0x1f)) + iVar1 / 400 + *piVar10
          + -0x8c03c9e) % 7;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  iVar8 = 0x7af;
  if (((local_34 & 3) == 0) &&
     (uVar4 = local_34 * -0x3d70a3d7 + 0x51eb850, iVar8 = 0x7a4,
     0xa3d70a < (uVar4 >> 4 | local_34 * -0x70000000) &&
     (uVar4 >> 2 | local_34 * 0x40000000) < 0x28f5c29)) {
    iVar8 = 0x7af;
  }
  uVar5 = local_38 % 0xc;
  iVar1 = ((iVar1 * 0xc) % 0x1c + iVar8 + -0x784) % 0x1c + local_38 / 0xc + ((int)uVar5 >> 0x1f);
  uVar4 = iVar1 + 0x7d8;
  uVar2 = uVar5 + 0xc;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  iVar8 = iVar1 + 0x62257;
  iVar9 = iVar1 + 0x6225a;
  if (-1 < iVar8) {
    iVar9 = iVar8;
  }
  iVar7 = (int)((ulong)((long)iVar8 * -0x51eb851f) >> 0x20);
  puVar11 = &DAT_019a6b70;
  if (((uVar4 & 3) == 0) &&
     (uVar5 = uVar4 * -0x3d70a3d7 + 0x51eb850, puVar11 = &DAT_019a6ba0,
     0xa3d70a < (uVar5 >> 4 | uVar4 * -0x70000000) && (uVar5 >> 2 | iVar1 * 0x40000000) < 0x28f5c29)
     ) {
    puVar11 = &DAT_019a6b70;
  }
  return (long)((iVar9 >> 2) + -0x8c03ca3 + iVar8 * 0x16d + ((iVar7 >> 5) - (iVar7 >> 0x1f)) +
                iVar8 / 400 + puVar11[uVar2] + local_3c) * 86400000 +
         (long)((int)param_1 + iVar6 * -86400000);
}

