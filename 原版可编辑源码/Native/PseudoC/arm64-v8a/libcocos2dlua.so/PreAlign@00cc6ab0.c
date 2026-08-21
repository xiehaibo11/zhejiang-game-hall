
/* flatbuffers::FlatBufferBuilder::PreAlign(unsigned long, unsigned long) */

void __thiscall
flatbuffers::FlatBufferBuilder::PreAlign(FlatBufferBuilder *this,ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong __n;
  void *__dest;
  
  lVar2 = *(long *)(this + 0x18);
  uVar3 = *(ulong *)(this + 8);
  iVar4 = (int)*(ulong *)(this + 0x10);
  __n = param_2 - 1 & -((uint)(((int)uVar3 - (int)lVar2) + iVar4) + param_1);
  if (lVar2 - __n < *(ulong *)(this + 0x10)) {
    uVar5 = uVar3 >> 1 & 0x7ffffffffffffff8;
    if (uVar5 <= __n) {
      uVar5 = __n;
    }
    *(ulong *)(this + 8) = uVar5 + uVar3;
    uVar3 = (ulong)(uint)((iVar4 - (int)lVar2) + (int)uVar3);
    lVar1 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
    __dest = (void *)((lVar1 + *(long *)(this + 8)) - uVar3);
    memcpy(__dest,*(void **)(this + 0x18),uVar3);
    *(void **)(this + 0x18) = __dest;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    lVar2 = *(long *)(this + 0x18);
    *(long *)(this + 0x10) = lVar1;
  }
  *(void **)(this + 0x18) = (void *)(lVar2 - __n);
  if (__n != 0) {
    memset((void *)(lVar2 - __n),0,__n);
    return;
  }
  return;
}

