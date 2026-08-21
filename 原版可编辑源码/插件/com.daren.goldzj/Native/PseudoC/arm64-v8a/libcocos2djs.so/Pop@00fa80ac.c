
/* v8::internal::Worklist<v8::internal::HeapObject, 16>::Pop(int, v8::internal::HeapObject*) */

undefined8 __thiscall
v8::internal::Worklist<v8::internal::HeapObject,16>::Pop
          (Worklist<v8::internal::HeapObject,16> *this,int param_1,HeapObject *param_2)

{
  Mutex *this_00;
  long lVar1;
  long lVar2;
  Worklist<v8::internal::HeapObject,16> *pWVar3;
  undefined8 *puVar4;
  
  pWVar3 = this + (long)param_1 * 0x50 + 8;
  lVar1 = *(long *)pWVar3;
  if (*(long *)(lVar1 + 8) == 0) {
    puVar4 = *(undefined8 **)(this + (long)param_1 * 0x50);
    if (puVar4[1] == 0) {
      if (*(long *)(this + 0x2a8) == 0) {
        return 0;
      }
      this_00 = (Mutex *)(this + 0x280);
      base::Mutex::Lock(this_00);
      puVar4 = *(undefined8 **)(this + 0x2a8);
      if (puVar4 == (undefined8 *)0x0) {
        base::Mutex::Unlock(this_00);
        return 0;
      }
      *(undefined8 *)(this + 0x2a8) = *puVar4;
      base::Mutex::Unlock(this_00);
      if (*(void **)pWVar3 != (void *)0x0) {
        operator_delete(*(void **)pWVar3);
      }
      *(undefined8 **)pWVar3 = puVar4;
      lVar1 = puVar4[1];
    }
    else {
      *(undefined8 **)pWVar3 = puVar4;
      *(long *)(this + (long)param_1 * 0x50) = lVar1;
      lVar1 = puVar4[1];
    }
    if (lVar1 == 0) {
      return 1;
    }
    puVar4[1] = lVar1 + -1;
    puVar4 = puVar4 + lVar1 + -1;
  }
  else {
    lVar2 = *(long *)(lVar1 + 8) + -1;
    *(long *)(lVar1 + 8) = lVar2;
    puVar4 = (undefined8 *)(lVar1 + lVar2 * 8);
  }
  *(undefined8 *)param_2 = puVar4[2];
  return 1;
}

