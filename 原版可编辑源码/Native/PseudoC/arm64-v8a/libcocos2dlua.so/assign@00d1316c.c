
/* std::__ndk1::vector<float, std::__ndk1::allocator<float> >::assign(unsigned long, float const&)
    */

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign
          (vector<float,std::__ndk1::allocator<float>> *this,ulong param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(this + 0x10);
  pfVar3 = *(float **)this;
  if ((ulong)(lVar5 - (long)pfVar3 >> 2) < param_1) {
    if (pfVar3 != (float *)0x0) {
      *(float **)(this + 8) = pfVar3;
      operator_delete(pfVar3);
      lVar5 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (param_1 >> 0x3e != 0) {
LAB_00d131e4:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar5 >> 2) < 0x1fffffffffffffff) {
      uVar7 = lVar5 >> 1;
      uVar6 = param_1;
      if ((param_1 <= uVar7) && (uVar6 = uVar7, uVar7 >> 0x3e != 0)) goto LAB_00d131e4;
    }
    else {
      uVar6 = 0x3fffffffffffffff;
    }
    pfVar4 = operator_new(uVar6 * 4);
    lVar5 = param_1 * 4;
    *(float **)(this + 0x10) = pfVar4 + uVar6;
    pfVar3 = pfVar4 + param_1;
    *(float **)this = pfVar4;
    *(float **)(this + 8) = pfVar4;
    do {
      lVar5 = lVar5 + -4;
      *pfVar4 = *param_2;
      pfVar4 = pfVar4 + 1;
    } while (lVar5 != 0);
    goto LAB_00d132fc;
  }
  pfVar4 = *(float **)(this + 8);
  uVar7 = (long)pfVar4 - (long)pfVar3 >> 2;
  uVar6 = uVar7;
  if (param_1 <= uVar7) {
    uVar6 = param_1;
  }
  if (uVar6 != 0) {
    pfVar8 = pfVar3;
    if ((7 < uVar6) && (((float *)((long)param_2 + 1U) <= pfVar3 || (pfVar3 + uVar6 <= param_2)))) {
      fVar1 = *param_2;
      uVar9 = uVar6 & 0xfffffffffffffff8;
      pfVar8 = pfVar3 + 4;
      uVar10 = uVar9;
      do {
        *(ulong *)(pfVar8 + -2) = CONCAT44(fVar1,fVar1);
        *(ulong *)(pfVar8 + -4) = CONCAT44(fVar1,fVar1);
        *(ulong *)(pfVar8 + 2) = CONCAT44(fVar1,fVar1);
        *(ulong *)pfVar8 = CONCAT44(fVar1,fVar1);
        uVar10 = uVar10 - 8;
        pfVar8 = pfVar8 + 8;
      } while (uVar10 != 0);
      bVar2 = uVar6 == uVar9;
      uVar6 = uVar6 - uVar9;
      pfVar8 = pfVar3 + uVar9;
      if (bVar2) goto LAB_00d132b8;
    }
    do {
      uVar6 = uVar6 - 1;
      *pfVar8 = *param_2;
      pfVar8 = pfVar8 + 1;
    } while (uVar6 != 0);
  }
LAB_00d132b8:
  if (uVar7 < param_1) {
    pfVar3 = pfVar4;
    if (param_1 - uVar7 != 0) {
      pfVar3 = pfVar4 + (param_1 - uVar7);
      lVar5 = param_1 * 4 + uVar7 * -4;
      do {
        lVar5 = lVar5 + -4;
        *pfVar4 = *param_2;
        pfVar4 = pfVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  else {
    pfVar3 = pfVar3 + param_1;
  }
LAB_00d132fc:
  *(float **)(this + 8) = pfVar3;
  return;
}

