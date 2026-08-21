
/* v8::internal::HeapObjectRequest::HeapObjectRequest(v8::internal::StringConstantBase const*, int)
    */

void __thiscall
v8::internal::HeapObjectRequest::HeapObjectRequest
          (HeapObjectRequest *this,StringConstantBase *param_1,int param_2)

{
  *(int *)(this + 0x10) = param_2;
  *(undefined4 *)this = 1;
  *(StringConstantBase **)(this + 8) = param_1;
  return;
}

