
void FUN_00f12f78(ulong *param_1,FunctionLiteral *param_2)

{
  bool bVar1;
  ulong uVar2;
  vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
  *this;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  FunctionLiteral *local_48 [9];
  
  do {
    switch(*(uint *)(param_2 + 4) & 0x3f) {
    case 1:
      goto switchD_00f12fc0_caseD_1;
    case 2:
      if ((char)param_1[1] != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13648;
      FUN_00f12f78(param_1,uVar8);
      if ((char)param_1[1] != '\0') {
        return;
      }
      param_2 = *(FunctionLiteral **)(param_2 + 0x20);
      break;
    case 3:
      if ((char)param_1[1] != '\0') {
        return;
      }
      lVar7 = *(long *)(param_2 + 0x20);
LAB_00f13254:
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,lVar7);
        goto switchD_00f12fc0_caseD_1;
      }
      goto LAB_00f13648;
    case 4:
      lVar7 = *(long *)(param_2 + 0x20);
      if (lVar7 != 0) {
        if ((char)param_1[1] != '\0') {
          return;
        }
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) goto LAB_00f13648;
        FUN_00f12f78(param_1,lVar7);
        if ((char)param_1[1] != '\0') {
          return;
        }
      }
      lVar7 = *(long *)(param_2 + 0x28);
      if (lVar7 != 0) {
        if ((char)param_1[1] != '\0') {
          return;
        }
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) goto LAB_00f13648;
        FUN_00f12f78(param_1,lVar7);
        if ((char)param_1[1] != '\0') {
          return;
        }
      }
      lVar7 = *(long *)(param_2 + 0x30);
      if (lVar7 != 0) {
        if ((char)param_1[1] != '\0') {
          return;
        }
        goto LAB_00f13254;
      }
switchD_00f12fc0_caseD_1:
      if ((char)param_1[1] != '\0') {
        return;
      }
LAB_00f13624:
      param_2 = *(FunctionLiteral **)(param_2 + 0x18);
      break;
    case 5:
    case 6:
      if ((char)param_1[1] != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        if ((char)param_1[1] != '\0') {
          return;
        }
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        goto LAB_00f1334c;
      }
      goto LAB_00f13648;
    case 7:
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_00f13e04;
      iVar5 = (int)param_1[3] + 1;
      *(int *)(param_1 + 3) = iVar5;
      plVar12 = *(long **)(*(long *)(param_2 + 0x18) + 0x60);
      plVar13 = (long *)(*(long *)(param_2 + 0x18) + 0x58);
      if (plVar13 == plVar12) {
        cVar3 = (char)param_1[1];
        goto LAB_00f13df4;
      }
      cVar3 = (char)param_1[1];
      bVar1 = cVar3 == '\0';
      cVar4 = cVar3;
      goto LAB_00f132ac;
    case 8:
      if ((char)param_1[1] != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(int *)(param_2 + 0x24) < 1) {
          return;
        }
        lVar7 = 0;
        goto LAB_00f13e80;
      }
      goto LAB_00f13648;
    case 9:
    case 0xf:
      if ((char)param_1[1] != '\0') {
        return;
      }
      param_2 = *(FunctionLiteral **)(param_2 + 8);
      break;
    default:
      return;
    case 0xb:
      if ((char)param_1[1] != '\0') {
        return;
      }
      goto LAB_00f13634;
    case 0xc:
      if ((char)param_1[1] != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        cVar4 = (char)param_1[1];
        goto joined_r0x00f13344;
      }
      goto LAB_00f13648;
    case 0x10:
      cVar4 = (char)param_1[1];
joined_r0x00f13344:
      if (cVar4 != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      goto LAB_00f1334c;
    case 0x11:
      if ((char)param_1[1] != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 8);
LAB_00f1334c:
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        if ((char)param_1[1] != '\0') {
          return;
        }
        goto LAB_00f13624;
      }
      goto LAB_00f13648;
    case 0x12:
      if ((char)param_1[1] != '\0') {
        return;
      }
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13648;
      FUN_00f12f78(param_1,uVar8);
      if ((char)param_1[1] != '\0') {
        return;
      }
