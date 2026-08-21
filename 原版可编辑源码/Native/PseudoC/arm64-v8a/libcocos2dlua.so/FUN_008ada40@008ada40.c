
undefined8 FUN_008ada40(long param_1)

{
  long lVar1;
  int iVar2;
  Node *pNVar3;
  __Dictionary *this;
  Ref *this_00;
  EventListener *pEVar4;
  EventDispatcher *this_01;
  code *pcVar5;
  undefined **local_90;
  Node *pNStack_88;
  void *local_80;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) goto LAB_008adc60;
  pNVar3 = (Node *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.Layer:setAccelerometerEnabled",iVar2 + -1,1);
    goto LAB_008adc60;
  }
  iVar2 = tolua_toboolean(param_1,2,0);
  this = (__Dictionary *)(**(code **)(*(long *)pNVar3 + 0x2f0))(pNVar3);
  if (this == (__Dictionary *)0x0) {
    this = (__Dictionary *)cocos2d::__Dictionary::create();
    (**(code **)(*(long *)pNVar3 + 0x300))(pNVar3,this);
  }
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    cocos2d::Ref::Ref(this_00);
    *(undefined ***)this_00 = &PTR____Bool_016985e8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_01698618;
    this_00[0x30] = (Ref)(iVar2 != 0);
    cocos2d::Ref::autorelease(this_00);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"accelerometerEnabled");
  cocos2d::__Dictionary::setObject(this,this_00,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"accListener");
  pEVar4 = (EventListener *)cocos2d::__Dictionary::objectForKey(this,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  this_01 = (EventDispatcher *)(**(code **)(*(long *)pNVar3 + 0x388))(pNVar3);
  cocos2d::EventDispatcher::removeEventListener(this_01,pEVar4);
  cocos2d::Device::setAccelerometerEnabled(iVar2 != 0);
  if (iVar2 == 0) goto LAB_008adc60;
  local_90 = &PTR_FUN_016996c0;
  pNStack_88 = pNVar3;
  local_70 = (long *)&local_90;
  pEVar4 = (EventListener *)cocos2d::EventListenerAcceleration::create((function *)&local_90);
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_008adc1c:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_008adc1c;
  }
  cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority(this_01,pEVar4,pNVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"accListener");
  cocos2d::__Dictionary::setObject(this,(Ref *)pEVar4,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_008adc60:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

