
/* v8::internal::GlobalHandles::NodeSpace<v8::internal::GlobalHandles::TracedNode>::Release(v8::internal::GlobalHandles::TracedNode*)
    */

void v8::internal::GlobalHandles::NodeSpace<v8::internal::GlobalHandles::TracedNode>::Release
               (TracedNode *param_1)

{
  int iVar1;
  int *piVar2;
  TracedNode *pTVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + (ulong)(byte)param_1[10] * -0x20 + 0x2010);
  lVar4 = plVar5[3];
  *(undefined8 *)param_1 = 0x1baffed00baffedf;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xb] = (TracedNode)((byte)param_1[0xb] & 0xfc | 0x28);
  *(long *)(param_1 + 0x10) = lVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar5[3] = (long)param_1;
  pTVar3 = param_1 + (ulong)(byte)param_1[10] * -0x20;
  iVar1 = *(int *)(pTVar3 + 0x2028);
  *(int *)(pTVar3 + 0x2028) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (*(long *)(pTVar3 + 0x2018) != 0) {
      *(undefined8 *)(*(long *)(pTVar3 + 0x2018) + 0x2020) = *(undefined8 *)(pTVar3 + 0x2020);
    }
    if (*(long *)(pTVar3 + 0x2020) != 0) {
      *(undefined8 *)(*(long *)(pTVar3 + 0x2020) + 0x2018) = *(undefined8 *)(pTVar3 + 0x2018);
    }
    if ((TracedNode *)plVar5[2] == pTVar3) {
      plVar5[2] = *(long *)(pTVar3 + 0x2018);
    }
  }
  lVar4 = *(long *)(*(long *)*plVar5 + 0x9520);
  if (*(char *)(lVar4 + 0x1778) == '\0') {
    *(char *)(lVar4 + 0x1778) = '\x01';
    piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1760))
    ;
    *(int **)(lVar4 + 6000) = piVar2;
  }
  else {
    piVar2 = *(int **)(lVar4 + 6000);
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + -1;
  }
  *(long *)(*plVar5 + 0x48) = *(long *)(*plVar5 + 0x48) + -1;
  return;
}