LAB_00f13634:
      param_2 = *(FunctionLiteral **)(param_2 + 0x10);
      break;
    case 0x14:
      plVar13 = *(long **)(param_2 + 8);
      if (*(int *)((long)plVar13 + 0xc) < 1) {
        return;
      }
      lVar7 = 0;
      goto LAB_00f1369c;
    case 0x16:
      if (*(int *)(param_2 + 0x24) < 1) {
        return;
      }
      iVar5 = (int)param_1[3];
      lVar7 = 0;
      bVar1 = (char)param_1[1] == '\0';
      goto LAB_00f13744;
    case 0x17:
      if (*(int *)(param_2 + 0x24) < 1) {
        return;
      }
      cVar4 = (char)param_1[1];
      iVar5 = (int)param_1[3];
      lVar7 = 0;
      bVar1 = cVar4 == '\0';
      goto LAB_00f137fc;
    case 0x18:
    case 0x1a:
    case 0x20:
    case 0x21:
    case 0x2c:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_00f13a44;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        uVar2 = param_1[3];
        *(int *)(param_1 + 3) = (int)uVar2 + -1;
        if ((char)param_1[1] != '\0') {
          return;
        }
        *(int *)(param_1 + 3) = (int)uVar2;
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        goto LAB_00f12fdc;
      }
      goto LAB_00f13a3c;
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
        goto LAB_00f12fdc;
      }
      goto LAB_00f13a44;
    case 0x1b:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_00f13a44;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(long *)(param_2 + 0x18) == *(long *)(param_2 + 0x10)) {
          return;
        }
        lVar7 = 0;
        uVar2 = 0;
        while( true ) {
          *(int *)(param_1 + 3) = iVar5 + 1;
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar7);
          uVar14 = v8::internal::GetCurrentStackPosition();
          if (uVar14 < *param_1) break;
          FUN_00f12f78(param_1,uVar8);
          iVar5 = (int)param_1[3] + -1;
          *(int *)(param_1 + 3) = iVar5;
          if ((char)param_1[1] != '\0') {
            return;
          }
          uVar2 = uVar2 + 1;
          lVar7 = lVar7 + 0x10;
          if ((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 4) <= uVar2) {
            return;
          }
        }
        goto LAB_00f13d50;
      }
      goto LAB_00f13a3c;
    case 0x1c:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_00f13a44;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(int *)(param_2 + 0x1c) < 1) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar7 * 8);
          *(int *)(param_1 + 3) = iVar5 + 1;
          uVar2 = v8::internal::GetCurrentStackPosition();
          if (uVar2 < *param_1) break;
          FUN_00f12f78(param_1,uVar8);
          iVar5 = (int)param_1[3] + -1;
          *(int *)(param_1 + 3) = iVar5;
          if ((char)param_1[1] != '\0') {
            return;
          }
          lVar7 = lVar7 + 1;
          if (*(int *)(param_2 + 0x1c) <= lVar7) {
            return;
          }
        }
        goto LAB_00f13d50;
      }
      goto LAB_00f13a3c;
    case 0x1d:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_00f13a44;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
        if (*(int *)(param_2 + 0x1c) < 1) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar7 * 8);
          *(int *)(param_1 + 3) = iVar5 + 1;
          uVar2 = v8::internal::GetCurrentStackPosition();
          if (uVar2 < *param_1) break;
          FUN_00f12f78(param_1,uVar8);
          iVar5 = (int)param_1[3] + -1;
          *(int *)(param_1 + 3) = iVar5;
          if ((char)param_1[1] != '\0') {
            return;
          }
          lVar7 = lVar7 + 1;
          if (*(int *)(param_2 + 0x1c) <= lVar7) {
            return;
          }
        }
        goto LAB_00f13d50;
      }
      goto LAB_00f13a3c;
    case 0x1e:
      if (*(int *)(param_2 + 0x24) < 1) {
        return;
      }
      cVar4 = (char)param_1[1];
      iVar5 = (int)param_1[3];
      lVar7 = 0;
      bVar1 = cVar4 == '\0';
      goto LAB_00f134f8;
    case 0x1f:
      iVar5 = (int)param_1[3];
      if (*(long *)(param_2 + 0x18) == 0) {
        bVar1 = (char)param_1[1] == '\0';
      }
      else {
        *(int *)(param_1 + 3) = iVar5 + 1;
        if ((char)param_1[1] != '\0') goto LAB_00f13a44;
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) goto LAB_00f13a3c;
        FUN_00f12f78(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
        bVar1 = true;
      }
      *(int *)(param_1 + 3) = iVar5 + 1;
      if (!bVar1) goto LAB_00f13a44;
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13a3c;
      FUN_00f12f78(param_1,uVar8);
      uVar2 = param_1[3];
      iVar5 = (int)uVar2 + -1;
      *(int *)(param_1 + 3) = iVar5;
      if ((char)param_1[1] != '\0') {
        return;
      }
      if (*(long *)(param_2 + 0x38) != 0) {
        *(int *)(param_1 + 3) = (int)uVar2;
        uVar8 = *(undefined8 *)(param_2 + 0x38);
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) goto LAB_00f13d50;
        FUN_00f12f78(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
      }
      if (*(long *)(param_2 + 0x40) != 0) {
        *(int *)(param_1 + 3) = iVar5 + 1;
        uVar8 = *(undefined8 *)(param_2 + 0x40);
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) goto LAB_00f13d50;
        FUN_00f12f78(param_1,uVar8);
        iVar5 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar5;
        if ((char)param_1[1] != '\0') {
          return;
        }
      }
      plVar13 = *(long **)(param_2 + 0x30);
      if (*(int *)((long)plVar13 + 0xc) < 1) goto LAB_00f13c90;
      lVar7 = 0;
      goto LAB_00f13c3c;
    case 0x22:
    case 0x2e:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_00f13a44;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13a3c;
      FUN_00f12f78(param_1,uVar8);
      uVar2 = param_1[3];
      *(int *)(param_1 + 3) = (int)uVar2 + -1;
      if ((char)param_1[1] != '\0') {
        return;
      }
      *(int *)(param_1 + 3) = (int)uVar2;
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar2) {
        FUN_00f12f78(param_1,uVar8);
        uVar2 = param_1[3];
        *(int *)(param_1 + 3) = (int)uVar2 + -1;
        if ((char)param_1[1] != '\0') {
          return;
        }
        *(int *)(param_1 + 3) = (int)uVar2;
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        goto LAB_00f12fdc;
      }
      goto LAB_00f13d50;
    case 0x24:
      lVar7 = *(long *)(param_2 + 8);
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_00f13d7c;
      iVar5 = (int)param_1[3] + 1;
      *(int *)(param_1 + 3) = iVar5;
      plVar12 = *(long **)(*(long *)(lVar7 + 0x18) + 0x60);
      plVar13 = (long *)(*(long *)(lVar7 + 0x18) + 0x58);
      if (plVar13 == plVar12) {
        cVar3 = (char)param_1[1];
        goto LAB_00f13d6c;
      }
      cVar3 = (char)param_1[1];
      bVar1 = cVar3 == '\0';
      cVar4 = cVar3;
      goto LAB_00f1317c;
    case 0x26:
      lVar7 = *(long *)(param_2 + 0x28);
      iVar5 = (int)param_1[3] + 1;
      *(int *)(param_1 + 3) = iVar5;
      plVar12 = *(long **)(lVar7 + 0x60);
      plVar13 = (long *)(lVar7 + 0x58);
      local_48[0] = param_2;
      if (plVar13 == plVar12) {
        cVar3 = (char)param_1[1];
        goto LAB_00f13a84;
      }
      cVar3 = (char)param_1[1];
      bVar1 = cVar3 == '\0';
      cVar4 = cVar3;
      goto LAB_00f13940;
    case 0x2d:
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if ((char)param_1[1] != '\0') goto LAB_00f13a44;
      uVar8 = *(undefined8 *)(param_2 + 0x10);
