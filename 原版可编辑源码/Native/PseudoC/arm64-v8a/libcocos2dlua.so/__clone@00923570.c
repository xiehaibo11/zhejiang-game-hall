
/* std::__ndk1::__function::__func<std::__ndk1::__bind<cocos2d::Ref*
   (cocostudio::CustomGUIReader::*)(), cocostudio::CustomGUIReader*>,
   std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Ref* (cocostudio::CustomGUIReader::*)(),
   cocostudio::CustomGUIReader*> >, cocos2d::Ref* ()>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>,std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>>,cocos2d::Ref*()>
::__clone(__func<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>,std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>>,cocos2d::Ref*()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x20);
                    /* catch() { ... } // from try @ 009234f8 with catch @ 00923590 */
                    /* catch() { ... } // from try @ 00923510 with catch @ 00923594 */
  *puVar1 = &PTR_FUN_0169ce20;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

