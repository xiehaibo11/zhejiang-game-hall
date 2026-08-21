
undefined8 FUN_00a5a070(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int local_38;
  undefined4 uStack_34;
  
                    /* try { // try from 00a5a084 to 00b5a0af has its CatchHandler @ 00a59f58 */
  if (param_1[0xca] == 0) {
    uVar6 = param_1[0xc9];
    if (uVar6 == 0) {
LAB_00a5a158:
      lVar7 = param_1[0xc9];
      goto joined_r0x00a5a15c;
    }
    local_38 = (int)uVar6;
    if (0x3fff < uVar6) {
      local_38 = 0x4000;
    }
    *(long *)(*param_1 + 0x208) = *param_1 + 0x4b09;
    uVar4 = FUN_00a48330(param_1,local_38,&local_38);
                    /* try { // try from 00a5a118 to 00b5a11f has its CatchHandler @ 00a5a144 */
    if (((int)uVar4 != 0x51) && ((int)uVar4 != 0)) {
      return uVar4;
    }
    lVar7 = (long)local_38;
                    /* try { // try from 00a5a124 to 00b5a12b has its CatchHandler @ 00a5a140 */
    if (local_38 != 0) {
                    /* try { // try from 00a5a12c to 00b5a167 has its CatchHandler @ 00a59f58 */
      lVar5 = 0;
      param_1[0xca] = lVar7;
      param_1[0xcb] = 0;
      param_1[0xc9] = param_1[0xc9] - lVar7;
                    /* catch() { ... } // from try @ 00a5a050 with catch @ 00a5a140
                       catch() { ... } // from try @ 00a5a124 with catch @ 00a5a140 */
      goto LAB_00a5a09c;
    }
LAB_00a5a1c8:
                    /* try { // try from 00a5a1c8 to 00b5a1df has its CatchHandler @ 00a5a434 */
    uVar4 = 0;
  }
  else {
    lVar5 = param_1[0xcb];
    lVar7 = param_1[0xca] - lVar5;
LAB_00a5a09c:
                    /* try { // try from 00a5a0b0 to 00b5a0c3 has its CatchHandler @ 00a5a148 */
    uVar4 = FUN_00a38cd0(param_1,0,*param_1 + lVar5 + 0x4b09,lVar7,&local_38);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
                    /* try { // try from 00a5a0c8 to 00b5a0db has its CatchHandler @ 00a5a14c */
    if (CONCAT44(uStack_34,local_38) == lVar7) {
      param_1[0xca] = 0;
      lVar7 = param_1[0xc9];
joined_r0x00a5a15c:
      if (lVar7 == 0) {
                    /* try { // try from 00a5a168 to 00b5a1c7 has its CatchHandler @ 00a5a168
                       catch() { ... } // from try @ 00a5a168 with catch @ 00a5a168
                       catch() { ... } // from try @ 00a5a344 with catch @ 00a5a168
                       catch() { ... } // from try @ 00a5a414 with catch @ 00a5a168 */
        lVar7 = param_1[200];
        uVar4 = FUN_00a393e0(param_1,0,lVar7 + param_1[0xcc],0x9000 - param_1[0xcc],&local_38);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if ((CONCAT44(uStack_34,local_38) != 0) &&
           (uVar6 = param_1[0xcc] + CONCAT44(uStack_34,local_38), param_1[0xcc] = uVar6, 3 < uVar6))
        {
          uVar3 = FUN_00a5a254(lVar7 + 2);
          uVar6 = (ulong)(uVar3 & 0xffff) + 4;
          if (uVar6 <= (ulong)param_1[0xcc]) {
                    /* try { // try from 00a5a1e4 to 00b5a21f has its CatchHandler @ 00a5a430 */
            if (0x24 < uVar6) {
              uVar2 = (ulong)*(byte *)(lVar7 + 0x24) << 1 | 1;
              uVar1 = uVar2 + 0x26;
              if ((uVar1 <= uVar6) &&
                 (uVar3 = FUN_00a5a230(lVar7 + uVar2 + 0x24), uVar6 < uVar1 + (uVar3 & 0xffff))) {
                return 0x1a;
              }
            }
            *param_2 = lVar7;
            return 0;
                    /* try { // try from 00a5a22c to 00b5a25f has its CatchHandler @ 00a5a438 */
          }
        }
        goto LAB_00a5a1c8;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a59fc8 with catch @ 00a5a144
                       catch() { ... } // from try @ 00a5a118 with catch @ 00a5a144 */
                    /* catch() { ... } // from try @ 00a59fac with catch @ 00a5a148
                       catch() { ... } // from try @ 00a5a0b0 with catch @ 00a5a148 */
                    /* catch() { ... } // from try @ 00a5a00c with catch @ 00a5a14c
                       catch() { ... } // from try @ 00a5a0c8 with catch @ 00a5a14c */
      param_1[0xcb] = param_1[0xcb] + CONCAT44(uStack_34,local_38);
      if (param_1[0xca] == 0) goto LAB_00a5a158;
    }
    uVar4 = 0x51;
  }
  return uVar4;
}

