
/* WsThreadHelper::onSubThreadLoop() */

void WsThreadHelper::onSubThreadLoop(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (DAT_01d38800 != 0) {
    std::__ndk1::mutex::lock((mutex *)(DAT_01d38808 + 1));
    plVar6 = (long *)*DAT_01d38808;
    plVar5 = DAT_01d38808;
    if ((plVar6[2] != 0) && (plVar7 = (long *)plVar6[1], plVar6 != (long *)plVar6[1])) {
      do {
        while (*(int *)(plVar7[2] + 4) != 2) {
          plVar7 = (long *)plVar7[1];
          if (plVar6 == plVar7) goto LAB_009e9b3c;
        }
        WebSocketImpl::onClientOpenConnectionRequest(*(WebSocketImpl **)(plVar7[2] + 0x10));
        if ((void *)plVar7[2] != (void *)0x0) {
          operator_delete((void *)plVar7[2]);
        }
        lVar1 = *plVar7;
        plVar2 = (long *)plVar7[1];
        lVar4 = *DAT_01d38808;
        *(long **)(lVar1 + 8) = plVar2;
        *(long *)plVar7[1] = lVar1;
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -1;
        operator_delete(plVar7);
        plVar6 = (long *)*DAT_01d38808;
        plVar5 = DAT_01d38808;
        plVar7 = plVar2;
      } while (plVar6 != plVar2);
    }
LAB_009e9b3c:
    std::__ndk1::mutex::unlock((mutex *)(plVar5 + 1));
    lws_service(DAT_01d38800,2);
    local_50 = 
    "cos2d5ValueC2EONSt6__ndk113unordered_mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES0_NS1_4hashIS8_EENS1_8equal_toIS8_EENS6_INS1_4pairIKS8_S0_EEEEEE"
    ;
    std::__ndk1::this_thread::sleep_for((duration *)&local_50);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

