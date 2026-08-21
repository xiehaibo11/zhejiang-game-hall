
long FUN_00a0ea44(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  long local_20;
  int local_18;
  
  local_18 = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  uStack_38 = param_2[3];
  local_40 = param_2[2];
  uStack_48 = param_2[1];
  local_50 = *param_2;
                    /* catch() { ... } // from try @ 00a0e958 with catch @ 00a0ea80 */
                    /* catch() { ... } // from try @ 00a0e9d4 with catch @ 00a0ea84 */
  iVar1 = FUN_00a0d414(&local_30,FUN_00a0e968,param_1,&local_50);
  if ((iVar1 == -1) || (local_18 != 0)) {
    if (local_20 != 0) {
      (*(code *)PTR_free_01d1b748)(local_30);
    }
    local_30 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00a0e9c8 with catch @ 00a0ea9c */
    if (local_20 == 0) {
                    /* catch() { ... } // from try @ 00a0e720 with catch @ 00a0eae4 */
      local_30 = (*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
    }
    else {
                    /* catch() { ... } // from try @ 00a0e9e8 with catch @ 00a0eaa0 */
      *(undefined1 *)(local_30 + local_28) = 0;
    }
  }
                    /* catch() { ... } // from try @ 00a0e9a0 with catch @ 00a0eae8 */
  return local_30;
}

