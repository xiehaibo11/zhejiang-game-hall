
/* unsigned int flatbuffers::FlatBufferBuilder::PushElement<unsigned short>(unsigned short) */

uint __thiscall
flatbuffers::FlatBufferBuilder::PushElement<unsigned_short>(FlatBufferBuilder *this,ushort param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  void *__dest;
  
  Align(this,2);
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 - 2U < *(ulong *)(this + 0x10)) {
    uVar3 = *(ulong *)(this + 8);
    uVar4 = 2;
    if ((uVar3 >> 1 & 0x7ffffffffffffff8) != 0) {
      uVar4 = uVar3 >> 1 & 0x7ffffffffffffff8;
    }
    *(ulong *)(this + 8) = uVar4 + uVar3;
    uVar4 = (ulong)(uint)(((int)*(ulong *)(this + 0x10) - (int)lVar2) + (int)uVar3);
    lVar1 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
    __dest = (void *)((lVar1 + *(long *)(this + 8)) - uVar4);
    memcpy(__dest,*(void **)(this + 0x18),uVar4);
    *(void **)(this + 0x18) = __dest;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    lVar2 = *(long *)(this + 0x18);
    *(long *)(this + 0x10) = lVar1;
  }
  *(long *)(this + 0x18) = lVar2 + -2;
  *(ushort *)(lVar2 + -2) = param_1;
  return (*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10);
}

