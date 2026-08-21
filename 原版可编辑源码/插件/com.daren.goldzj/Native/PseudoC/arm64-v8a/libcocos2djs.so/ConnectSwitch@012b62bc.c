
/* v8::internal::compiler::CFGBuilder::ConnectSwitch(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CFGBuilder::ConnectSwitch(CFGBuilder *this,Node *param_1)

{
  int iVar1;
  char cVar2;
  Zone *this_00;
  Node *pNVar3;
  BasicBlock *pBVar4;
  Node **ppNVar5;
  ulong uVar6;
  ulong uVar7;
  Node **ppNVar8;
  
  this_00 = *(Zone **)this;
  iVar1 = *(int *)(*(long *)param_1 + 0x28);
  uVar7 = (ulong)iVar1;
  ppNVar5 = *(Node ***)(this_00 + 0x10);
  uVar6 = uVar7 * 8;
  if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar5) ||
      uVar6 - (*(long *)(this_00 + 0x18) - (long)ppNVar5) == 0) {
    *(Node ***)(this_00 + 0x10) = ppNVar5 + uVar7;
  }
  else {
    ppNVar5 = (Node **)Zone::NewExpand(this_00,uVar6);
  }
  NodeProperties::CollectControlProjections(param_1,ppNVar5,uVar7);
  ppNVar8 = ppNVar5;
  uVar6 = uVar7;
  if (iVar1 != 0) {
    do {
      pNVar3 = (Node *)Schedule::block(*(Schedule **)(this + 0x10),*ppNVar8);
      uVar6 = uVar6 - 1;
      *ppNVar8 = pNVar3;
      ppNVar8 = ppNVar8 + 1;
    } while (uVar6 != 0);
  }
  if (*(Node **)(this + 0x90) == param_1) {
    if (iVar1 != 0) {
      uVar6 = 0;
      do {
        if (ppNVar5[uVar6] == (Node *)0x0) {
          if (FLAG_trace_turbo_scheduler != '\0') {
            PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                   *(undefined8 *)(*(long *)param_1 + 8),
                   (ulong)*(uint *)(*(long *)(this + 0x98) + 0xa0));
          }
        }
        else if (FLAG_trace_turbo_scheduler != '\0') {
          PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                 *(undefined8 *)(*(long *)param_1 + 8),
                 (ulong)*(uint *)(*(long *)(this + 0x98) + 0xa0),
                 (ulong)*(uint *)(ppNVar5[uVar6] + 0xa0));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    Schedule::InsertSwitch
              (*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),
               *(BasicBlock **)(this + 0xa0),param_1,(BasicBlock **)ppNVar5,uVar7);
  }
  else {
    pNVar3 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pBVar4 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar3);
    while (pBVar4 == (BasicBlock *)0x0) {
      pNVar3 = (Node *)NodeProperties::GetControlInput(pNVar3,0);
      pBVar4 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar3);
    }
    if (iVar1 != 0) {
      uVar6 = 0;
      do {
        if (ppNVar5[uVar6] == (Node *)0x0) {
          if (FLAG_trace_turbo_scheduler != '\0') {
            PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                   *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar4 + 0xa0));
          }
        }
        else if (FLAG_trace_turbo_scheduler != '\0') {
          PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                 *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar4 + 0xa0),
                 (ulong)*(uint *)(ppNVar5[uVar6] + 0xa0));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    Schedule::AddSwitch(*(Schedule **)(this + 0x10),pBVar4,param_1,(BasicBlock **)ppNVar5,uVar7);
  }
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      cVar2 = BranchHintOf(*(Operator **)**(undefined8 **)(ppNVar5[uVar6] + 0x40));
      if (cVar2 == '\x02') {
        ppNVar5[uVar6][8] = (Node)0x1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return;
}

