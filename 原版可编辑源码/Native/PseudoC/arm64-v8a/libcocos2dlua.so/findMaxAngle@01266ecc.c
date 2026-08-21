
/* btConvexHullInternal::findMaxAngle(bool, btConvexHullInternal::Vertex const*,
   btConvexHullInternal::Point32 const&, btConvexHullInternal::Point64 const&,
   btConvexHullInternal::Point64 const&, btConvexHullInternal::Rational64&) */

long * __thiscall
btConvexHullInternal::findMaxAngle
          (btConvexHullInternal *this,bool param_1,Vertex *param_2,Point32 *param_3,Point64 *param_4
          ,Point64 *param_5,Rational64 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long local_78;
  long lStack_70;
  int local_68;
  
  plVar8 = *(long **)(param_2 + 0x10);
  if (plVar8 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = (long *)0x0;
    plVar15 = plVar8;
    do {
      if (*(int *)(this + 0xa0) < (int)plVar15[5]) {
        lVar9 = plVar15[3];
        iVar1 = *(int *)(lVar9 + 0x68);
        iVar2 = *(int *)(lVar9 + 0x6c);
        iVar3 = *(int *)(lVar9 + 0x70);
        lVar9 = (long)iVar1 - (long)*(int *)(param_2 + 0x68);
        lVar13 = (long)iVar2 - (long)*(int *)(param_2 + 0x6c);
        lVar14 = (long)iVar3 - (long)*(int *)(param_2 + 0x70);
        local_78 = *(long *)param_5 * lVar9 + *(long *)(param_5 + 8) * lVar13 +
                   *(long *)(param_5 + 0x10) * lVar14;
        lStack_70 = *(long *)param_4 * lVar9 + *(long *)(param_4 + 8) * lVar13 +
                    *(long *)(param_4 + 0x10) * lVar14;
        if (local_78 < 1) {
          if (local_78 < 0) {
            iVar7 = -1;
            local_68 = -1;
            local_78 = -local_78;
          }
          else {
            iVar7 = 0;
            local_78 = 0;
            local_68 = 0;
          }
        }
        else {
          iVar7 = 1;
          local_68 = 1;
        }
        if (lStack_70 < 1) {
          if (lStack_70 < 0) {
            iVar7 = -iVar7;
            lStack_70 = -lStack_70;
            local_68 = iVar7;
            if (lStack_70 != 0) goto LAB_01266fb4;
          }
          else {
            lStack_70 = 0;
          }
          if (iVar7 != 0) goto LAB_01266fb4;
        }
        else {
LAB_01266fb4:
          if (plVar12 == (long *)0x0) {
            *(int *)(param_6 + 0x10) = local_68;
            *(long *)(param_6 + 8) = lStack_70;
            *(long *)param_6 = local_78;
            plVar12 = plVar15;
          }
          else {
            iVar7 = Rational64::compare((Rational64 *)&local_78,param_6);
            if (iVar7 < 0) {
              *(int *)(param_6 + 0x10) = local_68;
              *(long *)(param_6 + 8) = lStack_70;
              *(long *)param_6 = local_78;
              plVar12 = plVar15;
            }
            else if (iVar7 == 0) {
              if ((long *)*plVar12 == plVar15) {
                if ((long *)plVar12[1] == plVar15) {
                  lVar10 = plVar12[3];
                  lVar11 = *(long *)(plVar15[2] + 0x18);
                  iVar7 = *(int *)(lVar10 + 0x6c) - *(int *)(lVar11 + 0x6c);
                  iVar4 = *(int *)(lVar10 + 0x70) - *(int *)(lVar11 + 0x70);
                  iVar2 = iVar2 - *(int *)(lVar11 + 0x6c);
                  iVar5 = *(int *)(lVar10 + 0x68) - *(int *)(lVar11 + 0x68);
                  iVar1 = iVar1 - *(int *)(lVar11 + 0x68);
                  iVar3 = iVar3 - *(int *)(lVar11 + 0x70);
                  cVar6 = '\x01';
                  if (0 < (long)(iVar3 * iVar7 - iVar2 * iVar4) *
                          (long)(*(int *)(param_3 + 8) * (int)lVar13 -
                                *(int *)(param_3 + 4) * (int)lVar14) +
                          (long)(iVar2 * iVar5 - iVar1 * iVar7) *
                          (long)(*(int *)(param_3 + 4) * (int)lVar9 - *(int *)param_3 * (int)lVar13)
                          + (long)(iVar1 * iVar4 - iVar3 * iVar5) *
                            (long)(*(int *)param_3 * (int)lVar14 -
                                  *(int *)(param_3 + 8) * (int)lVar9)) {
                    cVar6 = '\x02';
                  }
                }
                else {
                  cVar6 = '\x02';
                }
              }
              else {
                cVar6 = (long *)plVar12[1] == plVar15;
              }
              if ((cVar6 == '\x02') == param_1) {
                plVar12 = plVar15;
              }
            }
          }
        }
        plVar8 = *(long **)(param_2 + 0x10);
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != plVar8);
  }
  return plVar12;
}

