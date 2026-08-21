
/* void std::__ndk1::vector<std::__ndk1::__state<char>,
   std::__ndk1::allocator<std::__ndk1::__state<char> >
   >::__push_back_slow_path<std::__ndk1::__state<char> >(std::__ndk1::__state<char>&&) */

void __thiscall
std::__ndk1::vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
__push_back_slow_path<std::__ndk1::__state<char>>
          (vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
           *this,__state *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar11 = 0x2aaaaaaaaaaaaaa;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 5;
  if ((ulong)(lVar7 * -0x5555555555555555) < 0x155555555555555) {
    uVar8 = lVar7 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00864ddc;
    }
  }
  pvVar3 = operator_new(uVar11 * 0x60);
LAB_00864ddc:
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)param_1;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  puVar6 = (undefined8 *)((long)pvVar3 + lVar5 * 0x20);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[1] = uVar13;
  *puVar6 = uVar9;
  puVar6[3] = uVar15;
  puVar6[2] = uVar14;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[4] = uVar9;
  puVar6[6] = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  puVar6[8] = *(undefined8 *)(param_1 + 0x40);
  puVar6[7] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  puVar6[9] = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((long)puVar6 + 0x55) = *(undefined8 *)(param_1 + 0x55);
  puVar6[10] = uVar9;
  pvVar10 = *(void **)this;
  pvVar4 = *(void **)(this + 8);
  puVar2 = puVar6 + 0xc;
  pvVar12 = pvVar10;
  if (pvVar4 != pvVar10) {
    lVar5 = 0;
    do {
      uVar13 = *(undefined8 *)((long)pvVar4 + lVar5 + -0x58);
      uVar9 = *(undefined8 *)((long)pvVar4 + lVar5 + -0x60);
      uVar15 = *(undefined8 *)((long)pvVar4 + lVar5 + -0x48);
      uVar14 = *(undefined8 *)((long)pvVar4 + lVar5 + -0x50);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x38) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x30) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x40) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x58) = uVar13;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x60) = uVar9;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x48) = uVar15;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x50) = uVar14;
      uVar9 = *(undefined8 *)((long)pvVar4 + lVar5 + -0x40);
      lVar7 = lVar5 + -0x60;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x38) = *(undefined8 *)((long)pvVar4 + lVar5 + -0x38);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x40) = uVar9;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x30) = *(undefined8 *)((long)pvVar4 + lVar5 + -0x30);
      *(undefined8 *)((long)pvVar4 + lVar5 + -0x38) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + -0x30) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + -0x40) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x20) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x18) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x28) = 0;
      uVar9 = *(undefined8 *)((long)pvVar4 + lVar5 + -0x28);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x20) = *(undefined8 *)((long)pvVar4 + lVar5 + -0x20);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x28) = uVar9;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x18) = *(undefined8 *)((long)pvVar4 + lVar5 + -0x18);
      *(undefined8 *)((long)pvVar4 + lVar5 + -0x20) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + -0x18) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + -0x28) = 0;
      uVar9 = *(undefined8 *)((long)pvVar4 + lVar5 + -0x10);
      *(undefined8 *)((long)puVar6 + lVar5 + -0xb) = *(undefined8 *)((long)pvVar4 + lVar5 + -0xb);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x10) = uVar9;
      lVar5 = lVar7;
    } while ((long)pvVar10 - (long)pvVar4 != lVar7);
    pvVar10 = *(void **)this;
    puVar6 = (undefined8 *)((long)puVar6 + lVar7);
    pvVar12 = *(void **)(this + 8);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x60);
  while (pvVar3 = pvVar12, pvVar3 != pvVar10) {
    pvVar4 = *(void **)((long)pvVar3 + -0x28);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)pvVar3 + -0x20) = pvVar4;
      operator_delete(pvVar4);
    }
    pvVar4 = *(void **)((long)pvVar3 + -0x40);
    pvVar12 = (void *)((long)pvVar3 + -0x60);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)pvVar3 + -0x38) = pvVar4;
      operator_delete(pvVar4);
    }
  }
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
    return;
  }
  return;
}

