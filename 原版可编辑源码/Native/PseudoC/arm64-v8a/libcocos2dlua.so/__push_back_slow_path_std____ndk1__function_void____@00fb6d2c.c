
/* void std::__ndk1::vector<std::__ndk1::function<void ()>,
   std::__ndk1::allocator<std::__ndk1::function<void ()> >
   >::__push_back_slow_path<std::__ndk1::function<void ()> >(std::__ndk1::function<void ()>&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
__push_back_slow_path<std::__ndk1::function<void()>>
          (vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *this,function *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  
  plVar10 = *(long **)this;
  plVar9 = *(long **)(this + 8);
  lVar4 = (long)plVar9 - (long)plVar10 >> 4;
  uVar12 = 0x555555555555555;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - (long)plVar10 >> 4;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar7 = lVar8 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 != 0) goto LAB_00fb6db0;
    pvVar2 = (void *)0x0;
  }
  else {
LAB_00fb6db0:
    pvVar2 = operator_new(uVar12 * 0x30);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  pvVar11 = (void *)((long)pvVar2 + lVar4 * 0x10);
  pvVar5 = pvVar11;
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)((long)pvVar2 + lVar4 * 0x10 + 0x20) = 0;
joined_r0x00fb6e70:
    if (plVar9 == plVar10) goto LAB_00fb6e78;
  }
  else {
    if ((long *)param_1 != plVar3) {
      *(long **)((long)pvVar2 + lVar4 * 0x10 + 0x20) = plVar3;
      *(undefined8 *)(param_1 + 0x20) = 0;
      goto joined_r0x00fb6e70;
    }
    *(void **)((long)pvVar2 + lVar4 * 0x10 + 0x20) = pvVar11;
    (**(code **)(*plVar3 + 0x18))(plVar3,pvVar11);
    plVar10 = *(long **)this;
    plVar9 = *(long **)(this + 8);
    if (plVar9 == plVar10) goto LAB_00fb6e78;
  }
  lVar4 = 0;
  do {
    lVar8 = *(long *)((long)plVar9 + lVar4 + -0x10);
    if (lVar8 == 0) {
      *(undefined8 *)((long)pvVar11 + lVar4 + -0x10) = 0;
    }
    else if ((long)plVar9 + lVar4 + -0x30 == lVar8) {
      *(long *)((long)pvVar11 + lVar4 + -0x10) = (long)pvVar11 + lVar4 + -0x30;
      plVar3 = *(long **)((long)plVar9 + lVar4 + -0x10);
      (**(code **)(*plVar3 + 0x18))(plVar3,(long)pvVar11 + lVar4 + -0x30);
    }
    else {
      *(long *)((long)pvVar11 + lVar4 + -0x10) = lVar8;
      *(undefined8 *)((long)plVar9 + lVar4 + -0x10) = 0;
    }
    lVar4 = lVar4 + -0x30;
  } while ((long)plVar10 - (long)plVar9 != lVar4);
  plVar9 = *(long **)this;
  pvVar5 = (void *)((long)pvVar11 + lVar4);
LAB_00fb6e78:
  plVar10 = *(long **)(this + 8);
  *(void **)this = pvVar5;
  *(long *)(this + 8) = (long)pvVar11 + 0x30;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar12 * 0x30);
joined_r0x00fb6e90:
  if (plVar10 == plVar9) {
    if (plVar9 != (long *)0x0) {
      operator_delete(plVar9);
      return;
    }
    return;
  }
  plVar3 = (long *)plVar10[-2];
  plVar10 = plVar10 + -6;
  if (plVar10 != plVar3) goto code_r0x00fb6edc;
  pcVar6 = *(code **)(*plVar3 + 0x20);
  goto LAB_00fb6ec0;
code_r0x00fb6edc:
  if (plVar3 != (long *)0x0) {
    pcVar6 = *(code **)(*plVar3 + 0x28);
LAB_00fb6ec0:
    (*pcVar6)();
  }
  goto joined_r0x00fb6e90;
}

