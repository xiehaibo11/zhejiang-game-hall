
/* v8::Isolate::IsInUse() */

bool __thiscall v8::Isolate::IsInUse(Isolate *this)

{
  return *(long *)(this + 0x9488) != 0;
}

