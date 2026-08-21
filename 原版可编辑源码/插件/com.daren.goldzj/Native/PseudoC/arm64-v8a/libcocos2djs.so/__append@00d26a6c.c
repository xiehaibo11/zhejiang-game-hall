
/* std::__ndk1::vector<float, std::__ndk1::allocator<float> >::__append(unsigned long, float const&)
    */

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
          (vector<float,std::__ndk1::allocator<float>> *this,ulong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__src;
  size_t __n;
  ulong uVar8;
  long lVar9;
  
  pfVar1 = *(float **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pfVar1 >> 2)) {
    pfVar5 = pfVar1;
    uVar8 = param_1;
    if ((7 < param_1) &&
       (((float *)((long)param_2 + 1U) <= pfVar1 || (pfVar1 + param_1 <= param_2)))) {
      fVar2 = *param_2;
      uVar6 = param_1 & 0xfffffffffffffff8;
      uVar8 = param_1 - uVar6;
      pfVar5 = pfVar1 + 4;
      uVar4 = uVar6;
      do {
        *(ulong *)(pfVar5 + -2) = CONCAT44(fVar2,fVar2);
        *(ulong *)(pfVar5 + -4) = CONCAT44(fVar2,fVar2);
        *(ulong *)(pfVar5 + 2) = CONCAT44(fVar2,fVar2);
        *(ulong *)pfVar5 = CONCAT44(fVar2,fVar2);
        uVar4 = uVar4 - 8;
        pfVar5 = pfVar5 + 8;
      } while (uVar4 != 0);
      pfVar5 = pfVar1 + uVar6;
      if (uVar6 == param_1) goto LAB_00d26b54;
    }
    do {
      uVar8 = uVar8 - 1;
      *pfVar5 = *param_2;
      pfVar5 = pfVar5 + 1;
    } while (uVar8 != 0);
LAB_00d26b54:
    *(float **)(this + 8) = pfVar1 + param_1;
    return;
  }
  __src = *(void **)this;
  __n = (long)pfVar1 - (long)__src;
  lVar9 = (long)__n >> 2;
  uVar8 = lVar9 + param_1;
  if (uVar8 >> 0x3e != 0) {
LAB_00d26ae0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar3 >> 2) < 0x1fffffffffffffff) {
    uVar4 = lVar3 >> 1;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 != 0) {
      if (uVar8 >> 0x3e != 0) goto LAB_00d26ae0;
      goto LAB_00d26b64;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar8 = 0x3fffffffffffffff;
LAB_00d26b64:
    __dest = operator_new(uVar8 << 2);
  }
  pfVar1 = (float *)((long)__dest + lVar9 * 4);
  pfVar5 = pfVar1;
  uVar4 = param_1;
  if ((7 < param_1) &&
     (((float *)((long)param_2 + 1U) <= pfVar1 ||
      ((float *)((long)__dest + (lVar9 + param_1) * 4) <= param_2)))) {
    fVar2 = *param_2;
    uVar6 = param_1 & 0xfffffffffffffff8;
    puVar7 = (undefined8 *)((long)__dest + lVar9 * 4 + 0x10);
    uVar4 = uVar6;
    do {
      puVar7[-1] = CONCAT44(fVar2,fVar2);
      puVar7[-2] = CONCAT44(fVar2,fVar2);
      puVar7[1] = CONCAT44(fVar2,fVar2);
      *puVar7 = CONCAT44(fVar2,fVar2);
      uVar4 = uVar4 - 8;
      puVar7 = puVar7 + 4;
    } while (uVar4 != 0);
    pfVar5 = pfVar1 + uVar6;
    uVar4 = param_1 - uVar6;
    if (uVar6 == param_1) goto LAB_00d26bf0;
  }
  do {
    uVar4 = uVar4 - 1;
    *pfVar5 = *param_2;
    pfVar5 = pfVar5 + 1;
  } while (uVar4 != 0);
LAB_00d26bf0:
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(float **)(this + 8) = pfVar1 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 4);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

