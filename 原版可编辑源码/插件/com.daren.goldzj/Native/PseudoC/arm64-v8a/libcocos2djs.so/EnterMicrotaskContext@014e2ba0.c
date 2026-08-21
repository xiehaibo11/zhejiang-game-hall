
/* v8::internal::HandleScopeImplementer::EnterMicrotaskContext(v8::internal::Context) */

void __thiscall
v8::internal::HandleScopeImplementer::EnterMicrotaskContext
          (HandleScopeImplementer *this,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x30);
  if (lVar4 == *(long *)(this + 0x28)) {
    uVar1 = lVar4 << 1;
    if ((ulong)(lVar4 << 1) < 9) {
      uVar1 = 8;
    }
    uVar2 = uVar1 << 3;
    if (uVar1 >> 0x3d != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar2);
    if (uVar1 != 0) {
      memset(pvVar3,0,uVar1 << 3);
    }
    if (lVar4 != 0) {
      memmove(pvVar3,*(void **)(this + 0x20),lVar4 << 3);
    }
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    lVar4 = *(long *)(this + 0x30);
    *(void **)(this + 0x20) = pvVar3;
    *(ulong *)(this + 0x28) = uVar1;
  }
  else {
    pvVar3 = *(void **)(this + 0x20);
  }
  *(undefined8 *)((long)pvVar3 + lVar4 * 8) = param_2;
  __n = *(size_t *)(this + 0x48);
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  if (__n == *(size_t *)(this + 0x40)) {
    uVar1 = __n << 1;
    if (__n << 1 < 9) {
      uVar1 = 8;
    }
    pvVar3 = operator_new__(uVar1);
    if (__n != 0) {
      memmove(pvVar3,*(void **)(this + 0x38),__n);
    }
    if (*(void **)(this + 0x38) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x38));
    }
    __n = *(size_t *)(this + 0x48);
    *(void **)(this + 0x38) = pvVar3;
    *(ulong *)(this + 0x40) = uVar1;
  }
  else {
    pvVar3 = *(void **)(this + 0x38);
  }
  *(undefined1 *)((long)pvVar3 + __n) = 1;
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
  return;
}

