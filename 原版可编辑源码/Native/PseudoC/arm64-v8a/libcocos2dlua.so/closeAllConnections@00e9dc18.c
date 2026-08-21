
/* cocos2d::network::WebSocket::closeAllConnections() */

void cocos2d::network::WebSocket::closeAllConnections(void)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (DAT_0178f570 == (long *)0x0) {
    return;
  }
  lVar3 = *DAT_0178f570;
  uVar4 = DAT_0178f570[1] - lVar3;
  if (0 < (long)uVar4) {
    uVar5 = (uVar4 >> 3) - 1;
    if (uVar5 < (ulong)((long)uVar4 >> 3)) {
      do {
        close(*(WebSocket **)(lVar3 + uVar5 * 8));
        uVar4 = uVar5 - 1;
        if ((long)uVar5 < 1) goto LAB_00e9dc78;
        lVar3 = *DAT_0178f570;
        uVar5 = uVar4;
      } while (uVar4 < (ulong)(DAT_0178f570[1] - lVar3 >> 3));
    }
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
  }
LAB_00e9dc78:
  std::__ndk1::mutex::lock((mutex *)&DAT_0178f4c4);
  plVar1 = DAT_0178f570;
  pvVar2 = (void *)*DAT_0178f570;
  DAT_0178f570[1] = (long)pvVar2;
  if (plVar1 != (long *)0x0) {
    if (pvVar2 != (void *)0x0) {
      plVar1[1] = (long)pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(plVar1);
  }
  DAT_0178f570 = (long *)0x0;
  std::__ndk1::mutex::unlock((mutex *)&DAT_0178f4c4);
  return;
}

