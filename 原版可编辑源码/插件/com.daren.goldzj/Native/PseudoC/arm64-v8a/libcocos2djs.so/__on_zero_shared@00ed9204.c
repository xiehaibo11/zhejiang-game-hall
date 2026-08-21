
/* std::__ndk1::__shared_ptr_pointer<v8::internal::TypeProfile*,
   std::__ndk1::default_delete<v8::internal::TypeProfile>,
   std::__ndk1::allocator<v8::internal::TypeProfile> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<v8::internal::TypeProfile*,std::__ndk1::default_delete<v8::internal::TypeProfile>,std::__ndk1::allocator<v8::internal::TypeProfile>>
::__on_zero_shared(__shared_ptr_pointer<v8::internal::TypeProfile*,std::__ndk1::default_delete<v8::internal::TypeProfile>,std::__ndk1::allocator<v8::internal::TypeProfile>>
                   *this)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  pvVar4 = (void *)*puVar3;
  if (pvVar4 != (void *)0x0) {
    pvVar6 = pvVar4;
    pvVar5 = (void *)puVar3[1];
    if ((void *)puVar3[1] != pvVar4) {
      do {
        pvVar7 = *(void **)((long)pvVar5 + -0x18);
        pvVar6 = (void *)((long)pvVar5 + -0x20);
        if (pvVar7 != (void *)0x0) {
          pvVar1 = pvVar7;
          pvVar2 = *(void **)((long)pvVar5 + -0x10);
          if (*(void **)((long)pvVar5 + -0x10) != pvVar7) {
            do {
              pvVar1 = *(void **)((long)pvVar2 + -0x18);
              pvVar8 = (void *)((long)pvVar2 + -0x20);
              if (pvVar1 != (void *)0x0) {
                *(void **)((long)pvVar2 + -0x10) = pvVar1;
                operator_delete(pvVar1);
              }
              pvVar2 = pvVar8;
            } while (pvVar7 != pvVar8);
            pvVar1 = *(void **)((long)pvVar5 + -0x18);
          }
          *(void **)((long)pvVar5 + -0x10) = pvVar7;
          operator_delete(pvVar1);
        }
        pvVar5 = pvVar6;
      } while (pvVar6 != pvVar4);
      pvVar6 = (void *)*puVar3;
    }
    puVar3[1] = pvVar4;
    operator_delete(pvVar6);
  }
  operator_delete(puVar3);
  return;
}

