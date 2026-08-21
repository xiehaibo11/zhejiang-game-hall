
/* universe::Example::removeTask(unsigned int) */

void __thiscall universe::Example::removeTask(Example *this,uint param_1)

{
  uint uVar1;
  size_t __n;
  uint *puVar2;
  uint *__dest;
  
  __dest = *(uint **)(this + 0x10);
  puVar2 = *(uint **)(this + 0x18);
  if (__dest != puVar2) {
    uVar1 = *__dest;
    while (uVar1 != param_1) {
      __dest = __dest + 1;
      if (puVar2 == __dest) goto LAB_009dff48;
      uVar1 = *__dest;
    }
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    puVar2 = __dest + ((long)__n >> 2);
    *(uint **)(this + 0x18) = puVar2;
  }
LAB_009dff48:
  if (this[0x28] != (Example)0x0) {
    if (*(uint **)(this + 0x10) == puVar2) {
                    /* WARNING: Could not recover jumptable at 0x009dff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))(this);
      return;
    }
    this[0x28] = (Example)0x1;
  }
  return;
}

