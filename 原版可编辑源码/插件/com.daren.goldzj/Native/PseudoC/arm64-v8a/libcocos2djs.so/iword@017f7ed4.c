
/* std::__ndk1::ios_base::iword(int) */

undefined8 * __thiscall std::__ndk1::ios_base::iword(ios_base *this,int param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *__s;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = (long)param_1 + 1;
  if (*(ulong *)(this + 0x68) < uVar1) {
    if (uVar1 < 0xfffffffffffffff) {
      uVar5 = *(ulong *)(this + 0x68) << 1;
      uVar6 = uVar1;
      if (uVar1 <= uVar5) {
        uVar6 = uVar5;
      }
    }
    else {
      uVar6 = 0x1fffffffffffffff;
    }
    pvVar4 = realloc(*(void **)(this + 0x58),uVar6 << 3);
    if (pvVar4 == (void *)0x0) {
      clear(this,*(uint *)(this + 0x20) | 1);
      DAT_01d524d8 = 0;
      return &DAT_01d524d8;
    }
    uVar5 = *(ulong *)(this + 0x60);
    *(void **)(this + 0x58) = pvVar4;
    if ((long)uVar5 < (long)uVar6) {
      __s = (void *)((long)pvVar4 + uVar5 * 8);
      pvVar3 = (void *)((long)pvVar4 + uVar6 * 8);
      pvVar2 = (void *)((long)__s + 8);
      if (pvVar2 <= pvVar3) {
        pvVar2 = pvVar3;
      }
      memset(__s,0,(long)pvVar2 + ~(ulong)pvVar4 + uVar5 * -8 + 8 & 0xfffffffffffffff8);
    }
    *(ulong *)(this + 0x68) = uVar6;
  }
  else {
    uVar5 = *(ulong *)(this + 0x60);
    pvVar4 = *(void **)(this + 0x58);
  }
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return (undefined8 *)((long)pvVar4 + (long)param_1 * 8);
}

