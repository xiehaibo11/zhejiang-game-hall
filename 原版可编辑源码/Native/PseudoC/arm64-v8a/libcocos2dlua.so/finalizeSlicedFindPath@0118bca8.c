
/* dtNavMeshQuery::finalizeSlicedFindPath(unsigned int*, int*, int) */

void __thiscall
dtNavMeshQuery::finalizeSlicedFindPath(dtNavMeshQuery *this,uint *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  dtQueryFilter *pdVar6;
  uint uVar7;
  dtQueryFilter *pdVar8;
  float fVar9;
  dtQueryFilter *pdVar10;
  dtNavMeshQuery *pdVar11;
  int iVar12;
  undefined1 auStack_90 [16];
  uint *local_80;
  int local_78;
  int local_74;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_2 = 0;
  pdVar11 = this + 8;
  if ((int)*(uint *)pdVar11 < 0) {
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)pdVar11 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    uVar4 = 0x80000000;
  }
  else {
    if (*(float *)(this + 0x1c) != *(float *)(this + 0x20)) {
      if (*(float *)(*(dtQueryFilter **)(this + 0x10) + 0x18) != *(float *)(this + 0x20)) {
        *(uint *)pdVar11 = *(uint *)pdVar11 | 0x40;
      }
      uVar4 = 0;
      pdVar8 = *(dtQueryFilter **)(this + 0x10);
      pdVar10 = (dtQueryFilter *)0x0;
      do {
        pdVar6 = pdVar8;
        fVar9 = *(float *)(pdVar6 + 0x14);
        if (((uint)fVar9 & 0xffffff) == 0) {
          pdVar8 = (dtQueryFilter *)0x0;
        }
        else {
          pdVar8 = (dtQueryFilter *)
                   (**(long **)(this + 0x58) + (ulong)(((uint)fVar9 & 0xffffff) - 1) * 0x1c);
        }
        uVar7 = 0;
        if (pdVar10 != (dtQueryFilter *)0x0) {
          uVar7 = (int)((ulong)((long)pdVar10 - **(long **)(this + 0x58)) >> 2) * -0x49249249 + 1;
        }
        uVar2 = (uint)fVar9 >> 0x1a & 3 | uVar4;
        uVar4 = (uint)fVar9 >> 0x1a & 4;
        fVar9 = (float)((uint)fVar9 & 0xe3000000 | uVar2 << 0x1a | uVar7 & 0xffffff);
        *(float *)(pdVar6 + 0x14) = fVar9;
        pdVar10 = pdVar6;
      } while (pdVar8 != (dtQueryFilter *)0x0);
      iVar12 = 0;
      uVar4 = uVar7 & 0xffffff;
      if ((uVar7 & 0xffffff) == 0) goto LAB_0118be28;
LAB_0118bddc:
      pdVar8 = (dtQueryFilter *)(**(long **)(this + 0x58) + (ulong)(uVar4 - 1) * 0x1c);
      pfVar5 = (float *)(ulong)(uint)*(float *)(pdVar6 + 0x18);
      if (((uint)fVar9 >> 0x1c & 1) != 0) goto LAB_0118be34;
      do {
        param_1[iVar12] = (uint)pfVar5;
        iVar12 = iVar12 + 1;
        uVar7 = (uint)(param_3 <= iVar12);
        uVar4 = uVar7 << 4;
        pdVar6 = pdVar8;
        while( true ) {
          if (uVar7 != 0) {
            *(uint *)pdVar11 = *(uint *)pdVar11 | uVar4;
            goto LAB_0118be90;
          }
          if (pdVar6 == (dtQueryFilter *)0x0) goto LAB_0118be90;
          fVar9 = *(float *)(pdVar6 + 0x14);
          uVar4 = (uint)fVar9 & 0xffffff;
          if (uVar4 != 0) goto LAB_0118bddc;
LAB_0118be28:
          pdVar8 = (dtQueryFilter *)0x0;
          pfVar5 = (float *)(ulong)(uint)*(float *)(pdVar6 + 0x18);
          if (((uint)fVar9 >> 0x1c & 1) == 0) break;
LAB_0118be34:
          local_80 = param_1 + iVar12;
          local_74 = param_3 - iVar12;
          uVar4 = raycast((uint)this,pfVar5,(float *)pdVar6,pdVar8,
                          (uint)*(undefined8 *)(this + 0x40),(dtRaycastHit *)0x0,(uint)auStack_90);
          iVar1 = local_78 + iVar12;
          iVar12 = iVar1 + -1;
          if (param_1[iVar12] != *(uint *)(pdVar8 + 0x18)) {
            iVar12 = iVar1;
          }
          uVar7 = uVar4 & 0xffffff;
          uVar4 = uVar4 & 0xffffff;
          pdVar6 = pdVar8;
        }
      } while( true );
    }
    *param_1 = (uint)*(float *)(this + 0x1c);
    iVar12 = 1;
LAB_0118be90:
    *(undefined8 *)(this + 0x48) = 0;
    uVar4 = *(uint *)pdVar11 & 0xffffff | 0x40000000;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)pdVar11 = 0;
    *param_2 = iVar12;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

