
/* duDisplayList::resize(int) */

void __thiscall duDisplayList::resize(duDisplayList *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = param_1 * 3;
  uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  if ((ulong)(long)(int)uVar1 >> 0x3e != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar3);
  if (*(int *)(this + 0x18) != 0) {
    memcpy(pvVar2,*(void **)(this + 8),(long)*(int *)(this + 0x18) * 0xc);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  uVar3 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
  if ((ulong)(long)param_1 >> 0x3e != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  *(void **)(this + 8) = pvVar2;
  pvVar2 = operator_new__(uVar3);
  if (*(int *)(this + 0x18) != 0) {
    memcpy(pvVar2,*(void **)(this + 0x10),(long)*(int *)(this + 0x18) << 2);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(void **)(this + 0x10) = pvVar2;
  *(int *)(this + 0x1c) = param_1;
  return;
}

