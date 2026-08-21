
/* v8::internal::Heap::AddToRingBuffer(char const*) */

void __thiscall v8::internal::Heap::AddToRingBuffer(Heap *this,char *param_1)

{
  ulong __n;
  size_t sVar1;
  ulong uVar2;
  
  __n = strlen(param_1);
  uVar2 = 0x200 - *(long *)(this + 0xac8);
  if (uVar2 <= __n) {
    __n = uVar2;
  }
  memcpy(this + *(long *)(this + 0xac8) + 0x8c0,param_1,__n);
  *(ulong *)(this + 0xac8) = __n + *(long *)(this + 0xac8);
  sVar1 = strlen(param_1);
  if (__n < sVar1) {
    this[0xac1] = (Heap)0x1;
    sVar1 = strlen(param_1);
    memcpy(this + 0x8c0,param_1 + __n,sVar1 - __n);
    *(size_t *)(this + 0xac8) = sVar1 - __n;
  }
  return;
}

