
/* v8::internal::Isolate::PromiseHookStateUpdated() */

void __thiscall v8::internal::Isolate::PromiseHookStateUpdated(Isolate *this)

{
  undefined8 uVar1;
  long lVar2;
  Isolate IVar3;
  Isolate IVar4;
  Isolate IVar5;
  
  if ((*(long *)(this + 0xb668) == 0) && (*(long *)(this + 0xc710) == 0)) {
    IVar5 = (Isolate)0x0;
    IVar4 = (Isolate)0x0;
    IVar3 = (Isolate)0x0;
    if (*(char *)(*(long *)(this + 0xb6c8) + 8) == '\0') goto LAB_00f564a4;
  }
  else {
    IVar3 = (Isolate)0x1;
  }
  IVar5 = IVar3;
  if (*(int *)(*(long *)(this + 0xee8) + 0xb) == 2) {
    uVar1 = *(undefined8 *)(this + 0x95a0);
    lVar2 = *(long *)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    Protectors::InvalidatePromiseHook(this);
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this);
    }
  }
  IVar4 = (Isolate)0x1;
LAB_00f564a4:
  this[0xc718] = IVar5;
  this[0xc719] = IVar4;
  return;
}

