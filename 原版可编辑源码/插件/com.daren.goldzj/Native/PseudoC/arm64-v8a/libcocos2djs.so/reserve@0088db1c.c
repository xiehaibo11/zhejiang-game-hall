
/* std::__ndk1::vector<std::__ndk1::function<void ()>,
   std::__ndk1::allocator<std::__ndk1::function<void ()> > >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::reserve
          (vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  plVar10 = *(long **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)plVar10 >> 4) * -0x5555555555555555) < param_1) {
    if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    lVar11 = *(long *)(this + 8);
    pvVar5 = operator_new(param_1 * 0x30);
    lVar7 = lVar11 - (long)plVar10;
    lVar1 = (long)pvVar5 + lVar7;
    pvVar2 = (void *)((long)pvVar5 + param_1 * 0x30);
    if (lVar7 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
      lVar7 = lVar7 >> 4;
      lVar13 = 0;
      do {
        lVar3 = lVar11 + lVar13;
        lVar9 = *(long *)(lVar3 + -0x10);
        lVar4 = lVar13 + lVar7 * 0x10;
        if (lVar9 == 0) {
          *(undefined8 *)((long)pvVar5 + lVar4 + -0x10) = 0;
        }
        else if (lVar3 + -0x30 == lVar9) {
          lVar9 = lVar13 + lVar7 * 0x10;
          *(long *)((long)pvVar5 + lVar9 + -0x10) = (long)pvVar5 + lVar4 + -0x30;
          (**(code **)(**(long **)(lVar3 + -0x10) + 0x18))
                    (*(long **)(lVar3 + -0x10),(long)pvVar5 + lVar9 + -0x30);
        }
        else {
          *(long *)((long)pvVar5 + lVar13 + lVar7 * 0x10 + -0x10) = lVar9;
          *(undefined8 *)(lVar3 + -0x10) = 0;
        }
        lVar13 = lVar13 + -0x30;
      } while ((long)plVar10 - lVar11 != lVar13);
      plVar10 = *(long **)this;
      plVar12 = *(long **)(this + 8);
      *(long *)this = (long)pvVar5 + lVar13 + lVar7 * 0x10;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
joined_r0x0088dc38:
      if (plVar12 != plVar10) {
        plVar6 = (long *)plVar12[-2];
        plVar12 = plVar12 + -6;
        if (plVar12 != plVar6) goto code_r0x0088dc4c;
        pcVar8 = *(code **)(*plVar6 + 0x20);
        goto LAB_0088dc64;
      }
    }
    if (plVar10 != (long *)0x0) {
      operator_delete(plVar10);
      return;
    }
  }
  return;
code_r0x0088dc4c:
  if (plVar6 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar6 + 0x28);
LAB_0088dc64:
    (*pcVar8)();
  }
  goto joined_r0x0088dc38;
}

