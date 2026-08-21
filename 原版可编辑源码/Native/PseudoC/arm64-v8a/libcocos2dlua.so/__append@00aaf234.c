
/* std::__ndk1::vector<fairygui::WeakPtr, std::__ndk1::allocator<fairygui::WeakPtr>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::__append
          (vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *this,ulong param_1)

{
  WeakPtr *pWVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  WeakPtr *pWVar5;
  WeakPtr *this_00;
  long lVar6;
  WeakPtr *pWVar7;
  WeakPtr *pWVar8;
  ulong uVar9;
  
  pWVar5 = *(WeakPtr **)(this + 8);
                    /* try { // try from 00aaf254 to 00baf2e7 has its CatchHandler @ 00aaf254
                       catch() { ... } // from try @ 00aaf254 with catch @ 00aaf254
                       catch() { ... } // from try @ 00aaf2f0 with catch @ 00aaf254 */
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pWVar5 >> 3)) {
    pWVar8 = pWVar5;
    if (param_1 != 0) {
      pWVar8 = pWVar5 + param_1 * 8;
      lVar6 = param_1 << 3;
      do {
        fairygui::WeakPtr::WeakPtr(pWVar5);
        lVar6 = lVar6 + -8;
        pWVar5 = pWVar5 + 8;
      } while (lVar6 != 0);
    }
    *(WeakPtr **)(this + 8) = pWVar8;
    return;
  }
  lVar6 = (long)pWVar5 - *(long *)this >> 3;
  uVar9 = lVar6 + param_1;
  if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00aaf2ec;
    }
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar9 = 0x1fffffffffffffff;
  }
  pvVar2 = operator_new(uVar9 << 3);
                    /* try { // try from 00aaf2e8 to 00baf2ef has its CatchHandler @ 00aaf32c */
LAB_00aaf2ec:
  pWVar8 = (WeakPtr *)((long)pvVar2 + lVar6 * 8);
                    /* try { // try from 00aaf2f0 to 00baf347 has its CatchHandler @ 00aaf254 */
  lVar6 = param_1 * 8;
  pWVar1 = pWVar8 + lVar6;
  pWVar5 = pWVar8;
  do {
    fairygui::WeakPtr::WeakPtr(pWVar5);
    lVar6 = lVar6 + -8;
    pWVar5 = pWVar5 + 8;
  } while (lVar6 != 0);
  pWVar5 = *(WeakPtr **)this;
  pWVar7 = *(WeakPtr **)(this + 8);
  this_00 = pWVar5;
  if (pWVar7 != pWVar5) {
    do {
      pWVar7 = pWVar7 + -8;
                    /* catch() { ... } // from try @ 00aaf2e8 with catch @ 00aaf32c */
      fairygui::WeakPtr::WeakPtr(pWVar8 + -8,pWVar7);
      pWVar8 = pWVar8 + -8;
    } while (pWVar5 != pWVar7);
    pWVar5 = *(WeakPtr **)this;
    this_00 = *(WeakPtr **)(this + 8);
  }
  *(WeakPtr **)this = pWVar8;
  *(WeakPtr **)(this + 8) = pWVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 8);
  while (this_00 != pWVar5) {
    this_00 = this_00 + -8;
    fairygui::WeakPtr::~WeakPtr(this_00);
  }
  if (pWVar5 == (WeakPtr *)0x0) {
    return;
  }
  operator_delete(pWVar5);
  return;
}

