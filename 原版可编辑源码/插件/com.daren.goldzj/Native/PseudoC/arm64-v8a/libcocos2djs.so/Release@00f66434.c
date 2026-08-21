
/* v8::internal::GlobalHandles::NodeSpace<v8::internal::GlobalHandles::Node>::Release(v8::internal::GlobalHandles::Node*)
    */

void v8::internal::GlobalHandles::NodeSpace<v8::internal::GlobalHandles::Node>::Release
               (Node *param_1)

{
  int iVar1;
  int *piVar2;
  Node *pNVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + (ulong)(byte)param_1[10] * -0x20 + 0x2010);
  lVar4 = plVar5[3];
  *(undefined8 *)param_1 = 0x1baffed00baffedf;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xb] = (Node)((byte)param_1[0xb] & 0xf8);
  *(long *)(param_1 + 0x10) = lVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar5[3] = (long)param_1;
  pNVar3 = param_1 + (ulong)(byte)param_1[10] * -0x20;
  iVar1 = *(int *)(pNVar3 + 0x2028);
  *(int *)(pNVar3 + 0x2028) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (*(long *)(pNVar3 + 0x2018) != 0) {
      *(undefined8 *)(*(long *)(pNVar3 + 0x2018) + 0x2020) = *(undefined8 *)(pNVar3 + 0x2020);
    }
    if (*(long *)(pNVar3 + 0x2020) != 0) {
      *(undefined8 *)(*(long *)(pNVar3 + 0x2020) + 0x2018) = *(undefined8 *)(pNVar3 + 0x2018);
    }
    if ((Node *)plVar5[2] == pNVar3) {
      plVar5[2] = *(long *)(pNVar3 + 0x2018);
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

