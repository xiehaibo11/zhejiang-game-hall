
/* void std::__ndk1::vector<std::__ndk1::thread, std::__ndk1::allocator<std::__ndk1::thread>
   >::__push_back_slow_path<std::__ndk1::thread>(std::__ndk1::thread&&) */

void __thiscall
std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::
__push_back_slow_path<std::__ndk1::thread>
          (vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *this,
          thread *param_1)

{
  thread *ptVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  thread *ptVar6;
  thread *this_00;
  long lVar7;
  ulong uVar8;
  
  ptVar1 = *(thread **)this;
  this_00 = *(thread **)(this + 8);
  lVar7 = (long)this_00 - (long)ptVar1 >> 3;
  uVar8 = lVar7 + 1;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)ptVar1 >> 3) < 0xfffffffffffffff) {
    uVar3 = *(long *)(this + 0x10) - (long)ptVar1 >> 2;
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_009d643c;
    }
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
  pvVar2 = operator_new(uVar8 << 3);
LAB_009d643c:
  puVar4 = (undefined8 *)((long)pvVar2 + lVar7 * 8);
  pvVar2 = (void *)((long)pvVar2 + uVar8 * 8);
  puVar5 = puVar4 + 1;
  *puVar4 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  ptVar6 = this_00;
  if (this_00 == ptVar1) {
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar5;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    do {
      ptVar6 = ptVar6 + -8;
      puVar4 = puVar4 + -1;
      *puVar4 = *(undefined8 *)ptVar6;
      *(undefined8 *)ptVar6 = 0;
    } while (ptVar1 != ptVar6);
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar5;
                    /* try { // try from 009d647c to 00ad64e7 has its CatchHandler @ 009d80b0 */
    *(void **)(this + 0x10) = pvVar2;
    while (this_00 != ptVar1) {
      this_00 = this_00 + -8;
      thread::~thread(this_00);
    }
  }
  if (ptVar1 == (thread *)0x0) {
    return;
  }
  operator_delete(ptVar1);
  return;
}

