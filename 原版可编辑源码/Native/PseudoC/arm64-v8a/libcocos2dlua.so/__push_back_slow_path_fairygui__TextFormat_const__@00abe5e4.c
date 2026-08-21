
/* void std::__ndk1::vector<fairygui::TextFormat, std::__ndk1::allocator<fairygui::TextFormat>
   >::__push_back_slow_path<fairygui::TextFormat const&>(fairygui::TextFormat const&) */

void __thiscall
std::__ndk1::vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>::
__push_back_slow_path<fairygui::TextFormat_const&>
          (vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>> *this,
          TextFormat *param_1)

{
  ulong uVar1;
  TextFormat *pTVar2;
  TextFormat TVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  TextFormat *this_00;
  TextFormat *pTVar8;
  TextFormat *pTVar9;
  ulong uVar10;
  TextFormat *pTVar11;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar10 = 0x2e8ba2e8ba2e8ba;
  uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
    uVar7 = lVar6 * 0x5d1745d1745d1746;
    uVar10 = uVar1;
    if (uVar1 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00abe688;
    }
  }
  pvVar4 = operator_new(uVar10 * 0x58);
LAB_00abe688:
  this_00 = (TextFormat *)((long)pvVar4 + lVar5 * 8);
  fairygui::TextFormat::TextFormat(this_00,param_1);
  pTVar9 = *(TextFormat **)this;
  pTVar8 = *(TextFormat **)(this + 8);
  pTVar2 = this_00 + 0x58;
  pTVar11 = pTVar9;
  if (pTVar8 != pTVar9) {
    do {
      pTVar8 = pTVar8 + -0x58;
      fairygui::TextFormat::TextFormat(this_00 + -0x58,pTVar8);
      this_00 = this_00 + -0x58;
    } while (pTVar9 != pTVar8);
    pTVar9 = *(TextFormat **)this;
    pTVar11 = *(TextFormat **)(this + 8);
  }
  *(TextFormat **)this = this_00;
  *(TextFormat **)(this + 8) = pTVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar10 * 0x58);
  if (pTVar11 != pTVar9) {
    TVar3 = pTVar11[-0x58];
    pTVar2 = pTVar11 + -0x58;
    while( true ) {
      pTVar8 = pTVar2;
      if (((byte)TVar3 & 1) != 0) {
        operator_delete(*(void **)(pTVar11 + -0x48));
      }
                    /* try { // try from 00abe6f8 to 00bbe89f has its CatchHandler @ 00abe6f8
                       catch() { ... } // from try @ 00abe6f8 with catch @ 00abe6f8
                       catch() { ... } // from try @ 00abe920 with catch @ 00abe6f8 */
      if (pTVar9 == pTVar8) break;
      TVar3 = pTVar8[-0x58];
      pTVar2 = pTVar8 + -0x58;
      pTVar11 = pTVar8;
    }
  }
  if (pTVar9 != (TextFormat *)0x0) {
    operator_delete(pTVar9);
    return;
  }
  return;
}

