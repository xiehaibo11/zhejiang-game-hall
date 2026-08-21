
undefined8 FUN_00a334e4(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
                    /* try { // try from 00a33500 to 00b3350b has its CatchHandler @ 00a3362c */
  *param_2 = 0;
                    /* try { // try from 00a3350c to 00b33647 has its CatchHandler @ 00a334b0 */
  if ((((*(char *)(lVar3 + 0x621) == '\0') || ((*(uint *)(param_1[0x80] + 0x78) & 0x40003) != 0)) &&
      (*(long *)(lVar3 + 0x98) + *(long *)(lVar3 + 0xa8) == 0)) &&
     ((*(char *)((long)param_1 + 0x3ba) != '\0' && (*(int *)(lVar3 + 0x87c) != 0xb)))) {
    FUN_00a22d58(*param_1,"Connection died, retrying a fresh connect\n");
    lVar1 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(*param_1 + 0x908));
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    FUN_00a11300(param_1,1);
    *(undefined1 *)(param_1 + 0x79) = 1;
    if (((*(byte *)(param_1[0x80] + 0x78) & 3) != 0) &&
       (*(long *)(*(long *)(lVar3 + 0x218) + 0x30) != 0)) {
      uVar2 = FUN_00a31b4c(param_1);
      return uVar2;
    }
  }
  return 0;
}

