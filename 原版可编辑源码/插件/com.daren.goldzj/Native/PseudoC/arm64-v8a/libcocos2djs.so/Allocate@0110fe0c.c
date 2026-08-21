
/* v8::internal::DescriptorArray::Allocate(v8::internal::Isolate*, int, int) */

Isolate * v8::internal::DescriptorArray::Allocate(Isolate *param_1,int param_2,int param_3)

{
  Isolate *pIVar1;
  
  if (param_3 + param_2 == 0) {
    return param_1 + 0x170;
  }
  pIVar1 = (Isolate *)Factory::NewDescriptorArray((Factory *)param_1,param_2,param_3);
  return pIVar1;
}

