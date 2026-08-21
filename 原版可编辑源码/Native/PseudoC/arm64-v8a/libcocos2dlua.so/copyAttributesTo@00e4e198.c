
/* cocos2d::PUObserver::copyAttributesTo(cocos2d::PUObserver*) */

void __thiscall cocos2d::PUObserver::copyAttributesTo(PUObserver *this,PUObserver *param_1)

{
  undefined8 *puVar1;
  PUObserver *pPVar2;
  undefined4 uVar3;
  long lVar4;
  PUEventHandlerManager *this_00;
  Ref *this_01;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  Ref *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_1 != this) {
    uVar7 = *(ulong *)(this + 0x50);
    pPVar2 = *(PUObserver **)(this + 0x58);
    if (((byte)this[0x48] & 1) == 0) {
      pPVar2 = this + 0x49;
      uVar7 = (ulong)((byte)this[0x48] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x48),(char *)pPVar2,uVar7);
    uVar7 = (ulong)((byte)this[0x30] >> 1);
    pPVar2 = this + 0x31;
    if (((byte)this[0x30] & 1) != 0) {
      uVar7 = *(ulong *)(this + 0x38);
      pPVar2 = *(PUObserver **)(this + 0x40);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x30),(char *)pPVar2,uVar7);
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(this + 0x74);
  param_1[0x78] = this[0x78];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x28);
  uVar3 = *(undefined4 *)(this + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(this + 0x68);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(this + 0x98);
  param_1[0xa0] = this[0xa0];
  param_1[100] = this[100];
  param_1[0x65] = this[0x65];
  param_1[0x60] = this[0x60];
  param_1[0x61] = this[0x61];
  param_1[0x62] = this[0x62];
  lVar5 = *(long *)(this + 0x80);
  if (*(long *)(this + 0x88) != lVar5) {
    uVar7 = 0;
    do {
      plVar6 = *(long **)(lVar5 + uVar7 * 8);
      this_00 = (PUEventHandlerManager *)PUEventHandlerManager::Instance();
      this_01 = (Ref *)PUEventHandlerManager::createEventHandler
                                 (this_00,(basic_string *)(plVar6 + 6));
      (**(code **)(*plVar6 + 0x20))(plVar6,this_01);
      local_60 = this_01;
      Ref::retain(this_01);
      puVar1 = *(undefined8 **)(param_1 + 0x88);
      if (puVar1 == *(undefined8 **)(param_1 + 0x90)) {
        std::__ndk1::
        vector<cocos2d::PUEventHandler*,std::__ndk1::allocator<cocos2d::PUEventHandler*>>::
        __push_back_slow_path<cocos2d::PUEventHandler*const&>
                  ((vector<cocos2d::PUEventHandler*,std::__ndk1::allocator<cocos2d::PUEventHandler*>>
                    *)(param_1 + 0x80),(PUEventHandler **)&local_60);
      }
      else {
        *puVar1 = this_01;
        *(undefined8 **)(param_1 + 0x88) = puVar1 + 1;
      }
      *(PUObserver **)(local_60 + 0x28) = param_1;
      (**(code **)(*(long *)local_60 + 0x10))(local_60,param_1 + 0x68);
      lVar5 = *(long *)(this + 0x80);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(*(long *)(this + 0x88) - lVar5 >> 3));
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

