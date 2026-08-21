
/* v8::internal::HeapObject::IsValidSlot(v8::internal::Map, int) */

bool __thiscall
v8::internal::HeapObject::IsValidSlot(HeapObject *this,long param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = BodyDescriptorApply<v8::internal::CallIsValidSlot,bool,v8::internal::Map,v8::internal::HeapObject,int,int>
                    (*(undefined2 *)(param_2 + 7),param_2,*(undefined8 *)this,param_3,0);
  return bVar1;
}

