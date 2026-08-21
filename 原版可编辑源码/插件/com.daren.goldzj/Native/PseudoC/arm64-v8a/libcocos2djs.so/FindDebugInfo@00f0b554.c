
/* v8::internal::Debug::FindDebugInfo(v8::internal::Handle<v8::internal::DebugInfo>,
   v8::internal::DebugInfoListNode**, v8::internal::DebugInfoListNode**) */

void __thiscall
v8::internal::Debug::FindDebugInfo(Debug *this,long *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  long *plVar4;
  long *plVar5;
  
  pIVar3 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar3 + 0x95a0);
  lVar2 = *(long *)(pIVar3 + 0x95a8);
  *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + 1;
  *param_3 = 0;
  plVar4 = *(long **)(this + 0x18);
  *param_4 = (long)plVar4;
  while( true ) {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    plVar5 = (long *)*plVar4;
    if ((plVar5 == param_2) ||
       (((param_2 != (long *)0x0 && (plVar5 != (long *)0x0)) && (*plVar5 == *param_2)))) break;
    *param_3 = (long)plVar4;
    plVar4 = *(long **)(*param_4 + 8);
    *param_4 = (long)plVar4;
  }
  if (pIVar3 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar3 + 0x95a0) = uVar1;
    *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + -1;
    if (*(long *)(pIVar3 + 0x95a8) != lVar2) {
      *(long *)(pIVar3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar3);
      return;
    }
  }
  return;
}

