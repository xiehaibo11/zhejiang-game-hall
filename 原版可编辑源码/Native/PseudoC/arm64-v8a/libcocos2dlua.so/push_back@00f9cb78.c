
/* cocos2d::EventDispatcher::EventListenerVector::push_back(cocos2d::EventListener*) */

void __thiscall
cocos2d::EventDispatcher::EventListenerVector::push_back
          (EventListenerVector *this,EventListener *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>> *this_00;
  long lVar6;
  EventListener *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = param_1;
  if (*(int *)(param_1 + 0x84) == 0) {
    if (*(long *)(this + 8) == 0) {
      plVar4 = operator_new(0x18,(nothrow_t *)&std::nothrow);
      if (plVar4 != (long *)0x0) {
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      *(long **)(this + 8) = plVar4;
      pvVar3 = (void *)*plVar4;
      if ((ulong)(plVar4[2] - (long)pvVar3 >> 3) < 100) {
        lVar6 = plVar4[1] - (long)pvVar3;
        pvVar5 = operator_new(800);
        if (0 < lVar6) {
          __memcpy_chk(pvVar5,pvVar3,lVar6,800);
          pvVar3 = (void *)*plVar4;
        }
        *plVar4 = (long)pvVar5;
        plVar4[1] = (long)pvVar5 + lVar6;
        plVar4[2] = (long)pvVar5 + 800;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
      }
    }
    this_00 = *(vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>> **)
               (this + 8);
    puVar1 = *(undefined8 **)(this_00 + 8);
    if (puVar1 != *(undefined8 **)(this_00 + 0x10)) {
      *puVar1 = param_1;
      *(undefined8 **)(this_00 + 8) = puVar1 + 1;
      goto LAB_00f9cccc;
    }
  }
  else {
    this_00 = *(vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>> **)
               this;
    if (this_00 ==
        (vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>> *)0x0) {
      this_00 = operator_new(0x18);
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      *(vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>> **)this =
           this_00;
      pvVar3 = operator_new(800);
      *(void **)(this_00 + 8) = pvVar3;
      *(void **)this_00 = pvVar3;
      *(long *)(this_00 + 0x10) = (long)pvVar3 + 800;
    }
    puVar1 = *(undefined8 **)(this_00 + 8);
    if (puVar1 != *(undefined8 **)(this_00 + 0x10)) {
      *puVar1 = param_1;
      *(undefined8 **)(this_00 + 8) = puVar1 + 1;
      goto LAB_00f9cccc;
    }
  }
  std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>::
  __push_back_slow_path<cocos2d::EventListener*const&>(this_00,&local_70);
LAB_00f9cccc:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

