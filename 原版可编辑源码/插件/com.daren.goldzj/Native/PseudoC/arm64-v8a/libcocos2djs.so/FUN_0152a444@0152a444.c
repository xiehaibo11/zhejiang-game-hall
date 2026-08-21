
void FUN_0152a444(ulong *param_1,VariableProxy *param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  Scope *this;
  ulong uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long *plVar10;
  VariableProxy *pVVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = param_1 + 1;
  do {
    switch(*(uint *)(param_2 + 4) & 0x3f) {
    case 1:
      goto switchD_0152a490_caseD_1;
    case 2:
      if ((char)*puVar1 != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (uVar3 < *param_1) goto LAB_0152b074;
      FUN_0152a444(param_1,uVar8);
      if ((char)param_1[1] != '\0') {
        return;
      }
      param_2 = *(VariableProxy **)(param_2 + 0x20);
      break;
    case 3:
      if ((char)*puVar1 != '\0') {
        return;
      }
      lVar13 = *(long *)(param_2 + 0x20);
      goto LAB_0152a610;
    case 4:
      lVar13 = *(long *)(param_2 + 0x20);
      if (lVar13 != 0) {
        if ((char)*puVar1 != '\0') {
          return;
        }
        uVar3 = v8::internal::GetCurrentStackPosition();
        if (uVar3 < *param_1) goto LAB_0152b074;
        FUN_0152a444(param_1,lVar13);
        if ((char)param_1[1] != '\0') {
          return;
        }
      }
      lVar13 = *(long *)(param_2 + 0x28);
      if (lVar13 != 0) {
        if ((char)*puVar1 != '\0') {
          return;
        }
        uVar3 = v8::internal::GetCurrentStackPosition();
        if (uVar3 < *param_1) goto LAB_0152b074;
        FUN_0152a444(param_1,lVar13);
        if ((char)param_1[1] != '\0') {
          return;
        }
      }
      lVar13 = *(long *)(param_2 + 0x30);
      if (lVar13 != 0) {
        if ((char)*puVar1 != '\0') {
          return;
        }
        goto LAB_0152a610;
      }
      goto switchD_0152a490_caseD_1;
    case 5:
    case 6:
      if ((char)*puVar1 != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        if ((char)param_1[1] != '\0') {
          return;
        }
        lVar13 = *(long *)(param_2 + 0x28);
        goto LAB_0152a610;
      }
      goto LAB_0152b074;
    case 7:
      this = *(Scope **)(param_2 + 0x18);
      if (this != (Scope *)0x0) goto LAB_0152ae94;
      if (*(int *)(param_2 + 0x14) < 1) {
        return;
      }
      cVar7 = (char)*puVar1;
      lVar13 = 0;
      bVar2 = cVar7 == '\0';
      goto LAB_0152a9e8;
    case 8:
      if ((char)*puVar1 != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(int *)(param_2 + 0x24) < 1) {
          return;
        }
        lVar13 = 0;
        goto LAB_0152aff0;
      }
      goto LAB_0152b074;
    case 9:
    case 0xf:
      if ((char)*puVar1 != '\0') {
        return;
      }
      param_2 = *(VariableProxy **)(param_2 + 8);
      break;
    default:
      return;
    case 0xb:
      if ((char)*puVar1 != '\0') {
        return;
      }
      goto LAB_0152a668;
    case 0xc:
      if ((char)*puVar1 != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        if ((char)param_1[1] != '\0') {
          return;
        }
        lVar13 = *(long *)(param_2 + 0x10);
LAB_0152a610:
        uVar3 = v8::internal::GetCurrentStackPosition();
        if (*param_1 <= uVar3) {
          FUN_0152a444(param_1,lVar13);
          if ((char)param_1[1] != '\0') {
            return;
          }
          goto LAB_0152a68c;
        }
      }
      goto LAB_0152b074;
    case 0x10:
      if ((char)*puVar1 == '\0') {
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = v8::internal::GetCurrentStackPosition();
        if (uVar3 < *param_1) {
          *(char *)puVar1 = '\x01';
        }
        else {
          FUN_0152a444(param_1,uVar8);
        }
      }
      this = *(Scope **)(param_2 + 8);
      goto LAB_0152ae94;
    case 0x11:
      if ((char)*puVar1 == '\0') {
        uVar8 = *(undefined8 *)(param_2 + 8);
        uVar3 = v8::internal::GetCurrentStackPosition();
        if (*param_1 <= uVar3) {
          FUN_0152a444(param_1,uVar8);
          goto LAB_0152a67c;
        }
        *(char *)puVar1 = '\x01';
        this = *(Scope **)(param_2 + 0x10);
      }
      else {
LAB_0152a67c:
        this = *(Scope **)(param_2 + 0x10);
      }
      if (this != (Scope *)0x0) goto LAB_0152ae94;
switchD_0152a490_caseD_1:
      if ((char)*puVar1 != '\0') {
        return;
      }
LAB_0152a68c:
      param_2 = *(VariableProxy **)(param_2 + 0x18);
      break;
    case 0x12:
      if ((char)*puVar1 != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (uVar3 < *param_1) goto LAB_0152b074;
      FUN_0152a444(param_1,uVar8);
      if ((char)param_1[1] != '\0') {
        return;
      }
LAB_0152a668:
      param_2 = *(VariableProxy **)(param_2 + 0x10);
      break;
    case 0x14:
      plVar10 = *(long **)(param_2 + 8);
      if (*(int *)((long)plVar10 + 0xc) < 1) {
        return;
      }
      lVar13 = 0;
      goto LAB_0152aa74;
    case 0x16:
      if (*(int *)(param_2 + 0x24) < 1) {
        return;
      }
      iVar5 = (int)param_1[3];
      lVar13 = 0;
      bVar2 = (char)param_1[1] == '\0';
      goto LAB_0152a92c;
    case 0x17:
      if (*(int *)(param_2 + 0x24) < 1) {
        return;
      }
      cVar7 = (char)param_1[1];
      iVar5 = (int)param_1[3];
      lVar13 = 0;
      bVar2 = cVar7 == '\0';
      goto LAB_0152abe8;
    case 0x18:
    case 0x1a:
    case 0x20:
    case 0x2c:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_0152ac7c;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        uVar3 = param_1[3];
        *(int *)(param_1 + 3) = (int)uVar3 + -1;
        if ((char)param_1[1] != '\0') {
          return;
        }
        *(int *)(param_1 + 3) = (int)uVar3;
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        goto LAB_0152a6bc;
      }
      goto LAB_0152ac74;
    case 0x19:
    case 0x23:
    case 0x28:
    case 0x2b:
    case 0x30:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] == '\0') {
        uVar8 = *(undefined8 *)(param_2 + 8);
        goto LAB_0152a6bc;
      }
      goto LAB_0152ac7c;
    case 0x1b:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_0152ac7c;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(long *)(param_2 + 0x18) == *(long *)(param_2 + 0x10)) {
          return;
        }
        lVar13 = 0;
        uVar3 = 0;
        while( true ) {
          *(int *)(param_1 + 3) = iVar5 + 1;
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar13);
          uVar4 = v8::internal::GetCurrentStackPosition();
          if (uVar4 < *param_1) break;
          FUN_0152a444(param_1,uVar8);
          iVar5 = (int)param_1[3] + -1;
          *(int *)(param_1 + 3) = iVar5;
          if ((char)param_1[1] != '\0') {
            return;
          }
          uVar3 = uVar3 + 1;
          lVar13 = lVar13 + 0x10;
          if ((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 4) <= uVar3) {
            return;
          }
        }
        goto LAB_0152af40;
      }
      goto LAB_0152ac74;
    case 0x1c:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_0152ac7c;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(int *)(param_2 + 0x1c) < 1) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar13 * 8);
          *(int *)(param_1 + 3) = iVar5 + 1;
          uVar3 = v8::internal::GetCurrentStackPosition();
          if (uVar3 < *param_1) break;
          FUN_0152a444(param_1,uVar8);
          iVar5 = (int)param_1[3] + -1;
          *(int *)(param_1 + 3) = iVar5;
          if ((char)param_1[1] != '\0') {
            return;
          }
          lVar13 = lVar13 + 1;
          if (*(int *)(param_2 + 0x1c) <= lVar13) {
            return;
          }
        }
        goto LAB_0152af40;
      }
      goto LAB_0152ac74;
    case 0x1d:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_0152ac7c;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(int *)(param_2 + 0x1c) < 1) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar13 * 8);
          *(int *)(param_1 + 3) = iVar5 + 1;
          uVar3 = v8::internal::GetCurrentStackPosition();
          if (uVar3 < *param_1) break;
          FUN_0152a444(param_1,uVar8);
          iVar5 = (int)param_1[3] + -1;
          *(int *)(param_1 + 3) = iVar5;
          if ((char)param_1[1] != '\0') {
            return;
          }
          lVar13 = lVar13 + 1;
          if (*(int *)(param_2 + 0x1c) <= lVar13) {
            return;
          }
        }
        goto LAB_0152af40;
      }
      goto LAB_0152ac74;
    case 0x1e:
      if (*(int *)(param_2 + 0x24) < 1) {
        return;
      }
      cVar7 = (char)param_1[1];
      iVar5 = (int)param_1[3];
      lVar13 = 0;
      bVar2 = cVar7 == '\0';
      goto LAB_0152acc0;
    case 0x1f:
      this = *(Scope **)(param_2 + 0x10);
      goto LAB_0152ae94;
    case 0x21:
      FUN_0152b08c(param_1,param_2);
      return;
    case 0x22:
    case 0x2e:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_0152ac7c;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (uVar3 < *param_1) goto LAB_0152ac74;
      FUN_0152a444(param_1,uVar8);
      uVar3 = param_1[3];
      *(int *)(param_1 + 3) = (int)uVar3 + -1;
      if ((char)param_1[1] != '\0') {
        return;
      }
      *(int *)(param_1 + 3) = (int)uVar3;
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar3) {
        FUN_0152a444(param_1,uVar8);
        uVar3 = param_1[3];
        *(int *)(param_1 + 3) = (int)uVar3 + -1;
        if ((char)param_1[1] != '\0') {
          return;
        }
        *(int *)(param_1 + 3) = (int)uVar3;
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        goto LAB_0152a6bc;
      }
      goto LAB_0152af40;
    case 0x24:
      lVar13 = *(long *)(param_2 + 8);
      if (*(Scope **)(lVar13 + 0x18) != (Scope *)0x0) {
        v8::internal::Scope::ReplaceOuterScope(*(Scope **)(lVar13 + 0x18),(Scope *)param_1[4]);
        goto LAB_0152ad40;
      }
      if (*(int *)(lVar13 + 0x14) < 1) goto LAB_0152ad40;
      cVar7 = (char)*puVar1;
      lVar14 = 0;
      bVar2 = cVar7 == '\0';
      goto LAB_0152ae34;
    case 0x26:
      this = *(Scope **)(param_2 + 0x28);
