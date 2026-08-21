
/* universe::network::IncludeSymbols::obtain() */

undefined8 * __thiscall universe::network::IncludeSymbols::obtain(IncludeSymbols *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *__s;
  size_t __n;
  long lVar4;
  undefined8 *puVar5;
  
                    /* try { // try from 00a09ac4 to 00b09ad7 has its CatchHandler @ 00a09b6c */
  lVar4 = *(long *)(this + 0x28);
  if (lVar4 == 0) {
    puVar5 = operator_new(0x1030);
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
                    /* catch() { ... } // from try @ 00a09ac4 with catch @ 00a09b6c */
    __s = (undefined8 *)((long)puVar5 + 0x2c);
    __n = 0x1004;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
  }
  else {
                    /* try { // try from 00a09ad8 to 00b09bbf has its CatchHandler @ 00a09a78 */
    uVar1 = *(long *)(this + 0x20) + lVar4 + -1;
    lVar3 = *(long *)(this + 0x10) - *(long *)(this + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 * 0x40 + -1;
    }
    puVar5 = *(undefined8 **)
              (*(long *)(*(long *)(this + 8) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
              (uVar1 & 0x1ff) * 8);
    *(long *)(this + 0x28) = lVar4 + -1;
    if (0x3ff < (lVar2 - (lVar4 + *(long *)(this + 0x20))) + 1U) {
      operator_delete(*(void **)(*(long *)(this + 0x10) + -8));
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -8;
    }
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    *(undefined4 *)((long)puVar5 + 0x2c) = 0;
    __s = puVar5 + 6;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    __n = 0x1000;
  }
  memset(__s,0,__n);
  return puVar5;
}

