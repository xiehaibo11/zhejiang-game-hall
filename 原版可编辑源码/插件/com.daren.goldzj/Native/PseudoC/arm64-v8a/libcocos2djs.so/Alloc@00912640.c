
/* tinyxml2::MemPoolT<88>::Alloc() */

long * __thiscall tinyxml2::MemPoolT<88>::Alloc(MemPoolT<88> *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *__s;
  void *__dest;
  MemPoolT<88> *__src;
  int iVar4;
  
  __s = *(long **)(this + 0x68);
  if (__s == (long *)0x0) {
    __s = operator_new(0x3c8);
    memset(__s,0,0x3c8);
    iVar4 = *(int *)(this + 100);
    if (iVar4 < *(int *)(this + 0x60)) {
      __dest = *(void **)(this + 8);
    }
    else {
      uVar1 = iVar4 * 2 + 2;
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar3);
      __src = *(MemPoolT<88> **)(this + 8);
      memcpy(__dest,__src,(long)iVar4 << 3);
      if ((__src != (MemPoolT<88> *)0x0) && (this + 0x10 != __src)) {
        operator_delete__(__src);
        iVar4 = *(int *)(this + 100);
      }
      *(void **)(this + 8) = __dest;
      *(uint *)(this + 0x60) = uVar1;
    }
    *(int *)(this + 100) = iVar4 + 1;
    *(long **)((long)__dest + (long)iVar4 * 8) = __s;
    *__s = (long)(__s + 0xb);
    __s[0xb] = (long)(__s + 0x16);
    __s[0x16] = (long)(__s + 0x21);
    __s[0x21] = (long)(__s + 0x2c);
    __s[0x2c] = (long)(__s + 0x37);
    __s[0x37] = (long)(__s + 0x42);
    __s[0x42] = (long)(__s + 0x4d);
    __s[0x4d] = (long)(__s + 0x58);
    __s[0x58] = (long)(__s + 99);
    __s[99] = (long)(__s + 0x6e);
    __s[0x6e] = 0;
    *(long **)(this + 0x68) = __s;
  }
  iVar2 = *(int *)(this + 0x70);
  *(long *)(this + 0x68) = *__s;
  iVar4 = iVar2 + 1;
  *(int *)(this + 0x70) = iVar4;
  if (*(int *)(this + 0x78) <= iVar2) {
    *(int *)(this + 0x78) = iVar4;
  }
  *(int *)(this + 0x74) = *(int *)(this + 0x74) + 1;
  *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
  return __s;
}

