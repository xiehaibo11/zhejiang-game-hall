
/* std::__ndk1::ios_base::pword(int) */

undefined8 * __thiscall std::__ndk1::ios_base::pword(ios_base *this,int param_1)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar7;
  undefined8 *puVar6;
  
  uVar1 = (long)param_1 + 1;
  if (*(ulong *)(this + 0x80) < uVar1) {
    if (uVar1 < 0xfffffffffffffff) {
      uVar7 = uVar1;
      if (uVar1 <= (ulong)(*(long *)(this + 0x68) << 1)) {
        uVar7 = *(long *)(this + 0x68) << 1;
      }
    }
    else {
      uVar7 = 0x1fffffffffffffff;
    }
    pvVar3 = realloc(*(void **)(this + 0x70),uVar7 << 3);
    if (pvVar3 == (void *)0x0) {
      uVar2 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar2 | 1;
      if ((*(uint *)(this + 0x24) & (uVar2 | 1)) == 0) {
        DAT_017939f0 = 0;
        return &DAT_017939f0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
    uVar4 = *(ulong *)(this + 0x78);
    *(void **)(this + 0x70) = pvVar3;
    if ((long)uVar4 < (long)uVar7) {
      puVar5 = (undefined8 *)((long)pvVar3 + uVar4 * 8);
      do {
        puVar6 = puVar5 + 1;
        *puVar5 = 0;
        pvVar3 = *(void **)(this + 0x70);
        puVar5 = puVar6;
      } while (puVar6 < (undefined8 *)((long)pvVar3 + uVar7 * 8));
    }
    *(ulong *)(this + 0x80) = uVar7;
  }
  else {
    pvVar3 = *(void **)(this + 0x70);
    uVar4 = *(ulong *)(this + 0x78);
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  *(ulong *)(this + 0x78) = uVar1;
  return (undefined8 *)((long)pvVar3 + (long)param_1 * 8);
}

