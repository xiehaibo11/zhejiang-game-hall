
undefined8 FUN_00a21540(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
                    /* try { // try from 00a21548 to 00b2154b has its CatchHandler @ 00a21598 */
                    /* try { // try from 00a2154c to 00b215b3 has its CatchHandler @ 00a213ec */
  uVar3 = param_1[2];
  if (~param_3 < uVar3) {
    (*(code *)PTR_free_01d1b748)(*param_1);
    *param_1 = 0;
LAB_00a2162c:
    (*(code *)PTR_free_01d1b748)(param_1);
    uVar2 = 0x1b;
  }
  else {
    lVar1 = *param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a214f8 with catch @ 00a21594
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21548 with catch @ 00a21598
                        */
    if ((lVar1 == 0) || (param_1[1] - 1U < uVar3 + param_3)) {
      lVar5 = -1;
                    /* catch() { ... } // from try @ 00a21624 with catch @ 00a215b4 */
      if ((-1 < (long)(uVar3 | param_3)) &&
         (uVar4 = param_3 << 1 ^ 0xffffffffffffffff, uVar3 * 2 < uVar4 || uVar3 * 2 - uVar4 == 0)) {
        lVar5 = (uVar3 + param_3) * 2;
      }
      if (lVar1 == 0) {
        lVar1 = (*(code *)PTR_malloc_01d1b740)(lVar5);
      }
      else {
        lVar1 = FUN_00a379b0(lVar1,lVar5);
      }
      if (lVar1 == 0) goto LAB_00a2162c;
      uVar3 = param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar3),param_2,param_3);
    uVar2 = 0;
                    /* try { // try from 00a215fc to 00b21623 has its CatchHandler @ 00a21660 */
    param_1[2] = param_1[2] + param_3;
  }
  return uVar2;
}

