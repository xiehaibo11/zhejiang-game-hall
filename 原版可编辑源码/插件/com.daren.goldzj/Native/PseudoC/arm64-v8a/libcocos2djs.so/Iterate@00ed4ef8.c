
/* v8::internal::DeferredHandles::Iterate(v8::internal::RootVisitor*) */

void __thiscall v8::internal::DeferredHandles::Iterate(DeferredHandles *this,RootVisitor *param_1)

{
  long lVar1;
  ulong uVar2;
  
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,10,0,**(undefined8 **)this,*(undefined8 *)(this + 0x28));
  lVar1 = *(long *)this;
  if (1 < (ulong)(*(long *)(this + 8) - lVar1 >> 3)) {
    uVar2 = 1;
    do {
      lVar1 = *(long *)(lVar1 + uVar2 * 8);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,10,0,lVar1,lVar1 + 0x1ff0);
      lVar1 = *(long *)this;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(*(long *)(this + 8) - lVar1 >> 3));
  }
  return;
}

