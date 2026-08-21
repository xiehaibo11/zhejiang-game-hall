
/* v8::internal::IC::ReferenceError(v8::internal::Handle<v8::internal::Name>) */

undefined8 __thiscall v8::internal::IC::ReferenceError(IC *this,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  Isolate *pIVar4;
  Factory *pFVar5;
  
  pIVar4 = *(Isolate **)(this + 8);
  uVar1 = *(undefined8 *)(pIVar4 + 0x95a0);
  lVar2 = *(long *)(pIVar4 + 0x95a8);
  *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + 1;
  pFVar5 = *(Factory **)(this + 8);
  puVar3 = (undefined8 *)Factory::NewReferenceError(pFVar5,0xb2,param_2,0,0);
  Isolate::Throw((Isolate *)pFVar5,*puVar3,0);
  if (pIVar4 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar4 + 0x95a0) = uVar1;
    *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + -1;
    if (*(long *)(pIVar4 + 0x95a8) != lVar2) {
      *(long *)(pIVar4 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar4);
    }
  }
  return 0;
}

