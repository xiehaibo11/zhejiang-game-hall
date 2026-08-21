
/* v8::internal::Bignum::AssignPowerUInt16(unsigned short, int) */

void __thiscall v8::internal::Bignum::AssignPowerUInt16(Bignum *this,ushort param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  
  uVar14 = (ulong)param_1;
  if (param_2 == 0) {
    if (0 < *(int *)(this + 0x210)) {
      lVar7 = 0;
      do {
        *(undefined4 *)(*(long *)(this + 0x200) + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(this + 0x210));
    }
    *(undefined4 *)(this + 0x214) = 0;
    **(undefined4 **)(this + 0x200) = 1;
    *(undefined4 *)(this + 0x210) = 1;
  }
  else {
    if (0 < *(int *)(this + 0x210)) {
      lVar7 = 0;
      do {
        *(undefined4 *)(*(long *)(this + 0x200) + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(this + 0x210));
    }
    iVar15 = 0;
    *(undefined8 *)(this + 0x210) = 0;
    uVar12 = (uint)param_1;
    if ((param_1 & 1) != 0) {
      iVar6 = 0;
      goto joined_r0x015250e4;
    }
    do {
      uVar8 = uVar14 >> 1;
      uVar12 = (uint)uVar14 >> 1;
      uVar14 = (ulong)uVar12;
      iVar15 = iVar15 + 1;
    } while ((uVar8 & 1) == 0);
    iVar6 = 0;
    uVar8 = uVar14;
    while (uVar12 != 0) {
      uVar12 = (int)uVar8 >> 1;
      iVar6 = iVar6 + 1;
joined_r0x015250e4:
      uVar8 = (ulong)uVar12;
    }
    if (0xde3 < iVar6 * param_2) {
LAB_01525420:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar13 = 1;
    do {
      iVar9 = iVar13;
      iVar13 = iVar9 << 1;
    } while (iVar9 <= param_2);
    uVar12 = iVar9 >> 2;
    bVar4 = false;
    uVar8 = uVar14;
    if (uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      do {
        uVar8 = uVar8 * uVar8;
        if ((uVar12 & param_2) != 0) {
          bVar5 = (uVar8 & -1L << ((ulong)(uint)-iVar6 & 0x3f)) != 0;
          uVar1 = uVar14;
          if (bVar5) {
            uVar1 = 1;
          }
          uVar8 = uVar1 * uVar8;
          bVar4 = (bool)(bVar4 | bVar5);
        }
        uVar12 = (int)uVar12 >> 1;
      } while ((uVar12 != 0) && (uVar8 >> 0x20 == 0));
    }
    *(undefined8 *)(this + 0x210) = 0;
    iVar6 = 0;
    if (uVar8 != 0) {
      **(uint **)(this + 0x200) = (uint)uVar8 & 0xfffffff;
      *(uint *)(*(long *)(this + 0x200) + 4) = (uint)(uVar8 >> 0x1c) & 0xfffffff;
      *(uint *)(*(long *)(this + 0x200) + 8) = (uint)(byte)(uVar8 >> 0x38);
      piVar10 = *(int **)(this + 0x200);
      iVar6 = 3;
      *(undefined4 *)(this + 0x210) = 3;
      if (piVar10[2] == 0) {
        iVar6 = 2;
        *(undefined4 *)(this + 0x210) = 2;
        if (piVar10[1] == 0) {
          iVar6 = 1;
          *(undefined4 *)(this + 0x210) = 1;
          if (*piVar10 == 0) {
            iVar6 = 0;
            *(undefined8 *)(this + 0x210) = 0;
          }
        }
      }
    }
    iVar13 = (int)uVar14;
    if ((bVar4) && (iVar13 != 1)) {
      if (iVar13 == 0) {
        if (iVar6 != 0) {
          lVar7 = 0;
          do {
            *(undefined4 *)(*(long *)(this + 0x200) + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(this + 0x210));
        }
        iVar6 = 0;
        *(undefined8 *)(this + 0x210) = 0;
      }
      else if (iVar6 != 0) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          lVar11 = lVar7 * 4;
          lVar7 = lVar7 + 1;
          uVar8 = uVar8 + *(uint *)(*(long *)(this + 0x200) + lVar11) * uVar14;
          *(uint *)(*(long *)(this + 0x200) + lVar11) = (uint)uVar8 & 0xfffffff;
          iVar6 = *(int *)(this + 0x210);
          uVar8 = uVar8 >> 0x1c;
        } while (lVar7 < iVar6);
        if (uVar8 != 0) {
          if (0x7f < iVar6) goto LAB_01525420;
          *(int *)(*(long *)(this + 0x200) + (long)iVar6 * 4) = (int)uVar8;
          iVar6 = *(int *)(this + 0x210) + 1;
          *(int *)(this + 0x210) = iVar6;
        }
      }
    }
    if (uVar12 != 0) {
      do {
        Square(this);
        if (((uVar12 & param_2) != 0) && (iVar13 != 1)) {
          if (uVar14 == 0) {
            if (0 < *(int *)(this + 0x210)) {
              lVar7 = 0;
              do {
                *(undefined4 *)(*(long *)(this + 0x200) + lVar7 * 4) = 0;
                lVar7 = lVar7 + 1;
              } while (lVar7 < *(int *)(this + 0x210));
            }
            *(undefined8 *)(this + 0x210) = 0;
          }
          else if (0 < *(int *)(this + 0x210)) {
            lVar7 = 0;
            uVar8 = 0;
            do {
              lVar11 = lVar7 * 4;
              lVar7 = lVar7 + 1;
              uVar8 = uVar8 + *(uint *)(*(long *)(this + 0x200) + lVar11) * uVar14;
              *(uint *)(*(long *)(this + 0x200) + lVar11) = (uint)uVar8 & 0xfffffff;
              iVar6 = *(int *)(this + 0x210);
              uVar8 = uVar8 >> 0x1c;
            } while (lVar7 < iVar6);
            if (uVar8 != 0) {
              if (0x7f < iVar6) goto LAB_01525420;
              *(int *)(*(long *)(this + 0x200) + (long)iVar6 * 4) = (int)uVar8;
              *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
            }
          }
        }
        uVar12 = (int)uVar12 >> 1;
      } while (uVar12 != 0);
      iVar6 = *(int *)(this + 0x210);
    }
    if (iVar6 != 0) {
      *(int *)(this + 0x214) = *(int *)(this + 0x214) + (iVar15 * param_2) / 0x1c;
      if (0x7f < iVar6) goto LAB_01525420;
      if (0 < iVar6) {
        uVar3 = (iVar15 * param_2) % 0x1c;
        lVar7 = 0;
        uVar12 = 0;
        do {
          lVar11 = lVar7 * 4;
          lVar7 = lVar7 + 1;
          uVar2 = *(uint *)(*(long *)(this + 0x200) + lVar11);
          *(uint *)(*(long *)(this + 0x200) + lVar11) =
               (uVar2 << (ulong)(uVar3 & 0x1f)) + uVar12 & 0xfffffff;
          uVar12 = uVar2 >> (ulong)(0x1c - uVar3 & 0x1f);
        } while (lVar7 < *(int *)(this + 0x210));
        if (uVar12 != 0) {
          *(uint *)(*(long *)(this + 0x200) + (long)*(int *)(this + 0x210) * 4) = uVar12;
          *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
        }
      }
    }
  }
  return;
}

