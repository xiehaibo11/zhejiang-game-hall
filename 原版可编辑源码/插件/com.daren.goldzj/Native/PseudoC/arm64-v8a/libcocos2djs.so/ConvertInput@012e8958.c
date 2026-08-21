
/* v8::internal::compiler::RepresentationSelector::ConvertInput(v8::internal::compiler::Node*, int,
   v8::internal::compiler::UseInfo, v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::RepresentationSelector::ConvertInput
          (RepresentationSelector *this,long *param_1,uint param_2,NodeInfo *param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Node *this_00;
  Node *this_01;
  ulong uVar4;
  long *plVar5;
  NodeInfo *pNVar6;
  NodeInfo *pNVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar1 = param_1 + 4;
  plVar5 = plVar1;
  if ((~*(uint *)((long)param_1 + 0x14) & 0xf000000) == 0) {
    plVar5 = (long *)(*plVar1 + 0x10);
  }
  if (*param_4 != (NodeInfo)0x0) {
    plVar5 = (long *)plVar5[(int)param_2];
    uVar4 = (ulong)*(uint *)((long)plVar5 + 0x14) & 0xffffff;
    pNVar6 = (NodeInfo *)(*(long *)(this + 0x18) + uVar4 * 0x28);
    pNVar7 = pNVar6 + 1;
    if ((*pNVar7 != *param_4) || (param_4[0xc] != (NodeInfo)0x0)) {
      if (FLAG_trace_representation != '\0') {
        PrintF("  change: #%d:%s(@%d #%d:%s) ",(ulong)(*(uint *)((long)param_1 + 0x14) & 0xffffff),
               *(undefined8 *)(*param_1 + 8),(ulong)param_2,uVar4,*(undefined8 *)(*plVar5 + 8));
        if (FLAG_trace_representation != '\0') {
          PrintF(" from ");
        }
      }
      PrintOutputInfo(this,pNVar6);
      if (FLAG_trace_representation != '\0') {
        PrintF(" to ");
      }
      uStack_88 = *(undefined8 *)(param_4 + 8);
      local_90 = *(undefined8 *)param_4;
      uStack_78 = *(undefined8 *)(param_4 + 0x18);
      uStack_80 = *(undefined8 *)(param_4 + 0x10);
      PrintUseInfo(this,&local_90);
      if (FLAG_trace_representation != '\0') {
        PrintF("\n");
      }
      if ((param_5 == 0) &&
         (param_5 = *(long *)(*(long *)(this + 0x18) +
                              ((ulong)*(uint *)((long)plVar5 + 0x14) & 0xffffff) * 0x28 + 0x18),
         param_5 == 0)) {
        param_5 = plVar5[1];
      }
      uStack_a8 = *(undefined8 *)(param_4 + 8);
      local_b0 = *(undefined8 *)param_4;
      uStack_98 = *(undefined8 *)(param_4 + 0x18);
      uStack_a0 = *(undefined8 *)(param_4 + 0x10);
      this_00 = (Node *)RepresentationChanger::GetRepresentationFor
                                  (*(RepresentationChanger **)(this + 0x80),plVar5,*pNVar7,param_5,
                                   param_1,&local_b0);
      uVar2 = *(uint *)((long)param_1 + 0x14) & 0xf000000;
      plVar5 = plVar1;
      if (uVar2 == 0xf000000) {
        plVar5 = (long *)(*plVar1 + 0x10);
      }
      this_01 = (Node *)plVar5[(int)param_2];
      if (this_01 != this_00) {
        if (uVar2 == 0xf000000) {
          param_1 = (long *)*plVar1;
        }
        if (this_01 != (Node *)0x0) {
          Node::RemoveUse(this_01,(Use *)(param_1 + (long)(int)~param_2 * 3));
        }
        plVar5[(int)param_2] = (long)this_00;
        if (this_00 != (Node *)0x0) {
          Node::AppendUse(this_00,(Use *)(param_1 + (long)(int)~param_2 * 3));
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

