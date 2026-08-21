
/* v8::Promise::MarkAsHandled() */

void __thiscall v8::Promise::MarkAsHandled(Promise *this)

{
  *(uint *)(*(long *)this + 0xf) = *(uint *)(*(long *)this + 0xf) & 0xfffffffe | 8;
  return;
}

