
/* v8::internal::PagedSpace::InitializePage(v8::internal::MemoryChunk*) */

MemoryChunk * __thiscall
v8::internal::PagedSpace::InitializePage(PagedSpace *this,MemoryChunk *param_1)

{
  bool bVar1;
  MemoryChunk *pMVar2;
  void *__s;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  pMVar2 = param_1 + 0x58;
  uVar6 = *(ulong *)(param_1 + 8) | 0x40006;
  if (*(int *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x58) < 2) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffbfff9 | 4;
  }
  *(ulong *)(param_1 + 8) = uVar6;
  uVar4 = (ulong)*(int *)(*(long *)(*(long *)pMVar2 + 0x60) + 8);
  uVar6 = uVar4 << 3;
  if (uVar4 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar6);
  memset(__s,0,uVar6);
  *(void **)(param_1 + 0xf0) = __s;
  if (-1 < *(int *)(*(long *)(*(long *)pMVar2 + 0x60) + 0xc)) {
    lVar5 = 0;
    do {
      puVar3 = operator_new(0x20);
      *puVar3 = 0xffffffff;
      *(undefined8 *)(puVar3 + 1) = 0;
      *(undefined8 *)(puVar3 + 5) = 0;
      *(undefined8 *)(puVar3 + 3) = 0;
      puVar3[7] = 0;
      *(undefined4 **)(*(long *)(param_1 + 0xf0) + lVar5 * 8) = puVar3;
      bVar1 = lVar5 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 0xc);
      lVar5 = lVar5 + 1;
    } while (bVar1);
  }
  if (-1 < *(int *)(*(long *)(*(long *)pMVar2 + 0x60) + 0xc)) {
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)(*(long *)(param_1 + 0xf0) + lVar5 * 8);
      *puVar3 = (int)lVar5;
      puVar3[1] = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      bVar1 = lVar5 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 0xc);
      lVar5 = lVar5 + 1;
    } while (bVar1);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  DataMemoryBarrier(2,3);
  return param_1;
}

