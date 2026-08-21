
void FUN_00ab5634(long param_1)

{
  byte bVar1;
  long lVar2;
  short sVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1 + -0x168;
  lVar2 = lws_get_context(lVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab55bc with catch @ 00ab5664
                        */
  if ((*(char *)(param_1 + 0x196) == '\n') &&
     ((*(byte *)(*(long *)(param_1 + 0xb8) + 0xc94) & 1) != 0)) {
    sVar3 = *(short *)(lVar2 + 0xcb0);
    *(short *)(lVar2 + 0xcb0) = sVar3 + -1;
    FUN_00a9fc74(lVar4);
    if ((sVar3 == 1) && (*(long *)(lVar2 + 0x878) != 0)) {
      _lws_log(4,"calling deprecation callback\n");
      (**(code **)(lVar2 + 0x878))();
      bVar1 = *(byte *)(lVar2 + 0xc94);
      goto joined_r0x00ab5708;
    }
  }
  else {
    FUN_00a9fc74(lVar4);
  }
  bVar1 = *(byte *)(lVar2 + 0xc94);
joined_r0x00ab5708:
  if ((((bVar1 >> 3 & 1) != 0) && (*(int *)(lVar2 + 0xc70) == 0)) &&
     (sVar3 = *(short *)(lVar2 + 0xca6), 0 < sVar3)) {
    lVar4 = 0;
    plVar5 = (long *)(lVar2 + 0x130);
    do {
      if ((*plVar5 != 0) && ((*(byte *)(lVar2 + 0xc79) >> 2 & 1) != 0)) {
        uv_stop();
        sVar3 = *(short *)(lVar2 + 0xca6);
      }
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 0xdf;
    } while (lVar4 < sVar3);
  }
  return;
}

