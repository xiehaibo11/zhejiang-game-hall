
void FUN_008adea4(Node *param_1,byte param_2)

{
  long lVar1;
  bool bVar2;
  __Dictionary *this;
  Ref *this_00;
  EventListener *pEVar3;
  EventListener *pEVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  EventDispatcher *this_01;
  EventListenerTouchOneByOne *this_02;
  code *pcVar8;
  undefined **local_a0;
  Node *pNStack_98;
  void *local_90;
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (Node *)0x0) goto LAB_008ae430;
  this = (__Dictionary *)(**(code **)(*(long *)param_1 + 0x2f0))();
  if (this == (__Dictionary *)0x0) {
    this = (__Dictionary *)cocos2d::__Dictionary::create();
    (**(code **)(*(long *)param_1 + 0x300))(param_1,this);
  }
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    cocos2d::Ref::Ref(this_00);
    this_00[0x30] = (Ref)(param_2 & 1);
    *(undefined ***)this_00 = &PTR____Bool_016985e8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_01698618;
    cocos2d::Ref::autorelease(this_00);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"touchEnabled");
  cocos2d::__Dictionary::setObject(this,this_00,(basic_string *)&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"touchListenerAllAtOnce");
  pEVar3 = (EventListener *)cocos2d::__Dictionary::objectForKey(this,(basic_string *)&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"touchListenerOneByOne");
  pEVar4 = (EventListener *)cocos2d::__Dictionary::objectForKey(this,(basic_string *)&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"touchMode");
  lVar5 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"swallowTouches");
  lVar6 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"priority");
  lVar7 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  this_01 = (EventDispatcher *)(**(code **)(*(long *)param_1 + 0x388))(param_1);
  if ((this_01 != (EventDispatcher *)0x0) &&
     (pEVar3 != (EventListener *)0x0 || pEVar4 != (EventListener *)0x0)) {
    cocos2d::EventDispatcher::removeEventListener(this_01,pEVar3);
    cocos2d::EventDispatcher::removeEventListener(this_01,pEVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,"touchListenerAllAtOnce");
    cocos2d::__Dictionary::removeObjectForKey(this,(basic_string *)&local_a0);
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,"touchListenerOneByOne");
    cocos2d::__Dictionary::removeObjectForKey(this,(basic_string *)&local_a0);
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  if ((param_2 & 1) == 0) goto LAB_008ae430;
  pNStack_98 = param_1;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x30) == 0)) {
    pEVar3 = (EventListener *)cocos2d::EventListenerTouchAllAtOnce::create();
    local_a0 = &PTR_FUN_01699180;
    local_80 = (long *)&local_a0;
    FUN_008ae5c8(&local_a0,pEVar3 + 0xa0);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae17c:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae17c;
    }
    local_a0 = &PTR_FUN_01699210;
    pNStack_98 = param_1;
    local_80 = (long *)&local_a0;
    FUN_008ae5c8(&local_a0,pEVar3 + 0xd0);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae1c4:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae1c4;
    }
    local_a0 = &PTR_FUN_01699290;
    pNStack_98 = param_1;
    local_80 = (long *)&local_a0;
    FUN_008ae5c8(&local_a0,pEVar3 + 0x100);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae20c:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae20c;
    }
    local_a0 = &PTR_FUN_01699310;
    pNStack_98 = param_1;
    local_80 = (long *)&local_a0;
    FUN_008ae5c8(&local_a0,pEVar3 + 0x130);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae254:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae254;
    }
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x30) == 0)) {
      cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority(this_01,pEVar3,param_1);
    }
    else {
      cocos2d::EventDispatcher::addEventListenerWithFixedPriority
                (this_01,pEVar3,*(int *)(lVar7 + 0x30));
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,"touchListenerAllAtOnce");
    cocos2d::__Dictionary::setObject(this,(Ref *)pEVar3,(basic_string *)&local_a0);
  }
  else {
    this_02 = (EventListenerTouchOneByOne *)cocos2d::EventListenerTouchOneByOne::create();
    if (lVar6 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(lVar6 + 0x30) != '\0';
    }
    cocos2d::EventListenerTouchOneByOne::setSwallowTouches(this_02,bVar2);
    local_a0 = &PTR_FUN_01699390;
    local_80 = (long *)&local_a0;
    FUN_008aeb48(&local_a0,this_02 + 0xa0);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae2f8:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae2f8;
    }
    local_a0 = &PTR_FUN_01699420;
    pNStack_98 = param_1;
    local_80 = (long *)&local_a0;
    FUN_008aedb8(&local_a0,this_02 + 0xd0);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae340:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae340;
    }
    local_a0 = &PTR_FUN_016994b0;
    pNStack_98 = param_1;
    local_80 = (long *)&local_a0;
    FUN_008aedb8(&local_a0,this_02 + 0x100);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae388:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae388;
    }
    local_a0 = &PTR_FUN_01699530;
    pNStack_98 = param_1;
    local_80 = (long *)&local_a0;
    FUN_008aedb8(&local_a0,this_02 + 0x130);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
LAB_008ae3d0:
      (*pcVar8)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar8 = *(code **)(*local_80 + 0x28);
      goto LAB_008ae3d0;
    }
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x30) == 0)) {
      cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority
                (this_01,(EventListener *)this_02,param_1);
    }
    else {
      cocos2d::EventDispatcher::addEventListenerWithFixedPriority
                (this_01,(EventListener *)this_02,*(int *)(lVar7 + 0x30));
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,"touchListenerOneByOne");
    cocos2d::__Dictionary::setObject(this,(Ref *)this_02,(basic_string *)&local_a0);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_008ae430:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

