
undefined8 FUN_00a128a0(long param_1,uint *param_2,byte *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (uint)*param_3;
  if (((char)*param_3 < '\0') &&
     (uVar2 = (uint)*(ushort *)(&DAT_012febe4 + (ulong)uVar2 * 2), uVar2 == 0xfffd)) {
    return 0xffffffff;
  }
  uVar1 = *(ushort *)(param_1 + 0x28);
  if (uVar1 != 0) {
    if (((uVar2 - 0x5b0 < 0x15) && (uVar2 = uVar2 - 0x5b4, uVar2 < 0xf)) &&
       ((0x6939U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      uVar3 = *(uint *)(&DAT_012fede8 + *(long *)(&DAT_013c14b8 + (long)(short)uVar2 * 8) * 8);
      uVar4 = (ulong)uVar3;
      if ((*(ushort *)(&DAT_012fee24 + uVar4 * 4) <= uVar1) &&
         (uVar2 = (uVar3 + *(int *)(&DAT_012fede4 +
                                   *(long *)(&DAT_013c14b8 + (long)(short)uVar2 * 8) * 8)) - 1,
         uVar1 <= *(ushort *)(&DAT_012fee24 + (ulong)uVar2 * 4))) {
        uVar3 = uVar2 + uVar3;
        while( true ) {
          uVar3 = uVar3 >> 1;
          uVar5 = (ulong)uVar3;
          if (uVar1 == *(ushort *)(&DAT_012fee24 + uVar5 * 4)) break;
          if (uVar1 < *(ushort *)(&DAT_012fee24 + uVar5 * 4)) {
            uVar2 = uVar3;
            if ((uint)uVar4 == uVar3) goto LAB_00a12958;
          }
          else {
            if ((uint)uVar4 == uVar3) {
              uVar5 = (ulong)uVar2;
              uVar3 = uVar2;
              if ((uint)*(ushort *)(&DAT_012fee24 + uVar5 * 4) != (uint)uVar1) goto LAB_00a12958;
              break;
            }
            uVar4 = (ulong)uVar3;
          }
          uVar3 = uVar2 + (int)uVar4;
        }
        uVar2 = (uint)*(ushort *)(&DAT_012fee26 + uVar5 * 4);
        if ((uVar3 < 0x23) && ((1L << ((ulong)uVar3 & 0x3f) & 0x502000000U) != 0))
        goto LAB_00a12990;
        *(undefined4 *)(param_1 + 0x28) = 0;
        goto LAB_00a12a1c;
      }
    }
LAB_00a12958:
    *(undefined4 *)(param_1 + 0x28) = 0;
    *param_2 = (uint)uVar1;
    return 0;
  }
  if (uVar2 - 0x5d0 < 0x1b) {
    if ((0x7db5f7fU >> (ulong)(uVar2 - 0x5d0 & 0x1f) & 1) != 0) {
LAB_00a12990:
      *(uint *)(param_1 + 0x28) = uVar2;
      return 0xfffffffc;
    }
  }
  else if (uVar2 == 0x5f2) goto LAB_00a12990;
LAB_00a12a1c:
  *param_2 = uVar2;
  return 1;
}

