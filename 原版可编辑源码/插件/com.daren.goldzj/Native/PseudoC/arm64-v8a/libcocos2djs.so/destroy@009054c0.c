
/* se::Class::destroy() */

void __thiscall se::Class::destroy(Class *this)

{
  if (*(RefCounter **)(this + 0x18) != (RefCounter *)0x0) {
    RefCounter::decRef(*(RefCounter **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (*(RefCounter **)(this + 0x28) != (RefCounter *)0x0) {
    RefCounter::decRef(*(RefCounter **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(RefCounter **)(this + 0x20) != (RefCounter *)0x0) {
    RefCounter::decRef(*(RefCounter **)(this + 0x20));
    *(undefined8 *)(this + 0x20) = 0;
  }
  if (*(ulong **)(this + 0x38) != (ulong *)0x0) {
    v8::V8::DisposeGlobal(*(ulong **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

