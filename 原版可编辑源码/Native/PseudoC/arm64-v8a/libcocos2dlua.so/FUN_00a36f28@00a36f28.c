
undefined8 FUN_00a36f28(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = param_1[2];
                    /* try { // try from 00a36f4c to 00b36ff3 has its CatchHandler @ 00a37020 */
  if (~param_3 < uVar3) {
    (*(code *)PTR_free_01769a00)(*param_1);
    *param_1 = 0;
LAB_00a37014:
    (*(code *)PTR_free_01769a00)(param_1);
    uVar2 = 0x1b;
  }
  else {
    lVar1 = *param_1;
    if ((lVar1 == 0) || (param_1[1] - 1U < uVar3 + param_3)) {
      lVar5 = -1;
      if ((-1 < (long)(uVar3 | param_3)) &&
         (uVar4 = param_3 << 1 ^ 0xffffffffffffffff, uVar3 * 2 < uVar4 || uVar3 * 2 - uVar4 == 0)) {
        lVar5 = (uVar3 + param_3) * 2;
      }
      if (lVar1 == 0) {
                    /* try { // try from 00a36ff4 to 00b3705b has its CatchHandler @ 00a36d84 */
        lVar1 = (*(code *)PTR_malloc_017699f8)(lVar5);
      }
      else {
        lVar1 = FUN_00a4e398(lVar1,lVar5);
      }
      if (lVar1 == 0) goto LAB_00a37014;
      uVar3 = param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar3),param_2,param_3);
    uVar2 = 0;
    param_1[2] = param_1[2] + param_3;
  }
                    /* catch() { ... } // from try @ 00a36e94 with catch @ 00a37020
                       catch() { ... } // from try @ 00a36f4c with catch @ 00a37020 */
  return uVar2;
}

