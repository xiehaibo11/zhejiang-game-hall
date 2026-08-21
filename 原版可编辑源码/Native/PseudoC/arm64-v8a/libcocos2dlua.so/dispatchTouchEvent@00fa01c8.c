
/* cocos2d::EventDispatcher::dispatchTouchEvent(cocos2d::EventTouch*) */

void __thiscall
cocos2d::EventDispatcher::dispatchTouchEvent(EventDispatcher *this,EventTouch *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  ulong __n;
  long lVar4;
  long lVar5;
  long lVar6;
  EventDispatcher *this_00;
  void *__s;
  size_t __n_00;
  code *pcVar7;
  EventListenerVector *pEVar8;
  EventListenerVector *pEVar9;
  char local_d4 [4];
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  undefined1 local_ac [4];
  EventTouch *local_a8;
  undefined **local_a0;
  EventTouch **ppEStack_98;
  void **local_90;
  EventDispatcher *pEStack_88;
  EventDispatcher *local_80;
  long local_68;
  
                    /* try { // try from 00fa01d0 to 010a01d7 has its CatchHandler @ 00fa0380 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00fa01f0 to 010a01f7 has its CatchHandler @ 00fa0370 */
  local_a8 = param_1;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                      *)(this + 0x50),(basic_string *)EventListenerTouchOneByOne::LISTENER_ID);
  if ((lVar5 != 0) && (uVar3 = *(uint *)(lVar5 + 0x28), uVar3 != 0)) {
    *(undefined4 *)(lVar5 + 0x28) = 0;
    if ((uVar3 & 1) != 0) {
      sortEventListenersOfFixedPriority
                (this,(basic_string *)EventListenerTouchOneByOne::LISTENER_ID);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar6 = Director::getInstance();
      if (*(Node **)(lVar6 + 0x158) == (Node *)0x0) {
                    /* try { // try from 00fa0264 to 010a0393 has its CatchHandler @ 00fa016c */
        *(undefined4 *)(lVar5 + 0x28) = 2;
      }
      else {
        sortEventListenersOfSceneGraphPriority
                  (this,(basic_string *)EventListenerTouchOneByOne::LISTENER_ID,
                   *(Node **)(lVar6 + 0x158));
                    /* try { // try from 00fa025c to 010a0263 has its CatchHandler @ 00fa0304 */
      }
    }
  }
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                      *)(this + 0x50),(basic_string *)EventListenerTouchAllAtOnce::LISTENER_ID);
  if ((lVar5 != 0) && (uVar3 = *(uint *)(lVar5 + 0x28), uVar3 != 0)) {
    *(undefined4 *)(lVar5 + 0x28) = 0;
    if ((uVar3 & 1) != 0) {
      sortEventListenersOfFixedPriority
                (this,(basic_string *)EventListenerTouchAllAtOnce::LISTENER_ID);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar6 = Director::getInstance();
      if (*(Node **)(lVar6 + 0x158) == (Node *)0x0) {
        *(undefined4 *)(lVar5 + 0x28) = 2;
      }
      else {
        sortEventListenersOfSceneGraphPriority
                  (this,(basic_string *)EventListenerTouchAllAtOnce::LISTENER_ID,
                   *(Node **)(lVar6 + 0x158));
      }
    }
  }
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                      *)(this + 0x28),(basic_string *)EventListenerTouchOneByOne::LISTENER_ID);
  if (lVar5 == 0) {
    pEVar8 = (EventListenerVector *)0x0;
  }
  else {
    pEVar8 = *(EventListenerVector **)(lVar5 + 0x28);
  }
  this_00 = (EventDispatcher *)
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                        *)(this + 0x28),(basic_string *)EventListenerTouchAllAtOnce::LISTENER_ID);
  if (this_00 == (EventDispatcher *)0x0) {
    pEVar9 = (EventListenerVector *)0x0;
    if (pEVar8 == (EventListenerVector *)0x0) goto LAB_00fa0504;
  }
  else {
                    /* catch() { ... } // from try @ 00fa025c with catch @ 00fa0304 */
    pEVar9 = *(EventListenerVector **)(this_00 + 0x28);
    if (pEVar8 == (EventListenerVector *)0x0 && pEVar9 == (EventListenerVector *)0x0)
    goto LAB_00fa0504;
  }
  local_ac[0] = pEVar8 != (EventListenerVector *)0x0 && pEVar9 != (EventListenerVector *)0x0;
  pvVar2 = *(void **)(param_1 + 0x40);
  local_c0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = (void *)0x0;
  __n = *(long *)(param_1 + 0x48) - (long)pvVar2;
  if (__n == 0) {
    __s = (void *)0x0;
    pvVar2 = local_d0;
  }
  else {
    if ((ulong)((long)__n >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __s = operator_new(__n);
    __n_00 = ((long)__n >> 3) * 8;
    pvVar1 = (void *)((long)__s + __n_00);
    local_c8 = __s;
    local_b8 = pvVar1;
                    /* catch() { ... } // from try @ 00fa01f0 with catch @ 00fa0370 */
    memset(__s,0,__n_00);
    local_c0 = pvVar1;
                    /* catch() { ... } // from try @ 00fa01d0 with catch @ 00fa0380 */
    this_00 = memmove(__s,pvVar2,__n);
    pvVar2 = local_d0;
  }
  local_d0 = __s;
  if (pEVar8 != (EventListenerVector *)0x0) {
    lVar5 = *(long *)(param_1 + 0x40);
    lVar6 = *(long *)(param_1 + 0x48);
    pvVar2 = local_d0;
    if (lVar5 != lVar6) {
      do {
        local_d4[0] = '\0';
        local_80 = (EventDispatcher *)0x0;
        local_80 = operator_new(0x40);
        *(undefined ***)local_80 = &PTR_FUN_01722ee8;
        *(EventTouch ***)(local_80 + 8) = &local_a8;
        *(long *)(local_80 + 0x10) = lVar5;
        *(EventDispatcher **)(local_80 + 0x18) = this;
        *(undefined1 **)(local_80 + 0x20) = local_ac;
        *(void ***)(local_80 + 0x28) = &local_d0;
        *(void ***)(local_80 + 0x30) = &local_c8;
        *(char **)(local_80 + 0x38) = local_d4;
        dispatchTouchEventToListeners(local_80,pEVar8,(function *)&local_a0);
        if ((EventDispatcher *)&local_a0 == local_80) {
          pcVar7 = (code *)(*(undefined ***)local_80)[4];
LAB_00fa043c:
          this_00 = (EventDispatcher *)(*pcVar7)();
        }
        else {
          this_00 = (EventDispatcher *)0x0;
          if (local_80 != (EventDispatcher *)0x0) {
            pcVar7 = (code *)(*(undefined ***)local_80)[5];
            goto LAB_00fa043c;
          }
        }
        if (local_a8[0x28] != (EventTouch)0x0) goto joined_r0x00fa046c;
        if (local_d4[0] == '\0') {
          local_d0 = (void *)((long)local_d0 + 8);
        }
        lVar5 = lVar5 + 8;
        param_1 = local_a8;
        pvVar2 = local_d0;
      } while (lVar6 != lVar5);
    }
  }
  local_d0 = pvVar2;
  if ((pEVar9 == (EventListenerVector *)0x0) || (local_c0 == local_c8)) {
LAB_00fa04e8:
    updateListeners(this,(Event *)param_1);
  }
  else {
    ppEStack_98 = &local_a8;
    local_90 = &local_c8;
    local_a0 = &PTR_FUN_01722f68;
    pEStack_88 = this;
    local_80 = (EventDispatcher *)&local_a0;
    dispatchTouchEventToListeners(this_00,pEVar9,(function *)&local_a0);
    if ((EventDispatcher *)&local_a0 == local_80) {
      pcVar7 = (code *)(*(undefined ***)local_80)[4];
LAB_00fa04d8:
      (*pcVar7)();
    }
    else if (local_80 != (EventDispatcher *)0x0) {
      pcVar7 = (code *)(*(undefined ***)local_80)[5];
      goto LAB_00fa04d8;
    }
    param_1 = local_a8;
    if (local_a8[0x28] == (EventTouch)0x0) goto LAB_00fa04e8;
  }
joined_r0x00fa046c:
  if (local_c8 != (void *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
LAB_00fa0504:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

