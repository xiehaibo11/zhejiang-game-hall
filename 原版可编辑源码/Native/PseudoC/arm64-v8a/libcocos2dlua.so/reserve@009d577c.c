
/* std::__ndk1::vector<std::__ndk1::thread, std::__ndk1::allocator<std::__ndk1::thread>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::reserve
          (vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  thread *ptVar4;
  thread *ptVar5;
  thread *this_00;
  
  ptVar5 = *(thread **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)ptVar5 >> 3) < param_1) {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    this_00 = *(thread **)(this + 8);
    pvVar2 = operator_new(param_1 * 8);
    puVar1 = (undefined8 *)((long)pvVar2 + ((long)this_00 - (long)ptVar5));
    pvVar2 = (void *)((long)pvVar2 + param_1 * 8);
    puVar3 = puVar1;
    ptVar4 = this_00;
    if ((long)this_00 - (long)ptVar5 == 0) {
      *(undefined8 **)this = puVar1;
      *(undefined8 **)(this + 8) = puVar1;
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
      do {
        ptVar4 = ptVar4 + -8;
        puVar3 = puVar3 + -1;
        *puVar3 = *(undefined8 *)ptVar4;
        *(undefined8 *)ptVar4 = 0;
      } while (ptVar5 != ptVar4);
      *(undefined8 **)this = puVar3;
      *(undefined8 **)(this + 8) = puVar1;
      *(void **)(this + 0x10) = pvVar2;
      while (this_00 != ptVar5) {
        this_00 = this_00 + -8;
        thread::~thread(this_00);
      }
    }
    if (ptVar5 != (thread *)0x0) {
      operator_delete(ptVar5);
      return;
    }
  }
  return;
}

