
/* universe::core::Flags::wait() */

void __thiscall universe::core::Flags::wait(Flags *this)

{
  uint uVar1;
  
  if (*(int *)(this + 100) != 0) {
    uVar1 = Service::getInstance();
    Service::cancelById(uVar1);
    return;
  }
  return;
}

