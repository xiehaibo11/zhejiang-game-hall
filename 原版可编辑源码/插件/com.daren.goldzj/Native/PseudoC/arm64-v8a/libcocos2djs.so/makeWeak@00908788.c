
/* se::ObjectWrap::makeWeak() */

void __thiscall se::ObjectWrap::makeWeak(ObjectWrap *this)

{
  v8::V8::MakeWeak(*(undefined8 *)(this + 8),this,weakCallback,2);
  return;
}