LAB_00f12fdc:
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13a3c;
      FUN_00f12f78(param_1,uVar8);
      goto LAB_00f13a44;
    case 0x31:
      iVar5 = *(int *)((long)*(undefined8 **)(param_2 + 0x10) + 0xc);
      if (iVar5 == 0) {
        return;
      }
      puVar11 = (undefined8 *)**(undefined8 **)(param_2 + 0x10);
      cVar4 = (char)param_1[1];
      uVar8 = *puVar11;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      if (cVar4 == '\0') {
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) {
          cVar4 = '\x01';
          *(undefined1 *)(param_1 + 1) = 1;
        }
        else {
          FUN_00f12f78(param_1,uVar8);
          cVar4 = (char)param_1[1];
        }
      }
      iVar6 = (int)param_1[3] + -1;
      *(int *)(param_1 + 3) = iVar6;
      if (cVar4 != '\0') {
        return;
      }
      if (iVar5 == 1) {
        return;
      }
      lVar7 = (long)iVar5 * 8 + -0x10;
      while( true ) {
        puVar11 = puVar11 + 1;
        uVar8 = *puVar11;
        *(int *)(param_1 + 3) = iVar6 + 1;
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) {
          cVar4 = '\x01';
          *(undefined1 *)(param_1 + 1) = 1;
        }
        else {
          FUN_00f12f78(param_1,uVar8);
          cVar4 = (char)param_1[1];
        }
        iVar6 = (int)param_1[3] + -1;
        *(int *)(param_1 + 3) = iVar6;
        if (cVar4 != '\0') break;
        bVar1 = lVar7 == 0;
        lVar7 = lVar7 + -8;
        if (bVar1) {
          return;
        }
      }
      return;
    case 0x38:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = v8::internal::GetCurrentStackPosition();
  } while (*param_1 <= uVar2);
