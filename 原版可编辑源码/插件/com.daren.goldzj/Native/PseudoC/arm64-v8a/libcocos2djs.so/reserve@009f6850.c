
/* std::__ndk1::vector<std::__ndk1::thread, std::__ndk1::allocator<std::__ndk1::thread>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::reserve
          (vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *this,
          ulong param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  thread *ptVar6;
  thread *ptVar7;
  thread *this_00;
  
                    /* catch() { ... } // from try @ 009f63d8 with catch @ 009f6850 */
                    /* catch() { ... } // from try @ 009f63d0 with catch @ 009f6854 */
                    /* catch() { ... } // from try @ 009f63a8 with catch @ 009f685c */
                    /* catch() { ... } // from try @ 009f63a0 with catch @ 009f6860 */
  ptVar7 = *(thread **)this;
                    /* catch() { ... } // from try @ 009f6378 with catch @ 009f6868 */
                    /* catch() { ... } // from try @ 009f6370 with catch @ 009f686c */
  if ((ulong)(*(long *)(this + 0x10) - (long)ptVar7 >> 3) < param_1) {
                    /* catch() { ... } // from try @ 009f6348 with catch @ 009f6874 */
                    /* catch() { ... } // from try @ 009f6340 with catch @ 009f6878 */
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    this_00 = *(thread **)(this + 8);
                    /* catch() { ... } // from try @ 009f6318 with catch @ 009f6880 */
                    /* catch() { ... } // from try @ 009f6310 with catch @ 009f6884 */
                    /* catch() { ... } // from try @ 009f62e8 with catch @ 009f688c */
    pvVar4 = operator_new(param_1 * 8);
                    /* catch() { ... } // from try @ 009f62e0 with catch @ 009f6890 */
    lVar3 = (long)this_00 - (long)ptVar7;
    lVar1 = (long)pvVar4 + lVar3;
                    /* catch() { ... } // from try @ 009f62b8 with catch @ 009f6898 */
    pvVar2 = (void *)((long)pvVar4 + param_1 * 8);
    if (lVar3 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
                    /* catch() { ... } // from try @ 009f6468 with catch @ 009f6918 */
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
                    /* catch() { ... } // from try @ 009f62b0 with catch @ 009f68a8 */
      puVar5 = (undefined8 *)((long)pvVar4 + (lVar3 >> 3) * 8);
      ptVar6 = this_00;
                    /* catch() { ... } // from try @ 009f625c with catch @ 009f68b0 */
      do {
        puVar5 = puVar5 + -1;
                    /* catch() { ... } // from try @ 009f6400 with catch @ 009f68b8 */
        ptVar6 = ptVar6 + -8;
        *puVar5 = *(undefined8 *)ptVar6;
                    /* catch() { ... } // from try @ 009f623c with catch @ 009f68c0 */
        *(undefined8 *)ptVar6 = 0;
                    /* catch() { ... } // from try @ 009f668c with catch @ 009f68c8 */
      } while (ptVar7 != ptVar6);
                    /* catch() { ... } // from try @ 009f624c with catch @ 009f68cc */
                    /* catch() { ... } // from try @ 009f65f4 with catch @ 009f68d0
                       catch() { ... } // from try @ 009f671c with catch @ 009f68d0 */
                    /* catch() { ... } // from try @ 009f6270 with catch @ 009f68d8 */
      *(ulong *)this = lVar1 + (~(ulong)(this_00 + (-8 - (long)ptVar7)) & 0xfffffffffffffff8);
      *(long *)(this + 8) = lVar1;
                    /* catch() { ... } // from try @ 009f6480 with catch @ 009f68e0 */
      *(void **)(this + 0x10) = pvVar2;
      while (this_00 != ptVar7) {
                    /* catch() { ... } // from try @ 009f6488 with catch @ 009f68e8 */
        this_00 = this_00 + -8;
                    /* catch() { ... } // from try @ 009f64a8 with catch @ 009f68ec */
        thread::~thread(this_00);
                    /* catch() { ... } // from try @ 009f64b0 with catch @ 009f68f4 */
                    /* catch() { ... } // from try @ 009f64cc with catch @ 009f68f8 */
      }
    }
    if (ptVar7 != (thread *)0x0) {
                    /* catch() { ... } // from try @ 009f64dc with catch @ 009f6900 */
      operator_delete(ptVar7);
      return;
    }
  }
  return;
}

