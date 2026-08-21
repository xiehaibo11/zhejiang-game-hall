
/* cocos2d::Scheduler::update(float) */

void __thiscall cocos2d::Scheduler::update(Scheduler *this,float param_1)

{
  long lVar1;
  Timer *this_00;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *local_60;
  long *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = *(long **)this;
  this[0x11] = (Scheduler)0x1;
joined_r0x0088f1d4:
  if (plVar6 != (long *)0x0) {
    do {
      *(long **)(this + 8) = plVar6;
      this[0x10] = (Scheduler)0x0;
      if (*(char *)((long)plVar6 + 0x21) == '\0') {
        plVar3 = (long *)*plVar6;
        *(undefined4 *)(plVar6 + 2) = 0;
        if (*plVar3 < 1) {
          plVar6 = (long *)plVar6[7];
        }
        else {
          lVar5 = 0;
          do {
            this_00 = *(Timer **)(plVar3[2] + lVar5 * 8);
            *(undefined1 *)(plVar6 + 4) = 0;
            plVar6[3] = (long)this_00;
            Timer::update(this_00,param_1);
            if ((char)plVar6[4] != '\0') {
              Ref::release((Ref *)plVar6[3]);
            }
            plVar3 = (long *)*plVar6;
            plVar6[3] = 0;
            lVar5 = (long)(int)plVar6[2] + 1;
            *(int *)(plVar6 + 2) = (int)lVar5;
          } while (lVar5 < *plVar3);
          plVar6 = (long *)plVar6[7];
          if ((this[0x10] != (Scheduler)0x0) && (**(long **)*(_hashSelectorEntry **)(this + 8) == 0)
             ) goto code_r0x0088f274;
        }
      }
      else {
        plVar6 = (long *)plVar6[7];
      }
      if (plVar6 == (long *)0x0) break;
    } while( true );
  }
  this[0x11] = (Scheduler)0x0;
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(this + 0x18) != *(long *)(this + 0x20)) {
    std::__ndk1::mutex::lock((mutex *)(this + 0x30));
    std::__ndk1::
    vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
    vector((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
            *)&local_60,(vector *)(this + 0x18));
    plVar6 = *(long **)(this + 0x18);
    plVar3 = *(long **)(this + 0x20);
joined_r0x0088f2c8:
    if (plVar3 != plVar6) {
      plVar2 = (long *)plVar3[-2];
      plVar3 = plVar3 + -6;
      if (plVar3 != plVar2) goto code_r0x0088f2dc;
      pcVar4 = *(code **)(*plVar2 + 0x20);
      goto LAB_0088f2f4;
    }
    *(long **)(this + 0x20) = plVar6;
    std::__ndk1::mutex::unlock((mutex *)(this + 0x30));
    plVar2 = local_58;
    plVar3 = local_60;
    for (plVar6 = local_60; local_60 = plVar3, plVar6 != plVar2; plVar6 = plVar6 + 6) {
      if ((long *)plVar6[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (**(code **)(*(long *)plVar6[4] + 0x30))();
      plVar3 = local_60;
    }
    plVar6 = local_58;
    if (plVar3 != (long *)0x0) {
joined_r0x0088f34c:
      if (plVar6 != plVar3) {
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 != plVar2) goto code_r0x0088f360;
        pcVar4 = *(code **)(*plVar2 + 0x20);
        goto LAB_0088f378;
      }
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x0088f274:
  removeHashElement(this,*(_hashSelectorEntry **)(this + 8));
  goto joined_r0x0088f1d4;
code_r0x0088f2dc:
  if (plVar2 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar2 + 0x28);
LAB_0088f2f4:
    (*pcVar4)();
  }
  goto joined_r0x0088f2c8;
code_r0x0088f360:
  if (plVar2 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar2 + 0x28);
LAB_0088f378:
    (*pcVar4)();
  }
  goto joined_r0x0088f34c;
}

