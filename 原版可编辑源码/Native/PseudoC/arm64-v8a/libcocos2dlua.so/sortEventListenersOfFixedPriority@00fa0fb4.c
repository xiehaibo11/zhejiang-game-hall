
/* cocos2d::EventDispatcher::sortEventListenersOfFixedPriority(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::EventDispatcher::sortEventListenersOfFixedPriority
          (EventDispatcher *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                      *)(this + 0x28),param_1);
  if (((lVar4 != 0) && (puVar11 = *(undefined8 **)(lVar4 + 0x28), puVar11 != (undefined8 *)0x0)) &&
     (plVar12 = (long *)*puVar11, plVar12 != (long *)0x0)) {
    lVar4 = *plVar12;
    lVar1 = plVar12[1];
    lVar6 = lVar1 - lVar4;
    uVar9 = lVar6 >> 3;
    if (lVar6 < 0x401) {
      pvVar5 = (void *)0x0;
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9;
      if (0xffffffffffffffe < (long)uVar9) {
        uVar10 = 0xfffffffffffffff;
      }
      do {
        pvVar5 = operator_new(uVar10 << 3,(nothrow_t *)&std::nothrow);
        if (pvVar5 != (void *)0x0) goto LAB_00fa1054;
        uVar10 = uVar10 >> 1;
      } while (uVar10 != 0);
      pvVar5 = (void *)0x0;
    }
LAB_00fa1054:
    FUN_00fa5f0c(lVar4,lVar1,auStack_70,uVar9,pvVar5,uVar10);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    if ((long *)*plVar12 == (long *)plVar12[1]) {
      uVar9 = 0;
    }
    else {
      uVar7 = 0;
      plVar8 = (long *)*plVar12;
      do {
        uVar7 = uVar7 - (*(int *)(*plVar8 + 0x84) >> 0x1f);
        if (-1 < *(int *)(*plVar8 + 0x84)) break;
        bVar3 = (long *)plVar12[1] + -1 != plVar8;
        plVar8 = plVar8 + 1;
      } while (bVar3);
      uVar9 = (ulong)uVar7;
    }
    puVar11[2] = uVar9;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

