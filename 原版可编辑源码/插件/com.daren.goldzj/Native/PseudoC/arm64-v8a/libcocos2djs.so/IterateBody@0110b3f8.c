
/* v8::internal::HeapObject::IterateBody(v8::internal::ObjectVisitor*) */

void __thiscall v8::internal::HeapObject::IterateBody(HeapObject *this,ObjectVisitor *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1);
  uVar1 = SizeFromMap(this,uVar2);
  BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::ObjectVisitor*>
            (*(undefined2 *)(uVar2 + 7),uVar2,*(undefined8 *)this,uVar1,param_1);
  return;
}

