
/* se::ObjectWrap::unref() */

void __thiscall se::ObjectWrap::unref(ObjectWrap *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *(int *)this = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  v8::V8::MakeWeak(*(undefined8 *)(this + 8),this,weakCallback,2);
  return;
}

