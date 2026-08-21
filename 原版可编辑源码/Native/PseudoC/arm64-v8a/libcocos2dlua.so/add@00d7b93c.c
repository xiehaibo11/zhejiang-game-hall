
/* dragonBones::WorldClock::add(dragonBones::IAnimatable*) */

void __thiscall dragonBones::WorldClock::add(WorldClock *this,IAnimatable *param_1)

{
  undefined8 *puVar1;
  undefined8 *__src;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t __n;
  ulong uVar6;
  
                    /* catch() { ... } // from try @ 00d7a74c with catch @ 00d7b93c */
                    /* catch() { ... } // from try @ 00d7a6b0 with catch @ 00d7b94c */
                    /* catch() { ... } // from try @ 00d7a5ec with catch @ 00d7b950 */
  __src = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
                    /* catch() { ... } // from try @ 00d7a550 with catch @ 00d7b960 */
  puVar5 = __src;
                    /* catch() { ... } // from try @ 00d7a48c with catch @ 00d7b964 */
  if ((__src != puVar2) && ((IAnimatable *)*__src != param_1)) {
                    /* catch() { ... } // from try @ 00d7a3f0 with catch @ 00d7b974 */
                    /* catch() { ... } // from try @ 00d7a32c with catch @ 00d7b978 */
    do {
      if (puVar2 + -1 == puVar5) goto LAB_00d7b9c4;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
    } while ((IAnimatable *)*puVar1 != param_1);
  }
  if (puVar5 != puVar2) {
                    /* catch() { ... } // from try @ 00d7a290 with catch @ 00d7b9b4 */
    return;
  }
LAB_00d7b9c4:
                    /* catch() { ... } // from try @ 00d7a78c with catch @ 00d7b9c8
                       catch() { ... } // from try @ 00d7a800 with catch @ 00d7b9c8 */
                    /* catch() { ... } // from try @ 00d7a62c with catch @ 00d7b9cc
                       catch() { ... } // from try @ 00d7a6a0 with catch @ 00d7b9cc */
  if (*(undefined8 **)(this + 0x28) != puVar2) {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x20) = puVar2 + 1;
    goto LAB_00d7ba64;
  }
                    /* catch() { ... } // from try @ 00d7a4cc with catch @ 00d7b9dc
                       catch() { ... } // from try @ 00d7a540 with catch @ 00d7b9dc */
  __n = (long)puVar2 - (long)__src;
  uVar6 = ((long)__n >> 3) + 1;
                    /* catch() { ... } // from try @ 00d7a36c with catch @ 00d7b9ec
                       catch() { ... } // from try @ 00d7a3e0 with catch @ 00d7b9ec */
  if (uVar6 >> 0x3d != 0) {
LAB_00d7ba18:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = (long)*(undefined8 **)(this + 0x28) - (long)__src;
                    /* catch() { ... } // from try @ 00d7a20c with catch @ 00d7b9fc
                       catch() { ... } // from try @ 00d7a280 with catch @ 00d7b9fc */
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
                    /* catch() { ... } // from try @ 00d7a8a0 with catch @ 00d7ba0c */
    if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 00d7a880 with catch @ 00d7ba10 */
      if (uVar6 >> 0x3d != 0) goto LAB_00d7ba18;
      goto LAB_00d7ba20;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar6 = 0x1fffffffffffffff;
LAB_00d7ba20:
    __dest = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar5 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x18) = __dest;
  *(undefined8 **)(this + 0x20) = puVar5 + 1;
  *(void **)(this + 0x28) = (void *)((long)__dest + uVar6 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
  }
LAB_00d7ba64:
                    /* WARNING: Could not recover jumptable at 0x00d7ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))(param_1,this);
  return;
}

