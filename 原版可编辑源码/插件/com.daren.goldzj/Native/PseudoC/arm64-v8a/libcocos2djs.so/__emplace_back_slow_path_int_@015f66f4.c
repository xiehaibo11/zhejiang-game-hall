
/* void std::__ndk1::vector<v8::internal::wasm::LocalNamesPerFunction,
   std::__ndk1::allocator<v8::internal::wasm::LocalNamesPerFunction>
   >::__emplace_back_slow_path<int>(int&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::LocalNamesPerFunction,std::__ndk1::allocator<v8::internal::wasm::LocalNamesPerFunction>>
::__emplace_back_slow_path<int>
          (vector<v8::internal::wasm::LocalNamesPerFunction,std::__ndk1::allocator<v8::internal::wasm::LocalNamesPerFunction>>
           *this,int *param_1)

{
  ulong uVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  
  pvVar10 = *(void **)this;
  pvVar9 = *(void **)(this + 8);
  lVar11 = (long)pvVar9 - (long)pvVar10 >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar6 = *(long *)(this + 0x10) - (long)pvVar10 >> 4;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x3fffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)pvVar10 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_015f6844;
      pvVar3 = operator_new(uVar1 << 5);
    }
    piVar5 = (int *)((long)pvVar3 + lVar11 * 0x20);
    *piVar5 = *param_1;
    piVar5[1] = -1;
    piVar2 = piVar5 + 8;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    if (pvVar9 != pvVar10) {
      lVar11 = 0;
      do {
        uVar8 = *(undefined8 *)((long)pvVar9 + lVar11 + -0x20);
        *(undefined8 *)((long)piVar5 + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)piVar5 + lVar11 + -8) = 0;
        lVar7 = lVar11 + -0x20;
        *(undefined8 *)((long)piVar5 + lVar11 + -0x20) = uVar8;
        *(undefined8 *)((long)piVar5 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)piVar5 + lVar11 + -0x18) =
             *(undefined8 *)((long)pvVar9 + lVar11 + -0x18);
        *(undefined8 *)((long)piVar5 + lVar11 + -0x10) =
             *(undefined8 *)((long)pvVar9 + lVar11 + -0x10);
        *(undefined8 *)((long)piVar5 + lVar11 + -8) = *(undefined8 *)((long)pvVar9 + lVar11 + -8);
        *(undefined8 *)((long)pvVar9 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)pvVar9 + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)pvVar9 + lVar11 + -8) = 0;
        lVar11 = lVar7;
      } while ((long)pvVar10 - (long)pvVar9 != lVar7);
      pvVar9 = *(void **)this;
      pvVar10 = *(void **)(this + 8);
      piVar5 = (int *)((long)piVar5 + lVar7);
    }
    *(int **)this = piVar5;
    *(int **)(this + 8) = piVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x20);
    while (pvVar3 = pvVar10, pvVar3 != pvVar9) {
      pvVar4 = *(void **)((long)pvVar3 + -0x18);
      pvVar10 = (void *)((long)pvVar3 + -0x20);
      if (pvVar4 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x10) = pvVar4;
        operator_delete(pvVar4);
      }
    }
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      return;
    }
    return;
  }
LAB_015f6844:
                    /* WARNING: Subroutine does not return */
  abort();
}

