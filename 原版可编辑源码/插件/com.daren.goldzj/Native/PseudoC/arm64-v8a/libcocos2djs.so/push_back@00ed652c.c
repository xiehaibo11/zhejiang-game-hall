
/* v8::internal::DetachableVector<v8::internal::Context>::push_back(v8::internal::Context const&) */

void __thiscall
v8::internal::DetachableVector<v8::internal::Context>::push_back
          (DetachableVector<v8::internal::Context> *this,Context *param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__s;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  if (lVar3 == *(long *)(this + 8)) {
    uVar1 = lVar3 << 1;
    if ((ulong)(lVar3 << 1) < 9) {
      uVar1 = 8;
    }
    uVar2 = uVar1 << 3;
    if (uVar1 >> 0x3d != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    __s = operator_new__(uVar2);
    if (uVar1 != 0) {
      memset(__s,0,uVar1 << 3);
    }
    if (lVar3 != 0) {
      memmove(__s,*(void **)this,lVar3 << 3);
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
    }
    lVar3 = *(long *)(this + 0x10);
    *(void **)this = __s;
    *(ulong *)(this + 8) = uVar1;
  }
  else {
    __s = *(void **)this;
  }
  *(undefined8 *)((long)__s + lVar3 * 8) = *(undefined8 *)param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}

