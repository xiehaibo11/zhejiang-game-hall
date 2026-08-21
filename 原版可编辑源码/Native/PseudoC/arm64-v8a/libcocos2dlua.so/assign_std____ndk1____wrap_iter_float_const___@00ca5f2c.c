
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<float const*>
   >::value&&is_constructible<float, std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<float
   const*> >::reference>::value, void>::type std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >::assign<std::__ndk1::__wrap_iter<float const*>
   >(std::__ndk1::__wrap_iter<float const*>, std::__ndk1::__wrap_iter<float const*>) */

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
assign<std::__ndk1::__wrap_iter<float_const*>>
          (vector<float,std::__ndk1::allocator<float>> *this,undefined4 *param_2,undefined4 *param_3
          )

{
  size_t __n;
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = *(long *)(this + 0x10);
  __dest = *(void **)this;
  uVar9 = (long)param_3 - (long)param_2;
  uVar10 = (long)uVar9 >> 2;
  if ((ulong)(lVar3 - (long)__dest >> 2) < uVar10) {
    if (__dest != (void *)0x0) {
      *(void **)(this + 8) = __dest;
      operator_delete(__dest);
      lVar3 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar10 >> 0x3e != 0) {
LAB_00ca5fb4:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar3 >> 2) < 0x1fffffffffffffff) {
      uVar4 = lVar3 >> 1;
      if ((uVar10 <= uVar4) && (uVar10 = uVar4, uVar4 >> 0x3e != 0)) goto LAB_00ca5fb4;
    }
    else {
      uVar10 = 0x3fffffffffffffff;
    }
    puVar2 = operator_new(uVar10 * 4);
    *(undefined4 **)this = puVar2;
    *(undefined4 **)(this + 8) = puVar2;
    *(undefined4 **)(this + 0x10) = puVar2 + uVar10;
    if (param_2 != param_3) {
      uVar10 = (uVar9 - 4 >> 2) + 1;
      if ((7 < uVar10) &&
         (((undefined4 *)((long)param_2 + (uVar9 - 4 & 0xfffffffffffffffc) + 4) <= puVar2 ||
          ((undefined4 *)((long)puVar2 + (uVar9 & 0xfffffffffffffffc)) <= param_2)))) {
        uVar4 = uVar10 & 0x7ffffffffffffff8;
        puVar8 = (undefined8 *)(param_2 + 4);
        puVar7 = puVar2 + uVar4;
        param_2 = param_2 + uVar4;
        puVar6 = (undefined8 *)(puVar2 + 4);
        uVar9 = uVar4;
        do {
          puVar1 = puVar8 + -1;
          uVar12 = puVar8[-2];
          uVar14 = puVar8[1];
          uVar13 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar9 = uVar9 - 8;
          puVar6[-1] = *puVar1;
          puVar6[-2] = uVar12;
          puVar6[1] = uVar14;
          *puVar6 = uVar13;
          puVar6 = puVar6 + 4;
        } while (uVar9 != 0);
        puVar2 = puVar7;
        if (uVar10 == uVar4) goto LAB_00ca6114;
      }
      do {
        puVar5 = param_2 + 1;
        puVar7 = puVar2 + 1;
        *puVar2 = *param_2;
        puVar2 = puVar7;
        param_2 = puVar5;
      } while (param_3 != puVar5);
    }
  }
  else {
    uVar9 = *(long *)(this + 8) - (long)__dest >> 2;
    puVar2 = (undefined4 *)((long)param_2 + (*(long *)(this + 8) - (long)__dest));
    if (uVar10 <= uVar9) {
      puVar2 = param_3;
    }
    __n = (long)puVar2 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar9 < uVar10) {
      puVar5 = *(undefined4 **)(this + 8);
      puVar7 = puVar5;
      if (puVar2 != param_3) {
        uVar9 = (long)param_3 + (-4 - (long)puVar2);
        uVar10 = (uVar9 >> 2) + 1;
        if ((7 < uVar10) &&
           ((lVar3 = (uVar9 & 0xfffffffffffffffc) + 4,
            (undefined4 *)((long)puVar2 + lVar3) <= puVar5 ||
            ((undefined4 *)((long)puVar5 + lVar3) <= puVar2)))) {
          uVar4 = uVar10 & 0x7ffffffffffffff8;
          puVar8 = (undefined8 *)(puVar2 + 4);
          puVar7 = puVar5 + uVar4;
          puVar2 = puVar2 + uVar4;
          puVar6 = (undefined8 *)(puVar5 + 4);
          uVar9 = uVar4;
          do {
            puVar1 = puVar8 + -1;
            uVar12 = puVar8[-2];
            uVar14 = puVar8[1];
            uVar13 = *puVar8;
            puVar8 = puVar8 + 4;
            uVar9 = uVar9 - 8;
            puVar6[-1] = *puVar1;
            puVar6[-2] = uVar12;
            puVar6[1] = uVar14;
            *puVar6 = uVar13;
            puVar6 = puVar6 + 4;
          } while (uVar9 != 0);
          puVar5 = puVar7;
          if (uVar10 == uVar4) goto LAB_00ca616c;
        }
        do {
          puVar11 = puVar2 + 1;
          puVar7 = puVar5 + 1;
          *puVar5 = *puVar2;
          puVar5 = puVar7;
          puVar2 = puVar11;
        } while (param_3 != puVar11);
      }
LAB_00ca616c:
      *(undefined4 **)(this + 8) = puVar7;
      return;
    }
    puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
  }
LAB_00ca6114:
  *(undefined4 **)(this + 8) = puVar2;
  return;
}

