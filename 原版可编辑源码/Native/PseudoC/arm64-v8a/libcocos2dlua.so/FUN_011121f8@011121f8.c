
undefined8 FUN_011121f8(undefined8 *param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint local_48;
  undefined4 uStack_44;
  ushort local_34 [2];
  
                    /* catch() { ... } // from try @ 011121c8 with catch @ 01112210 */
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 0xb & 1) != 0) {
    uVar3 = *param_2;
    if ((uVar1 >> 0x13 & 1) == 0) {
      if ((((long)uVar3 < 0x7ffffffffffffffe) && (lVar4 = uVar3 + 2, 1 < lVar4)) &&
         (lVar4 <= (long)param_1[0x74])) {
        _TIFFmemcpy(local_34,(void *)(param_1[0x73] + uVar3),2);
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabShort(local_34);
        }
        if ((((-1 < lVar4) && (lVar4 = lVar4 + (ulong)local_34[0] * 0xc, lVar4 < 0x7ffffffffffffffc)
             ) && (3 < lVar4 + 4)) && (lVar4 + 4 <= (long)param_1[0x74])) {
                    /* try { // try from 01112360 to 012123b7 has its CatchHandler @ 01112360
                       catch() { ... } // from try @ 01112360 with catch @ 01112360
                       catch() { ... } // from try @ 011123f0 with catch @ 01112360 */
          if (param_3 != (long *)0x0) {
            *param_3 = lVar4;
          }
          _TIFFmemcpy(&local_48,(void *)(param_1[0x73] + lVar4),4);
          cVar2 = *(char *)(param_1 + 2);
          goto joined_r0x01112380;
        }
LAB_01112528:
        uVar5 = param_1[0x77];
        pcVar6 = "Error fetching directory link";
        goto LAB_01112490;
      }
    }
    else {
                    /* catch() { ... } // from try @ 011123e8 with catch @ 01112468 */
                    /* catch() { ... } // from try @ 011123b8 with catch @ 01112478 */
      if ((((long)uVar3 < 0x7ffffffffffffff8) && (lVar4 = uVar3 + 8, 7 < lVar4)) &&
         (lVar4 <= (long)param_1[0x74])) {
        _TIFFmemcpy(&local_48,(void *)(param_1[0x73] + uVar3),8);
                    /* try { // try from 011124c4 to 012124cb has its CatchHandler @ 01112504 */
        if (*(char *)(param_1 + 2) < '\0') {
          TIFFSwabLong8(&local_48);
        }
                    /* try { // try from 011124dc to 012124e3 has its CatchHandler @ 011124f0 */
        if (0xffff < CONCAT44(uStack_44,local_48)) {
          uVar5 = param_1[0x77];
                    /* try { // try from 011124e4 to 01212507 has its CatchHandler @ 0111248c */
                    /* catch() { ... } // from try @ 011124dc with catch @ 011124f0 */
          pcVar6 = "Sanity check on directory count failed";
          goto LAB_01112490;
        }
                    /* catch() { ... } // from try @ 011124c4 with catch @ 01112504 */
                    /* try { // try from 01112508 to 01212547 has its CatchHandler @ 01112508
                       catch() { ... } // from try @ 01112508 with catch @ 01112508
                       catch() { ... } // from try @ 01112554 with catch @ 01112508 */
        if (((-1 < lVar4) &&
            (lVar4 = lVar4 + ((ulong)local_48 & 0xffff) * 0x14, lVar4 < 0x7ffffffffffffff8)) &&
           ((7 < lVar4 + 8 && (lVar4 + 8 <= (long)param_1[0x74])))) {
          if (param_3 != (long *)0x0) {
            *param_3 = lVar4;
          }
                    /* try { // try from 01112548 to 01212553 has its CatchHandler @ 01112690 */
                    /* try { // try from 01112554 to 012126ab has its CatchHandler @ 01112508 */
          _TIFFmemcpy(param_2,(void *)(param_1[0x73] + lVar4),8);
          goto LAB_0111255c;
        }
        goto LAB_01112528;
      }
    }
LAB_0111247c:
    uVar5 = param_1[0x77];
                    /* catch() { ... } // from try @ 011124e4 with catch @ 0111248c */
    pcVar6 = "Error fetching directory count";
LAB_01112490:
    TIFFErrorExt(uVar5,"TIFFAdvanceDirectory",pcVar6);
    return 0;
  }
  if ((uVar1 >> 0x13 & 1) == 0) {
    uVar3 = (*(code *)param_1[0x7a])(param_1[0x77],*param_2,0);
    if ((uVar3 == *param_2) &&
       (lVar4 = (*(code *)param_1[0x78])(param_1[0x77],local_34,2), lVar4 == 2)) {
      if (*(char *)(param_1 + 2) < '\0') {
        TIFFSwabShort(local_34);
      }
      lVar4 = (*(code *)param_1[0x7a])(param_1[0x77],(ulong)local_34[0] * 0xc,1);
      if (param_3 != (long *)0x0) {
        *param_3 = lVar4;
      }
      lVar4 = (*(code *)param_1[0x78])(param_1[0x77],&local_48,4);
      if (lVar4 == 4) {
        cVar2 = *(char *)(param_1 + 2);
joined_r0x01112380:
        if (cVar2 < '\0') {
          TIFFSwabLong(&local_48);
        }
        *param_2 = (ulong)local_48;
        return 1;
      }
LAB_01112420:
      uVar5 = param_1[0x77];
      uVar7 = *param_1;
      pcVar6 = "%s: Error fetching directory link";
      goto LAB_01112454;
    }
  }
  else {
    uVar3 = (*(code *)param_1[0x7a])(param_1[0x77],*param_2,0);
                    /* try { // try from 011123b8 to 012123bf has its CatchHandler @ 01112478 */
    if ((uVar3 == *param_2) &&
       (lVar4 = (*(code *)param_1[0x78])(param_1[0x77],&local_48,8), lVar4 == 8)) {
      if (*(char *)(param_1 + 2) < '\0') {
        TIFFSwabLong8(&local_48);
      }
      if (0xffff < CONCAT44(uStack_44,local_48)) goto LAB_0111247c;
                    /* try { // try from 011123e8 to 012123ef has its CatchHandler @ 01112468 */
                    /* try { // try from 011123f0 to 0121248b has its CatchHandler @ 01112360 */
      lVar4 = (*(code *)param_1[0x7a])
                        (param_1[0x77],((local_48 & 0xffff) + (local_48 & 0xffff) * 4) * 4,1);
      if (param_3 != (long *)0x0) {
        *param_3 = lVar4;
      }
      lVar4 = (*(code *)param_1[0x78])(param_1[0x77],param_2,8);
      if (lVar4 == 8) {
LAB_0111255c:
        if (-1 < *(char *)(param_1 + 2)) {
          return 1;
        }
        TIFFSwabLong8(param_2);
        return 1;
      }
      goto LAB_01112420;
    }
  }
  uVar5 = param_1[0x77];
  uVar7 = *param_1;
  pcVar6 = "%s: Error fetching directory count";
LAB_01112454:
  TIFFErrorExt(uVar5,"TIFFAdvanceDirectory",pcVar6,uVar7);
  return 0;
}

