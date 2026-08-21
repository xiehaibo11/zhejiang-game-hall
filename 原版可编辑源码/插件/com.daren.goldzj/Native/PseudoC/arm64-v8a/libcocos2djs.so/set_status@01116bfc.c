
/* v8::internal::JSPromise::set_status(v8::Promise::PromiseState) */

void __thiscall v8::internal::JSPromise::set_status(JSPromise *this,int param_2)

{
  *(uint *)(*(long *)this + 0xf) = *(uint *)(*(long *)this + 0xf) & 0xfffffff8 | param_2 << 1;
  return;
}

