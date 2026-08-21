
/* v8::internal::JSArray::Initialize(v8::internal::Handle<v8::internal::JSArray>, int, int) */

void v8::internal::JSArray::Initialize(long param_1,undefined4 param_2,undefined8 param_3)

{
  Factory::NewJSArrayStorage
            ((Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20),param_1,param_3,param_2,1);
  return;
}

