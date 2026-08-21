
/* v8::Isolate::IsExecutionTerminating() */

bool __thiscall v8::Isolate::IsExecutionTerminating(Isolate *this)

{
  if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
    return false;
  }
  return *(int *)(this + 0x2c20) == *(int *)(this + 0x188);
}