LAB_0152ae94:
      v8::internal::Scope::ReplaceOuterScope(this,(Scope *)param_1[4]);
      return;
    case 0x2d:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_0152ac7c;
      uVar8 = *(undefined8 *)(param_2 + 0x10);
LAB_0152a6bc:
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (uVar3 < *param_1) goto LAB_0152ac74;
      FUN_0152a444(param_1,uVar8);
      goto LAB_0152ac7c;
    case 0x2f:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      pVVar11 = *(VariableProxy **)(param_2 + 8);
      if ((((byte)pVVar11[5] & 1) == 0) &&
         (uVar3 = v8::internal::Scope::RemoveUnresolved(*(Scope **)(param_1[4] + 8),pVVar11),
         (uVar3 & 1) != 0)) {
        v8::internal::Scope::AddUnresolved((Scope *)param_1[4],pVVar11);
      }
      uVar3 = param_1[3];
      *(int *)(param_1 + 3) = (int)uVar3 + -1;
      if ((char)param_1[1] != '\0') {
        return;
      }
      *(int *)(param_1 + 3) = (int)uVar3;
      pVVar11 = *(VariableProxy **)(param_2 + 0x10);
      if ((((byte)pVVar11[5] & 1) == 0) &&
         (uVar3 = v8::internal::Scope::RemoveUnresolved(*(Scope **)(param_1[4] + 8),pVVar11),
         (uVar3 & 1) != 0)) {
        v8::internal::Scope::AddUnresolved((Scope *)param_1[4],pVVar11);
      }
      goto LAB_0152ac7c;
    case 0x31:
      iVar5 = *(int *)((long)*(undefined8 **)(param_2 + 0x10) + 0xc);
      if (iVar5 == 0) {
        return;
      }
      puVar12 = (undefined8 *)**(undefined8 **)(param_2 + 0x10);
      cVar7 = (char)param_1[1];
      uVar8 = *puVar12;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if (cVar7 == '\0') {
        uVar3 = v8::internal::GetCurrentStackPosition();
        if (uVar3 < *param_1) {
          cVar7 = '\x01';
          *(char *)puVar1 = '\x01';
        }
        else {
          FUN_0152a444(param_1,uVar8);
          cVar7 = (char)param_1[1];
        }
      }
      iVar6 = (int)param_1[3] + -1;
      *(int *)(param_1 + 3) = iVar6;
      if (cVar7 != '\0') {
        return;
      }
      if (iVar5 == 1) {
        return;
      }
      lVar13 = (long)iVar5 * 8 + -0x10;
      while( true ) {
        puVar12 = puVar12 + 1;
        uVar8 = *puVar12;
        *(int *)(param_1 + 3) = iVar6 + 1;
        uVar3 = v8::internal::GetCurrentStackPosition();
        if (uVar3 < *param_1) {
          cVar7 = '\x01';
          *(char *)puVar1 = '\x01';
        }
        else {
          FUN_0152a444(param_1,uVar8);
          cVar7 = (char)param_1[1];
        }
        iVar6 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar6;
        if (cVar7 != '\0') break;
        bVar2 = lVar13 == 0;
        lVar13 = lVar13 + -8;
        if (bVar2) {
          return;
        }
      }
      return;
    case 0x35:
      if ((*(uint *)(param_2 + 4) >> 8 & 1) != 0) {
        return;
      }
      goto LAB_0152ad54;
    case 0x38:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = v8::internal::GetCurrentStackPosition();
  } while (*param_1 <= uVar3);
