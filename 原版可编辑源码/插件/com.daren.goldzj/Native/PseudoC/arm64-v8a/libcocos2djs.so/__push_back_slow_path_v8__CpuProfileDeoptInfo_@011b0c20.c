
/* void std::__ndk1::vector<v8::CpuProfileDeoptInfo, std::__ndk1::allocator<v8::CpuProfileDeoptInfo>
   >::__push_back_slow_path<v8::CpuProfileDeoptInfo>(v8::CpuProfileDeoptInfo&&) */

void __thiscall
std::__ndk1::vector<v8::CpuProfileDeoptInfo,std::__ndk1::allocator<v8::CpuProfileDeoptInfo>>::
__push_back_slow_path<v8::CpuProfileDeoptInfo>
          (vector<v8::CpuProfileDeoptInfo,std::__ndk1::allocator<v8::CpuProfileDeoptInfo>> *this,
          CpuProfileDeoptInfo *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  
  lVar11 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3b == 0) {
    lVar5 = *(long *)(this + 0x10) - *(long *)this;
    uVar8 = lVar5 >> 4;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x3fffffffffffffe < (ulong)(lVar5 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_011b0d80;
      pvVar3 = operator_new(uVar1 << 5);
    }
    uVar7 = *(undefined8 *)param_1;
    puVar6 = (undefined8 *)((long)pvVar3 + lVar11 * 0x20);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar2 = puVar6 + 4;
    *puVar6 = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 8);
    puVar6[2] = *(undefined8 *)(param_1 + 0x10);
    puVar6[1] = uVar7;
    puVar6[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    pvVar9 = *(void **)this;
    pvVar4 = *(void **)(this + 8);
    pvVar10 = pvVar9;
    if (pvVar4 != pvVar9) {
      lVar11 = 0;
      do {
        uVar7 = *(undefined8 *)((long)pvVar4 + lVar11 + -0x20);
        *(undefined8 *)((long)puVar6 + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)puVar6 + lVar11 + -8) = 0;
        lVar5 = lVar11 + -0x20;
        *(undefined8 *)((long)puVar6 + lVar11 + -0x20) = uVar7;
        *(undefined8 *)((long)puVar6 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)puVar6 + lVar11 + -0x18) =
             *(undefined8 *)((long)pvVar4 + lVar11 + -0x18);
        *(undefined8 *)((long)puVar6 + lVar11 + -0x10) =
             *(undefined8 *)((long)pvVar4 + lVar11 + -0x10);
        *(undefined8 *)((long)puVar6 + lVar11 + -8) = *(undefined8 *)((long)pvVar4 + lVar11 + -8);
        *(undefined8 *)((long)pvVar4 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)pvVar4 + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)pvVar4 + lVar11 + -8) = 0;
        lVar11 = lVar5;
      } while ((long)pvVar9 - (long)pvVar4 != lVar5);
      pvVar9 = *(void **)(this + 8);
      puVar6 = (undefined8 *)((long)puVar6 + lVar5);
      pvVar10 = *(void **)this;
    }
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x20);
    while (pvVar3 = pvVar9, pvVar3 != pvVar10) {
      pvVar4 = *(void **)((long)pvVar3 + -0x18);
      pvVar9 = (void *)((long)pvVar3 + -0x20);
      if (pvVar4 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x10) = pvVar4;
        operator_delete(pvVar4);
      }
    }
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
      return;
    }
    return;
  }
LAB_011b0d80:
                    /* WARNING: Subroutine does not return */
  abort();
}

