
/* void std::__ndk1::vector<std::__ndk1::thread, std::__ndk1::allocator<std::__ndk1::thread>
   >::__push_back_slow_path<std::__ndk1::thread>(std::__ndk1::thread&&) */

void __thiscall
std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::
__push_back_slow_path<std::__ndk1::thread>
          (vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *this,
          thread *param_1)

{
  undefined8 *puVar1;
  thread *ptVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  thread *ptVar6;
  thread *this_00;
  long lVar7;
  ulong uVar8;
  
  ptVar2 = *(thread **)this;
  this_00 = *(thread **)(this + 8);
  lVar7 = (long)this_00 - (long)ptVar2 >> 3;
                    /* try { // try from 009f74f4 to 00af7507 has its CatchHandler @ 009f785c */
  uVar8 = lVar7 + 1;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 009f750c to 00af7523 has its CatchHandler @ 009f782c */
  if ((ulong)(*(long *)(this + 0x10) - (long)ptVar2 >> 3) < 0xfffffffffffffff) {
    uVar4 = *(long *)(this + 0x10) - (long)ptVar2 >> 2;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
                    /* try { // try from 009f7524 to 00af757f has its CatchHandler @ 009f7844 */
    if (uVar8 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_009f7548;
    }
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
  pvVar3 = operator_new(uVar8 << 3);
LAB_009f7548:
  puVar1 = (undefined8 *)((long)pvVar3 + lVar7 * 8);
  pvVar3 = (void *)((long)pvVar3 + uVar8 * 8);
  *puVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  if (this_00 == ptVar2) {
    *(undefined8 **)this = puVar1;
    *(undefined8 **)(this + 8) = puVar1 + 1;
    *(void **)(this + 0x10) = pvVar3;
  }
  else {
    ptVar6 = this_00;
    puVar5 = puVar1;
    do {
      puVar5 = puVar5 + -1;
      ptVar6 = ptVar6 + -8;
      *puVar5 = *(undefined8 *)ptVar6;
      *(undefined8 *)ptVar6 = 0;
                    /* try { // try from 009f7588 to 00af7593 has its CatchHandler @ 009f7828 */
    } while (ptVar2 != ptVar6);
    *(ulong *)this = (long)puVar1 + (~(ulong)(this_00 + (-8 - (long)ptVar2)) & 0xfffffffffffffff8);
    *(undefined8 **)(this + 8) = puVar1 + 1;
    *(void **)(this + 0x10) = pvVar3;
    while (this_00 != ptVar2) {
      this_00 = this_00 + -8;
      thread::~thread(this_00);
    }
  }
  if (ptVar2 == (thread *)0x0) {
    return;
  }
                    /* try { // try from 009f75d0 to 00af762f has its CatchHandler @ 009f785c */
  operator_delete(ptVar2);
  return;
}

