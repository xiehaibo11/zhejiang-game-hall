
/* v8::internal::SemiSpace::InitializePage(v8::internal::MemoryChunk*) */

MemoryChunk * __thiscall
v8::internal::SemiSpace::InitializePage(SemiSpace *this,MemoryChunk *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__s;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar1 = 8;
  if (*(int *)(this + 0x8c) != 0) {
    uVar1 = 0x10;
  }
  uVar3 = uVar1 | uVar4;
  *(ulong *)(param_1 + 8) = uVar3;
  uVar3 = uVar3 | 0x40006;
  if (*(int *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x58) < 2) {
    uVar3 = uVar1 | uVar4 & 0xfffffffffffbfff9 | 2;
  }
  *(ulong *)(param_1 + 8) = uVar3;
  puVar2 = operator_new(0x30);
  *puVar2 = param_1;
  puVar2[2] = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 5) = 0x3f800000;
  *(undefined8 **)(param_1 + 0xf8) = puVar2;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (FLAG_minor_mc != '\0') {
    __s = calloc(1,0x2000);
    *(void **)(param_1 + 0x108) = __s;
    memset(__s,0,0x2000);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  DataMemoryBarrier(2,3);
  return param_1;
}

