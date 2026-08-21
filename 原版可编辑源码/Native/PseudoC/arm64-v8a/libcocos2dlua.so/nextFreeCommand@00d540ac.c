
/* spine::SkeletonTwoColorBatch::nextFreeCommand() */

void __thiscall spine::SkeletonTwoColorBatch::nextFreeCommand(SkeletonTwoColorBatch *this)

{
  undefined8 *puVar1;
  long lVar2;
  TwoColorTrianglesCommand *this_00;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  TwoColorTrianglesCommand *local_50;
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
        this_00 = operator_new(0xd0);
        TwoColorTrianglesCommand::TwoColorTrianglesCommand(this_00);
        puVar1 = *(undefined8 **)(this + 0x10);
        local_50 = this_00;
        if (*(undefined8 **)(this + 0x18) <= puVar1) break;
        *puVar1 = this_00;
        *(undefined8 **)(this + 0x10) = puVar1 + 1;
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) goto LAB_00d54150;
      }
      std::__ndk1::
      vector<spine::TwoColorTrianglesCommand*,std::__ndk1::allocator<spine::TwoColorTrianglesCommand*>>
      ::__push_back_slow_path<spine::TwoColorTrianglesCommand*>
                ((vector<spine::TwoColorTrianglesCommand*,std::__ndk1::allocator<spine::TwoColorTrianglesCommand*>>
                  *)(this + 8),&local_50);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
LAB_00d54150:
    uVar4 = (ulong)*(uint *)(this + 0x20);
    lVar3 = *(long *)(this + 8);
  }
  *(int *)(this + 0x20) = (int)uVar4 + 1;
  *(undefined1 *)(*(long *)(lVar3 + uVar4 * 8) + 0xcc) = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

