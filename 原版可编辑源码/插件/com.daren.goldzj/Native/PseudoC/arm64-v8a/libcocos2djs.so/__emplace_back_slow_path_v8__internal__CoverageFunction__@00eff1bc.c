
/* void std::__ndk1::vector<v8::internal::CoverageFunction,
   std::__ndk1::allocator<v8::internal::CoverageFunction>
   >::__emplace_back_slow_path<v8::internal::CoverageFunction&>(v8::internal::CoverageFunction&) */

void __thiscall
std::__ndk1::
vector<v8::internal::CoverageFunction,std::__ndk1::allocator<v8::internal::CoverageFunction>>::
__emplace_back_slow_path<v8::internal::CoverageFunction&>
          (vector<v8::internal::CoverageFunction,std::__ndk1::allocator<v8::internal::CoverageFunction>>
           *this,CoverageFunction *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  void *pvVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pvVar11 = *(void **)this;
  pvVar8 = *(void **)(this + 8);
  lVar4 = (long)pvVar8 - (long)pvVar11 >> 3;
  uVar1 = lVar4 * 0x6db6db6db6db6db7 + 1;
  if (uVar1 < 0x492492492492493) {
    lVar5 = *(long *)(this + 0x10) - (long)pvVar11 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar1 = 0x492492492492492;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar1) goto LAB_00eff458;
      pvVar3 = operator_new(uVar1 * 0x38);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    pvVar9 = *(void **)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)param_1;
    puVar10 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[2] = uVar7;
    puVar10[1] = uVar14;
    *puVar10 = uVar13;
    puVar10[3] = 0;
    uVar6 = *(long *)(param_1 + 0x20) - (long)pvVar9;
    if (uVar6 != 0) {
      if (0x1555555555555555 < (ulong)(((long)uVar6 >> 2) * -0x5555555555555555)) goto LAB_00eff458;
      __dest = operator_new(uVar6);
      plVar12 = (long *)((long)pvVar3 + lVar4 * 8 + 0x20);
      *plVar12 = (long)__dest;
      puVar10[3] = __dest;
      *(void **)((long)pvVar3 + lVar4 * 8 + 0x28) = (void *)((long)__dest + ((long)uVar6 >> 2) * 4);
      if (0 < (long)uVar6) {
        memcpy(__dest,pvVar9,uVar6);
        *plVar12 = *plVar12 + (uVar6 / 0xc) * 0xc;
        pvVar11 = *(void **)this;
        pvVar8 = *(void **)(this + 8);
      }
    }
    *(CoverageFunction *)((long)pvVar3 + lVar4 * 8 + 0x30) = param_1[0x30];
    puVar2 = puVar10 + 7;
    pvVar9 = pvVar8;
    if (pvVar8 != pvVar11) {
      lVar4 = 0;
      do {
        uVar14 = *(undefined8 *)((long)pvVar8 + lVar4 + -0x30);
        uVar13 = *(undefined8 *)((long)pvVar8 + lVar4 + -0x38);
        uVar7 = *(undefined8 *)((long)pvVar8 + lVar4 + -0x28);
        *(undefined8 *)((long)puVar10 + lVar4 + -0x18) = 0;
        *(undefined8 *)((long)puVar10 + lVar4 + -0x10) = 0;
        *(undefined8 *)((long)puVar10 + lVar4 + -0x30) = uVar14;
        *(undefined8 *)((long)puVar10 + lVar4 + -0x38) = uVar13;
        *(undefined8 *)((long)puVar10 + lVar4 + -0x28) = uVar7;
        *(undefined8 *)((long)puVar10 + lVar4 + -0x20) = 0;
        lVar5 = lVar4 + -0x38;
        *(undefined8 *)((long)puVar10 + lVar4 + -0x20) =
             *(undefined8 *)((long)pvVar8 + lVar4 + -0x20);
        *(undefined8 *)((long)puVar10 + lVar4 + -0x18) =
             *(undefined8 *)((long)pvVar8 + lVar4 + -0x18);
        *(undefined8 *)((long)puVar10 + lVar4 + -0x10) =
             *(undefined8 *)((long)pvVar8 + lVar4 + -0x10);
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x20) = 0;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x18) = 0;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x10) = 0;
        *(undefined1 *)((long)puVar10 + lVar4 + -8) = *(undefined1 *)((long)pvVar8 + lVar4 + -8);
        lVar4 = lVar5;
      } while ((long)pvVar11 - (long)pvVar8 != lVar5);
      pvVar8 = *(void **)this;
      puVar10 = (undefined8 *)((long)puVar10 + lVar5);
      pvVar9 = *(void **)(this + 8);
    }
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x38);
    while (pvVar11 = pvVar9, pvVar11 != pvVar8) {
      pvVar3 = *(void **)((long)pvVar11 + -0x20);
      pvVar9 = (void *)((long)pvVar11 + -0x38);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar11 + -0x18) = pvVar3;
        operator_delete(pvVar3);
      }
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
      return;
    }
    return;
  }
LAB_00eff458:
                    /* WARNING: Subroutine does not return */
  abort();
}

