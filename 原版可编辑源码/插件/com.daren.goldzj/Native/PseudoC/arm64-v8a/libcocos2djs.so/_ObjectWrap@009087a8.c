
/* se::ObjectWrap::~ObjectWrap() */

void __thiscall se::ObjectWrap::~ObjectWrap(ObjectWrap *this)

{
  if (*(ulong **)(this + 8) != (ulong *)0x0) {
    v8::V8::ClearWeak(*(ulong **)(this + 8));
    if (*(ulong **)(this + 8) != (ulong *)0x0) {
      v8::V8::DisposeGlobal(*(ulong **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
  }
  return;
}

