
/* universe::network::Everywhere::release(universe::network::AUpdates*) */

void __thiscall universe::network::Everywhere::release(Everywhere *this,AUpdates *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 != (AUpdates *)0x0) {
    lVar2 = *(long *)(this + 8);
    lVar3 = *(long *)(this + 0x28);
                    /* try { // try from 00a06eac to 00b06eb3 has its CatchHandler @ 00a06ef8 */
                    /* try { // try from 00a06eb8 to 00b06ebf has its CatchHandler @ 00a06ed4 */
    uVar1 = 0;
    if (*(long *)(this + 0x10) - lVar2 != 0) {
      uVar1 = (*(long *)(this + 0x10) - lVar2) * 0x40 - 1;
    }
    uVar4 = lVar3 + *(long *)(this + 0x20);
                    /* try { // try from 00a06ec0 to 00b06f1b has its CatchHandler @ 00a06cc0 */
    if (uVar1 == uVar4) {
      std::__ndk1::
      deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>::
      __add_back_capacity((deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>
                           *)this);
      lVar3 = *(long *)(this + 0x28);
                    /* catch() { ... } // from try @ 00a06da8 with catch @ 00a06ed4
                       catch() { ... } // from try @ 00a06eb8 with catch @ 00a06ed4 */
      lVar2 = *(long *)(this + 8);
                    /* catch() { ... } // from try @ 00a06d8c with catch @ 00a06ed8 */
      uVar4 = *(long *)(this + 0x20) + lVar3;
    }
    *(AUpdates **)(*(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) =
         param_1;
    *(long *)(this + 0x28) = lVar3 + 1;
                    /* catch() { ... } // from try @ 00a06d24 with catch @ 00a06ef8
                       catch() { ... } // from try @ 00a06eac with catch @ 00a06ef8 */
                    /* catch() { ... } // from try @ 00a06d68 with catch @ 00a06efc */
  }
                    /* catch() { ... } // from try @ 00a06d08 with catch @ 00a06f00 */
  return;
}

