
/* cocos2d::PUSimpleSpline::addPoint(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUSimpleSpline::addPoint(PUSimpleSpline *this,Vec3 *param_1)

{
  ulong uVar1;
  PUSimpleSpline PVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *__src;
  size_t __n;
  ulong uVar8;
  
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar7 != *(undefined8 **)(this + 0x18)) {
    uVar6 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_1 + 8);
    *puVar7 = uVar6;
    *(long *)(this + 0x10) = (long)puVar7 + 0xc;
    PVar2 = *this;
    goto joined_r0x00e47e64;
  }
  __src = *(void **)(this + 8);
  __n = (long)puVar7 - (long)__src;
  uVar8 = 0x1555555555555555;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(undefined8 **)(this + 0x18) - (long)__src >> 2;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar8 = uVar1;
    if (uVar1 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) goto LAB_00e47ecc;
    pvVar3 = (void *)0x0;
  }
  else {
LAB_00e47ecc:
    pvVar3 = operator_new(uVar8 * 0xc);
  }
  uVar6 = *(undefined8 *)param_1;
  puVar7 = (undefined8 *)((long)pvVar3 + ((long)__n >> 2) * 4);
  *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar7 = uVar6;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar7 - __n),__src,__n);
  }
  *(void **)(this + 8) = (void *)((long)puVar7 - __n);
  *(long *)(this + 0x10) = (long)puVar7 + 0xc;
  *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar8 * 0xc);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  PVar2 = *this;
joined_r0x00e47e64:
  if (PVar2 == (PUSimpleSpline)0x0) {
    return;
  }
  recalcTangents(this);
  return;
}