LAB_0152b074:
  *(char *)puVar1 = '\x01';
  return;
LAB_0152acc0:
  uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar13 * 8);
  *(int *)(param_1 + 3) = iVar5 + 1;
  if (bVar2) {
    uVar3 = v8::internal::GetCurrentStackPosition();
    if (uVar3 < *param_1) goto LAB_0152af40;
    FUN_0152a444(param_1,uVar8);
    cVar7 = (char)param_1[1];
  }
  iVar5 = (int)param_1[3] + -1;
  *(int *)(param_1 + 3) = iVar5;
  if (cVar7 != '\0') {
    return;
  }
  lVar13 = lVar13 + 1;
  cVar7 = '\0';
  bVar2 = true;
  if (*(int *)(param_2 + 0x24) <= lVar13) {
    return;
  }
  goto LAB_0152acc0;
LAB_0152abe8:
  uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar13 * 8);
  *(int *)(param_1 + 3) = iVar5 + 1;
  if (bVar2) {
    uVar3 = v8::internal::GetCurrentStackPosition();
    if (uVar3 < *param_1) goto LAB_0152af40;
    FUN_0152a444(param_1,uVar8);
    cVar7 = (char)param_1[1];
  }
  iVar5 = (int)param_1[3] + -1;
  *(int *)(param_1 + 3) = iVar5;
  if (cVar7 != '\0') {
    return;
  }
  lVar13 = lVar13 + 1;
  cVar7 = '\0';
  bVar2 = true;
  if (*(int *)(param_2 + 0x24) <= lVar13) {
    return;
  }
  goto LAB_0152abe8;