LAB_00f13648:
  *(undefined1 *)(param_1 + 1) = 1;
  return;
  while( true ) {
    if (cVar4 != '\0') break;
    cVar4 = '\0';
    plVar13 = (long *)(*plVar13 + 0x10);
    bVar1 = true;
    if (plVar13 == plVar12) break;
LAB_00f1317c:
    if (bVar1) {
      lVar9 = *plVar13;
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) {
        cVar3 = '\x01';
        *(undefined1 *)(param_1 + 1) = 1;
        break;
      }
      FUN_00f12f78(param_1,lVar9);
      cVar3 = (char)param_1[1];
      cVar4 = cVar3;
    }
  }
  iVar5 = (int)param_1[3];
LAB_00f13d6c:
  *(int *)(param_1 + 3) = iVar5 + -1;
  if (cVar3 != '\0') {
    return;
  }
LAB_00f13d7c:
  if (*(int *)(lVar7 + 0x14) < 1) {
    return;
  }
  cVar4 = (char)param_1[1];
  lVar9 = 0;
  bVar1 = cVar4 == '\0';
  do {
    if (bVar1) {
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 8) + lVar9 * 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13648;
      FUN_00f12f78(param_1,uVar8);
      cVar4 = (char)param_1[1];
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar9 = lVar9 + 1;
    cVar4 = '\0';
    bVar1 = true;
    if (*(int *)(lVar7 + 0x14) <= lVar9) {
      return;
    }
  } while( true );
  while( true ) {
    FUN_00f12f78(param_1,uVar8);
    iVar5 = (int)param_1[3] + -1;
    *(int *)(param_1 + 3) = iVar5;
    if ((char)param_1[1] != '\0') {
      return;
    }
    lVar7 = lVar7 + 1;
    if (*(int *)((long)plVar13 + 0xc) <= lVar7) break;
LAB_00f13c3c:
    lVar9 = *(long *)(*plVar13 + lVar7 * 8);
    *(int *)(param_1 + 3) = iVar5 + 1;
    uVar8 = *(undefined8 *)(lVar9 + 8);
    uVar2 = v8::internal::GetCurrentStackPosition();
    if (uVar2 < *param_1) goto LAB_00f13d50;
  }
LAB_00f13c90:
  plVar13 = *(long **)(param_2 + 0x28);
  if (*(int *)((long)plVar13 + 0xc) < 1) {
    return;
  }
  lVar7 = 0;
  do {
    puVar10 = *(ulong **)(*plVar13 + lVar7 * 8);
    if ((*(uint *)((*puVar10 & 0xfffffffffffffffc) + 4) & 0x3f) != 0x29) {
      *(int *)(param_1 + 3) = iVar5 + 1;
      uVar14 = *puVar10;
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13d50;
      FUN_00f12f78(param_1,uVar14 & 0xfffffffffffffffc);
      iVar5 = (int)param_1[3] + -1;
      *(int *)(param_1 + 3) = iVar5;
      if ((char)param_1[1] != '\0') {
        return;
      }
    }
    *(int *)(param_1 + 3) = iVar5 + 1;
    uVar14 = puVar10[1];
    uVar2 = v8::internal::GetCurrentStackPosition();
    if (uVar2 < *param_1) goto LAB_00f13d50;
    FUN_00f12f78(param_1,uVar14);
    iVar5 = (int)param_1[3] + -1;
    *(int *)(param_1 + 3) = iVar5;
    if ((char)param_1[1] != '\0') {
      return;
    }
    lVar7 = lVar7 + 1;
    if (*(int *)((long)plVar13 + 0xc) <= lVar7) {
      return;
    }
  } while( true );
