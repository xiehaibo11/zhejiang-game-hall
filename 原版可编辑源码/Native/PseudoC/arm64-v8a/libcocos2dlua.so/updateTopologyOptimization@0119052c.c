
/* dtCrowd::updateTopologyOptimization(dtCrowdAgent**, int, float) */

void __thiscall
dtCrowd::updateTopologyOptimization(dtCrowd *this,dtCrowdAgent **param_1,int param_2,float param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  dtCrowdAgent *unaff_x23;
  dtCrowdAgent *pdVar5;
  ulong uVar6;
  float fVar7;
  dtCrowdAgent *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_2 != 0) && (0 < param_2)) {
    uVar6 = 0;
    uVar4 = 0;
    do {
      pdVar5 = param_1[uVar6];
      if ((((pdVar5[1] == (dtCrowdAgent)0x1) && (pdVar5[0x250] != (dtCrowdAgent)0x0)) &&
          (pdVar5[0x250] != (dtCrowdAgent)0x6)) && (((byte)pdVar5[0x1fc] >> 4 & 1) != 0)) {
        fVar7 = *(float *)(pdVar5 + 0x164) + param_3;
        *(float *)(pdVar5 + 0x164) = fVar7;
        if (0.5 <= fVar7) {
          if (uVar4 != 0) {
            if (fVar7 <= *(float *)(unaff_x23 + 0x164)) {
              if (uVar4 != 0) goto LAB_011905c8;
            }
            else {
              if (uVar4 == 0) {
LAB_0119061c:
                uVar3 = 0;
              }
              else {
                uVar3 = 0;
                do {
                  if (*(float *)(unaff_x23 + 0x164) <= fVar7) goto LAB_0119061c;
                  uVar3 = uVar3 + 1;
                } while (uVar4 != uVar3);
              }
              iVar2 = (int)uVar3;
              uVar4 = uVar4 - iVar2;
              if (-iVar2 <= (int)uVar4) {
                uVar4 = -iVar2;
              }
              if (0 < (int)uVar4) {
                memmove(&local_70 + (iVar2 + 1),&local_70 + (uVar3 & 0xffffffff),
                        -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
              }
            }
          }
          uVar4 = 1;
          unaff_x23 = pdVar5;
          local_70 = pdVar5;
        }
      }
LAB_011905c8:
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uint)param_2);
    if (uVar4 != 0) {
      dtPathCorridor::optimizePathTopology
                ((dtPathCorridor *)(unaff_x23 + 8),*(dtNavMeshQuery **)(this + 0x13c8),
                 (dtQueryFilter *)(this + (ulong)(byte)unaff_x23[0x1fe] * 0x104 + 0x380));
      *(undefined4 *)(unaff_x23 + 0x164) = 0;
      pdVar5 = local_70;
      while (uVar4 = uVar4 - 1, local_70 = pdVar5, uVar4 != 0) {
        dtPathCorridor::optimizePathTopology
                  ((dtPathCorridor *)(pdVar5 + 8),*(dtNavMeshQuery **)(this + 0x13c8),
                   (dtQueryFilter *)(this + (ulong)(byte)pdVar5[0x1fe] * 0x104 + 0x380));
        *(undefined4 *)(pdVar5 + 0x164) = 0;
        pdVar5 = local_70;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

