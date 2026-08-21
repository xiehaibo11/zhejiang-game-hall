
/* v8::Isolate::New(v8::Isolate::CreateParams const&) */

Isolate * v8::Isolate::New(CreateParams *param_1)

{
  Isolate *pIVar1;
  
  pIVar1 = (Isolate *)internal::Isolate::New(1);
  Initialize(pIVar1,param_1);
  return pIVar1;
}

