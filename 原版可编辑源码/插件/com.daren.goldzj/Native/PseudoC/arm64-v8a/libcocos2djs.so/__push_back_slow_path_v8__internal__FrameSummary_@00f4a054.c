
/* void std::__ndk1::vector<v8::internal::FrameSummary,
   std::__ndk1::allocator<v8::internal::FrameSummary>
   >::__push_back_slow_path<v8::internal::FrameSummary>(v8::internal::FrameSummary&&) */

void __thiscall
std::__ndk1::vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>::
__push_back_slow_path<v8::internal::FrameSummary>
          (vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>
           *this,FrameSummary *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  pvVar11 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  lVar6 = (long)pvVar10 - (long)pvVar11 >> 3;
  uVar3 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (uVar3 < 0x492492492492493) {
    lVar8 = *(long *)(this + 0x10) - (long)pvVar11 >> 3;
    uVar9 = lVar8 * -0x2492492492492492;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
      uVar3 = 0x492492492492492;
    }
    if (uVar3 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar3) goto LAB_00f4a1c4;
      pvVar5 = operator_new(uVar3 * 0x38);
    }
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined8 *)param_1;
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    puVar7 = (undefined8 *)((long)pvVar5 + lVar6 * 8);
    puVar7[6] = *(undefined8 *)(param_1 + 0x30);
    puVar4 = puVar7 + 7;
    puVar7[3] = uVar15;
    puVar7[2] = uVar14;
    puVar7[5] = uVar17;
    puVar7[4] = uVar16;
    puVar7[1] = uVar13;
    *puVar7 = uVar12;
    if (pvVar10 != pvVar11) {
      do {
        uVar13 = *(undefined8 *)((long)pvVar10 + -0x30);
        uVar12 = *(undefined8 *)((long)pvVar10 + -0x38);
        uVar15 = *(undefined8 *)((long)pvVar10 + -0x20);
        uVar14 = *(undefined8 *)((long)pvVar10 + -0x28);
        puVar1 = (undefined8 *)((long)pvVar10 + -8);
        uVar17 = *(undefined8 *)((long)pvVar10 + -0x10);
        uVar16 = *(undefined8 *)((long)pvVar10 + -0x18);
        pvVar10 = (void *)((long)pvVar10 + -0x38);
        puVar7[-1] = *puVar1;
        puVar7[-2] = uVar17;
        puVar7[-3] = uVar16;
        puVar7[-4] = uVar15;
        puVar7[-5] = uVar14;
        puVar7[-6] = uVar13;
        puVar7[-7] = uVar12;
        puVar7 = puVar7 + -7;
      } while (pvVar11 != pvVar10);
      pvVar10 = *(void **)this;
      pvVar11 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar3 * 0x38);
    lVar6 = (long)pvVar10 - (long)pvVar11;
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar4;
    do {
      if (lVar6 == 0) {
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
          return;
        }
        return;
      }
      puVar2 = (uint *)((long)pvVar11 + -0x30);
      pvVar11 = (void *)((long)pvVar11 + -0x38);
      lVar6 = lVar6 + 0x38;
    } while (*puVar2 < 3);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
LAB_00f4a1c4:
                    /* WARNING: Subroutine does not return */
  abort();
}

