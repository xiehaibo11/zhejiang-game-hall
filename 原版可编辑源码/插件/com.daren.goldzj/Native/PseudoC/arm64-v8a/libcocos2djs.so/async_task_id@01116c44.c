
/* v8::internal::JSPromise::async_task_id() const */

uint __thiscall v8::internal::JSPromise::async_task_id(JSPromise *this)

{
  return *(uint *)(*(long *)this + 0xf) >> 5 & 0x3fffff;
}

