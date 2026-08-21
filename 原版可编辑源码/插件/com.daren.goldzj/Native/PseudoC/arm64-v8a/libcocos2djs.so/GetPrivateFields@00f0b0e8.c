
/* v8::internal::Debug::GetPrivateFields(v8::internal::Handle<v8::internal::JSReceiver>) */

void v8::internal::Debug::GetPrivateFields(long param_1)

{
  int iVar1;
  long *plVar2;
  Factory *pFVar3;
  
  pFVar3 = *(Factory **)(param_1 + 0x88);
  plVar2 = (long *)JSReceiver::GetPrivateEntries(pFVar3);
  if (plVar2 == (long *)0x0) {
    return;
  }
  iVar1 = *(int *)(*plVar2 + 3) >> 1;
  if (iVar1 != 0) {
    Factory::NewJSArrayWithElements(pFVar3,plVar2,3,iVar1,0);
    return;
  }
  Factory::NewJSArray(pFVar3,3,0,0,1,0);
  return;
}

