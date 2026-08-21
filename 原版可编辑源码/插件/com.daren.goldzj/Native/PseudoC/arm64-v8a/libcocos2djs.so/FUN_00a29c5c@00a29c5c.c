
undefined8 FUN_00a29c5c(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *param_1;
  FUN_00a1b51c(lVar4,3);
  if ((*(byte *)(param_1[0x80] + 0x7c) >> 4 & 1) == 0) {
    *param_2 = 0;
    *(undefined1 *)((long)param_1 + 0x3d2) = 0;
    if (*(long *)(lVar4 + 0x790) != 0) {
      (*(code *)PTR_free_01d1b748)(param_1[0x85]);
      param_1[0x85] = 0;
      lVar1 = FUN_00a0e870("User-Agent: %s\r\n",*(undefined8 *)(lVar4 + 0x790));
      param_1[0x85] = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
    }
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0x8cb0) = 0;
    auVar5 = FUN_00a18e40();
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar5;
    if ((int)param_1[0x4c] == -1) {
      *(undefined1 *)((long)param_1 + 0x3c5) = 0;
                    /* try { // try from 00a29d5c to 00b29e3f has its CatchHandler @ 00a29ba4 */
      uVar2 = FUN_00a105c8(param_1,param_1[0xb]);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      FUN_00a1b51c(lVar4,4);
      FUN_00a1b51c(lVar4,5);
      *(undefined1 *)((long)param_1 + 0x3c5) = 1;
      *param_2 = 1;
      FUN_00a0f9ac(param_1,(int)param_1[0x4c]);
      if (*(char *)(*param_1 + 0x628) != '\0') {
        if (*(char *)((long)param_1 + 0x3bf) == '\0') {
          plVar3 = param_1 + 0x2b;
          if (*(char *)((long)param_1 + 0x3be) == '\0') {
            plVar3 = param_1 + 0x16;
          }
        }
        else {
          plVar3 = param_1 + 0x23;
        }
        FUN_00a22d58(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",plVar3[3],param_1 + 0xf,
                     param_1[0x33],param_1[10]);
      }
    }
    auVar5 = FUN_00a18e40();
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar5;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}

