
/* cocos2d::EventDispatcher::dispatchEvent(cocos2d::Event*) */

void __thiscall cocos2d::EventDispatcher::dispatchEvent(EventDispatcher *this,Event *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  Event *pEVar7;
  basic_string local_90 [16];
  void *local_80;
  Event *local_78;
  undefined **local_70;
  Event **ppEStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_78 = param_1;
  if (this[0x13c] == (EventDispatcher)0x0) goto LAB_00f9fee8;
  updateDirtyFlagForSceneGraph(this);
  *(int *)(this + 0x138) = *(int *)(this + 0x138) + 1;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* try { // try from 00f9fe28 to 0109fe2f has its CatchHandler @ 00f9ff2c */
    dispatchTouchEvent(this,(EventTouch *)param_1);
  }
  else {
    FUN_00fa05c8(local_90,param_1);
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                        *)(this + 0x50),local_90);
    if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x28), uVar1 != 0)) {
      *(undefined4 *)(lVar4 + 0x28) = 0;
      if ((uVar1 & 1) != 0) {
        sortEventListenersOfFixedPriority(this,local_90);
      }
      if ((uVar1 >> 1 & 1) != 0) {
        lVar5 = Director::getInstance();
        if (*(Node **)(lVar5 + 0x158) == (Node *)0x0) {
          *(undefined4 *)(lVar4 + 0x28) = 2;
        }
        else {
          sortEventListenersOfSceneGraphPriority(this,local_90,*(Node **)(lVar5 + 0x158));
        }
      }
    }
    pEVar7 = local_78;
    iVar2 = *(int *)(local_78 + 0x24);
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                        *)(this + 0x28),local_90);
                    /* try { // try from 00f9fe50 to 0109fe57 has its CatchHandler @ 00f9fef4 */
    if (lVar4 != 0) {
                    /* try { // try from 00f9fe58 to 0109ff9b has its CatchHandler @ 00f9fc00 */
      ppEStack_68 = &local_78;
      pcVar6 = dispatchTouchEventToListeners;
      if (iVar2 != 3) {
        pcVar6 = dispatchEventToListeners;
      }
      local_70 = &PTR_FUN_01722e58;
      local_50 = &local_70;
      (*pcVar6)(this,*(undefined8 *)(lVar4 + 0x28),&local_70);
      if (&local_70 == local_50) {
        pcVar6 = (code *)(*local_50)[4];
      }
      else {
        pEVar7 = local_78;
        if (local_50 == (undefined ***)0x0) goto LAB_00f9fec0;
        pcVar6 = (code *)(*local_50)[5];
      }
      (*pcVar6)();
      pEVar7 = local_78;
    }
LAB_00f9fec0:
    updateListeners(this,pEVar7);
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
  }
  *(int *)(this + 0x138) = *(int *)(this + 0x138) + -1;
LAB_00f9fee8:
                    /* catch() { ... } // from try @ 00f9fe50 with catch @ 00f9fef4 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

