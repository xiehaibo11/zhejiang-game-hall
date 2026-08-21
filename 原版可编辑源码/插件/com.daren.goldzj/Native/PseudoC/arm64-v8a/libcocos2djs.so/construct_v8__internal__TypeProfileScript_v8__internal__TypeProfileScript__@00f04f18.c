
/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<v8::internal::TypeProfileScript>
   >::construct<v8::internal::TypeProfileScript,
   v8::internal::TypeProfileScript&>(std::__ndk1::allocator<v8::internal::TypeProfileScript>&,
   v8::internal::TypeProfileScript*, v8::internal::TypeProfileScript&) */

void std::__ndk1::allocator_traits<std::__ndk1::allocator<v8::internal::TypeProfileScript>>::
     construct<v8::internal::TypeProfileScript,v8::internal::TypeProfileScript&>
               (allocator *param_1,TypeProfileScript *param_2,TypeProfileScript *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  void *__dest;
  undefined8 uVar6;
  size_t __n;
  
  uVar6 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)param_2 = uVar6;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar4 = *(long *)(param_3 + 0x10) - *(long *)(param_3 + 8);
  if (uVar4 != 0) {
    if ((ulong)((long)uVar4 >> 5) >> 0x3b != 0) {
LAB_00f05008:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar5 = operator_new(uVar4);
    *(undefined4 **)(param_2 + 8) = puVar5;
    *(undefined4 **)(param_2 + 0x10) = puVar5;
    *(undefined4 **)(param_2 + 0x18) = puVar5 + ((long)uVar4 >> 5) * 8;
    puVar2 = *(undefined4 **)(param_3 + 0x10);
    for (puVar1 = *(undefined4 **)(param_3 + 8); puVar1 != puVar2; puVar1 = puVar1 + 8) {
      uVar3 = *puVar1;
      *(undefined8 *)(puVar5 + 4) = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 2) = 0;
      *puVar5 = uVar3;
      uVar4 = *(long *)(puVar1 + 4) - *(long *)(puVar1 + 2);
      if (uVar4 != 0) {
        if ((ulong)((long)uVar4 >> 3) >> 0x3d != 0) goto LAB_00f05008;
        __dest = operator_new(uVar4);
        *(void **)(puVar5 + 2) = __dest;
        *(void **)(puVar5 + 4) = __dest;
        *(void **)(puVar5 + 6) = (void *)((long)__dest + ((long)uVar4 >> 3) * 8);
        __n = *(long *)(puVar1 + 4) - (long)*(void **)(puVar1 + 2);
        if (0 < (long)__n) {
          memcpy(__dest,*(void **)(puVar1 + 2),__n);
          *(size_t *)(puVar5 + 4) = *(long *)(puVar5 + 4) + __n;
        }
      }
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x10) + 0x20);
      *(undefined4 **)(param_2 + 0x10) = puVar5;
    }
  }
  return;
}

