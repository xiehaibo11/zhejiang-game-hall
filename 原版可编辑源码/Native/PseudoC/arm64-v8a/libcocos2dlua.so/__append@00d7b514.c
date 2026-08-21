
/* std::__ndk1::vector<float, std::__ndk1::allocator<float> >::__append(unsigned long, float const&)
    */

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
          (vector<float,std::__ndk1::allocator<float>> *this,ulong param_1,float *param_2)

{
  float fVar1;
  void *__dest;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__src;
  size_t __n;
  ulong uVar10;
  long lVar11;
  
                    /* catch() { ... } // from try @ 00d7b060 with catch @ 00d7b514 */
  pfVar2 = *(float **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pfVar2 >> 2)) {
    pfVar3 = pfVar2;
    if (param_1 != 0) {
      pfVar3 = pfVar2 + param_1;
      lVar11 = param_1 << 2;
      do {
        lVar11 = lVar11 + -4;
        *pfVar2 = *param_2;
        pfVar2 = pfVar2 + 1;
      } while (lVar11 != 0);
    }
    *(float **)(this + 8) = pfVar3;
    return;
  }
  __src = *(void **)this;
  __n = (long)pfVar2 - (long)__src;
  lVar11 = (long)__n >> 2;
  uVar10 = lVar11 + param_1;
  if (uVar10 >> 0x3e != 0) {
LAB_00d7b588:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar5 >> 2) < 0x1fffffffffffffff) {
    uVar6 = lVar5 >> 1;
                    /* catch() { ... } // from try @ 00d7aefc with catch @ 00d7b574 */
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3e != 0) goto LAB_00d7b588;
      goto LAB_00d7b5c4;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar10 = 0x3fffffffffffffff;
LAB_00d7b5c4:
    __dest = operator_new(uVar10 << 2);
  }
                    /* catch() { ... } // from try @ 00d7ad98 with catch @ 00d7b5d4 */
  uVar7 = param_1 * 4 - 4;
  pfVar2 = (float *)((long)__dest + lVar11 * 4);
  uVar6 = (uVar7 >> 2) + 1;
  pfVar3 = pfVar2;
  if ((7 < uVar6) &&
     (((float *)((long)param_2 + 1U) <= pfVar2 ||
      ((float *)((long)__dest + (lVar11 + (uVar7 >> 2)) * 4 + 4) <= param_2)))) {
    fVar1 = *param_2;
    uVar8 = uVar6 & 0x7ffffffffffffff8;
    puVar9 = (undefined8 *)((long)__dest + lVar11 * 4 + 0x10);
    uVar7 = uVar8;
    do {
      puVar9[-1] = CONCAT44(fVar1,fVar1);
      puVar9[-2] = CONCAT44(fVar1,fVar1);
      puVar9[1] = CONCAT44(fVar1,fVar1);
      *puVar9 = CONCAT44(fVar1,fVar1);
      uVar7 = uVar7 - 8;
      puVar9 = puVar9 + 4;
                    /* catch() { ... } // from try @ 00d7ac34 with catch @ 00d7b634 */
    } while (uVar7 != 0);
    pfVar3 = pfVar2 + uVar8;
    if (uVar6 == uVar8) goto LAB_00d7b650;
  }
  do {
    pfVar4 = pfVar3 + 1;
    *pfVar3 = *param_2;
    pfVar3 = pfVar4;
  } while (pfVar2 + param_1 != pfVar4);
LAB_00d7b650:
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(float **)(this + 8) = pfVar2 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar10 * 4);
  if (__src == (void *)0x0) {
                    /* catch() { ... } // from try @ 00d7aad0 with catch @ 00d7b694 */
    return;
  }
  operator_delete(__src);
  return;
}

