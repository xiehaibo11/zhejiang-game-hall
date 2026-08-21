
/* cocos2d::__Dictionary::valueForKey(long) */

long __thiscall cocos2d::__Dictionary::valueForKey(__Dictionary *this,long param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = objectForKey(this,param_1);
  if ((lVar2 == 0) ||
     (lVar2 = __dynamic_cast(lVar2,&Ref::typeinfo,&__String::typeinfo,0), lVar2 == 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_40,"");
    lVar2 = __String::create((basic_string *)local_40);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

