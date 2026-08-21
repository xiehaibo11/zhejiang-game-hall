
/* cocos2d::network::WsThreadHelper::onSubThreadLoop() */

void cocos2d::network::WsThreadHelper::onSubThreadLoop(void)

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
  if (DAT_0178f4f0 != 0) {
    std::__ndk1::mutex::lock((mutex *)(DAT_0178f4f8 + 1));
    plVar6 = (long *)*DAT_0178f4f8;
    plVar5 = DAT_0178f4f8;
    if ((plVar6[2] != 0) && (plVar7 = (long *)plVar6[1], plVar6 != (long *)plVar6[1])) {
      do {
        while (*(int *)(plVar7[2] + 4) != 2) {
          plVar7 = (long *)plVar7[1];
          if (plVar6 == plVar7) goto LAB_00e9d57c;
        }
        WebSocket::onClientOpenConnectionRequest(*(WebSocket **)(plVar7[2] + 0x10));
        if ((void *)plVar7[2] != (void *)0x0) {
          operator_delete((void *)plVar7[2]);
        }
        lVar1 = *plVar7;
        plVar2 = (long *)plVar7[1];
        lVar4 = *DAT_0178f4f8;
        *(long **)(lVar1 + 8) = plVar2;
        *(long *)plVar7[1] = lVar1;
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -1;
        operator_delete(plVar7);
        plVar6 = (long *)*DAT_0178f4f8;
        plVar5 = DAT_0178f4f8;
        plVar7 = plVar2;
      } while (plVar6 != plVar2);
    }
LAB_00e9d57c:
    std::__ndk1::mutex::unlock((mutex *)(plVar5 + 1));
    lws_service(DAT_0178f4f0,2);
    local_50 = "AnimationERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE";
    std::__ndk1::this_thread::sleep_for((duration *)&local_50);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

