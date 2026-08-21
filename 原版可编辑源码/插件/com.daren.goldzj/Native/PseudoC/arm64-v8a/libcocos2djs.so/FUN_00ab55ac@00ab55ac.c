
void FUN_00ab55ac(long param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 00ab55bc to 00bb55bf has its CatchHandler @ 00ab5664 */
  lVar1 = lws_get_context();
  uv_close(param_1 + 0x168,FUN_00ab5634);
  if ((((*(byte *)(lVar1 + 0xc94) >> 3 & 1) != 0) && (*(int *)(lVar1 + 0xc70) == 0)) &&
     (sVar2 = *(short *)(lVar1 + 0xca6), 0 < sVar2)) {
    lVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x130);
    do {
      if ((*plVar4 != 0) && ((*(byte *)(lVar1 + 0xc79) >> 2 & 1) != 0)) {
        uv_stop();
        sVar2 = *(short *)(lVar1 + 0xca6);
      }
      lVar3 = lVar3 + 1;
      plVar4 = plVar4 + 0xdf;
    } while (lVar3 < sVar2);
  }
  return;
}

