
/* v8::internal::Scope::AllocateVariablesRecursively() */

void __thiscall v8::internal::Scope::AllocateVariablesRecursively(Scope *this)

{
  Scope SVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  Scope *pSVar6;
  int iVar7;
  int iVar8;
  Scope *this_00;
  Variable *pVVar9;
  Scope *pSVar10;
  ushort uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  pSVar6 = this;
LAB_014a3248:
  this_00 = pSVar6;
  if ((*(ushort *)(this_00 + 0x81) >> 8 & 1) == 0) {
LAB_014a3524:
    pSVar10 = *(Scope **)(this_00 + 0x40);
    for (pSVar6 = this_00 + 0x38; pSVar6 != pSVar10; pSVar6 = (Scope *)(*(long *)pSVar6 + 0x18)) {
      AllocateNonParameterLocal(this_00,*(Variable **)pSVar6);
    }
    if ((*(ushort *)(this_00 + 0x81) >> 8 & 1) != 0) {
      pVVar9 = *(Variable **)(this_00 + 0xb8);
      if (pVVar9 == (Variable *)0x0) {
LAB_014a35bc:
        *(undefined8 *)(this_00 + 0xb8) = 0;
        pVVar9 = *(Variable **)(this_00 + 0xc0);
      }
      else {
        if (((*(int *)(*(long *)(pVVar9 + 8) + 0x10) != 0) &&
            (((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0 || (((byte)this_00[0x80] & 0xfe) == 4))))
           && ((uVar11 = *(ushort *)(pVVar9 + 0x28), *(ushort *)(pVVar9 + 0x28) = uVar11 | 0x800,
               (uVar11 & 0x70) != 0x20 && ((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0)))) {
          Variable::SetMaybeAssigned(pVVar9);
        }
        uVar4 = Variable::IsGlobalObjectProperty(pVVar9);
        if (((uVar4 & 1) != 0) || (((byte)pVVar9[0x29] >> 3 & 1) == 0)) goto LAB_014a35bc;
        AllocateNonParameterLocal(this_00,*(Variable **)(this_00 + 0xb8));
        pVVar9 = *(Variable **)(this_00 + 0xc0);
      }
      if (pVVar9 != (Variable *)0x0) {
        if (((*(int *)(*(long *)(pVVar9 + 8) + 0x10) != 0) &&
            (((((byte)this_00[0x81] >> 6 & 1) != 0 || (((byte)this_00[0x80] & 0xfe) == 4)) &&
             (uVar11 = *(ushort *)(pVVar9 + 0x28), *(ushort *)(pVVar9 + 0x28) = uVar11 | 0x800,
             (uVar11 & 0x70) != 0x20)))) && ((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0)) {
          Variable::SetMaybeAssigned(pVVar9);
        }
        uVar4 = Variable::IsGlobalObjectProperty(pVVar9);
        if (((uVar4 & 1) != 0) || (((byte)pVVar9[0x29] >> 3 & 1) == 0)) {
          *(undefined8 *)(this_00 + 0xc0) = 0;
        }
      }
      puVar12 = *(undefined8 **)(this_00 + 0xd8);
      if ((puVar12 != (undefined8 *)0x0) &&
         (pVVar9 = (Variable *)*puVar12, pVVar9 != (Variable *)0x0)) {
        if ((*(int *)(*(long *)(pVVar9 + 8) + 0x10) != 0) &&
           ((((((byte)this_00[0x81] >> 6 & 1) != 0 || (((byte)this_00[0x80] & 0xfe) == 4)) &&
             (uVar11 = *(ushort *)(pVVar9 + 0x28), *(ushort *)(pVVar9 + 0x28) = uVar11 | 0x800,
             (uVar11 & 0x70) != 0x20)) && ((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0)))) {
          Variable::SetMaybeAssigned(pVVar9);
        }
        uVar4 = Variable::IsGlobalObjectProperty(pVVar9);
        if (((uVar4 & 1) != 0) || (((byte)pVVar9[0x29] >> 3 & 1) == 0)) {
          *puVar12 = 0;
        }
      }
    }
    SVar1 = this_00[0x80];
    bVar3 = false;
    switch(SVar1) {
    case (Scope)0x2:
      if ((((byte)this_00[0x83] >> 1 & 1) == 0) && (((byte)this_00[0x81] >> 2 & 1) == 0)) {
LAB_014a36ec:
        bVar3 = false;
      }
      else {
LAB_014a36ac:
        bVar3 = true;
      }
      goto switchD_014a3654_caseD_4;
    case (Scope)0x3:
    case (Scope)0x7:
      goto LAB_014a3708;
    case (Scope)0x4:
      goto switchD_014a3654_caseD_4;
    default:
      if (((*(ushort *)(this_00 + 0x81) & 1) != 0) &&
         ((*(ushort *)(*(long *)(this_00 + 8) + 0x81) & 1) == 0)) goto LAB_014a36ac;
      if ((SVar1 != (Scope)0x6) && (SVar1 != (Scope)0x0)) goto LAB_014a36ec;
      iVar7 = *(int *)(this_00 + 0x7c);
      bVar3 = ((*(ushort *)(this_00 + 0x81) ^ 0xffff) & 0x104) == 0;
      if (SVar1 != (Scope)0x3) {
        SVar1 = this_00[0x81];
        goto joined_r0x014a36dc;
      }
      goto LAB_014a3700;
    }
  }
  if (-1 < (char)this_00[0x83]) {
    if (this_00[0x80] == (Scope)0x2) {
      pVVar9 = *(Variable **)(this_00 + 200);
      if (pVVar9 == (Variable *)0x0) {
        uVar11 = 0;
      }
      else {
        if (((((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0) &&
             (*(int *)(*(long *)(pVVar9 + 8) + 0x10) != 0)) &&
            (uVar11 = *(ushort *)(pVVar9 + 0x28), *(ushort *)(pVVar9 + 0x28) = uVar11 | 0x800,
            (uVar11 & 0x70) != 0x20)) && ((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0)) {
          Variable::SetMaybeAssigned(pVVar9);
        }
        uVar4 = Variable::IsGlobalObjectProperty(pVVar9);
        if ((((uVar4 & 1) == 0) && (((byte)pVVar9[0x29] >> 3 & 1) != 0)) &&
           ((*(ushort *)(this_00 + 0x83) >> 4 & 1) == 0)) {
          uVar11 = *(ushort *)(this_00 + 0x83) & (ushort)(((byte)this_00[0x81] & 1) == 0);
        }
        else {
          uVar11 = 0;
          *(undefined8 *)(this_00 + 200) = 0;
        }
      }
      uVar4 = (ulong)*(uint *)(this_00 + 0x88);
      if (0 < (int)*(uint *)(this_00 + 0x88)) {
        do {
          pVVar9 = *(Variable **)(*(long *)(this_00 + 0x90) + uVar4 * 8 + -8);
          if (uVar11 != 0) {
            *(ushort *)(pVVar9 + 0x28) = *(ushort *)(pVVar9 + 0x28) | 0x800;
            Variable::SetMaybeAssigned(pVVar9);
            *(ushort *)(pVVar9 + 0x28) = *(ushort *)(pVVar9 + 0x28) | 0x400;
          }
          if ((((*(int *)(*(long *)(pVVar9 + 8) + 0x10) != 0) &&
               ((((byte)this_00[0x81] >> 6 & 1) != 0 || (((byte)this_00[0x80] & 0xfe) == 4)))) &&
              (uVar2 = *(ushort *)(pVVar9 + 0x28), *(ushort *)(pVVar9 + 0x28) = uVar2 | 0x800,
              (uVar2 & 0x70) != 0x20)) && ((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0)) {
            Variable::SetMaybeAssigned(pVVar9);
          }
          uVar13 = uVar4 - 1;
          uVar5 = Variable::IsGlobalObjectProperty(pVVar9);
          if (((uVar5 & 1) == 0) && (uVar2 = *(ushort *)(pVVar9 + 0x28), (uVar2 >> 0xb & 1) != 0)) {
            if ((*(ushort *)(this_00 + 0x81) >> 7 & 1) == 0) {
              if ((uVar2 & 0xf) != 3) {
                SVar1 = this_00[0x80];
                if (SVar1 == (Scope)0x1) {
LAB_014a34bc:
                  if ((uVar2 & 0xf) < 2) goto LAB_014a33a0;
                }
                else {
                  if (SVar1 == (Scope)0x5) goto LAB_014a33a0;
                  if (SVar1 == (Scope)0x4) goto LAB_014a34bc;
                }
                if ((*(ushort *)(this_00 + 0x81) & 0x40) != 0 || (uVar2 & 0x400) != 0)
                goto LAB_014a33a0;
              }
              if ((uVar2 & 0x380) == 0) {
                *(ushort *)(pVVar9 + 0x28) = uVar2 & 0xfcff | 0x80;
                *(int *)(pVVar9 + 0x20) = (int)uVar4 + -1;
              }
            }
            else {
LAB_014a33a0:
              if ((uVar2 & 0x380) == 0) {
                iVar7 = *(int *)(this_00 + 0x7c);
                *(int *)(this_00 + 0x7c) = iVar7 + 1;
                *(int *)(pVVar9 + 0x20) = iVar7;
                *(ushort *)(pVVar9 + 0x28) = *(ushort *)(pVVar9 + 0x28) & 0xfdff | 0x180;
              }
            }
          }
          uVar4 = uVar13;
        } while (0 < (long)uVar13);
      }
    }
    if (((byte)this_00[0x84] >> 4 & 1) != 0) {
      pVVar9 = *(Variable **)(this_00 + 0xb0);
      if (((*(int *)(*(long *)(pVVar9 + 8) + 0x10) != 0) &&
          (((((byte)this_00[0x81] >> 6 & 1) != 0 || (((byte)this_00[0x80] & 0xfe) == 4)) &&
           (uVar11 = *(ushort *)(pVVar9 + 0x28), *(ushort *)(pVVar9 + 0x28) = uVar11 | 0x800,
           (uVar11 & 0x70) != 0x20)))) && ((*(ushort *)(this_00 + 0x81) >> 6 & 1) != 0)) {
        Variable::SetMaybeAssigned(pVVar9);
      }
      uVar4 = Variable::IsGlobalObjectProperty(pVVar9);
      if (((uVar4 & 1) == 0) && (uVar11 = *(ushort *)(pVVar9 + 0x28), (uVar11 >> 0xb & 1) != 0)) {
        if ((*(ushort *)(this_00 + 0x81) >> 7 & 1) == 0) {
          if ((uVar11 & 0xf) != 3) {
            SVar1 = this_00[0x80];
            if (SVar1 == (Scope)0x1) {
LAB_014a34e4:
              if ((uVar11 & 0xf) < 2) goto LAB_014a34fc;
            }
            else {
              if (SVar1 == (Scope)0x5) goto LAB_014a34fc;
              if (SVar1 == (Scope)0x4) goto LAB_014a34e4;
            }
            if ((*(ushort *)(this_00 + 0x81) & 0x40) != 0 || (uVar11 & 0x400) != 0)
            goto LAB_014a34fc;
          }
          if ((uVar11 & 0x380) == 0) {
            *(ushort *)(pVVar9 + 0x28) = uVar11 & 0xfcff | 0x80;
            *(undefined4 *)(pVVar9 + 0x20) = 0xffffffff;
          }
        }
        else {
LAB_014a34fc:
          if ((uVar11 & 0x380) == 0) {
            iVar7 = *(int *)(this_00 + 0x7c);
            *(int *)(this_00 + 0x7c) = iVar7 + 1;
            *(int *)(pVVar9 + 0x20) = iVar7;
            *(ushort *)(pVVar9 + 0x28) = *(ushort *)(pVVar9 + 0x28) & 0xfdff | 0x180;
          }
        }
      }
    }
    goto LAB_014a3524;
  }
LAB_014a371c:
  while( true ) {
    if (*(Scope **)(this_00 + 0x18) != (Scope *)0x0) break;
    if (this_00 == this) {
      return;
    }
    this_00 = *(Scope **)(this_00 + 8);
  }
  pSVar6 = *(Scope **)(this_00 + 0x18);
  if (this_00 == this) {
    return;
  }
  goto LAB_014a3248;
switchD_014a3654_caseD_4:
  iVar7 = *(int *)(this_00 + 0x7c);
  SVar1 = this_00[0x81];
joined_r0x014a36dc:
  if (((byte)SVar1 >> 2 & 1) == 0) {
    iVar8 = 2;
  }
  else {
LAB_014a3700:
    iVar8 = 3;
  }
  if ((bVar3) || (iVar7 != iVar8)) {
LAB_014a3708:
    pSVar6 = *(Scope **)(this_00 + 0x10);
  }
  else {
    *(undefined4 *)(this_00 + 0x7c) = 0;
    pSVar6 = *(Scope **)(this_00 + 0x10);
  }
  if (pSVar6 != (Scope *)0x0) goto LAB_014a3248;
  goto LAB_014a371c;
}

