
/* ListenerComponent::ListenerComponent(cocos2d::Node*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)>) */

void __thiscall
ListenerComponent::ListenerComponent
          (ListenerComponent *this,undefined8 param_1,basic_string *param_2,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  ListenerComponent *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dd950c with catch @ 00dd95f8 */
                    /* catch() { ... } // from try @ 00dd92b4 with catch @ 00dd95fc */
                    /* catch() { ... } // from try @ 00dd92a8 with catch @ 00dd9600 */
  cocos2d::Component::Component((Component *)this);
                    /* catch() { ... } // from try @ 00dd9448 with catch @ 00dd9604 */
                    /* catch() { ... } // from try @ 00dd9468 with catch @ 00dd9608
                       catch() { ... } // from try @ 00dd94d0 with catch @ 00dd9608 */
                    /* catch() { ... } // from try @ 00dd9488 with catch @ 00dd960c */
  *(undefined8 *)(this + 0x50) = param_1;
                    /* catch() { ... } // from try @ 00dd9264 with catch @ 00dd9610 */
  *(undefined ***)this = &PTR__ListenerComponent_016e2478;
                    /* catch() { ... } // from try @ 00dd93e8 with catch @ 00dd9620 */
                    /* catch() { ... } // from try @ 00dd92f4 with catch @ 00dd9624 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x58),param_2);
  plVar2 = (long *)param_4[4];
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(this + 0x90) = 0;
  }
  else if (param_4 == plVar2) {
    *(ListenerComponent **)(this + 0x90) = this + 0x70;
    (**(code **)(*(long *)param_4[4] + 0x18))((long *)param_4[4],this + 0x70);
  }
  else {
                    /* catch() { ... } // from try @ 00dd9290 with catch @ 00dd9644
                       catch() { ... } // from try @ 00dd93e0 with catch @ 00dd9644 */
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)(this + 0x90) = uVar3;
  }
  (**(code **)(*(long *)this + 0x20))(this,COMPONENT_NAME);
  lVar4 = cocos2d::EventListenerTouchAllAtOnce::create();
  *(long *)(this + 0xa8) = lVar4;
  local_80 = &PTR_FUN_016e2500;
  uStack_70 = 0;
  local_78 = onTouchesEnded;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008ae5c8(&local_80,lVar4 + 0x100);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00dd96f0;
    pcVar5 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar5)();
LAB_00dd96f0:
  lVar4 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(lVar4 + 0xb0),*(EventListener **)(this + 0xa8),
             *(Node **)(this + 0x50));
                    /* catch() { ... } // from try @ 00dd9740 with catch @ 00dd9708 */
  cocos2d::Ref::retain(*(Ref **)(this + 0xa8));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