LAB_0152a92c:
  puVar9 = *(ulong **)(*(long *)(param_2 + 0x18) + lVar13 * 8);
  *(int *)(param_1 + 3) = iVar5 + 1;
  if (!bVar2) goto LAB_0152ac7c;
  uVar4 = *puVar9;
  uVar3 = v8::internal::GetCurrentStackPosition();
  if (uVar3 < *param_1) goto LAB_0152ac74;
  FUN_0152a444(param_1,uVar4 & 0xfffffffffffffffc);
  uVar3 = param_1[3];
  *(int *)(param_1 + 3) = (int)uVar3 + -1;
  if ((char)param_1[1] != '\0') {
    return;
  }
  *(int *)(param_1 + 3) = (int)uVar3;
  uVar4 = puVar9[1];
  uVar3 = v8::internal::GetCurrentStackPosition();
  if (uVar3 < *param_1) goto LAB_0152af40;
  FUN_0152a444(param_1,uVar4);
  iVar5 = (int)param_1[3] + -1;
  *(int *)(param_1 + 3) = iVar5;
  if ((char)param_1[1] != '\0') {
    return;
  }
  lVar13 = lVar13 + 1;
  bVar2 = true;
  if (*(int *)(param_2 + 0x24) <= lVar13) {
    return;
  }
  goto LAB_0152a92c;
