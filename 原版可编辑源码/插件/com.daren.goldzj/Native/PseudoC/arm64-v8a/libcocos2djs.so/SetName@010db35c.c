
/* v8::internal::JSFunction::SetName(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::String>) */

bool v8::internal::JSFunction::SetName(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  Isolate *pIVar5;
  IncrementalStringBuilder aIStack_88 [8];
  int local_80;
  int local_78;
  int local_74;
  long *local_68;
  
  pIVar5 = (Isolate *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  lVar3 = Name::ToFunctionName(pIVar5);
  bVar2 = false;
  if (lVar3 != 0) {
    if (0 < *(int *)(*param_3 + 7)) {
      IncrementalStringBuilder::IncrementalStringBuilder(aIStack_88,pIVar5);
      IncrementalStringBuilder::AppendString(aIStack_88,param_3);
      lVar4 = (long)local_74;
      local_74 = local_74 + 1;
      if (local_80 == 0) {
        *(undefined1 *)(*local_68 + lVar4 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(*local_68 + lVar4 * 2 + 0xb) = 0x20;
      }
      if (local_74 == local_78) {
        IncrementalStringBuilder::Extend(aIStack_88);
      }
      IncrementalStringBuilder::AppendString(aIStack_88,lVar3);
      lVar3 = IncrementalStringBuilder::Finish(aIStack_88);
      if (lVar3 == 0) {
        return false;
      }
    }
    LookupIterator::PropertyOrElement
              ((LookupIterator *)aIStack_88,(ulong)*(uint *)(param_1 + 4) << 0x20,param_1,
               pIVar5 + 0x820,param_1,1);
    cVar1 = JSObject::DefineOwnPropertyIgnoreAttributes(aIStack_88,lVar3,3,1,1);
    bVar2 = lVar3 != 0 && cVar1 != '\0';
  }
  return bVar2;
}

