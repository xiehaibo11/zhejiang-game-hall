
/* v8::internal::Sweeper::AreSweeperTasksRunning() */

bool __thiscall v8::internal::Sweeper::AreSweeperTasksRunning(Sweeper *this)

{
  return *(long *)(this + 0x100) != 0;
}

