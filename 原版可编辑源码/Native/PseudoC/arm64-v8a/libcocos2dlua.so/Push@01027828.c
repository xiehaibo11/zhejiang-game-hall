
/* tinyxml2::DynArray<tinyxml2::MemPoolT<104>::Block*, 10>::Push(tinyxml2::MemPoolT<104>::Block*) */

void __thiscall
tinyxml2::DynArray<tinyxml2::MemPoolT<104>::Block*,10>::Push
          (DynArray<tinyxml2::MemPoolT<104>::Block*,10> *this,Block *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  void *__dest;
  DynArray<tinyxml2::MemPoolT<104>::Block*,10> *__src;
  
  iVar2 = *(int *)(this + 0x5c);
  if (iVar2 < *(int *)(this + 0x58)) {
    __dest = *(void **)this;
  }
  else {
    uVar1 = iVar2 * 2 + 2;
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar3);
    __src = *(DynArray<tinyxml2::MemPoolT<104>::Block*,10> **)this;
    memcpy(__dest,__src,(long)iVar2 << 3);
    if ((__src != this + 8) && (__src != (DynArray<tinyxml2::MemPoolT<104>::Block*,10> *)0x0)) {
      operator_delete__(__src);
    }
    iVar2 = *(int *)(this + 0x5c);
    *(void **)this = __dest;
    *(uint *)(this + 0x58) = uVar1;
  }
  *(int *)(this + 0x5c) = iVar2 + 1;
  *(Block **)((long)__dest + (long)iVar2 * 8) = param_1;
  return;
}

