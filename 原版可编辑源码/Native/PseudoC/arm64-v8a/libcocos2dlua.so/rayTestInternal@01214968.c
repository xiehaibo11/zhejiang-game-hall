
/* btDbvt::rayTestInternal(btDbvtNode const*, btVector3 const&, btVector3 const&, btVector3 const&,
   unsigned int*, float, btVector3 const&, btVector3 const&, btDbvt::ICollide&) const */

void __thiscall
btDbvt::rayTestInternal
          (btDbvt *this,btDbvtNode *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4
          ,uint *param_5,float param_6,btVector3 *param_7,btVector3 *param_8,ICollide *param_9)

{
  btDbvt *pbVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  btDbvt *local_a8;
  float local_90 [5];
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  
  if (param_1 != (btDbvtNode *)0x0) {
    lVar8 = (long)*(int *)(this + 0x44);
    if (*(int *)(this + 0x44) < 0x80) {
      if (*(int *)(this + 0x48) < 0x80) {
        lVar3 = btAlignedAllocInternal(0x400,0x10);
        iVar5 = *(int *)(this + 0x44);
        if (0 < iVar5) {
          lVar6 = 0;
          do {
            lVar7 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)(*(long *)(this + 0x50) + lVar7);
          } while (iVar5 != lVar6);
        }
        if (*(void **)(this + 0x50) != (void *)0x0) {
          if (this[0x58] != (btDbvt)0x0) {
            btAlignedFreeInternal(*(void **)(this + 0x50));
          }
          *(undefined8 *)(this + 0x50) = 0;
        }
        *(long *)(this + 0x50) = lVar3;
        this[0x58] = (btDbvt)0x1;
        *(undefined4 *)(this + 0x48) = 0x80;
      }
      do {
        *(undefined8 *)(*(long *)(this + 0x50) + lVar8 * 8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x80);
    }
    local_a8 = this + 0x48;
    pbVar1 = this + 0x50;
    iVar5 = 0x7e;
    uVar10 = 1;
    *(undefined4 *)(this + 0x44) = 0x80;
    **(undefined8 **)pbVar1 = param_1;
    do {
      while( true ) {
        lVar8 = *(long *)pbVar1;
        iVar9 = (int)uVar10;
        uVar10 = (long)iVar9 - 1;
        pfVar11 = *(float **)(lVar8 + uVar10 * 8);
        local_90[3] = 0.0;
        local_90[0] = *pfVar11 - *(float *)param_8;
        local_90[1] = pfVar11[1] - *(float *)(param_8 + 4);
        local_90[2] = pfVar11[2] - *(float *)(param_8 + 8);
        local_74 = 0;
        local_90[4] = pfVar11[4] - *(float *)param_7;
        fStack_7c = pfVar11[5] - *(float *)(param_7 + 4);
        local_78 = pfVar11[6] - *(float *)(param_7 + 8);
        fVar12 = *(float *)param_4 * (local_90[(ulong)(1 - *param_5) * 4] - *(float *)param_2);
        fVar13 = (local_90[(ulong)param_5[1] * 4 + 1] - *(float *)(param_2 + 4)) *
                 *(float *)(param_4 + 4);
        if (fVar13 <= fVar12) break;
LAB_01214d24:
        if ((int)uVar10 == 0) {
          return;
        }
      }
      fVar15 = (local_90[(ulong)*param_5 * 4] - *(float *)param_2) * *(float *)param_4;
      fVar14 = *(float *)(param_4 + 4) *
               (local_90[(ulong)(1 - param_5[1]) * 4 + 1] - *(float *)(param_2 + 4));
      if (fVar14 < fVar15) goto LAB_01214d24;
      if (fVar13 <= fVar15) {
        fVar13 = fVar15;
      }
      if (fVar12 <= fVar14) {
        fVar14 = fVar12;
      }
      fVar12 = (local_90[(ulong)param_5[2] * 4 + 2] - *(float *)(param_2 + 8)) *
               *(float *)(param_4 + 8);
      if ((fVar14 < fVar12) ||
         (fVar15 = *(float *)(param_4 + 8) *
                   (local_90[(ulong)(1 - param_5[2]) * 4 + 2] - *(float *)(param_2 + 8)),
         fVar15 < fVar13)) goto LAB_01214d24;
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      if ((param_6 <= fVar12) || (fVar15 <= 0.0)) goto LAB_01214d24;
      if (*(long *)(pfVar11 + 0xc) == 0) {
        (**(code **)(*(long *)param_9 + 0x18))(param_9,pfVar11);
        goto LAB_01214d24;
      }
      if (iVar5 < (int)uVar10) {
        iVar2 = *(int *)(this + 0x44);
        lVar3 = (long)iVar2;
        iVar5 = (int)(lVar3 << 1);
        if (iVar2 < iVar5) {
          if (*(int *)local_a8 < iVar5) {
            if (iVar2 == 0) {
              lVar8 = 0;
              pvVar4 = *(void **)pbVar1;
            }
            else {
              lVar8 = btAlignedAllocInternal(lVar3 << 4,0x10);
              iVar2 = *(int *)(this + 0x44);
              if (0 < iVar2) {
                lVar6 = 0;
                do {
                  lVar7 = lVar6 * 8;
                  lVar6 = lVar6 + 1;
                  *(undefined8 *)(lVar8 + lVar7) = *(undefined8 *)(*(long *)pbVar1 + lVar7);
                } while (iVar2 != lVar6);
              }
              pvVar4 = *(void **)pbVar1;
            }
            if (pvVar4 != (void *)0x0) {
              if (this[0x58] != (btDbvt)0x0) {
                btAlignedFreeInternal(pvVar4);
              }
              *(undefined8 *)pbVar1 = 0;
            }
            this[0x58] = (btDbvt)0x1;
            *(long *)pbVar1 = lVar8;
            *(int *)(this + 0x48) = iVar5;
          }
          do {
            *(undefined8 *)(lVar8 + lVar3 * 8) = 0;
            lVar8 = *(long *)pbVar1;
            lVar3 = lVar3 + 1;
          } while (iVar5 != lVar3);
        }
        *(int *)(this + 0x44) = iVar5;
        iVar5 = iVar5 + -2;
      }
      *(undefined8 *)(lVar8 + uVar10 * 8) = *(undefined8 *)(pfVar11 + 10);
      uVar10 = (ulong)(iVar9 + 1U);
      *(undefined8 *)(*(long *)pbVar1 + (long)iVar9 * 8) = *(undefined8 *)(pfVar11 + 0xc);
    } while (iVar9 + 1U != 0);
  }
  return;
}

