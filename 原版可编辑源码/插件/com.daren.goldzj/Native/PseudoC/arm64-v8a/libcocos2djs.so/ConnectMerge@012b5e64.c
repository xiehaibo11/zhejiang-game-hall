
/* v8::internal::compiler::CFGBuilder::ConnectMerge(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CFGBuilder::ConnectMerge(CFGBuilder *this,Node *param_1)

{
  Node *pNVar1;
  BasicBlock *pBVar2;
  BasicBlock *pBVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  Node *pNVar7;
  Node *pNVar8;
  
  if (*(short *)(*(long *)param_1 + 0x10) == 10) {
    lVar5 = *(long *)(*(long *)(*(long *)(this + 8) + 8) + 0x10);
    plVar6 = (long *)(lVar5 + 0x20);
    if ((~*(uint *)(lVar5 + 0x14) & 0xf000000) == 0) {
      plVar6 = (long *)(*plVar6 + 0x10);
    }
    if ((Node *)*plVar6 == param_1) {
      return;
    }
  }
  pBVar2 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),param_1);
  pNVar8 = param_1 + 0x20;
  uVar4 = (byte)param_1[0x17] & 0xf;
  if (uVar4 == 0xf) {
    uVar4 = *(uint *)(*(long *)pNVar8 + 8);
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  if (uVar4 != 0) {
    pNVar1 = pNVar8 + (long)(int)uVar4 * 8;
    do {
      pNVar7 = *(Node **)pNVar8;
      pBVar3 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar7);
      if (pBVar3 == (BasicBlock *)0x0) {
        do {
          pNVar7 = (Node *)NodeProperties::GetControlInput(pNVar7,0);
          pBVar3 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar7);
        } while (pBVar3 == (BasicBlock *)0x0);
        if (pBVar2 != (BasicBlock *)0x0) goto LAB_012b5f5c;
LAB_012b5fb4:
        if (FLAG_trace_turbo_scheduler != '\0') {
          PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                 *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar3 + 0xa0));
        }
      }
      else {
        if (pBVar2 == (BasicBlock *)0x0) goto LAB_012b5fb4;
LAB_012b5f5c:
        if (FLAG_trace_turbo_scheduler != '\0') {
          PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                 *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar3 + 0xa0),
                 (ulong)*(uint *)(pBVar2 + 0xa0));
        }
      }
      Schedule::AddGoto(*(Schedule **)(this + 0x10),pBVar3,pBVar2);
      pNVar8 = pNVar8 + 8;
    } while (pNVar8 != pNVar1);
  }
  return;
}

