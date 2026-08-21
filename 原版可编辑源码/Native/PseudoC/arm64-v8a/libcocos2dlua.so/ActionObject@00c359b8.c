
/* cocostudio::ActionObject::ActionObject() */

void __thiscall cocostudio::ActionObject::ActionObject(ActionObject *this)

{
  long lVar1;
  Ref *this_00;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__ActionObject_016c7cc8;
  *(undefined8 *)(this + 0x28) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x40),"");
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined2 *)(this + 0x58) = 0;
  this[0x5a] = (ActionObject)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x5c) = 0x3dcccccd;
  *(undefined4 *)(this + 0x78) = 0;
  lVar1 = cocos2d::Director::getInstance();
  this_00 = *(Ref **)(lVar1 + 0xa0);
  *(Ref **)(this + 0x68) = this_00;
  if (this_00 != (Ref *)0x0) {
    cocos2d::Ref::retain(this_00);
  }
  return;
}

