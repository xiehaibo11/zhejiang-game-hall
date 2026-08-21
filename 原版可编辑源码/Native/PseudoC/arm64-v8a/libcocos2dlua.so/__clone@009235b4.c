
/* std::__ndk1::__function::__func<std::__ndk1::__bind<cocos2d::Ref*
   (cocostudio::CustomGUIReader::*)(), cocostudio::CustomGUIReader*>,
   std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Ref* (cocostudio::CustomGUIReader::*)(),
   cocostudio::CustomGUIReader*> >, cocos2d::Ref*
   ()>::__clone(std::__ndk1::__function::__base<cocos2d::Ref* ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>,std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>>,cocos2d::Ref*()>
::__clone(__func<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>,std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Ref*(cocostudio::CustomGUIReader::*)(),cocostudio::CustomGUIReader*>>,cocos2d::Ref*()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_0169ce20;
                    /* catch() { ... } // from try @ 009234c4 with catch @ 009235c4 */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

