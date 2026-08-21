
undefined4 FUN_00a14e34(long param_1,uint *param_2,byte *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  ulong uVar7;
  
  uVar3 = (ulong)*param_3;
  if (uVar3 < 0x18) {
    uVar2 = *(ushort *)(&DAT_01302efe + uVar3 * 2);
    uVar1 = *(ushort *)(param_1 + 0x28);
  }
  else {
    if (-1 < (char)*param_3) {
      uVar1 = *(ushort *)(param_1 + 0x28);
      goto joined_r0x00a14e6c;
    }
    uVar2 = *(ushort *)(&DAT_01302e2e + uVar3 * 2);
    uVar1 = *(ushort *)(param_1 + 0x28);
  }
  uVar3 = (ulong)uVar2;
joined_r0x00a14e6c:
  uVar6 = (uint)uVar3;
  if (uVar1 == 0) {
    if ((uVar6 - 0x41 < 0x170) &&
       ((*(uint *)(&DAT_01303030 + (long)((int)(uVar6 - 0x40) >> 5) * 4) &
        1 << (ulong)(uVar6 & 0x1f)) != 0)) {
      *(uint *)(param_1 + 0x28) = uVar6;
      return 0xfffffffc;
    }
    *param_2 = uVar6;
    return 1;
                    /* try { // try from 00a14f08 to 00b14f13 has its CatchHandler @ 00a15328 */
  }
  uVar5 = (uint)uVar1;
  if ((uVar6 & 0xffc0) == 0x300) {
    lVar4 = 0;
    switch(uVar6) {
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
    uVar6 = (&DAT_012ff630)[lVar4 * 2];
    uVar3 = (ulong)uVar6;
                    /* try { // try from 00a14f40 to 00b14f4b has its CatchHandler @ 00a15320 */
    if ((*(ushort *)(&DAT_012ff654 + uVar3 * 4) <= uVar5) &&
       (uVar8 = (uVar6 + (&DAT_012ff62c)[lVar4 * 2]) - 1,
       uVar5 <= *(ushort *)(&DAT_012ff654 + (ulong)uVar8 * 4))) {
      uVar6 = uVar8 + uVar6;
      do {
        uVar6 = uVar6 >> 1;
        uVar7 = (ulong)uVar6;
        if (uVar5 == *(ushort *)(&DAT_012ff654 + uVar7 * 4)) {
LAB_00a14fdc:
          uVar1 = *(ushort *)(&UNK_012ff656 + uVar7 * 4);
                    /* try { // try from 00a14fe4 to 00b14feb has its CatchHandler @ 00a15358 */
          *(undefined4 *)(param_1 + 0x28) = 0;
          *param_2 = (uint)uVar1;
          return 1;
                    /* try { // try from 00a14fec to 00b15007 has its CatchHandler @ 00a15340 */
        }
        if (uVar5 < *(ushort *)(&DAT_012ff654 + uVar7 * 4)) {
          uVar8 = uVar6;
          if ((uint)uVar3 == uVar6) break;
        }
        else {
                    /* try { // try from 00a14fb4 to 00b14fbf has its CatchHandler @ 00a15310 */
          if ((uint)uVar3 == uVar6) {
            uVar7 = (ulong)uVar8;
            if (*(ushort *)(&DAT_012ff654 + uVar7 * 4) != uVar5) break;
            goto LAB_00a14fdc;
          }
          uVar3 = (ulong)uVar6;
        }
        uVar6 = uVar8 + (int)uVar3;
      } while( true );
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *param_2 = uVar5;
  return 0;
}

