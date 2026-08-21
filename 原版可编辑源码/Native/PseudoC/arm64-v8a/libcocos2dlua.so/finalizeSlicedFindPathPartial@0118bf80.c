
/* dtNavMeshQuery::finalizeSlicedFindPathPartial(unsigned int const*, int, unsigned int*, int*, int)
    */

void __thiscall
dtNavMeshQuery::finalizeSlicedFindPathPartial
          (dtNavMeshQuery *this,uint *param_1,int param_2,uint *param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  dtQueryFilter *pdVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  dtQueryFilter *pdVar10;
  dtNavMeshQuery *pdVar11;
  int iVar12;
  dtNode *local_98;
  undefined1 auStack_90 [16];
  uint *local_80;
  int local_78;
  int local_74;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_4 = 0;
  if (param_2 == 0) {
    uVar4 = 0x80000000;
  }
  else {
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
      if (*(uint *)(this + 0x1c) != *(uint *)(this + 0x20)) {
        local_98 = (dtNode *)0x0;
        lVar8 = (long)param_2;
        do {
          if (lVar8 < 1) {
            local_98 = *(dtNode **)(this + 0x10);
            *(uint *)(this + 8) = *(uint *)(this + 8) | 0x40;
            break;
          }
          dtNodePool::findNodes(*(dtNodePool **)(this + 0x58),param_1[lVar8 + -1],&local_98,1);
          lVar8 = lVar8 + -1;
        } while (local_98 == (dtNode *)0x0);
        uVar4 = 0;
        pdVar10 = (dtQueryFilter *)0x0;
        do {
          pdVar6 = (dtQueryFilter *)local_98;
          uVar7 = *(uint *)(pdVar6 + 0x14);
          if ((uVar7 & 0xffffff) == 0) {
            local_98 = (dtNode *)0x0;
          }
          else {
            local_98 = (dtNode *)(**(long **)(this + 0x58) + (ulong)((uVar7 & 0xffffff) - 1) * 0x1c)
            ;
          }
          uVar9 = 0;
          if (pdVar10 != (dtQueryFilter *)0x0) {
            uVar9 = (int)((ulong)((long)pdVar10 - **(long **)(this + 0x58)) >> 2) * -0x49249249 + 1;
          }
          uVar2 = uVar7 >> 0x1a & 3 | uVar4;
          uVar4 = uVar7 >> 0x1a & 4;
          uVar7 = uVar7 & 0xe3000000 | uVar2 << 0x1a | uVar9 & 0xffffff;
          *(uint *)(pdVar6 + 0x14) = uVar7;
          pdVar10 = pdVar6;
        } while (local_98 != (dtNode *)0x0);
        iVar12 = 0;
        uVar4 = uVar9 & 0xffffff;
        if ((uVar9 & 0xffffff) == 0) goto LAB_0118c14c;
LAB_0118c0fc:
        pdVar10 = (dtQueryFilter *)(**(long **)(this + 0x58) + (ulong)(uVar4 - 1) * 0x1c);
        pfVar5 = (float *)(ulong)*(uint *)(pdVar6 + 0x18);
        local_98 = (dtNode *)pdVar6;
        if ((uVar7 >> 0x1c & 1) != 0) goto LAB_0118c158;
        do {
          param_3[iVar12] = (uint)pfVar5;
          iVar12 = iVar12 + 1;
          uVar7 = (uint)(param_5 <= iVar12);
          uVar4 = uVar7 << 4;
          pdVar6 = pdVar10;
          while( true ) {
            if (uVar7 != 0) {
              *(uint *)pdVar11 = *(uint *)pdVar11 | uVar4;
              goto LAB_0118c1b4;
            }
            local_98 = (dtNode *)pdVar6;
            if (pdVar6 == (dtQueryFilter *)0x0) goto LAB_0118c1b4;
            uVar7 = *(uint *)(pdVar6 + 0x14);
            uVar4 = uVar7 & 0xffffff;
            if (uVar4 != 0) goto LAB_0118c0fc;
LAB_0118c14c:
            pdVar10 = (dtQueryFilter *)0x0;
            pfVar5 = (float *)(ulong)*(uint *)(pdVar6 + 0x18);
            local_98 = (dtNode *)pdVar6;
            if ((uVar7 >> 0x1c & 1) == 0) break;
LAB_0118c158:
            local_80 = param_3 + iVar12;
            local_74 = param_5 - iVar12;
            uVar4 = raycast((uint)this,pfVar5,(float *)local_98,pdVar10,
                            (uint)*(undefined8 *)(this + 0x40),(dtRaycastHit *)0x0,(uint)auStack_90)
            ;
            iVar1 = local_78 + iVar12;
            iVar12 = iVar1 + -1;
            if (param_3[iVar12] != *(uint *)(pdVar10 + 0x18)) {
              iVar12 = iVar1;
            }
            uVar7 = uVar4 & 0xffffff;
            uVar4 = uVar4 & 0xffffff;
            pdVar6 = pdVar10;
          }
        } while( true );
      }
      iVar12 = 1;
      *param_3 = *(uint *)(this + 0x1c);
LAB_0118c1b4:
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
      *param_4 = iVar12;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

