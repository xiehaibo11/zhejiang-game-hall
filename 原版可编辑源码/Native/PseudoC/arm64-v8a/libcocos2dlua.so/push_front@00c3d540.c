
/* std::__ndk1::__split_buffer<cocostudio::MovementEvent**,
   std::__ndk1::allocator<cocostudio::MovementEvent**> >::push_front(cocostudio::MovementEvent**&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>>::
push_front(__split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>>
           *this,MovementEvent ***param_1)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *__src;
  undefined8 *__dest;
  
  __src = *(undefined8 **)(this + 8);
  __dest = __src;
  if (__src == *(undefined8 **)this) {
    uVar2 = *(ulong *)(this + 0x10);
    uVar5 = *(ulong *)(this + 0x18);
    if (uVar2 < uVar5) {
      lVar4 = (long)(uVar5 - uVar2) >> 3;
      lVar1 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar1 = lVar4 + 1;
      }
      __n = uVar2 - (long)__src;
      __dest = (undefined8 *)(uVar2 + (lVar1 >> 1) * 8);
      if (__n != 0) {
        __dest = (undefined8 *)((long)__dest - __n);
        memmove(__dest,__src,__n);
      }
      *(undefined8 **)(this + 8) = __dest;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + (lVar1 >> 1) * 8;
    }
    else {
      lVar1 = uVar5 - (long)*(undefined8 **)this;
      uVar5 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar5 * 8);
      __dest = (undefined8 *)((long)pvVar3 + (uVar5 + 3 >> 2) * 8);
      lVar1 = uVar2 - (long)__src;
      puVar6 = __dest;
      if (lVar1 != 0) {
        lVar4 = (lVar1 >> 3) << 3;
        do {
          lVar4 = lVar4 + -8;
          *puVar6 = *__src;
          puVar6 = puVar6 + 1;
          __src = __src + 1;
        } while (lVar4 != 0);
        __src = *(undefined8 **)this;
        puVar6 = (undefined8 *)((long)__dest + lVar1);
      }
      *(void **)this = pvVar3;
      *(undefined8 **)(this + 8) = __dest;
      *(undefined8 **)(this + 0x10) = puVar6;
      *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar5 * 8);
      if (__src != (undefined8 *)0x0) {
        operator_delete(__src);
        __dest = *(undefined8 **)(this + 8);
      }
    }
  }
  __dest[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}

