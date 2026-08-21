
/* cocos2d::EventDispatcher::dispatchEventToListeners(cocos2d::EventDispatcher::EventListenerVector*,
   std::__ndk1::function<bool (cocos2d::EventListener*)> const&) */

void __thiscall
cocos2d::EventDispatcher::dispatchEventToListeners
          (EventDispatcher *this,EventListenerVector *param_1,function *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)param_1;
  plVar4 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    lVar7 = *plVar1;
    if ((lVar7 != plVar1[1]) && (lVar6 = *(long *)(param_1 + 0x10), 0 < lVar6)) {
      if (plVar1[1] != lVar7) {
        uVar9 = 0;
        do {
          lVar7 = *(long *)(lVar7 + uVar9 * 8);
          if (((*(char *)(lVar7 + 0x91) != '\0') && (*(char *)(lVar7 + 0x90) == '\0')) &&
             (*(char *)(lVar7 + 0x80) != '\0')) {
            plVar3 = *(long **)(param_2 + 0x20);
            local_50 = lVar7;
            if (plVar3 == (long *)0x0) goto LAB_00f9f974;
            this = (EventDispatcher *)(**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
            if (((ulong)this & 1) != 0) goto LAB_00f9f94c;
            lVar6 = *(long *)(param_1 + 0x10);
          }
          uVar9 = uVar9 + 1;
          if (lVar6 <= (long)uVar9) goto LAB_00f9f870;
                    /* try { // try from 00f9f858 to 0109f85f has its CatchHandler @ 00f9fa80 */
          lVar7 = *plVar1;
        } while (uVar9 < (ulong)(plVar1[1] - lVar7 >> 3));
      }
      goto LAB_00f9f8fc;
    }
  }
  uVar9 = 0;
LAB_00f9f870:
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)plVar4[1];
    lVar7 = local_50;
    for (plVar4 = (long *)*plVar4; local_50 = lVar7, plVar4 != plVar3; plVar4 = plVar4 + 1) {
      local_50 = *plVar4;
      if (((*(char *)(local_50 + 0x91) != '\0') && (*(char *)(local_50 + 0x90) == '\0')) &&
         (*(char *)(local_50 + 0x80) != '\0')) {
        plVar5 = *(long **)(param_2 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_00f9f974;
        this = (EventDispatcher *)(**(code **)(*plVar5 + 0x30))(plVar5,&local_50);
        lVar7 = local_50;
        if (((ulong)this & 1) != 0) goto LAB_00f9f94c;
      }
      local_50 = lVar7;
      lVar7 = local_50;
    }
  }
  if (plVar1 != (long *)0x0) {
    lVar7 = *plVar1;
    uVar8 = plVar1[1] - lVar7 >> 3;
                    /* try { // try from 00f9f894 to 0109f9ef has its CatchHandler @ 00f9fa84 */
    if ((long)uVar9 < (long)uVar8) {
      if (uVar9 < uVar8) {
        do {
          lVar7 = *(long *)(lVar7 + uVar9 * 8);
          if (((*(char *)(lVar7 + 0x91) != '\0') && (*(char *)(lVar7 + 0x90) == '\0')) &&
             (*(char *)(lVar7 + 0x80) != '\0')) {
            plVar4 = *(long **)(param_2 + 0x20);
            local_50 = lVar7;
            if (plVar4 == (long *)0x0) {
LAB_00f9f974:
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            this = (EventDispatcher *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
            if (((ulong)this & 1) != 0) goto LAB_00f9f94c;
          }
          if (uVar8 - 1 == uVar9) goto LAB_00f9f94c;
          lVar7 = *plVar1;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulong)(plVar1[1] - lVar7 >> 3));
      }
LAB_00f9f8fc:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
    }
  }
LAB_00f9f94c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

