
/* WsThreadHelper::createWebSocketThread() */

undefined8 __thiscall WsThreadHelper::createWebSocketThread(WsThreadHelper *this)

{
  long lVar1;
  void *pvVar2;
  WsThreadHelper *local_58;
  code *local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(8,(nothrow_t *)&std::nothrow);
  if (pvVar2 != (void *)0x0) {
    uStack_48 = 0;
    local_50 = wsThreadEntryFunc;
    local_58 = this;
    FUN_009e9988(pvVar2,&local_50,&local_58);
  }
  *(void **)(this + 0x30) = pvVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