LAB_0152af40:
  iVar5 = (int)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  goto LAB_0152ac80;
LAB_0152aa74:
  puVar9 = *(ulong **)(*plVar10 + lVar13 * 8);
  uVar3 = *puVar9 & 0xfffffffffffffffc;
  cVar7 = (char)*puVar1;
  if ((*(uint *)(uVar3 + 4) & 0x3f) != 0x29) {
    if (cVar7 != '\0') {
      return;
    }
    uVar4 = v8::internal::GetCurrentStackPosition();
    if (uVar4 < *param_1) goto LAB_0152b074;
    FUN_0152a444(param_1,uVar3);
    cVar7 = (char)param_1[1];
  }
  if (cVar7 != '\0') {
    return;
  }
  uVar4 = puVar9[1];
  uVar3 = v8::internal::GetCurrentStackPosition();
  if (uVar3 < *param_1) goto LAB_0152b074;
  FUN_0152a444(param_1,uVar4);
  if ((char)param_1[1] != '\0') {
    return;
  }
  lVar13 = lVar13 + 1;
  if (*(int *)((long)plVar10 + 0xc) <= lVar13) {
    return;
  }
  goto LAB_0152aa74;
LAB_0152aff0:
  plVar10 = *(long **)(*(long *)(param_2 + 0x18) + lVar13 * 8);
  lVar14 = *plVar10;
  if (lVar14 != 0) {
    uVar3 = v8::internal::GetCurrentStackPosition();
    if (uVar3 < *param_1) goto LAB_0152b074;
    FUN_0152a444(param_1,lVar14);
    if ((char)param_1[1] != '\0') {
      return;
    }
  }
  if (0 < *(int *)((long)plVar10 + 0x14)) {
    lVar14 = 0;
    do {
      uVar8 = *(undefined8 *)(plVar10[1] + lVar14 * 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (uVar3 < *param_1) goto LAB_0152b074;
      FUN_0152a444(param_1,uVar8);
      if ((char)param_1[1] != '\0') {
        return;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)((long)plVar10 + 0x14));
  }
  lVar13 = lVar13 + 1;
  if (*(int *)(param_2 + 0x24) <= lVar13) {
    return;
  }
  goto LAB_0152aff0;
LAB_0152a9e8:
  if (bVar2) {
    uVar8 = *(undefined8 *)(*(long *)(param_2 + 8) + lVar13 * 8);
    uVar3 = v8::internal::GetCurrentStackPosition();
    if (uVar3 < *param_1) goto LAB_0152b074;
    FUN_0152a444(param_1,uVar8);
    cVar7 = (char)param_1[1];
  }
  if (cVar7 != '\0') {
    return;
  }
  lVar13 = lVar13 + 1;
  cVar7 = '\0';
  bVar2 = true;
  if (*(int *)(param_2 + 0x14) <= lVar13) {
    return;
  }
  goto LAB_0152a9e8;
  while( true ) {
    lVar14 = lVar14 + 1;
    cVar7 = '\0';
    bVar2 = true;
    if (*(int *)(lVar13 + 0x14) <= lVar14) break;
LAB_0152ae34:
    if (bVar2) {
      uVar8 = *(undefined8 *)(*(long *)(lVar13 + 8) + lVar14 * 8);
      uVar3 = v8::internal::GetCurrentStackPosition();
      if (uVar3 < *param_1) goto LAB_0152b074;
      FUN_0152a444(param_1,uVar8);
      cVar7 = (char)param_1[1];
    }
    if (cVar7 != '\0') break;
  }
LAB_0152ad40:
  if ((char)*puVar1 != '\0') {
    return;
  }
  param_2 = *(VariableProxy **)(param_2 + 0x10);
  if (((byte)param_2[5] & 1) != 0) {
    return;
  }
LAB_0152ad54:
  uVar3 = v8::internal::Scope::RemoveUnresolved(*(Scope **)(param_1[4] + 8),param_2);
  if ((uVar3 & 1) == 0) {
    return;
  }
  v8::internal::Scope::AddUnresolved((Scope *)param_1[4],param_2);
  return;
LAB_0152ac74:
  *(char *)puVar1 = '\x01';
LAB_0152ac7c:
  iVar5 = (int)param_1[3];
LAB_0152ac80:
  *(int *)(param_1 + 3) = iVar5 + -1;
  return;
}

