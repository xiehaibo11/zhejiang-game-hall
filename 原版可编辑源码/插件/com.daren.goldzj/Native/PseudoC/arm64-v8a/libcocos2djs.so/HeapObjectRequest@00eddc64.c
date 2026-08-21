
/* v8::internal::HeapObjectRequest::HeapObjectRequest(double, int) */

void __thiscall
v8::internal::HeapObjectRequest::HeapObjectRequest
          (HeapObjectRequest *this,double param_1,int param_2)

{
  *(undefined4 *)this = 0;
  *(int *)(this + 0x10) = param_2;
  *(double *)(this + 8) = param_1;
  return;
}

