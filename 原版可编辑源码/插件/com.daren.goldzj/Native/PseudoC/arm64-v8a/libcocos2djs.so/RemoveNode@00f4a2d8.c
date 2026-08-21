
/* v8::internal::FutexWaitList::RemoveNode(v8::internal::FutexWaitListNode*) */

void __thiscall
v8::internal::FutexWaitList::RemoveNode(FutexWaitList *this,FutexWaitListNode *param_1)

{
  FutexWaitList *pFVar1;
  
  pFVar1 = this;
  if (*(long *)(param_1 + 0x30) != 0) {
    pFVar1 = (FutexWaitList *)(*(long *)(param_1 + 0x30) + 0x38);
  }
  *(undefined8 *)pFVar1 = *(undefined8 *)(param_1 + 0x38);
  pFVar1 = this + 8;
  if (*(long *)(param_1 + 0x38) != 0) {
    pFVar1 = (FutexWaitList *)(*(long *)(param_1 + 0x38) + 0x30);
  }
  *(undefined8 *)pFVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

