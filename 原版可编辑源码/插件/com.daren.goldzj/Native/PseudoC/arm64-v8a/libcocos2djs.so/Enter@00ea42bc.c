
/* v8::Context::Enter() */

void __thiscall v8::Context::Enter(Context *this)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *__dest;
  undefined8 uVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  uVar2 = *(uint *)(this + 4);
  lVar5 = (ulong)uVar2 << 0x20;
  uVar3 = *(undefined4 *)(lVar5 + 0x2c60);
  *(undefined4 *)(lVar5 + 0x2c60) = 5;
  lVar6 = *(long *)((ulong)uVar2 << 0x20 | 0x95c0);
  local_38 = *(undefined8 *)this;
  internal::DetachableVector<v8::internal::Context>::push_back
            ((DetachableVector<v8::internal::Context> *)(lVar6 + 0x20),(Context *)&local_38);
  __n = *(size_t *)(lVar6 + 0x48);
  if (__n == *(size_t *)(lVar6 + 0x40)) {
    uVar1 = __n << 1;
    if (__n << 1 < 9) {
      uVar1 = 8;
    }
    __dest = operator_new__(uVar1);
    if (__n != 0) {
      memmove(__dest,*(void **)(lVar6 + 0x38),__n);
    }
    if (*(void **)(lVar6 + 0x38) != (void *)0x0) {
      operator_delete__(*(void **)(lVar6 + 0x38));
    }
    __n = *(size_t *)(lVar6 + 0x48);
    *(void **)(lVar6 + 0x38) = __dest;
    *(ulong *)(lVar6 + 0x40) = uVar1;
  }
  else {
    __dest = *(void **)(lVar6 + 0x38);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  *(long *)(lVar6 + 0x48) = *(long *)(lVar6 + 0x48) + 1;
  local_38 = *(undefined8 *)(lVar5 + 0x2bc8);
  internal::DetachableVector<v8::internal::Context>::push_back
            ((DetachableVector<v8::internal::Context> *)(lVar6 + 0x50),(Context *)&local_38);
  uVar4 = *(undefined8 *)this;
  *(undefined4 *)(lVar5 + 0x2c60) = uVar3;
  *(undefined8 *)(lVar5 + 0x2bc8) = uVar4;
  return;
}

