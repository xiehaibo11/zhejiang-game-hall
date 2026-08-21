
/* v8::internal::PropertyKeyToArrayIndex(v8::internal::Handle<v8::internal::Object>, unsigned int*)
    */

bool v8::internal::PropertyKeyToArrayIndex(undefined8 param_1,int *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = PropertyKeyToArrayLength();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 != -1;
  }
  return bVar1;
}

