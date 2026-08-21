
/* v8::internal::JSPromise::set_async_task_id(int) */

void __thiscall v8::internal::JSPromise::set_async_task_id(JSPromise *this,int param_1)

{
  *(uint *)(*(long *)this + 0xf) = *(uint *)(*(long *)this + 0xf) & 0xf800001e | param_1 << 5;
  return;
}

