
/* duDebugDrawNavMeshPoly(duDebugDraw*, dtNavMesh const&, unsigned int, unsigned int) */

void duDebugDrawNavMeshPoly(duDebugDraw *param_1,dtNavMesh *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  dtPoly *local_78;
  dtMeshTile *pdStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 != (duDebugDraw *)0x0) {
    local_78 = (dtPoly *)0x0;
    pdStack_70 = (dtMeshTile *)0x0;
    iVar5 = dtNavMesh::getTileAndPolyByRef(param_2,param_3,&pdStack_70,&local_78);
    if (-1 < iVar5) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,0);
      uVar2 = param_4 & 0xffffff | 0x40000000;
      uVar7 = (long)local_78 - *(long *)(pdStack_70 + 0x10);
      if (((byte)local_78[0x1f] & 0xc0) == 0x40) {
        lVar9 = *(long *)(pdStack_70 + 0x48);
        iVar5 = *(int *)(*(long *)(pdStack_70 + 8) + 0x38);
        (**(code **)(*(long *)param_1 + 0x20))(0x40000000,param_1,1);
        pfVar6 = (float *)(lVar9 + (ulong)(uint)((int)(uVar7 >> 5) - iVar5) * 0x24);
        fVar13 = 0.0;
        if ((*(byte *)((long)pfVar6 + 0x1e) & 1) != 0) {
          fVar13 = 0.6;
        }
        duAppendArc(param_1,*pfVar6,pfVar6[1],pfVar6[2],pfVar6[3],pfVar6[4],pfVar6[5],0.25,fVar13,
                    0.6,uVar2);
      }
      else {
        lVar9 = *(long *)(pdStack_70 + 0x28);
        uVar7 = uVar7 >> 5 & 0xffffffff;
        (**(code **)(*(long *)param_1 + 0x20))(0x3f800000,param_1,2);
        pbVar10 = (byte *)(lVar9 + uVar7 * 0xc + 9);
        if (*pbVar10 != 0) {
          piVar12 = (int *)(lVar9 + uVar7 * 0xc);
          uVar11 = 0;
          do {
            pbVar1 = (byte *)(*(long *)(pdStack_70 + 0x38) + (ulong)((uVar11 + piVar12[1]) * 4));
            bVar3 = *pbVar1;
            if ((uint)bVar3 < (uint)(byte)local_78[0x1e]) {
              pcVar8 = *(code **)(*(long *)param_1 + 0x28);
              lVar9 = *(long *)(pdStack_70 + 0x18) +
                      (ulong)*(ushort *)(local_78 + (ulong)bVar3 * 2 + 4) * 0xc;
            }
            else {
              pcVar8 = *(code **)(*(long *)param_1 + 0x28);
              lVar9 = *(long *)(pdStack_70 + 0x30) +
                      (ulong)((((uint)bVar3 - (uint)(byte)local_78[0x1e]) + *piVar12) * 3) * 4;
            }
            (*pcVar8)(param_1,lVar9,uVar2);
            bVar3 = pbVar1[1];
            if ((uint)bVar3 < (uint)(byte)local_78[0x1e]) {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(pdStack_70 + 0x18) +
                                 (ulong)*(ushort *)(local_78 + (ulong)bVar3 * 2 + 4) * 0xc,uVar2);
            }
            else {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(pdStack_70 + 0x30) +
                                 (ulong)((((uint)bVar3 - (uint)(byte)local_78[0x1e]) + *piVar12) * 3
                                        ) * 4,uVar2);
            }
            bVar3 = pbVar1[2];
            if ((uint)bVar3 < (uint)(byte)local_78[0x1e]) {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(pdStack_70 + 0x18) +
                                 (ulong)*(ushort *)(local_78 + (ulong)bVar3 * 2 + 4) * 0xc,uVar2);
            }
            else {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(pdStack_70 + 0x30) +
                                 (ulong)((((uint)bVar3 - (uint)(byte)local_78[0x1e]) + *piVar12) * 3
                                        ) * 4,uVar2);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *pbVar10);
        }
      }
      (**(code **)(*(long *)param_1 + 0x48))(param_1);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,1);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

