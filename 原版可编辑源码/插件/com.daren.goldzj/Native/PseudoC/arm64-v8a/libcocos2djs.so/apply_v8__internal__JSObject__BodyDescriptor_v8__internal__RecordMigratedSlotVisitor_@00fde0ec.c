
/* void v8::internal::CallIterateBody::apply<v8::internal::JSObject::BodyDescriptor,
   v8::internal::RecordMigratedSlotVisitor>(v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::RecordMigratedSlotVisitor*) */

void v8::internal::CallIterateBody::
     apply<v8::internal::JSObject::BodyDescriptor,v8::internal::RecordMigratedSlotVisitor>
               (long param_1,long param_2,int param_3,long *param_4)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(short *)(param_1 + 7) == 0x421) {
    iVar1 = 0xc;
  }
  else {
    iVar1 = JSObject::GetHeaderSize(*(short *)(param_1 + 7),*(char *)(param_1 + 9) < '\0');
  }
  lVar4 = param_2 + -1;
  lVar3 = (ulong)*(byte *)(param_1 + 4) * 4;
  if (iVar1 < (int)lVar3) {
    lVar5 = (long)iVar1;
    for (puVar2 = (uint *)(param_2 + 3); puVar2 < (uint *)(lVar4 + lVar5); puVar2 = puVar2 + 1) {
      (**(code **)(*param_4 + 0x88))
                (param_4,param_2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)*puVar2);
    }
    do {
      puVar2 = (uint *)(param_2 + lVar5 + -1);
      (**(code **)(*param_4 + 0x88))
                (param_4,param_2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)*puVar2);
      lVar5 = lVar5 + 8;
    } while (lVar5 < lVar3);
  }
  else {
    lVar3 = 4;
  }
  for (puVar2 = (uint *)(lVar3 + lVar4); puVar2 < (uint *)(lVar4 + param_3); puVar2 = puVar2 + 1) {
    (**(code **)(*param_4 + 0x88))
              (param_4,param_2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)*puVar2);
  }
  return;
}

