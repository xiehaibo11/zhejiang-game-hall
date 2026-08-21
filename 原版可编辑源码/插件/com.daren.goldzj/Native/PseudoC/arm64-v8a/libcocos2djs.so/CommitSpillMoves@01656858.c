
/* v8::internal::compiler::TopLevelLiveRange::CommitSpillMoves(v8::internal::compiler::RegisterAllocationData*,
   v8::internal::compiler::InstructionOperand const&, bool) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::CommitSpillMoves
          (TopLevelLiveRange *this,RegisterAllocationData *param_1,InstructionOperand *param_2,
          bool param_3)

{
  ulong uVar1;
  ParallelMove *this_00;
  undefined8 *puVar2;
  ulong *puVar3;
  Zone *this_01;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  piVar4 = *(int **)(this + 0x78);
  if (piVar4 != (int *)0x0) {
    lVar5 = *(long *)(param_1 + 0x10);
    this_01 = *(Zone **)(lVar5 + 8);
LAB_016568a8:
    do {
      uVar1 = *(long *)(lVar5 + 0xb0) + (long)*piVar4;
      lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                       (uVar1 & 0x1ff) * 8);
      this_00 = *(ParallelMove **)(lVar6 + 8);
      if (this_00 != (ParallelMove *)0x0) {
        if (param_3) goto LAB_0165690c;
LAB_016568d8:
        if (this[0xa0] != (TopLevelLiveRange)0x0) goto LAB_0165690c;
        goto LAB_01656890;
      }
      this_00 = *(ParallelMove **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0x20) {
        this_00 = (ParallelMove *)Zone::NewExpand(this_01,0x20);
      }
      else {
        *(ParallelMove **)(this_01 + 0x10) = this_00 + 0x20;
      }
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(Zone **)(this_00 + 0x18) = this_01;
      *(ParallelMove **)(lVar6 + 8) = this_00;
      if (!param_3) goto LAB_016568d8;
LAB_0165690c:
      puVar2 = *(undefined8 **)this_00;
      if (puVar2 != *(undefined8 **)(this_00 + 8)) {
        do {
          puVar3 = (ulong *)*puVar2;
          if ((((*puVar3 & 7) != 0) && (*puVar3 == **(ulong **)(piVar4 + 2))) &&
             (puVar3[1] == *(ulong *)param_2)) {
            if (this[0xa0] == (TopLevelLiveRange)0x0) goto LAB_016568a0;
            *puVar3 = 0;
            puVar3[1] = 0;
            piVar4 = *(int **)(piVar4 + 4);
            if (piVar4 == (int *)0x0) {
              return;
            }
            goto LAB_016568a8;
          }
          puVar2 = puVar2 + 1;
        } while (*(undefined8 **)(this_00 + 8) != puVar2);
      }
      if (this[0xa0] == (TopLevelLiveRange)0x0) {
LAB_01656890:
        ParallelMove::AddMove
                  (this_00,*(InstructionOperand **)(piVar4 + 2),param_2,*(Zone **)(this_00 + 0x18));
      }
LAB_016568a0:
      piVar4 = *(int **)(piVar4 + 4);
    } while (piVar4 != (int *)0x0);
  }
  return;
}