LAB_00f134f8:
  uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar7 * 8);
  *(int *)(param_1 + 3) = iVar5 + 1;
  if (bVar1) {
    uVar2 = v8::internal::GetCurrentStackPosition();
    if (uVar2 < *param_1) goto LAB_00f13d50;
    FUN_00f12f78(param_1,uVar8);
    cVar4 = (char)param_1[1];
  }
  iVar5 = (int)param_1[3] + -1;
  *(int *)(param_1 + 3) = iVar5;
  if (cVar4 != '\0') {
    return;
  }
  lVar7 = lVar7 + 1;
  cVar4 = '\0';
  bVar1 = true;
  if (*(int *)(param_2 + 0x24) <= lVar7) {
    return;
  }
  goto LAB_00f134f8;
LAB_00f137fc:
  uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar7 * 8);
  *(int *)(param_1 + 3) = iVar5 + 1;
  if (bVar1) {
    uVar2 = v8::internal::GetCurrentStackPosition();
    if (uVar2 < *param_1) goto LAB_00f13d50;
    FUN_00f12f78(param_1,uVar8);
    cVar4 = (char)param_1[1];
  }
  iVar5 = (int)param_1[3] + -1;
  *(int *)(param_1 + 3) = iVar5;
  if (cVar4 != '\0') {
    return;
  }
  lVar7 = lVar7 + 1;
  cVar4 = '\0';
  bVar1 = true;
  if (*(int *)(param_2 + 0x24) <= lVar7) {
    return;
  }
  goto LAB_00f137fc;
LAB_00f13744:
  puVar10 = *(ulong **)(*(long *)(param_2 + 0x18) + lVar7 * 8);
  *(int *)(param_1 + 3) = iVar5 + 1;
  if (!bVar1) goto LAB_00f13a44;
  uVar14 = *puVar10;
  uVar2 = v8::internal::GetCurrentStackPosition();
  if (uVar2 < *param_1) goto LAB_00f13a3c;
  FUN_00f12f78(param_1,uVar14 & 0xfffffffffffffffc);
  uVar2 = param_1[3];
  *(int *)(param_1 + 3) = (int)uVar2 + -1;
  if ((char)param_1[1] != '\0') {
    return;
  }
  *(int *)(param_1 + 3) = (int)uVar2;
  uVar14 = puVar10[1];
  uVar2 = v8::internal::GetCurrentStackPosition();
  if (uVar2 < *param_1) goto LAB_00f13d50;
  FUN_00f12f78(param_1,uVar14);
  iVar5 = (int)param_1[3] + -1;
  *(int *)(param_1 + 3) = iVar5;
  if ((char)param_1[1] != '\0') {
    return;
  }
  lVar7 = lVar7 + 1;
  bVar1 = true;
  if (*(int *)(param_2 + 0x24) <= lVar7) {
    return;
  }
  goto LAB_00f13744;
LAB_00f13d50:
  iVar5 = (int)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  goto LAB_00f13a48;
LAB_00f1369c:
  puVar10 = *(ulong **)(*plVar13 + lVar7 * 8);
  uVar2 = *puVar10 & 0xfffffffffffffffc;
  cVar4 = (char)param_1[1];
  if ((*(uint *)(uVar2 + 4) & 0x3f) != 0x29) {
    if (cVar4 != '\0') {
      return;
    }
    uVar14 = v8::internal::GetCurrentStackPosition();
    if (uVar14 < *param_1) goto LAB_00f13648;
    FUN_00f12f78(param_1,uVar2);
    cVar4 = (char)param_1[1];
  }
  if (cVar4 != '\0') {
    return;
  }
  uVar14 = puVar10[1];
  uVar2 = v8::internal::GetCurrentStackPosition();
  if (uVar2 < *param_1) goto LAB_00f13648;
  FUN_00f12f78(param_1,uVar14);
  if ((char)param_1[1] != '\0') {
    return;
  }
  lVar7 = lVar7 + 1;
  if (*(int *)((long)plVar13 + 0xc) <= lVar7) {
    return;
  }
  goto LAB_00f1369c;
