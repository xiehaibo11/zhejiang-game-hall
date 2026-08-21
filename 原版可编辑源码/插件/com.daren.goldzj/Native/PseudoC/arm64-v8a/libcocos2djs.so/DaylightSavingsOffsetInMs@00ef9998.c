
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::DateCache::DaylightSavingsOffsetInMs(long) */

ulong __thiscall v8::internal::DateCache::DaylightSavingsOffsetInMs(DateCache *this,long param_1)

{
  DateCache *pDVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  DateCache *pDVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  if (0x1f3fffffc18 < (ulong)param_1) {
    param_1 = EquivalentTime(this,param_1);
  }
  if (0x7ffffff4 < *(int *)(this + 0x210)) {
    *(undefined4 *)(this + 0x210) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0x800000017fffffff;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0x800000017fffffff;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xc0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0x800000017fffffff;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0xf0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x100) = 0x800000017fffffff;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xd0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xe0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x138) = 0;
    *(undefined8 *)(this + 0x130) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x140) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x110) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x120) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x178) = 0;
    *(undefined8 *)(this + 0x170) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined8 *)(this + 0x180) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x150) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x160) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x1b8) = 0;
    *(undefined8 *)(this + 0x1b0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x1c8) = 0;
    *(undefined8 *)(this + 0x1c0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x198) = 0;
    *(undefined8 *)(this + 400) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x1a8) = 0;
    *(undefined8 *)(this + 0x1a0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x1f8) = 0;
    *(undefined8 *)(this + 0x1f0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x208) = 0;
    *(undefined8 *)(this + 0x200) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x1d8) = 0;
    *(undefined8 *)(this + 0x1d0) = 0x800000017fffffff;
    *(undefined8 *)(this + 0x1e8) = 0;
    *(undefined8 *)(this + 0x1e0) = 0x800000017fffffff;
  }
  piVar5 = *(int **)(this + 0x218);
  iVar10 = (int)(param_1 / 1000);
  if ((iVar10 < *piVar5) || (piVar5[1] < iVar10)) {
    ProbeDST(this,iVar10);
    piVar5 = *(int **)(this + 0x218);
    iVar11 = piVar5[1];
    if (iVar11 < *piVar5) {
      *piVar5 = iVar10;
      *(int *)(*(long *)(this + 0x218) + 4) = iVar10;
      uVar2 = (**(code **)(*(long *)this + 0x10))(this,(long)iVar10);
      *(undefined4 *)(*(long *)(this + 0x218) + 8) = uVar2;
      iVar10 = *(int *)(this + 0x210);
      *(int *)(this + 0x210) = iVar10 + 1;
      *(int *)(*(long *)(this + 0x218) + 0xc) = iVar10 + 1;
      goto LAB_00ef9b38;
    }
    if (iVar11 < iVar10) {
      pDVar1 = this + 0x218;
      if (iVar11 < iVar10 + -0x190c80) {
        uVar4 = (**(code **)(*(long *)this + 0x10))(this,(long)iVar10);
        pDVar6 = *(DateCache **)(this + 0x220);
        if (((*(int *)(pDVar6 + 8) == (int)uVar4) && (*(int *)pDVar6 + -0x190c80 <= iVar10)) &&
           (iVar10 <= *(int *)(pDVar6 + 4))) {
          *(int *)pDVar6 = iVar10;
        }
        else {
          if (*(int *)pDVar6 <= *(int *)(pDVar6 + 4)) {
            lVar8 = 0;
            pDVar6 = (DateCache *)0x0;
            if (*(long *)(this + 0x218) - (long)this != 0x10) goto LAB_00ef9bf4;
            while (lVar8 = lVar8 + 0x10, lVar8 != 0x200) {
              if ((*(long *)(this + 0x218) - (long)this) + -0x10 != lVar8) {
LAB_00ef9bf4:
                if ((pDVar6 == (DateCache *)0x0) ||
                   (*(int *)(this + lVar8 + 0x1c) < *(int *)(pDVar6 + 0xc))) {
                  pDVar6 = this + lVar8 + 0x10;
                }
              }
            }
            *(undefined8 *)(pDVar6 + 8) = 0;
            *(undefined8 *)pDVar6 = 0x800000017fffffff;
            *(DateCache **)(this + 0x220) = pDVar6;
          }
          *(int *)pDVar6 = iVar10;
          *(int *)(*(long *)(this + 0x220) + 4) = iVar10;
          *(int *)(*(long *)(this + 0x220) + 8) = (int)uVar4;
          iVar10 = *(int *)(this + 0x210);
          *(int *)(this + 0x210) = iVar10 + 1;
          *(int *)(*(long *)(this + 0x220) + 0xc) = iVar10 + 1;
        }
        auVar12 = NEON_ext(*(undefined1 (*) [16])pDVar1,*(undefined1 (*) [16])pDVar1,8,1);
        *(long *)(this + 0x220) = auVar12._8_8_;
        *(long *)pDVar1 = auVar12._0_8_;
        return uVar4;
      }
      iVar11 = *(int *)(this + 0x210);
      *(int *)(this + 0x210) = iVar11 + 1;
      piVar5[3] = iVar11 + 1;
      iVar11 = *(int *)(*(long *)(this + 0x218) + 4) + 0x190c80;
      if (0x7fe6f37e < *(int *)(*(long *)(this + 0x218) + 4)) {
        iVar11 = 0x7fffffff;
      }
      if (**(int **)(this + 0x220) < iVar11) {
        iVar11 = *(int *)(this + 0x210);
        *(int *)(this + 0x210) = iVar11 + 1;
        (*(int **)(this + 0x220))[3] = iVar11 + 1;
      }
      else {
        iVar3 = (**(code **)(*(long *)this + 0x10))(this,(long)iVar11);
        auVar12 = _DAT_019a6b50;
        pDVar6 = *(DateCache **)(this + 0x220);
        if (((*(int *)(pDVar6 + 8) == iVar3) && (*(int *)pDVar6 + -0x190c80 <= iVar11)) &&
           (iVar11 <= *(int *)(pDVar6 + 4))) {
          *(int *)pDVar6 = iVar11;
        }
        else {
          if (*(int *)pDVar6 <= *(int *)(pDVar6 + 4)) {
            lVar8 = 0;
            pDVar6 = (DateCache *)0x0;
            if (*(long *)(this + 0x218) - (long)this != 0x10) goto LAB_00ef9c98;
            while (lVar8 = lVar8 + 0x10, lVar8 != 0x200) {
              if ((*(long *)(this + 0x218) - (long)this) + -0x10 != lVar8) {
LAB_00ef9c98:
                if ((pDVar6 == (DateCache *)0x0) ||
                   (*(int *)(this + lVar8 + 0x1c) < *(int *)(pDVar6 + 0xc))) {
                  pDVar6 = this + lVar8 + 0x10;
                }
              }
            }
            *(long *)(pDVar6 + 8) = DAT_019a6b50._8_8_;
            *(long *)pDVar6 = auVar12._0_8_;
            *(DateCache **)(this + 0x220) = pDVar6;
          }
          *(int *)pDVar6 = iVar11;
          *(int *)(*(long *)(this + 0x220) + 4) = iVar11;
          *(int *)(*(long *)(this + 0x220) + 8) = iVar3;
          iVar11 = *(int *)(this + 0x210);
          *(int *)(this + 0x210) = iVar11 + 1;
          *(int *)(*(long *)(this + 0x220) + 0xc) = iVar11 + 1;
        }
      }
      lVar8 = *(long *)(this + 0x218);
      if (*(int *)(lVar8 + 8) != *(int *)(*(long *)(this + 0x220) + 8)) {
        iVar11 = -4;
        do {
          iVar3 = **(int **)(this + 0x220) - *(int *)(lVar8 + 4);
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          uVar4 = (ulong)(uint)(*(int *)(lVar8 + 4) + (iVar3 >> 1));
          do {
            iVar3 = (int)uVar4;
            uVar4 = (**(code **)(*(long *)this + 0x10))(this,(long)iVar3);
            if (*(int *)(*(long *)(this + 0x218) + 8) == (int)uVar4) {
              *(int *)(*(long *)(this + 0x218) + 4) = iVar3;
              if (iVar10 <= *(int *)(*(long *)pDVar1 + 4)) {
                return uVar4;
              }
            }
            else {
              **(int **)(this + 0x220) = iVar3;
              if (**(int **)(this + 0x220) <= iVar10) {
                uVar9 = *(undefined8 *)(this + 0x218);
                *(int **)(this + 0x218) = *(int **)(this + 0x220);
                *(undefined8 *)(this + 0x220) = uVar9;
                return uVar4;
              }
            }
            if (iVar11 == 0) {
              return 0;
            }
            lVar8 = *(long *)pDVar1;
            iVar11 = iVar11 + 1;
            uVar4 = param_1 / 1000 & 0xffffffff;
          } while (iVar11 == 0);
        } while( true );
      }
      *(undefined4 *)(lVar8 + 4) = *(undefined4 *)(*(long *)(this + 0x220) + 4);
      puVar7 = *(undefined8 **)(this + 0x220);
      puVar7[1] = 0;
      *puVar7 = 0x800000017fffffff;
      goto LAB_00ef9b38;
    }
  }
  iVar10 = *(int *)(this + 0x210);
  *(int *)(this + 0x210) = iVar10 + 1;
  piVar5[3] = iVar10 + 1;
LAB_00ef9b38:
                    /* WARNING: Read-only address (ram,0x019a6b50) is written */
  return (ulong)*(uint *)(*(long *)(this + 0x218) + 8);
}

