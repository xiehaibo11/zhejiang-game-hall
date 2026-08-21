
void FUN_01057d30(long param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = lws_get_context();
  uv_close(param_1 + 0x168,FUN_01057db8);
  if ((((*(byte *)(lVar1 + 0xc94) >> 3 & 1) != 0) && (*(int *)(lVar1 + 0xc70) == 0)) &&
     (sVar2 = *(short *)(lVar1 + 0xca6), 0 < sVar2)) {
    lVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x130);
    do {
      if ((*plVar4 != 0) && ((*(byte *)(lVar1 + 0xc79) >> 2 & 1) != 0)) {
        uv_stop();
        sVar2 = *(short *)(lVar1 + 0xca6);
      }
                    /* catch() { ... } // from try @ 01057c78 with catch @ 01057d98 */
      lVar3 = lVar3 + 1;
                    /* catch() { ... } // from try @ 01057cf8 with catch @ 01057da0 */
      plVar4 = plVar4 + 0xdf;
    } while (lVar3 < sVar2);
  }
  return;
}