LAB_00f13e80:
  plVar13 = *(long **)(*(long *)(param_2 + 0x18) + lVar7 * 8);
  lVar9 = *plVar13;
  if (lVar9 != 0) {
    uVar2 = v8::internal::GetCurrentStackPosition();
    if (uVar2 < *param_1) goto LAB_00f13648;
    FUN_00f12f78(param_1,lVar9);
    if ((char)param_1[1] != '\0') {
      return;
    }
  }
  if (0 < *(int *)((long)plVar13 + 0x14)) {
    lVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(plVar13[1] + lVar9 * 8);
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) goto LAB_00f13648;
      FUN_00f12f78(param_1,uVar8);
      if ((char)param_1[1] != '\0') {
        return;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)plVar13 + 0x14));
  }
  lVar7 = lVar7 + 1;
  if (*(int *)(param_2 + 0x24) <= lVar7) {
    return;
  }
  goto LAB_00f13e80;
  while( true ) {
    if (cVar4 != '\0') break;
    cVar4 = '\0';
    plVar13 = (long *)(*plVar13 + 0x10);
    bVar1 = true;
    if (plVar13 == plVar12) break;
LAB_00f13940:
    if (bVar1) {
      lVar7 = *plVar13;
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) {
        cVar3 = '\x01';
        *(undefined1 *)(param_1 + 1) = 1;
        break;
      }
      FUN_00f12f78(param_1,lVar7);
      cVar3 = (char)param_1[1];
      cVar4 = cVar3;
    }
  }
  iVar5 = (int)param_1[3];
LAB_00f13a84:
  iVar6 = iVar5 + -1;
  *(int *)(param_1 + 3) = iVar6;
  if ((cVar3 == '\0') && (-1 < *(char *)(*(long *)(param_2 + 0x28) + 0x83))) {
    *(int *)(param_1 + 3) = iVar5;
    if (0 < *(int *)(param_2 + 0x3c)) {
      lVar7 = 0;
      while( true ) {
        uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar7 * 8);
        uVar2 = v8::internal::GetCurrentStackPosition();
        if (uVar2 < *param_1) break;
        FUN_00f12f78(param_1,uVar8);
        if (((char)param_1[1] != '\0') || (lVar7 = lVar7 + 1, *(int *)(param_2 + 0x3c) <= lVar7))
        goto LAB_00f13f0c;
      }
      *(undefined1 *)(param_1 + 1) = 1;
LAB_00f13f0c:
      iVar6 = (int)param_1[3] + -1;
    }
    *(int *)(param_1 + 3) = iVar6;
  }
  this = (vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
          *)param_1[4];
  if (*(long **)(this + 8) != *(long **)(this + 0x10)) {
    **(long **)(this + 8) = (long)param_2;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
    return;
  }
  std::__ndk1::
  vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>::
  __push_back_slow_path<v8::internal::FunctionLiteral*const&>(this,local_48);
  return;
  while( true ) {
    if (cVar4 != '\0') break;
    cVar4 = '\0';
    plVar13 = (long *)(*plVar13 + 0x10);
    bVar1 = true;
    if (plVar13 == plVar12) break;
LAB_00f132ac:
    if (bVar1) {
      lVar7 = *plVar13;
      uVar2 = v8::internal::GetCurrentStackPosition();
      if (uVar2 < *param_1) {
        cVar3 = '\x01';
        *(undefined1 *)(param_1 + 1) = 1;
        break;
      }
      FUN_00f12f78(param_1,lVar7);
      cVar3 = (char)param_1[1];
      cVar4 = cVar3;
    }
  }
  iVar5 = (int)param_1[3];
LAB_00f13df4:
  *(int *)(param_1 + 3) = iVar5 + -1;
  if (cVar3 == '\0') {
LAB_00f13e04:
    if (0 < *(int *)(param_2 + 0x14)) {
      cVar4 = (char)param_1[1];
      lVar7 = 0;
      bVar1 = cVar4 == '\0';
      do {
        if (bVar1) {
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 8) + lVar7 * 8);
          uVar2 = v8::internal::GetCurrentStackPosition();
          if (uVar2 < *param_1) goto LAB_00f13648;
          FUN_00f12f78(param_1,uVar8);
          cVar4 = (char)param_1[1];
        }
        if (cVar4 != '\0') {
          return;
        }
        lVar7 = lVar7 + 1;
        cVar4 = '\0';
        bVar1 = true;
      } while (lVar7 < *(int *)(param_2 + 0x14));
    }
  }
  return;
LAB_00f13a3c:
  *(undefined1 *)(param_1 + 1) = 1;
LAB_00f13a44:
  iVar5 = (int)param_1[3];
LAB_00f13a48:
  *(int *)(param_1 + 3) = iVar5 + -1;
  return;
}

