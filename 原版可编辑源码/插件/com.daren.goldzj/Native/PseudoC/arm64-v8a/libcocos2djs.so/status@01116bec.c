
/* v8::internal::JSPromise::status() const */

uint __thiscall v8::internal::JSPromise::status(JSPromise *this)

{
  return *(uint *)(*(long *)this + 0xf) >> 1 & 3;
}

