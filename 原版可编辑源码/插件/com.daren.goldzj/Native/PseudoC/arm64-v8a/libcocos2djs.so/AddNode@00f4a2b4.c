
/* v8::internal::FutexWaitList::AddNode(v8::internal::FutexWaitListNode*) */

void __thiscall v8::internal::FutexWaitList::AddNode(FutexWaitList *this,FutexWaitListNode *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 8) == 0) {
    *(FutexWaitListNode **)this = param_1;
    uVar1 = 0;
  }
  else {
    *(FutexWaitListNode **)(*(long *)(this + 8) + 0x38) = param_1;
    uVar1 = *(undefined8 *)(this + 8);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(FutexWaitListNode **)(this + 8) = param_1;
  return;
}

