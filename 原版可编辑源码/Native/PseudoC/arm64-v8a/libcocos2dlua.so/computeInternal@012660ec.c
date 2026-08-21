
/* btConvexHullInternal::computeInternal(int, int, btConvexHullInternal::IntermediateHull&) */

void __thiscall
btConvexHullInternal::computeInternal
          (btConvexHullInternal *this,int param_1,int param_2,IntermediateHull *param_3)

{
  Vertex *pVVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  Vertex *pVVar8;
  int iVar9;
  Vertex *pVVar10;
  long lVar11;
  Vertex *pVVar12;
  Vertex *pVVar13;
  long lVar14;
  Vertex *pVVar15;
  ulong uVar16;
  Vertex *pVVar17;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar5 = param_2 - param_1;
  if (iVar5 == 0) {
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  else {
    if (iVar5 == 2) {
      pVVar15 = *(Vertex **)(*(long *)(this + 0x90) + (long)param_1 * 8);
      iVar5 = *(int *)(pVVar15 + 0xe8);
      iVar9 = *(int *)(pVVar15 + 0xec);
      iVar3 = *(int *)(pVVar15 + 0x68);
      iVar4 = *(int *)(pVVar15 + 0x6c);
      if (((iVar3 != iVar5) || (iVar4 != iVar9)) ||
         (iVar9 = iVar4, *(int *)(pVVar15 + 0x70) != *(int *)(pVVar15 + 0xf0))) {
        pVVar1 = pVVar15 + 0x80;
        if (iVar4 == iVar9 && iVar3 == iVar5) {
          pVVar17 = pVVar15;
          pVVar8 = pVVar1;
          if (*(int *)(pVVar15 + 0x70) <= *(int *)(pVVar15 + 0xf0)) {
            pVVar17 = pVVar1;
            pVVar8 = pVVar15;
          }
          *(Vertex **)pVVar8 = pVVar8;
          *(Vertex **)(pVVar8 + 8) = pVVar8;
          pVVar10 = pVVar8;
          pVVar12 = pVVar8;
          pVVar13 = pVVar8;
          pVVar15 = pVVar8;
        }
        else {
          bVar6 = -1 < iVar3 - iVar5;
          bVar7 = -1 < iVar4 - iVar9;
          pVVar10 = pVVar1;
          pVVar8 = pVVar15;
          if (bVar6 && (iVar3 != iVar5 || bVar7)) {
            pVVar10 = pVVar15;
            pVVar8 = pVVar1;
          }
          pVVar13 = pVVar1;
          pVVar12 = pVVar15;
          if (bVar7 && (bVar6 || iVar4 != iVar9)) {
            pVVar13 = pVVar15;
            pVVar12 = pVVar1;
          }
          *(Vertex **)pVVar15 = pVVar1;
          *(Vertex **)(pVVar15 + 8) = pVVar1;
          *(Vertex **)(pVVar15 + 0x80) = pVVar15;
          *(Vertex **)(pVVar15 + 0x88) = pVVar15;
          pVVar17 = pVVar1;
        }
        *(Vertex **)param_3 = pVVar8;
        *(Vertex **)(param_3 + 8) = pVVar10;
        *(Vertex **)(param_3 + 0x10) = pVVar12;
        *(Vertex **)(param_3 + 0x18) = pVVar13;
        lVar11 = newEdgePair(this,pVVar15,pVVar17);
        *(long *)lVar11 = lVar11;
        *(long *)(lVar11 + 8) = lVar11;
        *(long *)(pVVar15 + 0x10) = lVar11;
        lVar11 = *(long *)(lVar11 + 0x10);
        *(long *)lVar11 = lVar11;
        *(long *)(lVar11 + 8) = lVar11;
        *(long *)(pVVar17 + 0x10) = lVar11;
        return;
      }
    }
    else {
      if (iVar5 != 1) {
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        uVar2 = param_1 + (iVar5 >> 1);
        uVar16 = (ulong)uVar2;
        if ((int)uVar2 < param_2) {
          uVar16 = (ulong)(int)uVar2;
          lVar11 = *(long *)(*(long *)(this + 0x90) + (long)(int)(uVar2 - 1) * 8);
          while ((lVar14 = *(long *)(*(long *)(this + 0x90) + uVar16 * 8),
                 *(int *)(lVar14 + 0x68) == *(int *)(lVar11 + 0x68) &&
                 (*(int *)(lVar14 + 0x6c) == *(int *)(lVar11 + 0x6c)))) {
            if ((*(int *)(lVar14 + 0x70) != *(int *)(lVar11 + 0x70)) ||
               (uVar16 = uVar16 + 1, (long)param_2 <= (long)uVar16)) break;
          }
        }
        computeInternal(this,param_1,uVar2,param_3);
        uStack_48 = 0;
        local_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        computeInternal(this,(int)uVar16,param_2,(IntermediateHull *)&local_50);
        merge(this,param_3,(IntermediateHull *)&local_50);
        return;
      }
      pVVar15 = *(Vertex **)(*(long *)(this + 0x90) + (long)param_1 * 8);
    }
    *(Vertex **)(pVVar15 + 8) = pVVar15;
    *(long *)(pVVar15 + 0x10) = 0;
    *(Vertex **)pVVar15 = pVVar15;
    *(Vertex **)param_3 = pVVar15;
    *(Vertex **)(param_3 + 8) = pVVar15;
    *(Vertex **)(param_3 + 0x10) = pVVar15;
    *(Vertex **)(param_3 + 0x18) = pVVar15;
  }
  return;
}

