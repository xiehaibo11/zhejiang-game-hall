
/* v8::internal::HeapObject::IterateBody(v8::internal::Map, int, v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::HeapObject::IterateBody
          (HeapObject *this,long param_2,undefined4 param_3,undefined8 param_4)

{
  BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::ObjectVisitor*>
            (*(undefined2 *)(param_2 + 7),param_2,*(undefined8 *)this,param_3,param_4);
  return;
}

