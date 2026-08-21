
/* flatbuffers::vector_downward::make_space(unsigned long) */

void __thiscall flatbuffers::vector_downward::make_space(vector_downward *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  void *__dest;
  
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 - param_1 < *(ulong *)(this + 8)) {
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 >> 1 & 0x7ffffffffffffff8;
    if (uVar4 <= param_1) {
      uVar4 = param_1;
    }
    *(ulong *)this = uVar4 + uVar3;
    uVar4 = (ulong)(uint)(((int)uVar3 - (int)lVar2) + (int)*(ulong *)(this + 8));
    lVar1 = (**(code **)(**(long **)(this + 0x18) + 0x10))();
    __dest = (void *)((lVar1 + *(long *)this) - uVar4);
    memcpy(__dest,*(void **)(this + 0x10),uVar4);
    *(void **)(this + 0x10) = __dest;
    (**(code **)(**(long **)(this + 0x18) + 0x18))
              (*(long **)(this + 0x18),*(undefined8 *)(this + 8));
    lVar2 = *(long *)(this + 0x10);
    *(long *)(this + 8) = lVar1;
  }
  *(ulong *)(this + 0x10) = lVar2 - param_1;
  return;
}

