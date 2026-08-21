
/* v8::HandleScope::~HandleScope() */

void __thiscall v8::HandleScope::~HandleScope(HandleScope *this)

{
  long lVar1;
  Isolate *pIVar2;
  
  pIVar2 = *(Isolate **)this;
  lVar1 = *(long *)(this + 0x10);
  *(undefined8 *)(pIVar2 + 0x95a0) = *(undefined8 *)(this + 8);
  *(int *)(pIVar2 + 0x95b0) = *(int *)(pIVar2 + 0x95b0) + -1;
  if (*(long *)(pIVar2 + 0x95a8) != lVar1) {
    *(long *)(pIVar2 + 0x95a8) = lVar1;
    internal::HandleScope::DeleteExtensions(pIVar2);
    return;
  }
  return;
}

