
/* void std::__ndk1::vector<v8::internal::TypeProfileEntry,
   std::__ndk1::allocator<v8::internal::TypeProfileEntry> >::__emplace_back_slow_path<int&,
   std::__ndk1::vector<v8::internal::Handle<v8::internal::String>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::String> > > >(int&,
   std::__ndk1::vector<v8::internal::Handle<v8::internal::String>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::String> > >&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::TypeProfileEntry,std::__ndk1::allocator<v8::internal::TypeProfileEntry>>::
__emplace_back_slow_path<int&,std::__ndk1::vector<v8::internal::Handle<v8::internal::String>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::String>>>>
          (vector<v8::internal::TypeProfileEntry,std::__ndk1::allocator<v8::internal::TypeProfileEntry>>
           *this,int *param_1,vector *param_2)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3b == 0) {
    lVar7 = *(long *)(this + 0x10) - *(long *)this;
    uVar9 = lVar7 >> 4;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_00f04f14;
      pvVar5 = operator_new(uVar1 << 5);
    }
    iVar3 = *param_1;
    uVar15 = *(undefined8 *)(param_2 + 8);
    uVar14 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    piVar8 = (int *)((long)pvVar5 + lVar13 * 0x20);
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *piVar8 = iVar3;
    *(undefined8 *)(piVar8 + 4) = uVar15;
    *(undefined8 *)(piVar8 + 2) = uVar14;
    *(undefined8 *)(piVar8 + 6) = uVar10;
    pvVar11 = *(void **)this;
    pvVar6 = *(void **)(this + 8);
    piVar2 = piVar8 + 8;
    pvVar12 = pvVar11;
    if (pvVar6 != pvVar11) {
      lVar13 = 0;
      do {
        uVar4 = *(undefined4 *)((long)pvVar6 + lVar13 + -0x20);
        *(undefined8 *)((long)piVar8 + lVar13 + -0x10) = 0;
        *(undefined8 *)((long)piVar8 + lVar13 + -8) = 0;
        *(undefined8 *)((long)piVar8 + lVar13 + -0x18) = 0;
        *(undefined4 *)((long)piVar8 + lVar13 + -0x20) = uVar4;
        lVar7 = lVar13 + -0x20;
        *(undefined8 *)((long)piVar8 + lVar13 + -0x18) =
             *(undefined8 *)((long)pvVar6 + lVar13 + -0x18);
        *(undefined8 *)((long)piVar8 + lVar13 + -0x10) =
             *(undefined8 *)((long)pvVar6 + lVar13 + -0x10);
        *(undefined8 *)((long)piVar8 + lVar13 + -8) = *(undefined8 *)((long)pvVar6 + lVar13 + -8);
        *(undefined8 *)((long)pvVar6 + lVar13 + -0x18) = 0;
        *(undefined8 *)((long)pvVar6 + lVar13 + -0x10) = 0;
        *(undefined8 *)((long)pvVar6 + lVar13 + -8) = 0;
        lVar13 = lVar7;
      } while ((long)pvVar11 - (long)pvVar6 != lVar7);
      pvVar11 = *(void **)(this + 8);
      piVar8 = (int *)((long)piVar8 + lVar7);
      pvVar12 = *(void **)this;
    }
    *(int **)this = piVar8;
    *(int **)(this + 8) = piVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x20);
    while (pvVar5 = pvVar11, pvVar5 != pvVar12) {
      pvVar6 = *(void **)((long)pvVar5 + -0x18);
      pvVar11 = (void *)((long)pvVar5 + -0x20);
      if (pvVar6 != (void *)0x0) {
        *(void **)((long)pvVar5 + -0x10) = pvVar6;
        operator_delete(pvVar6);
      }
    }
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
      return;
    }
    return;
  }
LAB_00f04f14:
                    /* WARNING: Subroutine does not return */
  abort();
}

