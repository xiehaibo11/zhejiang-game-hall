
void FUN_00fdad80(ObjectVisitor *param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  MemoryChunk *this;
  ulong local_48;
  
  this = *(MemoryChunk **)(param_2 + 0x20);
  if (this != (MemoryChunk *)0x0) {
    uVar6 = *(ulong *)(this + 8);
    uVar5 = (uint)uVar6;
    while( true ) {
      if ((uVar5 >> 6 & 1) == 0) {
        uVar4 = *(ulong *)(param_2 + 0x68);
        if ((*(ulong *)(this + 0x20) <= uVar4) && (uVar4 < *(ulong *)(this + 0x28))) {
          if ((*(char *)(*(long *)(this + 0x18) + 0x168) == '\0') || ((uVar6 & 1) == 0)) {
            v8::internal::Heap::CreateFillerObjectAt
                      (*(Heap **)(param_1 + 0x10),uVar4,*(int *)(param_2 + 0x70) - (int)uVar4,1,1);
          }
          else {
            v8::internal::MemoryChunk::SetReadAndWritable(this);
            v8::internal::Heap::CreateFillerObjectAt
                      (*(Heap **)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x68),
                       *(int *)(param_2 + 0x70) - (int)*(undefined8 *)(param_2 + 0x68),1,1);
            if (v8::internal::FLAG_jitless == '\0') {
              v8::internal::MemoryChunk::SetReadAndExecutable(this);
            }
            else {
              v8::internal::MemoryChunk::SetReadable(this);
            }
          }
        }
        puVar2 = *(uint **)(this + 0x28);
        for (puVar1 = *(uint **)(this + 0x20); puVar1 < puVar2;
            puVar1 = (uint *)((long)puVar1 + (long)iVar3)) {
          local_48 = (long)puVar1 + 1;
          uVar6 = local_48 & 0xffffffff00000000;
          if ((*(ushort *)((uVar6 | 7) + (ulong)*puVar1) | 1) != 0xa1) {
            v8::internal::HeapObject::Iterate((HeapObject *)&local_48,param_1);
            uVar6 = local_48 & 0xffffffff00000000;
          }
          iVar3 = v8::internal::HeapObject::SizeFromMap
                            ((HeapObject *)&local_48,uVar6 | *(uint *)(local_48 - 1));
        }
      }
      this = *(MemoryChunk **)(this + 0xe0);
      if (this == (MemoryChunk *)0x0) break;
      uVar6 = *(ulong *)(this + 8);
      uVar5 = (uint)uVar6;
    }
  }
  return;
}

