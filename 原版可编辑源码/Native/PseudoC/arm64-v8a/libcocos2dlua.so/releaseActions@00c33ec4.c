
/* WARNING: Removing unreachable block (ram,0x00c33ff8) */
/* WARNING: Removing unreachable block (ram,0x00c3400c) */
/* cocostudio::ActionManagerEx::releaseActions() */

void __thiscall cocostudio::ActionManagerEx::releaseActions(ActionManagerEx *this)

{
  long lVar1;
  undefined8 *puVar2;
  ActionObject *this_00;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  for (plVar5 = *(long **)(this + 0x38); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_70 = (undefined8 *)0x0;
    if (&local_70 == (undefined8 **)(plVar5 + 5)) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      std::__ndk1::
      vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>::
      assign<cocostudio::ActionObject**>
                ((vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
                  *)&local_70,(ActionObject **)plVar5[5],(ActionObject **)plVar5[6]);
      puVar2 = local_68;
      puVar7 = local_70;
      for (puVar4 = local_70; puVar4 != puVar2; puVar4 = puVar4 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar4);
        puVar7 = local_68;
      }
    }
    lVar3 = (long)local_68 - (long)local_70;
    puVar4 = local_70;
    puVar2 = local_70;
    if (0 < lVar3) {
      lVar8 = 0;
      this_00 = (ActionObject *)*local_70;
      while( true ) {
        if (this_00 != (ActionObject *)0x0) {
          ActionObject::stop(this_00);
          puVar4 = local_70;
        }
        lVar8 = lVar8 + 1;
        puVar2 = puVar4;
        puVar7 = local_68;
        if (lVar3 >> 3 <= lVar8) break;
        this_00 = (ActionObject *)puVar4[lVar8];
      }
    }
    for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
      cocos2d::Ref::release((Ref *)*puVar4);
      puVar2 = local_70;
    }
    local_68 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2);
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    puVar7 = *(void **)(this + 0x38);
    while (puVar7 != (void *)0x0) {
      pvVar6 = (void *)*puVar7;
      std::__ndk1::
      allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,void*>>>
      ::
      __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Vector<cocostudio::ActionObject*>>>
                ();
      operator_delete(puVar7);
      puVar7 = pvVar6;
    }
    lVar3 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar3 != 0) {
      lVar8 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar8 * 8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

