
/* btConvexHullInternal::getOrientation(btConvexHullInternal::Edge const*,
   btConvexHullInternal::Edge const*, btConvexHullInternal::Point32 const&,
   btConvexHullInternal::Point32 const&) */

bool btConvexHullInternal::getOrientation
               (Edge *param_1,Edge *param_2,Point32 *param_3,Point32 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  
  if (*(Edge **)param_1 != param_2) {
    return *(Edge **)(param_1 + 8) == param_2;
  }
  if (*(Edge **)(param_1 + 8) != param_2) {
    return (bool)2;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
  iVar2 = *(int *)(lVar9 + 0x68) - *(int *)(lVar10 + 0x68);
  iVar3 = *(int *)(lVar1 + 0x68) - *(int *)(lVar10 + 0x68);
  iVar4 = *(int *)(lVar9 + 0x6c) - *(int *)(lVar10 + 0x6c);
  iVar5 = *(int *)(lVar9 + 0x70) - *(int *)(lVar10 + 0x70);
  iVar6 = *(int *)(lVar1 + 0x6c) - *(int *)(lVar10 + 0x6c);
  iVar7 = *(int *)(lVar1 + 0x70) - *(int *)(lVar10 + 0x70);
  uVar8 = 1;
  if (0 < (long)(iVar7 * iVar4 - iVar6 * iVar5) *
          (long)(*(int *)(param_3 + 8) * *(int *)(param_4 + 4) -
                *(int *)(param_3 + 4) * *(int *)(param_4 + 8)) +
          (long)(iVar6 * iVar2 - iVar3 * iVar4) *
          (long)(*(int *)param_4 * *(int *)(param_3 + 4) - *(int *)param_3 * *(int *)(param_4 + 4))
          + (long)(iVar3 * iVar5 - iVar7 * iVar2) *
            (long)(*(int *)param_3 * *(int *)(param_4 + 8) - *(int *)param_4 * *(int *)(param_3 + 8)
                  )) {
    uVar8 = 2;
  }
  return (bool)uVar8;
}

