
/* void v8::internal::CallIterateBody::apply<v8::internal::JSTypedArray::BodyDescriptor,
   v8::internal::PointersUpdatingVisitor>(v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::PointersUpdatingVisitor*) */

void v8::internal::CallIterateBody::
     apply<v8::internal::JSTypedArray::BodyDescriptor,v8::internal::PointersUpdatingVisitor>
               (long param_1,long param_2,int param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)(*param_4 + 0x10))(param_4,param_2,param_2 + 3,param_2 + 0xf);
  (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + 0x2f);
  if (*(short *)(param_1 + 7) == 0x421) {
    iVar1 = 0xc;
  }
  else {
    iVar1 = JSObject::GetHeaderSize(*(short *)(param_1 + 7),*(char *)(param_1 + 9) < '\0');
  }
  lVar3 = param_2 + -1;
  lVar2 = (ulong)*(byte *)(param_1 + 4) * 4;
  if (iVar1 < (int)lVar2) {
    lVar4 = (long)iVar1;
    (**(code **)(*param_4 + 0x10))(param_4,param_2,param_2 + 0x33,lVar3 + lVar4);
    do {
      (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + lVar4 + -1);
      lVar4 = lVar4 + 8;
    } while (lVar4 < lVar2);
  }
  else {
    lVar2 = 0x34;
  }
                    /* WARNING: Could not recover jumptable at 0x00feb680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x10))(param_4,param_2,lVar2 + lVar3,lVar3 + param_3);
  return;
}

