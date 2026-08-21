
/* se::ObjectWrap::ref() */

void __thiscall se::ObjectWrap::ref(ObjectWrap *this)

{
  v8::V8::ClearWeak(*(ulong **)(this + 8));
  *(int *)this = *(int *)this + 1;
  return;
}

