
/* v8::internal::DateCache::DaysFromYearMonth(int, int) */

int __thiscall v8::internal::DateCache::DaysFromYearMonth(DateCache *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar5 = param_2 % 0xc;
  uVar1 = param_2 / 0xc + param_1 + ((int)uVar5 >> 0x1f);
  uVar3 = uVar5 + 0xc;
  if (-1 < (int)uVar5) {
    uVar3 = uVar5;
  }
  iVar2 = uVar1 + 399999;
  iVar4 = uVar1 + 0x61a82;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  iVar6 = (int)((ulong)((long)iVar2 * -0x51eb851f) >> 0x20);
  puVar7 = &DAT_019a6b70;
  if (((uVar1 & 3) == 0) &&
     (uVar5 = uVar1 * -0x3d70a3d7 + 0x51eb850, puVar7 = &DAT_019a6ba0,
     0xa3d70a < (uVar5 >> 4 | uVar1 * -0x70000000) && (uVar5 >> 2 | uVar1 * 0x40000000) < 0x28f5c29)
     ) {
    puVar7 = &DAT_019a6b70;
  }
  return (iVar4 >> 2) + iVar2 * 0x16d + ((iVar6 >> 5) - (iVar6 >> 0x1f)) + iVar2 / 400 +
         puVar7[uVar3] + -0x8c03ca2;
}

