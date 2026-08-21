
/* void std::__ndk1::vector<v8::internal::TypeProfileScript,
   std::__ndk1::allocator<v8::internal::TypeProfileScript>
   >::__emplace_back_slow_path<v8::internal::TypeProfileScript&>(v8::internal::TypeProfileScript&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::TypeProfileScript,std::__ndk1::allocator<v8::internal::TypeProfileScript>>::
__emplace_back_slow_path<v8::internal::TypeProfileScript&>
          (vector<v8::internal::TypeProfileScript,std::__ndk1::allocator<v8::internal::TypeProfileScript>>
           *this,TypeProfileScript *param_1)

{
  ulong uVar1;
  TypeProfileScript *pTVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  TypeProfileScript *pTVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  
  lVar10 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3b == 0) {
    lVar5 = *(long *)(this + 0x10) - *(long *)this;
    uVar7 = lVar5 >> 4;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x3fffffffffffffe < (ulong)(lVar5 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_00f051a0;
      pvVar3 = operator_new(uVar1 << 5);
    }
    pTVar11 = (TypeProfileScript *)((long)pvVar3 + lVar10 * 0x20);
    allocator_traits<std::__ndk1::allocator<v8::internal::TypeProfileScript>>::
    construct<v8::internal::TypeProfileScript,v8::internal::TypeProfileScript&>
              ((allocator *)(this + 0x10),pTVar11,param_1);
    pvVar9 = *(void **)this;
    pvVar12 = *(void **)(this + 8);
    pTVar2 = pTVar11 + 0x20;
    pvVar13 = pvVar9;
    if (pvVar12 != pvVar9) {
      lVar10 = 0;
      do {
        uVar8 = *(undefined8 *)((long)pvVar12 + lVar10 + -0x20);
        *(undefined8 *)(pTVar11 + lVar10 + -0x10) = 0;
        *(undefined8 *)(pTVar11 + lVar10 + -8) = 0;
        lVar5 = lVar10 + -0x20;
        *(undefined8 *)(pTVar11 + lVar10 + -0x20) = uVar8;
        *(undefined8 *)(pTVar11 + lVar10 + -0x18) = 0;
        *(undefined8 *)(pTVar11 + lVar10 + -0x18) = *(undefined8 *)((long)pvVar12 + lVar10 + -0x18);
        *(undefined8 *)(pTVar11 + lVar10 + -0x10) = *(undefined8 *)((long)pvVar12 + lVar10 + -0x10);
        *(undefined8 *)(pTVar11 + lVar10 + -8) = *(undefined8 *)((long)pvVar12 + lVar10 + -8);
        *(undefined8 *)((long)pvVar12 + lVar10 + -0x18) = 0;
        *(undefined8 *)((long)pvVar12 + lVar10 + -0x10) = 0;
        *(undefined8 *)((long)pvVar12 + lVar10 + -8) = 0;
        lVar10 = lVar5;
      } while ((long)pvVar9 - (long)pvVar12 != lVar5);
      pvVar9 = *(void **)this;
      pTVar11 = pTVar11 + lVar5;
      pvVar13 = *(void **)(this + 8);
    }
    *(TypeProfileScript **)this = pTVar11;
    *(TypeProfileScript **)(this + 8) = pTVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x20);
    while (pvVar3 = pvVar13, pvVar3 != pvVar9) {
      pvVar12 = *(void **)((long)pvVar3 + -0x18);
      pvVar13 = (void *)((long)pvVar3 + -0x20);
      if (pvVar12 != (void *)0x0) {
        pvVar4 = pvVar12;
        pvVar6 = *(void **)((long)pvVar3 + -0x10);
        if (*(void **)((long)pvVar3 + -0x10) != pvVar12) {
          do {
            pvVar4 = *(void **)((long)pvVar6 + -0x18);
            pvVar14 = (void *)((long)pvVar6 + -0x20);
            if (pvVar4 != (void *)0x0) {
              *(void **)((long)pvVar6 + -0x10) = pvVar4;
              operator_delete(pvVar4);
            }
            pvVar6 = pvVar14;
          } while (pvVar12 != pvVar14);
          pvVar4 = *(void **)((long)pvVar3 + -0x18);
        }
        *(void **)((long)pvVar3 + -0x10) = pvVar12;
        operator_delete(pvVar4);
      }
    }
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      return;
    }
    return;
  }
LAB_00f051a0:
                    /* WARNING: Subroutine does not return */
  abort();
}

