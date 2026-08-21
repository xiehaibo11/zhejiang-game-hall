
/* dragonBones::ActionData::_onClear() */

void __thiscall dragonBones::ActionData::_onClear(ActionData *this)

{
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
  *(undefined4 *)(this + 0x10) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

