
/* v8::internal::JSObject::New(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::AllocationSite>) */

undefined8 v8::internal::JSObject::New(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int *piVar3;
  Factory *pFVar4;
  long lVar5;
  
  pFVar4 = (Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  plVar1 = (long *)JSFunction::GetDerivedMap(pFVar4,param_1,param_2);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((*(uint *)(*plVar1 + 0xb) >> 0x15 & 1) == 0) {
      uVar2 = Factory::NewJSObjectFromMap(pFVar4,plVar1,0,param_3);
    }
    else {
      uVar2 = Factory::NewSlowJSObjectFromMap(pFVar4,plVar1,2,0,param_3);
    }
    lVar5 = *(long *)(pFVar4 + 0x9520);
    if (*(char *)(lVar5 + 0x1ef8) == '\0') {
      *(char *)(lVar5 + 0x1ef8) = '\x01';
      piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar5 + 0x1ee0));
      *(int **)(lVar5 + 0x1ef0) = piVar3;
    }
    else {
      piVar3 = *(int **)(lVar5 + 0x1ef0);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    lVar5 = *(long *)(pFVar4 + 0x9520);
    if (*(char *)(lVar5 + 0x1b78) == '\0') {
      *(char *)(lVar5 + 0x1b78) = '\x01';
      piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar5 + 0x1b60));
      *(int **)(lVar5 + 0x1b70) = piVar3;
    }
    else {
      piVar3 = *(int **)(lVar5 + 0x1b70);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  return uVar2;
}

