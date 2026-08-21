
/* v8::internal::Sweeper::PauseOrCompleteScope::~PauseOrCompleteScope() */

void __thiscall
v8::internal::Sweeper::PauseOrCompleteScope::~PauseOrCompleteScope(PauseOrCompleteScope *this)

{
  *(undefined4 *)(*(long *)this + 0x108) = 0;
  if ((*(Sweeper **)this)[0xf9] != (Sweeper)0x0) {
    StartSweeperTasks(*(Sweeper **)this);
    return;
  }
  return;
}

