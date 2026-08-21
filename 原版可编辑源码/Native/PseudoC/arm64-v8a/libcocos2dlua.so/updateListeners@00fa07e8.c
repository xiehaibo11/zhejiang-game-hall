
/* cocos2d::EventDispatcher::updateListeners(cocos2d::Event*) */

void __thiscall cocos2d::EventDispatcher::updateListeners(EventDispatcher *this,Event *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  EventDispatcher *local_78;
  void *local_70 [2];
  char local_60;
  undefined7 uStack_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x138) < 2) {
    local_78 = this;
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_00fa0b44(&local_78,EventListenerTouchOneByOne::LISTENER_ID);
      FUN_00fa0b44(&local_78,EventListenerTouchAllAtOnce::LISTENER_ID);
      plVar6 = *(long **)(this + 0x38);
    }
    else {
      FUN_00fa05c8(local_70,param_1);
      FUN_00fa0b44(&local_78,local_70);
      if (((ulong)local_70[0] & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_5f,local_60));
      }
      plVar6 = *(long **)(this + 0x38);
    }
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)((undefined8 *)plVar6[5])[1];
                    /* catch() { ... } // from try @ 00fa08f0 with catch @ 00fa08ac */
                    /* try { // try from 00fa08c0 to 010a08c3 has its CatchHandler @ 00fa0928 */
          if (((plVar4 != (long *)0x0) && (*plVar4 != plVar4[1])) ||
             ((plVar4 = *(long **)plVar6[5], plVar4 != (long *)0x0 && (*plVar4 != plVar4[1]))))
          break;
                    /* try { // try from 00fa08d0 to 010a08ef has its CatchHandler @ 00fa0934 */
          lVar2 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                              *)(this + 0x50),(basic_string *)(plVar6 + 2));
          if (lVar2 != 0) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
            ::remove(local_70,(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                               *)(this + 0x50),lVar2);
            pvVar3 = local_70[0];
            local_70[0] = (void *)0x0;
                    /* try { // try from 00fa08f0 to 010a0963 has its CatchHandler @ 00fa08ac */
            if (pvVar3 != (void *)0x0) {
              if ((local_60 != '\0') && ((*(byte *)((long)pvVar3 + 0x10) & 1) != 0)) {
                operator_delete(*(void **)((long)pvVar3 + 0x20));
              }
              operator_delete(pvVar3);
            }
          }
          puVar7 = (undefined8 *)plVar6[5];
          if (puVar7 != (undefined8 *)0x0) {
            puVar8 = (undefined8 *)puVar7[1];
            if (puVar8 != (undefined8 *)0x0) {
              pvVar3 = (void *)*puVar8;
                    /* catch() { ... } // from try @ 00fa08c0 with catch @ 00fa0928 */
              if (pvVar3 != (void *)0x0) {
                puVar8[1] = pvVar3;
                operator_delete(pvVar3);
              }
                    /* catch() { ... } // from try @ 00fa08d0 with catch @ 00fa0934 */
              operator_delete(puVar8);
            }
            puVar8 = (undefined8 *)*puVar7;
            puVar7[1] = 0;
            if (puVar8 != (undefined8 *)0x0) {
              pvVar3 = (void *)*puVar8;
              if (pvVar3 != (void *)0x0) {
                puVar8[1] = pvVar3;
                operator_delete(pvVar3);
              }
              operator_delete(puVar8);
            }
            operator_delete(puVar7);
          }
          plVar4 = (long *)*plVar6;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
          ::remove(local_70,this + 0x28,plVar6);
          pvVar3 = local_70[0];
          local_70[0] = (void *)0x0;
          if (pvVar3 != (void *)0x0) {
            if ((local_60 != '\0') && ((*(byte *)((long)pvVar3 + 0x10) & 1) != 0)) {
              operator_delete(*(void **)((long)pvVar3 + 0x20));
            }
            operator_delete(pvVar3);
          }
          plVar6 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00fa09b0;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
LAB_00fa09b0:
    puVar7 = *(undefined8 **)(this + 0xf8);
    puVar8 = *(undefined8 **)(this + 0xf0);
    if (*(undefined8 **)(this + 0xf0) != puVar7) {
      do {
        puVar5 = puVar8 + 1;
        forceAddEventListener(this,(EventListener *)*puVar8);
        puVar8 = puVar5;
      } while (puVar7 != puVar5);
      *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0xf0);
    }
    if (*(long *)(this + 0x108) != *(long *)(this + 0x110)) {
      cleanToRemovedListeners(this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

