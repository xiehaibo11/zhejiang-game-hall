
/* btDbvt::collideTTpersistentStack(btDbvtNode const*, btDbvtNode const*, btDbvt::ICollide&) */

void __thiscall
btDbvt::collideTTpersistentStack
          (btDbvt *this,btDbvtNode *param_1,btDbvtNode *param_2,ICollide *param_3)

{
  btDbvt *pbVar1;
  uint uVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((param_1 != (btDbvtNode *)0x0) && (param_2 != (btDbvtNode *)0x0)) {
    iVar15 = *(int *)(this + 0x24);
    if (iVar15 < 0x80) {
      if (*(int *)(this + 0x28) < 0x80) {
        lVar7 = btAlignedAllocInternal(0x800,0x10);
        lVar9 = (long)*(int *)(this + 0x24);
        if (0 < *(int *)(this + 0x24)) {
          lVar11 = 0;
          do {
            lVar9 = lVar9 + -1;
            puVar12 = (undefined8 *)(*(long *)(this + 0x30) + lVar11);
            uVar14 = *puVar12;
            ((undefined8 *)(lVar7 + lVar11))[1] = puVar12[1];
            *(undefined8 *)(lVar7 + lVar11) = uVar14;
            lVar11 = lVar11 + 0x10;
          } while (lVar9 != 0);
        }
        if (*(void **)(this + 0x30) != (void *)0x0) {
          if (this[0x38] != (btDbvt)0x0) {
            btAlignedFreeInternal(*(void **)(this + 0x30));
          }
          *(undefined8 *)(this + 0x30) = 0;
        }
        *(long *)(this + 0x30) = lVar7;
        this[0x38] = (btDbvt)0x1;
        *(undefined4 *)(this + 0x28) = 0x80;
      }
      lVar9 = 0x80 - (long)iVar15;
      lVar7 = (long)iVar15 << 4;
      do {
        lVar11 = *(long *)(this + 0x30);
        lVar9 = lVar9 + -1;
        ((undefined8 *)(lVar11 + lVar7))[1] = uStack_68;
        *(undefined8 *)(lVar11 + lVar7) = local_70;
        lVar7 = lVar7 + 0x10;
      } while (lVar9 != 0);
    }
    pbVar1 = this + 0x30;
    puVar12 = *(undefined8 **)pbVar1;
    iVar15 = 0x7c;
    uVar18 = 1;
    *(undefined4 *)(this + 0x24) = 0x80;
    *puVar12 = param_1;
    puVar12[1] = param_2;
    do {
      while( true ) {
        lVar7 = *(long *)pbVar1;
        iVar16 = (int)uVar18;
        lVar9 = (long)iVar16;
        uVar18 = lVar9 - 1;
        iVar17 = (int)uVar18;
        plVar3 = (long *)(lVar7 + uVar18 * 0x10);
        pfVar4 = (float *)*plVar3;
        pfVar5 = (float *)plVar3[1];
        if (iVar15 < iVar17) {
          iVar6 = *(int *)(this + 0x24);
          lVar11 = (long)iVar6;
          iVar15 = (int)(lVar11 << 1);
          if (iVar6 < iVar15) {
            if (*(int *)(this + 0x28) < iVar15) {
              if (iVar6 == 0) {
                lVar7 = 0;
                pvVar8 = *(void **)pbVar1;
              }
              else {
                lVar7 = btAlignedAllocInternal(lVar11 << 5,0x10);
                lVar10 = (long)*(int *)(this + 0x24);
                if (0 < *(int *)(this + 0x24)) {
                  lVar13 = 0;
                  do {
                    lVar10 = lVar10 + -1;
                    uVar14 = *(undefined8 *)(*(long *)pbVar1 + lVar13);
                    ((undefined8 *)(lVar7 + lVar13))[1] =
                         ((undefined8 *)(*(long *)pbVar1 + lVar13))[1];
                    *(undefined8 *)(lVar7 + lVar13) = uVar14;
                    lVar13 = lVar13 + 0x10;
                  } while (lVar10 != 0);
                }
                pvVar8 = *(void **)pbVar1;
              }
              if (pvVar8 != (void *)0x0) {
                if (this[0x38] != (btDbvt)0x0) {
                  btAlignedFreeInternal(pvVar8);
                }
                *(undefined8 *)pbVar1 = 0;
              }
              this[0x38] = (btDbvt)0x1;
              *(long *)pbVar1 = lVar7;
              *(int *)(this + 0x28) = iVar15;
            }
            puVar12 = (undefined8 *)(lVar7 + lVar11 * 0x10);
            puVar12[1] = uStack_68;
            *puVar12 = local_70;
            if (lVar11 + 1 != (long)iVar15) {
              lVar7 = lVar11 * 0x10;
              lVar11 = ((long)iVar15 + -1) - lVar11;
              do {
                lVar7 = lVar7 + 0x10;
                lVar10 = *(long *)pbVar1;
                lVar11 = lVar11 + -1;
                ((undefined8 *)(lVar10 + lVar7))[1] = uStack_68;
                *(undefined8 *)(lVar10 + lVar7) = local_70;
              } while (lVar11 != 0);
            }
          }
          *(int *)(this + 0x24) = iVar15;
          iVar15 = iVar15 + -4;
        }
        if (pfVar4 != pfVar5) break;
        if (*(long *)(pfVar4 + 0xc) != 0) {
          uVar14 = *(undefined8 *)(pfVar4 + 10);
          puVar12 = (undefined8 *)(*(long *)pbVar1 + uVar18 * 0x10);
          *puVar12 = uVar14;
          puVar12[1] = uVar14;
          uVar14 = *(undefined8 *)(pfVar4 + 0xc);
          uVar18 = (ulong)(iVar16 + 2);
          puVar12 = (undefined8 *)(*(long *)pbVar1 + lVar9 * 0x10);
          *puVar12 = uVar14;
          puVar12[1] = uVar14;
          uVar14 = *(undefined8 *)(pfVar4 + 10);
          lVar7 = *(long *)pbVar1 + lVar9 * 0x10;
          *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(pfVar4 + 0xc);
          *(undefined8 *)(lVar7 + 0x10) = uVar14;
        }
LAB_0121533c:
        iVar17 = (int)uVar18;
joined_r0x012153c4:
        if (iVar17 == 0) {
          return;
        }
      }
      if ((((pfVar5[4] < *pfVar4) || (pfVar4[4] < *pfVar5)) || (pfVar5[5] < pfVar4[1])) ||
         (((pfVar4[5] < pfVar5[1] || (pfVar5[6] < pfVar4[2])) || (pfVar4[6] < pfVar5[2]))))
      goto LAB_0121533c;
      if (*(long *)(pfVar4 + 0xc) == 0) {
        if (*(long *)(pfVar5 + 0xc) != 0) {
          lVar7 = *(long *)(pfVar5 + 10);
          plVar3 = (long *)(*(long *)pbVar1 + uVar18 * 0x10);
          *plVar3 = (long)pfVar4;
          plVar3[1] = lVar7;
          lVar7 = *(long *)(pfVar5 + 0xc);
          uVar2 = iVar16 + 1;
          plVar3 = (long *)(*(long *)pbVar1 + lVar9 * 0x10);
          *plVar3 = (long)pfVar4;
          plVar3[1] = lVar7;
          goto joined_r0x012153a4;
        }
        (**(code **)(*(long *)param_3 + 0x10))(param_3,pfVar4,pfVar5);
        goto joined_r0x012153c4;
      }
      if (*(long *)(pfVar5 + 0xc) == 0) {
        puVar12 = (undefined8 *)(*(long *)pbVar1 + uVar18 * 0x10);
        *puVar12 = *(undefined8 *)(pfVar4 + 10);
        puVar12[1] = pfVar5;
        uVar2 = iVar16 + 1;
        puVar12 = (undefined8 *)(*(long *)pbVar1 + lVar9 * 0x10);
        *puVar12 = *(undefined8 *)(pfVar4 + 0xc);
        puVar12[1] = pfVar5;
      }
      else {
        uVar14 = *(undefined8 *)(pfVar5 + 10);
        lVar9 = lVar9 * 0x10;
        puVar12 = (undefined8 *)(*(long *)pbVar1 + uVar18 * 0x10);
        *puVar12 = *(undefined8 *)(pfVar4 + 10);
        puVar12[1] = uVar14;
        lVar7 = *(long *)pbVar1;
        uVar14 = *(undefined8 *)(pfVar5 + 10);
        uVar2 = iVar16 + 3;
        *(undefined8 *)(lVar7 + lVar9) = *(undefined8 *)(pfVar4 + 0xc);
        ((undefined8 *)(lVar7 + lVar9))[1] = uVar14;
        lVar7 = *(long *)pbVar1;
        uVar14 = *(undefined8 *)(pfVar5 + 0xc);
        *(undefined8 *)(lVar7 + lVar9 + 0x10) = *(undefined8 *)(pfVar4 + 10);
        *(undefined8 *)(lVar7 + lVar9 + 0x18) = uVar14;
        lVar7 = *(long *)pbVar1;
        uVar14 = *(undefined8 *)(pfVar5 + 0xc);
        *(undefined8 *)(lVar7 + lVar9 + 0x20) = *(undefined8 *)(pfVar4 + 0xc);
        *(undefined8 *)(lVar7 + lVar9 + 0x28) = uVar14;
      }
joined_r0x012153a4:
      uVar18 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return;
}

