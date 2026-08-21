
/* cocos2d::Console::stop() */

void __thiscall cocos2d::Console::stop(Console *this)

{
  if (this[0xd0] != (Console)0x0) {
    this[0xd1] = (Console)0x1;
    if (*(long *)(this + 0x48) != 0) {
      std::__ndk1::thread::join((thread *)(this + 0x48));
      return;
    }
  }
  return;
}

