
undefined8 FUN_00a342e0(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = 1;
                    /* try { // try from 00a34308 to 00b3431f has its CatchHandler @ 00a34488 */
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    *(uint *)(param_1 + 4) = param_2;
    lVar2 = (*(code *)PTR_malloc_01d1b740)
                      (-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
                    /* try { // try from 00a34334 to 00b34347 has its CatchHandler @ 00a34484 */
    *param_1 = lVar2;
    if (lVar2 == 0) {
LAB_00a343fc:
      *(undefined4 *)(param_1 + 4) = 0;
      uVar1 = 1;
    }
    else {
      if (0 < (int)param_2) {
                    /* try { // try from 00a34348 to 00b34357 has its CatchHandler @ 00a34458 */
        lVar2 = -2;
        lVar5 = -8;
        do {
          uVar1 = FUN_00a33f88(FUN_00a34418);
          *(undefined8 *)(*param_1 + lVar5 + 8) = uVar1;
          lVar3 = *param_1;
                    /* try { // try from 00a34370 to 00b34377 has its CatchHandler @ 00a3443c */
                    /* try { // try from 00a34378 to 00b34387 has its CatchHandler @ 00a3446c */
          if (*(long *)(lVar3 + lVar5 + 8) == 0) {
            iVar4 = (int)lVar2;
            if (iVar4 != -2) {
              FUN_00a34128(*(undefined8 *)(lVar3 + lVar5),0);
              *(undefined8 *)(*param_1 + lVar5) = 0;
              while (iVar4 != -1) {
                    /* try { // try from 00a343c0 to 00b344d7 has its CatchHandler @ 00a342b8 */
                lVar5 = lVar2 * 8;
                FUN_00a34128(*(undefined8 *)(*param_1 + lVar5),0);
                lVar2 = lVar2 + -1;
                *(undefined8 *)(*param_1 + lVar5) = 0;
                iVar4 = (int)lVar2;
              }
              lVar3 = *param_1;
            }
            (*(code *)PTR_free_01d1b748)(lVar3);
            *param_1 = 0;
            goto LAB_00a343fc;
          }
          lVar3 = lVar2 + 3;
          lVar2 = lVar2 + 1;
                    /* try { // try from 00a34388 to 00b3438f has its CatchHandler @ 00a34454 */
          lVar5 = lVar5 + 8;
        } while (lVar3 < (int)param_2);
      }
                    /* try { // try from 00a34390 to 00b343bf has its CatchHandler @ 00a3445c */
      uVar1 = 0;
    }
  }
  return uVar1;
}

