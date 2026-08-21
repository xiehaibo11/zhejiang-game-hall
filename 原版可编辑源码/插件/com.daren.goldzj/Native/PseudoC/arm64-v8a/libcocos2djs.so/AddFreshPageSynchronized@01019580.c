
/* v8::internal::NewSpace::AddFreshPageSynchronized() */

uint __thiscall v8::internal::NewSpace::AddFreshPageSynchronized(NewSpace *this)

{
  uint uVar1;
  
  base::Mutex::Lock((Mutex *)(this + 0x98));
  uVar1 = AddFreshPage(this);
  base::Mutex::Unlock((Mutex *)(this + 0x98));
  return uVar1 & 1;
}

