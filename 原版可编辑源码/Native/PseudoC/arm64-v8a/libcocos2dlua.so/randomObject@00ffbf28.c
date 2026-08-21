
/* cocos2d::__Dictionary::randomObject() */

undefined8 __thiscall cocos2d::__Dictionary::randomObject(__Dictionary *this)

{
  long lVar1;
  __Array *this_00;
  __String *this_01;
  undefined8 uVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x38) == 0) {
LAB_00ffbf8c:
    uVar2 = 0;
  }
  else {
    this_00 = (__Array *)allKeys(this);
    this_01 = (__String *)__Array::getRandomObject(this_00);
    if (*(int *)(this + 0x38) != 1) {
      if (*(int *)(this + 0x38) == 2) {
        uVar2 = objectForKey(this,(long)*(int *)(this_01 + 0x30));
        if (*(long *)(lVar1 + 0x28) == local_28) {
          return uVar2;
        }
        goto LAB_00ffbfe8;
      }
      goto LAB_00ffbf8c;
    }
    pcVar3 = (char *)__String::getCString(this_01);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_40,pcVar3);
    uVar2 = objectForKey(this,(basic_string *)local_40);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
LAB_00ffbfe8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

