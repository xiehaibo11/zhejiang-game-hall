
/* v8::internal::ArrayList::Elements(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ArrayList>) */

undefined8 * v8::internal::ArrayList::Elements(Factory *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long local_18;
  
  if (*(uint *)(*param_2 + 3) < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*param_2 + 7) >> 1;
  }
  puVar1 = (undefined8 *)Factory::NewFixedArray(param_1,iVar2,0);
  local_18 = *param_2;
  FixedArray::CopyTo((FixedArray *)&local_18,1,*puVar1,0,iVar2);
  return puVar1;
}

