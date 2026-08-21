
/* duDebugDrawNavMeshNodes(duDebugDraw*, dtNavMeshQuery const&) */

void duDebugDrawNavMeshNodes(duDebugDraw *param_1,dtNavMeshQuery *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  
  if ((param_1 != (duDebugDraw *)0x0) &&
     (plVar7 = *(long **)(param_2 + 0x58), plVar7 != (long *)0x0)) {
    (**(code **)(*(long *)param_1 + 0x20))(0x40800000,param_1,0);
    if (0 < *(int *)((long)plVar7 + 0x1c)) {
      lVar8 = 0;
      do {
        uVar2 = *(ushort *)(plVar7[1] + lVar8 * 2);
        while (uVar2 != 0xffff) {
          uVar4 = (ulong)uVar2;
          puVar5 = (undefined4 *)(*plVar7 + uVar4 * 0x1c);
          if (puVar5 != (undefined4 *)0x0) {
            lVar9 = *plVar7 + uVar4 * 0x1c;
            (**(code **)(*(long *)param_1 + 0x30))
                      (*puVar5,*(float *)(lVar9 + 4) + 0.5,*(undefined4 *)(lVar9 + 8),param_1,
                       0xff00c0ff);
          }
          uVar2 = *(ushort *)(plVar7[2] + uVar4 * 2);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)((long)plVar7 + 0x1c));
    }
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    (**(code **)(*(long *)param_1 + 0x20))(0x40000000,param_1,1);
    iVar3 = *(int *)((long)plVar7 + 0x1c);
    if (0 < iVar3) {
      lVar8 = 0;
      do {
        uVar2 = *(ushort *)(plVar7[1] + lVar8 * 2);
        if (uVar2 != 0xffff) {
          do {
            uVar4 = (ulong)uVar2;
            lVar9 = *plVar7;
            puVar5 = (undefined4 *)(lVar9 + uVar4 * 0x1c);
            if ((puVar5 != (undefined4 *)0x0) &&
               (uVar1 = *(uint *)(lVar9 + uVar4 * 0x1c + 0x14) & 0xffffff, uVar1 != 0)) {
              uVar10 = (ulong)(uVar1 - 1);
              puVar11 = (undefined4 *)(lVar9 + uVar10 * 0x1c);
              if (puVar11 != (undefined4 *)0x0) {
                lVar6 = lVar9 + uVar4 * 0x1c;
                (**(code **)(*(long *)param_1 + 0x30))
                          (*puVar5,*(float *)(lVar6 + 4) + 0.5,*(undefined4 *)(lVar6 + 8),param_1,
                           0x8000c0ff);
                lVar9 = lVar9 + uVar10 * 0x1c;
                (**(code **)(*(long *)param_1 + 0x30))
                          (*puVar11,*(float *)(lVar9 + 4) + 0.5,*(undefined4 *)(lVar9 + 8),param_1,
                           0x8000c0ff);
              }
            }
            uVar2 = *(ushort *)(plVar7[2] + uVar4 * 2);
          } while (uVar2 != 0xffff);
          iVar3 = *(int *)((long)plVar7 + 0x1c);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x011835d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  return;
}

