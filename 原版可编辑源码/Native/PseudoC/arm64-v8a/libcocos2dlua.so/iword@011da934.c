
/* std::__ndk1::ios_base::iword(int) */

undefined8 * __thiscall std::__ndk1::ios_base::iword(ios_base *this,int param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *__s;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = (long)param_1 + 1;
  if (*(ulong *)(this + 0x68) < uVar1) {
    if (uVar1 < 0xfffffffffffffff) {
      uVar6 = *(ulong *)(this + 0x68) << 1;
      uVar7 = uVar1;
      if (uVar1 <= uVar6) {
        uVar7 = uVar6;
      }
    }
    else {
      uVar7 = 0x1fffffffffffffff;
    }
    pvVar5 = realloc(*(void **)(this + 0x58),uVar7 << 3);
    if (pvVar5 == (void *)0x0) {
      uVar4 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar4 | 1;
      if ((*(uint *)(this + 0x24) & (uVar4 | 1)) == 0) {
        DAT_017939e8 = 0;
        return &DAT_017939e8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
    uVar6 = *(ulong *)(this + 0x60);
    *(void **)(this + 0x58) = pvVar5;
    if ((long)uVar6 < (long)uVar7) {
      __s = (void *)((long)pvVar5 + uVar6 * 8);
      pvVar3 = (void *)((long)pvVar5 + uVar7 * 8);
      pvVar2 = (void *)((long)__s + 8);
      if (pvVar2 <= pvVar3) {
        pvVar2 = pvVar3;
      }
      memset(__s,0,(long)pvVar2 + ~(ulong)pvVar5 + uVar6 * -8 + 8 & 0xfffffffffffffff8);
    }
    *(ulong *)(this + 0x68) = uVar7;
  }
  else {
    pvVar5 = *(void **)(this + 0x58);
    uVar6 = *(ulong *)(this + 0x60);
  }
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return (undefined8 *)((long)pvVar5 + (long)param_1 * 8);
}

