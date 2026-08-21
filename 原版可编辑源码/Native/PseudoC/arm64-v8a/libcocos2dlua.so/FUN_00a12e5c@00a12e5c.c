
undefined4 FUN_00a12e5c(long param_1,uint *param_2,byte *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar2 = (uint)*param_3;
  if (((char)*param_3 < '\0') &&
     (uVar2 = (uint)*(ushort *)(&DAT_012ff42c + (ulong)uVar2 * 2), uVar2 == 0xfffd)) {
    return 0xffffffff;
  }
  uVar1 = *(ushort *)(param_1 + 0x28);
  if (uVar1 == 0) {
    if ((uVar2 - 0x41 < 0x170) &&
       ((*(uint *)(&DAT_012ff97c + (long)((int)(uVar2 - 0x40) >> 5) * 4) &
        1 << (ulong)(uVar2 & 0x1f)) != 0)) {
      *(uint *)(param_1 + 0x28) = uVar2;
      return 0xfffffffc;
    }
LAB_00a12fe8:
    *param_2 = uVar2;
    uVar3 = 1;
  }
  else {
    if ((uVar2 & 0xffc0) == 0x300) {
      lVar4 = 0;
      switch(uVar2) {
      case 0x300:
        break;
      case 0x301:
        lVar4 = 1;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x303:
        lVar4 = 2;
        break;
      case 0x309:
        lVar4 = 3;
        break;
      case 0x323:
        lVar4 = 4;
      }
      uVar2 = (&DAT_012ff630)[lVar4 * 2];
      uVar5 = (ulong)uVar2;
                    /* try { // try from 00a12f5c to 00b13097 has its CatchHandler @ 00a12f5c
                       catch() { ... } // from try @ 00a12f5c with catch @ 00a12f5c
                       catch() { ... } // from try @ 00a13100 with catch @ 00a12f5c */
      if ((*(ushort *)(&DAT_012ff654 + uVar5 * 4) <= uVar1) &&
         (uVar7 = (uVar2 + (&DAT_012ff62c)[lVar4 * 2]) - 1,
         uVar1 <= *(ushort *)(&DAT_012ff654 + (ulong)uVar7 * 4))) {
        uVar2 = uVar7 + uVar2;
        while( true ) {
          uVar2 = uVar2 >> 1;
          uVar6 = (ulong)uVar2;
          if (uVar1 == *(ushort *)(&DAT_012ff654 + uVar6 * 4)) break;
          if (uVar1 < *(ushort *)(&DAT_012ff654 + uVar6 * 4)) {
            uVar7 = uVar2;
            if ((uint)uVar5 == uVar2) goto LAB_00a12f70;
          }
          else {
            if ((uint)uVar5 == uVar2) {
              uVar6 = (ulong)uVar7;
              if ((uint)*(ushort *)(&DAT_012ff654 + uVar6 * 4) != (uint)uVar1) goto LAB_00a12f70;
              break;
            }
            uVar5 = (ulong)uVar2;
          }
          uVar2 = uVar7 + (int)uVar5;
        }
        uVar2 = (uint)*(ushort *)(&UNK_012ff656 + uVar6 * 4);
        *(undefined4 *)(param_1 + 0x28) = 0;
        goto LAB_00a12fe8;
      }
    }
LAB_00a12f70:
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *param_2 = (uint)uVar1;
  }
  return uVar3;
}

