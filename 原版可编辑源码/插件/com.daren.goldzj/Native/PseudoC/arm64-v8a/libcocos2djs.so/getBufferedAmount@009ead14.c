
/* WebSocketImpl::getBufferedAmount() const */

long __thiscall WebSocketImpl::getBufferedAmount(WebSocketImpl *this)

{
  mutex *this_00;
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = DAT_01d38808;
                    /* catch() { ... } // from try @ 009e9858 with catch @ 009ead1c */
                    /* catch() { ... } // from try @ 009e9508 with catch @ 009ead20 */
                    /* catch() { ... } // from try @ 009e94b0 with catch @ 009ead28 */
  this_00 = (mutex *)(DAT_01d38808 + 1);
                    /* catch() { ... } // from try @ 009e94a4 with catch @ 009ead38 */
  std::__ndk1::mutex::lock(this_00);
  lVar2 = *plVar1;
                    /* catch() { ... } // from try @ 009e9498 with catch @ 009ead40 */
  lVar3 = *(long *)(lVar2 + 8);
                    /* catch() { ... } // from try @ 009e9484 with catch @ 009ead48 */
  if (lVar2 == lVar3) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
                    /* catch() { ... } // from try @ 009e947c with catch @ 009ead50 */
    do {
      lVar5 = *(long *)(lVar3 + 0x10);
                    /* catch() { ... } // from try @ 009e958c with catch @ 009ead80 */
                    /* catch() { ... } // from try @ 009e9470 with catch @ 009ead58 */
                    /* catch() { ... } // from try @ 009e9444 with catch @ 009ead60 */
      if (((*(WebSocketImpl **)(lVar5 + 0x10) == this) && (lVar6 = *(long *)(lVar5 + 8), lVar6 != 0)
          ) && (*(uint *)(lVar5 + 4) < 2)) {
        uVar4 = *(long *)(lVar6 + 8) - *(long *)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 009e9434 with catch @ 009ead70 */
        lVar7 = (uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) + lVar7;
                    /* catch() { ... } // from try @ 009e941c with catch @ 009ead78 */
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar2 != lVar3);
  }
  std::__ndk1::mutex::unlock(this_00);
  return lVar7;
}

