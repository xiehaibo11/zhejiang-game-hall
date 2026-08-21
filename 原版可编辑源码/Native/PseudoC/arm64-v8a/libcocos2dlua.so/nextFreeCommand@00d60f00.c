
/* spine::SkeletonBatch::nextFreeCommand() */

void __thiscall spine::SkeletonBatch::nextFreeCommand(SkeletonBatch *this)

{
  undefined8 *puVar1;
  long lVar2;
  TrianglesCommand *this_00;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  TrianglesCommand *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8);
  uVar4 = (ulong)*(uint *)(this + 0x20);
  uVar5 = *(long *)(this + 0x10) - lVar3 >> 3;
  if ((uVar5 <= uVar4) && (uVar6 = *(long *)(this + 0x10) - lVar3 >> 2 | 1, uVar5 < uVar6)) {
    lVar3 = uVar6 - uVar5;
    do {
      while( true ) {
        this_00 = operator_new(0x90);
        cocos2d::TrianglesCommand::TrianglesCommand(this_00);
                    /* try { // try from 00d60f84 to 00e60fab has its CatchHandler @ 00d60de4 */
        puVar1 = *(undefined8 **)(this + 0x10);
        local_50 = this_00;
                    /* catch() { ... } // from try @ 00d60e74 with catch @ 00d60f90 */
        if (*(undefined8 **)(this + 0x18) <= puVar1) break;
        *puVar1 = this_00;
        *(undefined8 **)(this + 0x10) = puVar1 + 1;
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) goto LAB_00d60fa4;
      }
      std::__ndk1::
      vector<cocos2d::TrianglesCommand*,std::__ndk1::allocator<cocos2d::TrianglesCommand*>>::
      __push_back_slow_path<cocos2d::TrianglesCommand*>
                ((vector<cocos2d::TrianglesCommand*,std::__ndk1::allocator<cocos2d::TrianglesCommand*>>
                  *)(this + 8),&local_50);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
LAB_00d60fa4:
    uVar4 = (ulong)*(uint *)(this + 0x20);
    lVar3 = *(long *)(this + 8);
  }
                    /* try { // try from 00d60fac to 00e60fcf has its CatchHandler @ 00d60fac
                       catch() { ... } // from try @ 00d60fac with catch @ 00d60fac
                       catch() { ... } // from try @ 00d60fdc with catch @ 00d60fac */
  *(int *)(this + 0x20) = (int)uVar4 + 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00d60fd0 to 00e60fdb has its CatchHandler @ 00d61044 */
                    /* try { // try from 00d60fdc to 00e6105f has its CatchHandler @ 00d60fac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(lVar3 + uVar4 * 8));
}

