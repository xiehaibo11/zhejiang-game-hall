
/* dragonBones::Animation::getLastAnimationName() const */

undefined8 * __thiscall dragonBones::Animation::getLastAnimationName(Animation *this)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(long *)(this + 0x78) == 0) {
    if ((DAT_01d3de30 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_01d3de30);
      puVar2 = &DAT_01d3de18;
      if (iVar1 != 0) {
        DAT_01d3de18 = 0;
        DAT_01d3de20 = 0;
        DAT_01d3de28 = 0;
        __cxa_atexit(std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::~basic_string,&DAT_01d3de18,&PTR_LOOP_01d1b000);
        __cxa_guard_release(&DAT_01d3de30);
      }
    }
    else {
      puVar2 = &DAT_01d3de18;
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(this + 0x78) + 0x30);
  }
  return puVar2;
}

