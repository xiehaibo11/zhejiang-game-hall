
/* void std::__ndk1::vector<std::__ndk1::unique_ptr<v8::internal::CpuProfile,
   std::__ndk1::default_delete<v8::internal::CpuProfile> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CpuProfile,
   std::__ndk1::default_delete<v8::internal::CpuProfile> > >
   >::__emplace_back_slow_path<v8::internal::CpuProfile*>(v8::internal::CpuProfile*&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>>>
::__emplace_back_slow_path<v8::internal::CpuProfile*>
          (vector<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>>>
           *this,CpuProfile **param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  CpuProfile *this_00;
  undefined8 *puVar8;
  long lVar9;
  
  puVar2 = *(undefined8 **)this;
  puVar8 = *(undefined8 **)(this + 8);
  lVar9 = (long)puVar8 - (long)puVar2 >> 3;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3d != 0) {
LAB_011b2dd8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = *(long *)(this + 0x10) - (long)puVar2 >> 2;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0xffffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)puVar2 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) goto LAB_011b2dd8;
    pvVar3 = operator_new(uVar1 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar9 * 8);
  pvVar3 = (void *)((long)pvVar3 + uVar1 * 8);
  puVar4 = puVar5 + 1;
  *puVar5 = *param_1;
  if (puVar8 == puVar2) {
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar4;
    *(void **)(this + 0x10) = pvVar3;
  }
  else {
    do {
      puVar8 = puVar8 + -1;
      uVar7 = *puVar8;
      *puVar8 = 0;
      puVar5 = puVar5 + -1;
      *puVar5 = uVar7;
    } while (puVar2 != puVar8);
    puVar2 = *(undefined8 **)this;
    puVar8 = *(undefined8 **)(this + 8);
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar4;
    *(void **)(this + 0x10) = pvVar3;
    while (puVar8 != puVar2) {
      puVar8 = puVar8 + -1;
      this_00 = (CpuProfile *)*puVar8;
      *puVar8 = 0;
      if (this_00 != (CpuProfile *)0x0) {
        v8::internal::CpuProfile::~CpuProfile(this_00);
        operator_delete(this_00);
      }
    }
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar2);
  return;
}

