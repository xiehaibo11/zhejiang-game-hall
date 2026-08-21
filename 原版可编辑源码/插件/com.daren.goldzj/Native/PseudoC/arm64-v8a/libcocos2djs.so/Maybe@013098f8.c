
/* v8::internal::compiler::Type::Maybe(v8::internal::compiler::Type) const */

ulong __thiscall v8::internal::compiler::Type::Maybe(Type *this,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 local_50;
  int *local_48;
  
  local_48 = param_2;
  uVar1 = BitsetLub(this);
  uVar2 = BitsetLub((Type *)&local_48);
  if ((uVar2 & uVar1) == 0) {
LAB_013099f4:
    uVar1 = 0;
    goto LAB_01309a0c;
  }
  piVar4 = *(int **)this;
  if ((((ulong)piVar4 & 1) == 0) && (*piVar4 == 3)) {
    uVar2 = piVar4[1];
    if ((int)uVar2 < 1) goto LAB_013099f4;
    local_50 = **(undefined8 **)(piVar4 + 2);
    uVar3 = Maybe((Type *)&local_50,param_2);
    if ((uVar3 & 1) == 0) {
      lVar6 = 8;
      do {
        if ((ulong)uVar2 * 8 - lVar6 == 0) goto LAB_013099f4;
        local_50 = *(undefined8 *)(*(long *)(*(long *)this + 8) + lVar6);
        uVar3 = Maybe((Type *)&local_50,param_2);
        lVar6 = lVar6 + 8;
        uVar1 = 1;
      } while ((uVar3 & 1) == 0);
      goto LAB_01309a0c;
    }
  }
  else {
    if ((((ulong)param_2 & 1) == 0) && (*param_2 == 3)) {
      uVar1 = param_2[1];
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          uVar3 = Maybe(this,*(undefined8 *)(*(long *)(param_2 + 2) + lVar6));
          if ((uVar3 & 1) != 0) goto LAB_01309a08;
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar1 * 8 - lVar6 != 0);
      }
      goto LAB_013099f4;
    }
    uVar3 = (ulong)param_2 & 1;
    if ((uVar3 & (ulong)piVar4) != 0) goto LAB_01309a08;
    if ((((ulong)piVar4 & 1) == 0) && (*piVar4 == 4)) {
      if (uVar3 != 0) {
        uVar1 = (uint)param_2 & 0x45e;
        if (((ulong)param_2 & 0x45e) == 0) goto LAB_013099f4;
        if ((uVar1 | 0x10) == uVar1) {
          lVar6 = 0;
LAB_01309b38:
          dVar9 = *(double *)(BitsetType::BoundariesArray + lVar6 * 0x10 + 8);
          dVar7 = (double)Min(this);
          if (dVar7 <= dVar9) {
            dVar7 = dVar9;
          }
          if ((uVar1 | 0x10) != uVar1) goto LAB_01309b74;
          dVar9 = INFINITY;
        }
        else {
          if ((uVar1 | 8) == uVar1) {
            lVar6 = 1;
            goto LAB_01309b38;
          }
          if ((uVar1 | 0x40) == uVar1) {
            lVar6 = 2;
            goto LAB_01309b38;
          }
          if ((uVar1 | 0x400) == uVar1) {
            lVar6 = 3;
            goto LAB_01309b38;
          }
          if ((uVar1 | 2) == uVar1) {
            lVar6 = 4;
            goto LAB_01309b38;
          }
          if ((uVar1 | 4) == uVar1) {
            lVar6 = 5;
            goto LAB_01309b38;
          }
          dVar7 = (double)Min(this);
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
LAB_01309b74:
          lVar6 = 0;
          do {
            lVar5 = lVar6;
            if (lVar5 + -0x10 == -0x70) {
              dVar9 = 0.0;
              goto LAB_01309bb4;
            }
            lVar6 = lVar5 + -0x10;
          } while ((*(uint *)(BitsetType::BoundariesArray + lVar5 + 0x50) | uVar1) != uVar1);
          dVar9 = *(double *)(BitsetType::BoundariesArray + lVar5 + 0x68) + -1.0;
        }
LAB_01309bb4:
        dVar8 = (double)Max(this);
        if (dVar9 <= dVar8) {
          dVar8 = dVar9;
        }
        uVar1 = (uint)(dVar7 <= dVar8);
        goto LAB_01309a0c;
      }
      if (*param_2 == 4) {
        dVar7 = *(double *)(param_2 + 2);
        if (*(double *)(param_2 + 2) <= *(double *)(piVar4 + 2)) {
          dVar7 = *(double *)(piVar4 + 2);
        }
        dVar9 = *(double *)(param_2 + 4);
        if (*(double *)(piVar4 + 4) <= *(double *)(param_2 + 4)) {
          dVar9 = *(double *)(piVar4 + 4);
        }
        uVar1 = (uint)(dVar7 <= dVar9);
        goto LAB_01309a0c;
      }
LAB_01309a70:
      if (*param_2 == 4) {
        uVar1 = Maybe((Type *)&local_48);
        goto LAB_01309a0c;
      }
    }
    else if (uVar3 == 0) goto LAB_01309a70;
    if ((((uint)piVar4 | (uint)param_2) & 1) == 0) {
      uVar3 = SimplyEquals(this,param_2);
      return uVar3;
    }
  }
LAB_01309a08:
  uVar1 = 1;
LAB_01309a0c:
  return (ulong)(uVar1 & 1);
}

