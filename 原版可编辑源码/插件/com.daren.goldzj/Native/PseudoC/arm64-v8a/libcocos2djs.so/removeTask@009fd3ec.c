
/* universe::Example::removeTask(unsigned int) */

void __thiscall universe::Example::removeTask(Example *this,uint param_1)

{
  uint uVar1;
  size_t __n;
  uint *puVar2;
  uint *__dest;
  
                    /* catch() { ... } // from try @ 009fd380 with catch @ 009fd3ec */
                    /* catch() { ... } // from try @ 009fd374 with catch @ 009fd3f0 */
                    /* catch() { ... } // from try @ 009fd388 with catch @ 009fd3f8 */
  __dest = *(uint **)(this + 0x10);
  puVar2 = *(uint **)(this + 0x18);
  if (__dest != puVar2) {
    uVar1 = *__dest;
                    /* try { // try from 009fd414 to 00afd467 has its CatchHandler @ 009fd414
                       catch() { ... } // from try @ 009fd414 with catch @ 009fd414
                       catch() { ... } // from try @ 009fd498 with catch @ 009fd414 */
    while (uVar1 != param_1) {
      __dest = __dest + 1;
      if (puVar2 == __dest) goto LAB_009fd45c;
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
LAB_009fd45c:
  if (this[0x28] != (Example)0x0) {
                    /* try { // try from 009fd468 to 00afd473 has its CatchHandler @ 009fd4d4 */
    if (*(uint **)(this + 0x10) == puVar2) {
                    /* try { // try from 009fd498 to 00afd4f7 has its CatchHandler @ 009fd414 */
                    /* WARNING: Could not recover jumptable at 0x009fd4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))(this);
      return;
    }
                    /* try { // try from 009fd474 to 00afd47b has its CatchHandler @ 009fd4d0 */
    this[0x28] = (Example)0x1;
  }
                    /* try { // try from 009fd47c to 00afd497 has its CatchHandler @ 009fd4dc */
  return;
}

