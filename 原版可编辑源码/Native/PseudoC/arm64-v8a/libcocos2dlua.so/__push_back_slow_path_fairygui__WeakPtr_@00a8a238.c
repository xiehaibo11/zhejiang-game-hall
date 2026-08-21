
/* void std::__ndk1::vector<fairygui::WeakPtr, std::__ndk1::allocator<fairygui::WeakPtr>
   >::__push_back_slow_path<fairygui::WeakPtr>(fairygui::WeakPtr&&) */

void __thiscall
std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::
__push_back_slow_path<fairygui::WeakPtr>
          (vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *this,
          WeakPtr *param_1)

{
  WeakPtr *pWVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  WeakPtr *this_00;
  WeakPtr *this_01;
  WeakPtr *pWVar6;
  WeakPtr *pWVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar8 = lVar5 + 1;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00a8a2b8;
    }
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
                    /* try { // try from 00a8a2ac to 00b8a2bb has its CatchHandler @ 00a8a624 */
  pvVar2 = operator_new(uVar8 << 3);
LAB_00a8a2b8:
  this_00 = (WeakPtr *)((long)pvVar2 + lVar5 * 8);
                    /* try { // try from 00a8a2bc to 00b8a2d7 has its CatchHandler @ 00a8a620 */
  fairygui::WeakPtr::WeakPtr(this_00,param_1);
  this_01 = *(WeakPtr **)this;
  pWVar6 = *(WeakPtr **)(this + 8);
  pWVar1 = this_00 + 8;
  pWVar7 = this_01;
  if (pWVar6 != this_01) {
    do {
      pWVar6 = pWVar6 + -8;
      fairygui::WeakPtr::WeakPtr(this_00 + -8,pWVar6);
      this_00 = this_00 + -8;
    } while (this_01 != pWVar6);
    this_01 = *(WeakPtr **)(this + 8);
    pWVar7 = *(WeakPtr **)this;
                    /* try { // try from 00a8a2f8 to 00b8a30b has its CatchHandler @ 00a8a61c */
  }
  *(WeakPtr **)this = this_00;
  *(WeakPtr **)(this + 8) = pWVar1;
                    /* try { // try from 00a8a30c to 00b8a323 has its CatchHandler @ 00a8a1d0 */
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 8);
  while (this_01 != pWVar7) {
    this_01 = this_01 + -8;
    fairygui::WeakPtr::~WeakPtr(this_01);
                    /* try { // try from 00a8a324 to 00b8a3ab has its CatchHandler @ 00a8a640 */
  }
  if (pWVar7 != (WeakPtr *)0x0) {
    operator_delete(pWVar7);
    return;
  }
  return;
}

