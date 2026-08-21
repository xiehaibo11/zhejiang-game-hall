
/* std::__ndk1::vector<dragonBones::AnimationState*,
   std::__ndk1::allocator<dragonBones::AnimationState*>
   >::insert(std::__ndk1::__wrap_iter<dragonBones::AnimationState* const*>,
   dragonBones::AnimationState* const&) */

undefined8 * __thiscall
std::__ndk1::
vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>::insert
          (vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  size_t __n;
  undefined8 *puVar10;
  
                    /* try { // try from 00d7219c to 00e721a7 has its CatchHandler @ 00d7304c */
  puVar10 = *(undefined8 **)(this + 8);
                    /* try { // try from 00d721bc to 00e721d7 has its CatchHandler @ 00d731e8 */
  if (puVar10 < *(undefined8 **)(this + 0x10)) {
    if (param_2 != puVar10) {
      sVar3 = (long)puVar10 + (-8 - (long)param_2);
      puVar8 = puVar10;
                    /* try { // try from 00d721dc to 00e721eb has its CatchHandler @ 00d731e4 */
      for (puVar5 = puVar10 + -1; puVar5 < puVar10; puVar5 = puVar5 + 1) {
        *puVar8 = *puVar5;
        puVar8 = puVar8 + 1;
      }
      *(undefined8 **)(this + 8) = puVar8;
      if (sVar3 != 0) {
        memmove(puVar10 + -((long)sVar3 >> 3),param_2,sVar3);
      }
      puVar10 = param_3;
      if ((param_2 <= param_3) && (puVar10 = param_3 + 1, *(undefined8 **)(this + 8) <= param_3)) {
        puVar10 = param_3;
      }
      *param_2 = *puVar10;
      return param_2;
    }
    *param_2 = *param_3;
    *(undefined8 **)(this + 8) = param_2 + 1;
    return param_2;
  }
  pvVar9 = *(void **)this;
  uVar4 = ((long)puVar10 - (long)pvVar9 >> 3) + 1;
  if (uVar4 >> 0x3d != 0) goto LAB_00d723a4;
  lVar6 = (long)*(undefined8 **)(this + 0x10) - (long)pvVar9;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 != 0) {
      if (uVar4 >> 0x3d != 0) goto LAB_00d723a4;
      goto LAB_00d7227c;
    }
    pvVar1 = (void *)0x0;
  }
  else {
    uVar4 = 0x1fffffffffffffff;
LAB_00d7227c:
    pvVar1 = operator_new(uVar4 << 3);
  }
  lVar6 = (long)param_2 - (long)pvVar9;
  uVar7 = lVar6 >> 3;
  puVar10 = (undefined8 *)((long)pvVar1 + uVar7 * 8);
  pvVar2 = (void *)((long)pvVar1 + uVar4 * 8);
  if (uVar7 == uVar4) {
    if (lVar6 < 1) {
      uVar4 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar4 = 1;
      }
      if (uVar4 >> 0x3d != 0) {
LAB_00d723a4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar2 = operator_new(uVar4 * 8);
      puVar10 = (undefined8 *)((long)pvVar2 + (uVar4 & 0x7ffffffffffffffc) * 2);
      pvVar2 = (void *)((long)pvVar2 + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar9 = *(void **)this;
      }
    }
    else {
                    /* try { // try from 00d722a8 to 00e7233b has its CatchHandler @ 00d73190 */
      uVar4 = uVar7 + 2;
      if (-1 < (long)(uVar7 + 1)) {
        uVar4 = uVar7 + 1;
      }
      puVar10 = (undefined8 *)((long)puVar10 + (uVar4 & 0x3ffffffffffffffe) * -4);
    }
  }
  sVar3 = (long)param_2 - (long)pvVar9;
  puVar8 = puVar10 + 1;
  *puVar10 = *param_3;
                    /* try { // try from 00d7233c to 00e7235f has its CatchHandler @ 00d71544 */
  if (0 < (long)sVar3) {
    memcpy((void *)((long)puVar10 - sVar3),pvVar9,sVar3);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
                    /* try { // try from 00d72360 to 00e7236b has its CatchHandler @ 00d7313c */
    memcpy(puVar8,param_2,__n);
    puVar8 = (undefined8 *)((long)puVar8 + __n);
  }
  pvVar9 = *(void **)this;
  *(void **)this = (void *)((long)puVar10 - sVar3);
  *(undefined8 **)(this + 8) = puVar8;
  *(void **)(this + 0x10) = pvVar2;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  return puVar10;
}

