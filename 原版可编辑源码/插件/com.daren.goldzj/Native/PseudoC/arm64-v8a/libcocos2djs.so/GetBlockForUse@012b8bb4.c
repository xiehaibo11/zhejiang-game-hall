
/* v8::internal::compiler::ScheduleLateNodeVisitor::GetBlockForUse(v8::internal::compiler::Edge) */

long v8::internal::compiler::ScheduleLateNodeVisitor::GetBlockForUse
               (ScheduleLateNodeVisitor *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  Node *pNVar6;
  long lVar7;
  
  uVar3 = (ulong)(*(uint *)(param_2 + 0x10) >> 1);
  pNVar6 = (Node *)(param_2 + uVar3 * 0x18 + 0x18);
  if ((*(uint *)(param_2 + 0x10) & 1) == 0) {
    pNVar6 = *(Node **)pNVar6;
  }
  lVar5 = *(long *)pNVar6;
  uVar2 = *(ushort *)(lVar5 + 0x10);
  if (uVar2 - 0x23 < 2) {
    uVar4 = (ulong)*(uint *)(pNVar6 + 0x14) & 0xffffff;
    iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + uVar4 * 0x10 + 0xc);
    if (iVar1 == 2) {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("  input@%d into a fixed phi #%d:%s\n",uVar3,uVar4,*(undefined8 *)(lVar5 + 8));
      }
      pNVar6 = (Node *)NodeProperties::GetControlInput(pNVar6,0);
      pNVar6 = (Node *)NodeProperties::GetControlInput(pNVar6,*(uint *)(param_2 + 0x10) >> 1);
      lVar7 = *(long *)(*(long *)(param_1 + 8) + 0xd0);
      lVar5 = Schedule::block(*(Schedule **)(lVar7 + 0x10),pNVar6);
      while (lVar5 == 0) {
        pNVar6 = (Node *)NodeProperties::GetControlInput(pNVar6,0);
        lVar5 = Schedule::block(*(Schedule **)(lVar7 + 0x10),pNVar6);
      }
      return lVar5;
    }
    if (iVar1 == 3) {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("  inspecting uses of coupled #%d:%s\n",uVar4,*(undefined8 *)(lVar5 + 8));
      }
      lVar5 = GetCommonDominatorOfUses(param_1,pNVar6);
      return lVar5;
    }
  }
  else if ((uVar2 == 10) || (uVar2 == 1)) {
    lVar7 = *(long *)(param_1 + 8);
    if (*(int *)(*(long *)(lVar7 + 0xb0) + ((ulong)*(uint *)(pNVar6 + 0x14) & 0xffffff) * 0x10 + 0xc
                ) == 2) {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("  input@%d into a fixed merge #%d:%s\n",uVar3,
               (ulong)*(uint *)(pNVar6 + 0x14) & 0xffffff,*(undefined8 *)(lVar5 + 8));
        lVar7 = *(long *)(param_1 + 8);
      }
      lVar7 = *(long *)(lVar7 + 0xd0);
      pNVar6 = (Node *)*param_3;
      lVar5 = Schedule::block(*(Schedule **)(lVar7 + 0x10),pNVar6);
      while (lVar5 == 0) {
        pNVar6 = (Node *)NodeProperties::GetControlInput(pNVar6,0);
        lVar5 = Schedule::block(*(Schedule **)(lVar7 + 0x10),pNVar6);
      }
      return lVar5;
    }
  }
  lVar5 = Schedule::block(*(Schedule **)(param_1 + 0x10),pNVar6);
  if ((lVar5 != 0) && (FLAG_trace_turbo_scheduler != '\0')) {
    PrintF("  must dominate use #%d:%s in id:%d\n",(ulong)(*(uint *)(pNVar6 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)pNVar6 + 8),(ulong)*(uint *)(lVar5 + 0xa0));
  }
  return lVar5;
}

