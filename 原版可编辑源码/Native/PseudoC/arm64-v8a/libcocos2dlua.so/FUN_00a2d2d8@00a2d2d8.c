
undefined8 FUN_00a2d2d8(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) &&
      (*(char *)((long)param_1 + 9) == *(char *)((long)param_2 + 9))) &&
     (((iVar1 = FUN_00a4a180(param_1[2],param_2[2]), iVar1 != 0 &&
       (iVar1 = FUN_00a4a180(param_1[3],param_2[3]), iVar1 != 0)) &&
      ((iVar1 = FUN_00a4a180(param_1[4],param_2[4]), iVar1 != 0 &&
       (iVar1 = FUN_00a4a180(param_1[7],param_2[7]), iVar1 != 0)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
                    /* try { // try from 00a2d36c to 00b2d3c3 has its CatchHandler @ 00a2d36c
                       catch() { ... } // from try @ 00a2d36c with catch @ 00a2d36c
                       catch() { ... } // from try @ 00a2d3c8 with catch @ 00a2d36c */
  return uVar2;
}

