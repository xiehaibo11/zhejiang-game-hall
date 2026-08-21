
/* p2t::SweepContext::InitEdges(std::__ndk1::vector<p2t::Point*, std::__ndk1::allocator<p2t::Point*>
   > const&) */

void __thiscall p2t::SweepContext::InitEdges(SweepContext *this,vector *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  Edge *pEVar4;
  double *pdVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  Edge *local_78;
  Edge *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)param_1;
                    /* try { // try from 0102c80c to 0112c813 has its CatchHandler @ 0102c930 */
  if (*(long *)(param_1 + 8) - lVar9 != 0) {
    uVar8 = *(long *)(param_1 + 8) - lVar9 >> 3;
                    /* try { // try from 0102c814 to 0112c94b has its CatchHandler @ 0102c79c */
    uVar7 = 0;
    while( true ) {
      lVar1 = 0;
      if (uVar7 < uVar8 - 1) {
        lVar1 = uVar7 + 1;
      }
      pEVar4 = operator_new(0x10);
      pdVar5 = *(double **)(lVar9 + uVar7 * 8);
      pdVar6 = *(double **)(lVar9 + lVar1 * 8);
      *(double **)pEVar4 = pdVar5;
      *(double **)(pEVar4 + 8) = pdVar6;
      if ((pdVar6[1] < pdVar5[1]) || ((pdVar5[1] == pdVar6[1] && (*pdVar6 < *pdVar5)))) {
        *(double **)pEVar4 = pdVar6;
        *(double **)(pEVar4 + 8) = pdVar5;
        pdVar6 = pdVar5;
      }
      puVar2 = (undefined8 *)pdVar6[3];
      local_70 = pEVar4;
      if (puVar2 < (undefined8 *)pdVar6[4]) {
        *puVar2 = pEVar4;
        pdVar6[3] = (double)(puVar2 + 1);
      }
      else {
        std::__ndk1::vector<p2t::Edge*,std::__ndk1::allocator<p2t::Edge*>>::
        __push_back_slow_path<p2t::Edge*>
                  ((vector<p2t::Edge*,std::__ndk1::allocator<p2t::Edge*>> *)(pdVar6 + 2),&local_70);
      }
      puVar2 = *(undefined8 **)(this + 8);
      uVar7 = uVar7 + 1;
      local_78 = pEVar4;
      if (puVar2 < *(undefined8 **)(this + 0x10)) {
        *puVar2 = pEVar4;
        *(undefined8 **)(this + 8) = puVar2 + 1;
      }
      else {
        std::__ndk1::vector<p2t::Edge*,std::__ndk1::allocator<p2t::Edge*>>::
        __push_back_slow_path<p2t::Edge*>
                  ((vector<p2t::Edge*,std::__ndk1::allocator<p2t::Edge*>> *)this,&local_78);
      }
      if (uVar8 <= uVar7) break;
      lVar9 = *(long *)param_1;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

