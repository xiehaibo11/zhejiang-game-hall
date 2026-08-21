
/* cocos2d::EventDispatcher::sortEventListenersOfSceneGraphPriority(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Node*) */

void __thiscall
cocos2d::EventDispatcher::sortEventListenersOfSceneGraphPriority
          (EventDispatcher *this,basic_string *param_1,Node *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  EventDispatcher *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                      *)(this + 0x28),param_1);
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (plVar7 = *(long **)(*(long *)(lVar3 + 0x28) + 8), plVar7 != (long *)0x0)) {
    *(undefined4 *)(this + 0x140) = 0;
    if (*(long *)(this + 0xb8) != 0) {
      puVar2 = *(void **)(this + 0xb0);
      while (puVar2 != (void *)0x0) {
        pvVar8 = (void *)*puVar2;
        operator_delete(puVar2);
        puVar2 = pvVar8;
      }
      lVar3 = *(long *)(this + 0xa8);
      *(undefined8 *)(this + 0xb0) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xa0) + lVar5 * 8) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
      }
      *(undefined8 *)(this + 0xb8) = 0;
    }
    visitTarget(this,param_2,true);
    lVar3 = *plVar7;
    lVar5 = plVar7[1];
    lVar4 = lVar5 - lVar3;
    uVar6 = lVar4 >> 3;
    local_60 = this;
    if (lVar4 < 0x401) {
      pvVar8 = (void *)0x0;
      uVar9 = 0;
    }
    else {
      uVar9 = uVar6;
      if (0xffffffffffffffe < (long)uVar6) {
        uVar9 = 0xfffffffffffffff;
      }
      do {
        pvVar8 = operator_new(uVar9 << 3,(nothrow_t *)&std::nothrow);
        if (pvVar8 != (void *)0x0) goto LAB_00fa1210;
        uVar9 = uVar9 >> 1;
      } while (uVar9 != 0);
      pvVar8 = (void *)0x0;
    }
LAB_00fa1210:
    FUN_00fa4a5c(lVar3,lVar5,&local_60,uVar6,pvVar8,uVar9);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

