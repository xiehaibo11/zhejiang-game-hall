
/* dtPathCorridor::moveTargetPosition(float const*, dtNavMeshQuery*, dtQueryFilter const*) */

void __thiscall
dtPathCorridor::moveTargetPosition
          (dtPathCorridor *this,float *param_1,dtNavMeshQuery *param_2,dtQueryFilter *param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_8c;
  uint auStack_88 [16];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_8c = 0;
  uVar7 = dtNavMeshQuery::moveAlongSurface
                    (param_2,*(uint *)(*(long *)(this + 0x18) + (long)*(int *)(this + 0x20) * 4 + -4
                                      ),(float *)(this + 0xc),param_1,param_3,(float *)&local_48,
                     auStack_88,&local_8c,0x10);
  uVar8 = 0;
  if ((uVar7 >> 0x1e & 1) != 0) {
    iVar10 = *(int *)(this + 0x20);
    if (0 < iVar10) {
      lVar11 = 0;
      iVar13 = -1;
      iVar14 = -1;
      do {
        if (local_8c < 1) {
          bVar3 = false;
        }
        else {
          bVar3 = false;
          lVar9 = (long)local_8c;
          iVar12 = iVar13;
          iVar2 = local_8c;
          do {
            iVar2 = iVar2 + -1;
            lVar4 = lVar9 + -1;
            lVar9 = lVar9 + -1;
            bVar6 = *(uint *)(*(long *)(this + 0x18) + lVar11 * 4) == auStack_88[lVar4];
            iVar13 = (int)lVar11;
            iVar5 = iVar2;
            if (!bVar6) {
              iVar13 = iVar12;
              iVar5 = iVar14;
            }
            iVar14 = iVar5;
            bVar3 = (bool)(bVar3 | bVar6);
            iVar12 = iVar13;
          } while (0 < lVar9);
        }
        lVar11 = lVar11 + 1;
      } while ((lVar11 < iVar10) && (!bVar3));
      if ((iVar14 != -1) && (iVar13 != -1)) {
        iVar13 = iVar13 + 1;
        uVar7 = local_8c - (int)((long)iVar14 + 1);
        if (*(int *)(this + 0x24) - iVar13 <= (int)uVar7) {
          uVar7 = *(int *)(this + 0x24) - iVar13;
        }
        if (uVar7 != 0) {
          memcpy((void *)(*(long *)(this + 0x18) + (long)iVar13 * 4),auStack_88 + (long)iVar14 + 1,
                 -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2);
        }
        iVar10 = uVar7 + iVar13;
      }
    }
    *(int *)(this + 0x20) = iVar10;
    uVar8 = 1;
    *(undefined8 *)(this + 0xc) = local_48;
    *(undefined4 *)(this + 0x14) = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

