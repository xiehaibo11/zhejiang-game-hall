
undefined8 FUN_00a43688(long *param_1,long *param_2)

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
  
  if (param_1[0xca] == 0) {
    uVar6 = param_1[0xc9];
    if (uVar6 == 0) {
LAB_00a43770:
      lVar7 = param_1[0xc9];
      goto joined_r0x00a43774;
    }
    local_38 = (int)uVar6;
    if (0x3fff < uVar6) {
      local_38 = 0x4000;
    }
                    /* try { // try from 00a43718 to 00b437fb has its CatchHandler @ 00a43550 */
    *(long *)(*param_1 + 0x208) = *param_1 + 0x4b09;
    uVar4 = FUN_00a31948(param_1,local_38,&local_38);
    if (((int)uVar4 != 0x51) && ((int)uVar4 != 0)) {
      return uVar4;
    }
    lVar7 = (long)local_38;
    if (local_38 != 0) {
      lVar5 = 0;
      param_1[0xca] = lVar7;
      param_1[0xcb] = 0;
      param_1[0xc9] = param_1[0xc9] - lVar7;
      goto LAB_00a436b4;
    }
LAB_00a437e0:
    uVar4 = 0;
  }
  else {
    lVar5 = param_1[0xcb];
    lVar7 = param_1[0xca] - lVar5;
LAB_00a436b4:
    uVar4 = FUN_00a232e8(param_1,0,*param_1 + lVar5 + 0x4b09,lVar7,&local_38);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (CONCAT44(uStack_34,local_38) == lVar7) {
      param_1[0xca] = 0;
      lVar7 = param_1[0xc9];
joined_r0x00a43774:
      if (lVar7 == 0) {
        lVar7 = param_1[200];
                    /* catch() { ... } // from try @ 00a435d0 with catch @ 00a4378c */
                    /* catch() { ... } // from try @ 00a435c4 with catch @ 00a43790 */
                    /* catch() { ... } // from try @ 00a435a4 with catch @ 00a43794 */
        uVar4 = FUN_00a239f8(param_1,0,lVar7 + param_1[0xcc],0x9000 - param_1[0xcc],&local_38);
                    /* catch() { ... } // from try @ 00a435dc with catch @ 00a437a4 */
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if ((CONCAT44(uStack_34,local_38) != 0) &&
           (uVar6 = param_1[0xcc] + CONCAT44(uStack_34,local_38), param_1[0xcc] = uVar6, 3 < uVar6))
        {
          uVar3 = FUN_00a4386c(lVar7 + 2);
          uVar6 = (ulong)(uVar3 & 0xffff) + 4;
          if (uVar6 <= (ulong)param_1[0xcc]) {
                    /* try { // try from 00a437fc to 00b4384f has its CatchHandler @ 00a437fc
                       catch() { ... } // from try @ 00a437fc with catch @ 00a437fc
                       catch() { ... } // from try @ 00a439b0 with catch @ 00a437fc */
            if (0x24 < uVar6) {
              uVar2 = (ulong)*(byte *)(lVar7 + 0x24) << 1 | 1;
              uVar1 = uVar2 + 0x26;
              if ((uVar1 <= uVar6) &&
                 (uVar3 = FUN_00a43848(lVar7 + uVar2 + 0x24), uVar6 < uVar1 + (uVar3 & 0xffff))) {
                return 0x1a;
              }
            }
            *param_2 = lVar7;
            return 0;
          }
        }
        goto LAB_00a437e0;
      }
    }
    else {
      param_1[0xcb] = param_1[0xcb] + CONCAT44(uStack_34,local_38);
      if (param_1[0xca] == 0) goto LAB_00a43770;
    }
    uVar4 = 0x51;
  }
  return uVar4;
}

