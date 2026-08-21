
/* dtTileCache::buildNavMeshTilesAt(int, int, dtNavMesh*) */

int __thiscall
dtTileCache::buildNavMeshTilesAt(dtTileCache *this,int param_1,int param_2,dtNavMesh *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  int unaff_w21;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint local_c8 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  piVar4 = *(int **)(*(long *)(this + 8) +
                    (long)(int)(*(uint *)(this + 4) & param_1 * -0x72594cbd + param_2 * -0x27e9c7bf)
                    * 8);
  if (piVar4 != (int *)0x0) {
    uVar3 = 0;
    lVar5 = *(long *)(piVar4 + 2);
    while( true ) {
      if ((((lVar5 == 0) || (*(int *)(lVar5 + 8) != param_1)) || (0x1f < (int)uVar3)) ||
         (*(int *)(lVar5 + 0xc) != param_2)) {
        piVar4 = *(int **)(piVar4 + 0xc);
      }
      else {
        local_c8[(int)uVar3] =
             *piVar4 << (ulong)(*(uint *)(this + 0x24) & 0x1f) |
             (int)((ulong)((long)piVar4 - *(long *)(this + 0x18)) >> 3) * -0x49249249;
        piVar4 = *(int **)(piVar4 + 0xc);
        uVar3 = uVar3 + 1;
      }
      if (piVar4 == (int *)0x0) break;
      lVar5 = *(long *)(piVar4 + 2);
    }
    if (0 < (int)uVar3) {
      uVar7 = (ulong)uVar3;
      puVar8 = local_c8;
      do {
        iVar2 = buildNavMeshTile(this,*puVar8,param_3);
        iVar6 = iVar2;
        if (-1 < iVar2) {
          iVar6 = unaff_w21;
        }
        if (iVar2 < 0) goto LAB_01196424;
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + 1;
        unaff_w21 = iVar6;
      } while (uVar7 != 0);
    }
  }
  iVar6 = 0x40000000;
LAB_01196424:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

