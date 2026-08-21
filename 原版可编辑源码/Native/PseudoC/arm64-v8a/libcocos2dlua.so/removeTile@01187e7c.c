
/* dtNavMesh::removeTile(unsigned int, unsigned char**, int*) */

void __thiscall dtNavMesh::removeTile(dtNavMesh *this,uint param_1,uchar **param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  dtMeshTile *pdVar11;
  dtMeshTile *pdVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  dtMeshTile *pdVar16;
  long *plVar17;
  long *plVar18;
  long local_170 [32];
  long local_70;
  
  lVar2 = tpidr_el0;
  uVar3 = 0x80000008;
  local_70 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    uVar8 = param_1 >> ((ulong)*(uint *)(this + 0x60) & 0x3f) &
            ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
    uVar13 = (ulong)uVar8;
    if ((int)uVar8 < *(int *)(this + 0x30)) {
      lVar4 = *(long *)(this + 0x50);
      pdVar16 = (dtMeshTile *)(lVar4 + uVar13 * 0x68);
      if (*(uint *)pdVar16 ==
          (param_1 >> (ulong)(*(uint *)(this + 0x60) + *(uint *)(this + 0x5c) & 0x1f) &
          (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU))) {
        plVar18 = (long *)(lVar4 + uVar13 * 0x68 + 8);
        uVar1 = *(uint *)(this + 0x38);
        iVar5 = *(int *)(*plVar18 + 8);
        iVar6 = *(int *)(*plVar18 + 0xc);
        lVar9 = *(long *)(this + 0x40);
        uVar8 = iVar5 * -0x72594cbd + iVar6 * -0x27e9c7bf & uVar1;
        pdVar11 = *(dtMeshTile **)(lVar9 + (long)(int)uVar8 * 8);
        lVar10 = (long)(int)uVar8;
        if (pdVar11 != (dtMeshTile *)0x0) {
          if (pdVar11 == pdVar16) {
            pdVar12 = (dtMeshTile *)0x0;
          }
          else {
            do {
              pdVar12 = pdVar11;
              pdVar11 = *(dtMeshTile **)(pdVar12 + 0x60);
              if (pdVar11 == (dtMeshTile *)0x0) goto LAB_01187fb4;
            } while (pdVar11 != pdVar16);
          }
          uVar3 = *(undefined8 *)(lVar4 + uVar13 * 0x68 + 0x60);
          if (pdVar12 == (dtMeshTile *)0x0) {
            *(undefined8 *)(lVar9 + lVar10 * 8) = uVar3;
            lVar9 = *(long *)(this + 0x40);
            iVar5 = *(int *)(*plVar18 + 8);
            iVar6 = *(int *)(*plVar18 + 0xc);
            lVar10 = (long)(int)(iVar5 * -0x72594cbd + iVar6 * -0x27e9c7bf & uVar1);
          }
          else {
            *(undefined8 *)(pdVar12 + 0x60) = uVar3;
          }
        }
LAB_01187fb4:
        lVar9 = *(long *)(lVar9 + lVar10 * 8);
        if (lVar9 != 0) {
          uVar8 = 0;
          lVar10 = *(long *)(lVar9 + 8);
          while( true ) {
            if ((((lVar10 == 0) || (*(int *)(lVar10 + 8) != iVar5)) || (0x1f < (int)uVar8)) ||
               (*(int *)(lVar10 + 0xc) != iVar6)) {
              lVar9 = *(long *)(lVar9 + 0x60);
            }
            else {
              local_170[(int)uVar8] = lVar9;
              lVar9 = *(long *)(lVar9 + 0x60);
              uVar8 = uVar8 + 1;
            }
            if (lVar9 == 0) break;
            lVar10 = *(long *)(lVar9 + 8);
          }
          if (0 < (int)uVar8) {
            uVar14 = (ulong)uVar8;
            plVar17 = local_170;
            do {
              if ((dtMeshTile *)*plVar17 != pdVar16) {
                unconnectExtLinks(this,(dtMeshTile *)*plVar17,pdVar16);
              }
              uVar14 = uVar14 - 1;
              plVar17 = plVar17 + 1;
            } while (uVar14 != 0);
          }
        }
        iVar5 = 0;
        do {
          iVar6 = *(int *)(*plVar18 + 8);
          iVar7 = *(int *)(*plVar18 + 0xc);
          switch(iVar5) {
          case 0:
            iVar6 = iVar6 + 1;
            break;
          case 1:
            iVar6 = iVar6 + 1;
          case 2:
            iVar7 = iVar7 + 1;
            break;
          case 3:
            iVar6 = iVar6 + -1;
            iVar7 = iVar7 + 1;
            break;
          case 4:
            iVar6 = iVar6 + -1;
            break;
          case 5:
            iVar6 = iVar6 + -1;
          case 6:
switchD_01188090_caseD_6:
            iVar7 = iVar7 + -1;
            break;
          case 7:
            iVar6 = iVar6 + 1;
            goto switchD_01188090_caseD_6;
          }
          lVar9 = *(long *)(*(long *)(this + 0x40) +
                           (long)(int)(iVar6 * -0x72594cbd + iVar7 * -0x27e9c7bf &
                                      *(uint *)(this + 0x38)) * 8);
          if (lVar9 != 0) {
            uVar8 = 0;
            lVar10 = *(long *)(lVar9 + 8);
            while( true ) {
              if (((lVar10 == 0) || (*(int *)(lVar10 + 8) != iVar6)) ||
                 ((0x1f < (int)uVar8 || (*(int *)(lVar10 + 0xc) != iVar7)))) {
                lVar9 = *(long *)(lVar9 + 0x60);
              }
              else {
                local_170[(int)uVar8] = lVar9;
                lVar9 = *(long *)(lVar9 + 0x60);
                uVar8 = uVar8 + 1;
              }
              if (lVar9 == 0) break;
              lVar10 = *(long *)(lVar9 + 8);
            }
            if (0 < (int)uVar8) {
              uVar14 = (ulong)uVar8;
              plVar17 = local_170;
              do {
                unconnectExtLinks(this,(dtMeshTile *)*plVar17,pdVar16);
                uVar14 = uVar14 - 1;
                plVar17 = plVar17 + 1;
              } while (uVar14 != 0);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 8);
        pbVar15 = (byte *)(lVar4 + uVar13 * 0x68 + 0x5c);
        if ((*pbVar15 & 1) == 0) {
          if (param_2 != (uchar **)0x0) {
            *param_2 = *(uchar **)(lVar4 + uVar13 * 0x68 + 0x50);
          }
          if (param_3 != (int *)0x0) {
            *param_3 = *(int *)(lVar4 + uVar13 * 0x68 + 0x58);
          }
        }
        else {
          lVar9 = lVar4 + uVar13 * 0x68;
          dtFree(*(void **)(lVar9 + 0x50));
          *(undefined8 *)(lVar9 + 0x50) = 0;
          *(undefined4 *)(lVar9 + 0x58) = 0;
          if (param_2 != (uchar **)0x0) {
            *param_2 = (uchar *)0x0;
          }
          if (param_3 != (int *)0x0) {
            *param_3 = 0;
          }
        }
        lVar4 = lVar4 + uVar13 * 0x68;
        pbVar15[0] = 0;
        pbVar15[1] = 0;
        pbVar15[2] = 0;
        pbVar15[3] = 0;
        *(undefined8 *)(lVar4 + 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x3c) = 0;
        *(undefined8 *)(lVar4 + 0x34) = 0;
        *(undefined8 *)(lVar4 + 0x2c) = 0;
        *(undefined8 *)(lVar4 + 0x24) = 0;
        *(undefined8 *)(lVar4 + 0x1c) = 0;
        *(undefined8 *)(lVar4 + 0x14) = 0;
        *(undefined8 *)(lVar4 + 0xc) = 0;
        *(undefined8 *)(lVar4 + 4) = 0;
        uVar1 = -1 << (ulong)(*(uint *)(this + 0x58) & 0x1f);
        uVar8 = *(int *)pdVar16 + 1U & (uVar1 ^ 0xffffffff);
        if ((*(int *)pdVar16 + 1U & (uVar1 ^ 0xffffffff)) == 0) {
          uVar8 = 1;
        }
        *(uint *)pdVar16 = uVar8;
        uVar3 = 0x40000000;
        *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(this + 0x48);
        *(dtMeshTile **)(this + 0x48) = pdVar16;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

