
/* dragonBones::WeightData::addBone(dragonBones::BoneData*) */

void __thiscall dragonBones::WeightData::addBone(WeightData *this,BoneData *param_1)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 != *(undefined8 **)(this + 0x28)) {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x20) = puVar1 + 1;
    return;
  }
  __src = *(void **)(this + 0x18);
  __n = (long)puVar1 - (long)__src;
  uVar4 = ((long)__n >> 3) + 1;
  if (uVar4 >> 0x3d != 0) {
LAB_00da5534:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (long)*(undefined8 **)(this + 0x28) - (long)__src;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      goto LAB_00da5548;
    }
    if (uVar4 >> 0x3d != 0) goto LAB_00da5534;
  }
  else {
    uVar4 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar4 << 3);
LAB_00da5548:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = param_1;
                    /* try { // try from 00da5558 to 00ea5563 has its CatchHandler @ 00da56c0 */
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x18) = __dest;
  *(undefined8 **)(this + 0x20) = puVar1 + 1;
  *(void **)(this + 0x28) = (void *)((long)__dest + uVar4 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

