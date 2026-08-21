
undefined8 lws_callback_on_writable_all_protocol(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x830);
joined_r0x00aa3f94:
  if (lVar3 == 0) {
    return 0;
  }
  do {
    iVar1 = *(int *)(lVar3 + 0x1dc);
    if (iVar1 < 1) {
      iVar2 = 0;
      if (iVar1 != 0) goto LAB_00aa3ffc;
    }
    else {
      lVar5 = param_2[1];
      lVar4 = 0;
      plVar6 = (long *)(*(long *)(lVar3 + 0x188) + 8);
      do {
        if ((lVar5 == *plVar6) && (iVar2 = strcmp((char *)*param_2,(char *)plVar6[-1]), iVar2 == 0))
        break;
        lVar4 = lVar4 + 1;
        plVar6 = plVar6 + 7;
      } while (lVar4 < iVar1);
      iVar2 = (int)lVar4;
      if (iVar2 != iVar1) {
LAB_00aa3ffc:
        lVar4 = *(long *)(lVar3 + 0x188);
        if ((iVar2 < 0) || (iVar1 <= iVar2)) break;
        for (lVar4 = *(long *)(*(long *)(lVar3 + 0x1a8) + (long)iVar2 * 8); lVar4 != 0;
            lVar4 = *(long *)(lVar4 + 600)) {
                    /* try { // try from 00aa401c to 00ba418f has its CatchHandler @ 00aa401c
                       catch() { ... } // from try @ 00aa401c with catch @ 00aa401c
                       catch() { ... } // from try @ 00aa4198 with catch @ 00aa401c
                       catch() { ... } // from try @ 00aa42ac with catch @ 00aa401c
                       catch() { ... } // from try @ 00aa42e8 with catch @ 00aa401c
                       catch() { ... } // from try @ 00aa43ac with catch @ 00aa401c */
          lws_callback_on_writable(lVar4);
        }
      }
    }
    lVar3 = *(long *)(lVar3 + 0x158);
    if (lVar3 == 0) {
      return 0;
    }
  } while( true );
  _lws_log(1,"%s: protocol %p is not from vhost %p (%p - %p)\n",
           "lws_callback_on_writable_all_protocol_vhost",lVar4 + (long)iVar2 * 0x38,lVar4,lVar3,
           lVar4 + (long)iVar1 * 0x38);
  lVar3 = *(long *)(lVar3 + 0x158);
  goto joined_r0x00aa3f94;
}

