
/* dragonBones::Animation::getLastAnimationName() const */

undefined * __thiscall dragonBones::Animation::getLastAnimationName(Animation *this)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(long *)(this + 0x78) == 0) {
                    /* try { // try from 00d729b4 to 00e729d7 has its CatchHandler @ 00d71544 */
    if (((DAT_01787628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01787628), iVar1 != 0)) {
      puVar2 = &DAT_01787610;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &DAT_01787610,"");
                    /* try { // try from 00d729d8 to 00e729df has its CatchHandler @ 00d73128 */
      __cxa_atexit(std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   ~basic_string,&DAT_01787610,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01787628);
    }
    else {
      puVar2 = &DAT_01787610;
    }
  }
  else {
    puVar2 = (undefined *)(*(long *)(this + 0x78) + 0x30);
  }
  return puVar2;
}

