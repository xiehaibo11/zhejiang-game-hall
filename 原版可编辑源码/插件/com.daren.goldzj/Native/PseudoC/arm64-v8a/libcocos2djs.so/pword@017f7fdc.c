
/* std::__ndk1::ios_base::pword(int) */

undefined8 * __thiscall std::__ndk1::ios_base::pword(ios_base *this,int param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar6;
  undefined8 *puVar5;
  
  uVar1 = (long)param_1 + 1;
  if (*(ulong *)(this + 0x80) < uVar1) {
    if (uVar1 < 0xfffffffffffffff) {
      uVar6 = uVar1;
      if (uVar1 <= (ulong)(*(long *)(this + 0x68) << 1)) {
        uVar6 = *(long *)(this + 0x68) << 1;
      }
    }
    else {
      uVar6 = 0x1fffffffffffffff;
    }
    pvVar2 = realloc(*(void **)(this + 0x70),uVar6 << 3);
    if (pvVar2 == (void *)0x0) {
      clear(this,*(uint *)(this + 0x20) | 1);
      DAT_01d524e0 = 0;
      return &DAT_01d524e0;
    }
    uVar3 = *(ulong *)(this + 0x78);
    *(void **)(this + 0x70) = pvVar2;
    if ((long)uVar3 < (long)uVar6) {
      puVar4 = (undefined8 *)((long)pvVar2 + uVar3 * 8);
      do {
        puVar5 = puVar4 + 1;
        *puVar4 = 0;
        pvVar2 = *(void **)(this + 0x70);
        puVar4 = puVar5;
      } while (puVar5 < (undefined8 *)((long)pvVar2 + uVar6 * 8));
    }
    *(ulong *)(this + 0x80) = uVar6;
  }
  else {
    uVar3 = *(ulong *)(this + 0x78);
    pvVar2 = *(void **)(this + 0x70);
  }
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  *(ulong *)(this + 0x78) = uVar1;
  return (undefined8 *)((long)pvVar2 + (long)param_1 * 8);
}

