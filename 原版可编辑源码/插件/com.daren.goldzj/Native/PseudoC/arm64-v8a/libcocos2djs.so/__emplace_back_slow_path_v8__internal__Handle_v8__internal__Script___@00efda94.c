
/* void std::__ndk1::vector<v8::internal::CoverageScript,
   std::__ndk1::allocator<v8::internal::CoverageScript>
   >::__emplace_back_slow_path<v8::internal::Handle<v8::internal::Script>&>(v8::internal::Handle<v8::internal::Script>&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::CoverageScript,std::__ndk1::allocator<v8::internal::CoverageScript>>::
__emplace_back_slow_path<v8::internal::Handle<v8::internal::Script>&>
          (vector<v8::internal::CoverageScript,std::__ndk1::allocator<v8::internal::CoverageScript>>
           *this,Handle *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  void *pvVar14;
  
  pvVar12 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  lVar13 = (long)pvVar10 - (long)pvVar12 >> 5;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar7 = *(long *)(this + 0x10) - (long)pvVar12 >> 4;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x3fffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)pvVar12 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_00efdc14;
      pvVar3 = operator_new(uVar1 << 5);
    }
    puVar6 = (undefined8 *)((long)pvVar3 + lVar13 * 0x20);
    *puVar6 = *(undefined8 *)param_1;
    puVar6[1] = 0;
    puVar2 = puVar6 + 4;
    puVar6[2] = 0;
    puVar6[3] = 0;
    if (pvVar10 != pvVar12) {
      lVar13 = 0;
      do {
        uVar9 = *(undefined8 *)((long)pvVar10 + lVar13 + -0x20);
        *(undefined8 *)((long)puVar6 + lVar13 + -0x10) = 0;
        *(undefined8 *)((long)puVar6 + lVar13 + -8) = 0;
        lVar8 = lVar13 + -0x20;
        *(undefined8 *)((long)puVar6 + lVar13 + -0x20) = uVar9;
        *(undefined8 *)((long)puVar6 + lVar13 + -0x18) = 0;
        *(undefined8 *)((long)puVar6 + lVar13 + -0x18) =
             *(undefined8 *)((long)pvVar10 + lVar13 + -0x18);
        *(undefined8 *)((long)puVar6 + lVar13 + -0x10) =
             *(undefined8 *)((long)pvVar10 + lVar13 + -0x10);
        *(undefined8 *)((long)puVar6 + lVar13 + -8) = *(undefined8 *)((long)pvVar10 + lVar13 + -8);
        *(undefined8 *)((long)pvVar10 + lVar13 + -0x18) = 0;
        *(undefined8 *)((long)pvVar10 + lVar13 + -0x10) = 0;
        *(undefined8 *)((long)pvVar10 + lVar13 + -8) = 0;
        lVar13 = lVar8;
      } while ((long)pvVar12 - (long)pvVar10 != lVar8);
      pvVar10 = *(void **)this;
      pvVar12 = *(void **)(this + 8);
      puVar6 = (undefined8 *)((long)puVar6 + lVar8);
    }
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x20);
    while (pvVar3 = pvVar12, pvVar3 != pvVar10) {
      pvVar11 = *(void **)((long)pvVar3 + -0x18);
      pvVar12 = (void *)((long)pvVar3 + -0x20);
      if (pvVar11 != (void *)0x0) {
        pvVar4 = pvVar11;
        pvVar5 = *(void **)((long)pvVar3 + -0x10);
        if (*(void **)((long)pvVar3 + -0x10) != pvVar11) {
          do {
            pvVar4 = *(void **)((long)pvVar5 + -0x20);
            pvVar14 = (void *)((long)pvVar5 + -0x38);
            if (pvVar4 != (void *)0x0) {
              *(void **)((long)pvVar5 + -0x18) = pvVar4;
              operator_delete(pvVar4);
            }
            pvVar5 = pvVar14;
          } while (pvVar11 != pvVar14);
          pvVar4 = *(void **)((long)pvVar3 + -0x18);
        }
        *(void **)((long)pvVar3 + -0x10) = pvVar11;
        operator_delete(pvVar4);
      }
    }
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
      return;
    }
    return;
  }
LAB_00efdc14:
                    /* WARNING: Subroutine does not return */
  abort();
}

