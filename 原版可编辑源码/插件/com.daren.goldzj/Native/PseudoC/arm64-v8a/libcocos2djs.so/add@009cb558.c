
/* cocos2d::renderer::RecyclePool<float>::add() */

void __thiscall cocos2d::renderer::RecyclePool<float>::add(RecyclePool<float> *this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 009cb420 with catch @ 009cb578 */
  lVar4 = *(long *)(this + 0x40);
                    /* catch() { ... } // from try @ 009cb3a8 with catch @ 009cb588 */
  uVar5 = *(ulong *)this;
  uVar6 = *(long *)(this + 0x48) - lVar4;
  uVar7 = uVar6 >> 3;
                    /* catch() { ... } // from try @ 009cb2f4 with catch @ 009cb598 */
                    /* catch() { ... } // from try @ 009cb2bc with catch @ 009cb5b0 */
  if ((((ulong)(long)(int)uVar7 <= uVar5) &&
      (uVar2 = (uint)(uVar6 >> 2) & 0xfffffffe, (ulong)((long)uVar6 >> 3) < (ulong)(long)(int)uVar2)
      ) && ((int)uVar7 < (int)uVar2)) {
    do {
                    /* catch() { ... } // from try @ 009cb1e8 with catch @ 009cb5c0 */
      if (*(long **)(this + 0x30) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
                    /* catch() { ... } // from try @ 009cb1dc with catch @ 009cb5c4 */
                    /* catch() { ... } // from try @ 009cb1bc with catch @ 009cb5c8 */
      local_50 = (float *)(**(code **)(**(long **)(this + 0x30) + 0x30))();
                    /* catch() { ... } // from try @ 009cb1f4 with catch @ 009cb5d8
                       catch() { ... } // from try @ 009cb4dc with catch @ 009cb5d8 */
      if (*(undefined8 **)(this + 0x48) == *(undefined8 **)(this + 0x50)) {
        std::__ndk1::vector<float*,std::__ndk1::allocator<float*>>::
        __push_back_slow_path<float*const&>
                  ((vector<float*,std::__ndk1::allocator<float*>> *)(this + 0x40),&local_50);
      }
      else {
        **(undefined8 **)(this + 0x48) = local_50;
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar2);
    uVar5 = *(ulong *)this;
    lVar4 = *(long *)(this + 0x40);
  }
  *(ulong *)this = uVar5 + 1;
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 009cb630 to 00acb673 has its CatchHandler @ 009cb630
                       catch() { ... } // from try @ 009cb630 with catch @ 009cb630
                       catch() { ... } // from try @ 009cb6ac with catch @ 009cb630 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(lVar4 + uVar5 * 8));
}

