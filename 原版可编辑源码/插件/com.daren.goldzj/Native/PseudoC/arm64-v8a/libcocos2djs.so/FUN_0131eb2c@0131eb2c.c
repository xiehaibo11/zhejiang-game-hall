
void FUN_0131eb2c(Zone *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  uVar5 = (long)((int)lVar2 + (int)lVar1) + 7U & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < uVar5) {
    puVar3 = (undefined1 *)v8::internal::Zone::NewExpand(param_1,uVar5);
  }
  else {
    *(undefined1 **)(param_1 + 0x10) = puVar3 + uVar5;
  }
  lVar7 = *param_2;
  puVar6 = (undefined1 *)param_2[2];
  if (lVar7 != 0) {
    puVar10 = puVar3;
    if (param_3 != 1) goto LAB_0131ebb4;
    do {
      uVar11 = 8;
      puVar9 = puVar10;
switchD_0131ebd0_caseD_1:
      puVar10 = puVar9 + 1;
      *puVar9 = uVar11;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 1;
      if (lVar7 == 0) {
        puVar6 = (undefined1 *)param_2[2];
        lVar8 = *param_2;
        lVar7 = param_2[1];
        goto joined_r0x0131ec10;
      }
    } while (param_3 == 1);
LAB_0131ebb4:
    uVar11 = 4;
    puVar9 = puVar10;
    switch(*puVar6) {
    case 0:
      uVar11 = 0;
      break;
    case 1:
      break;
    case 2:
      uVar11 = 5;
      break;
    case 3:
      uVar11 = 0xb;
      break;
    case 4:
      uVar11 = 0xc;
      break;
    case 5:
      uVar11 = 0xd;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      uVar11 = 7;
      break;
    default:
      goto switchD_0131ebd0_default;
    }
    goto switchD_0131ebd0_caseD_1;
  }
  lVar8 = 0;
  lVar7 = param_2[1];
joined_r0x0131ec10:
  if (lVar7 == 0) {
LAB_0131eca8:
    plVar4 = *(long **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)plVar4) < 0x18) {
      plVar4 = (long *)v8::internal::Zone::NewExpand(param_1,0x18);
    }
    else {
      *(long **)(param_1 + 0x10) = plVar4 + 3;
    }
    *plVar4 = lVar1;
    plVar4[1] = lVar2;
    plVar4[2] = (long)puVar3;
    return;
  }
  puVar6 = puVar6 + lVar8;
  puVar10 = puVar3 + lVar1;
  if (param_3 != 1) goto LAB_0131ec58;
  do {
    uVar11 = 8;
    puVar9 = puVar10;
switchD_0131ec74_caseD_1:
    puVar10 = puVar9 + 1;
    *puVar9 = uVar11;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    if (lVar7 == 0) goto LAB_0131eca8;
  } while (param_3 == 1);
LAB_0131ec58:
  uVar11 = 4;
  puVar9 = puVar10;
  switch(*puVar6) {
  case 0:
    uVar11 = 0;
    break;
  case 1:
    break;
  case 2:
    uVar11 = 5;
    break;
  case 3:
    uVar11 = 0xb;
    break;
  case 4:
    uVar11 = 0xc;
    break;
  case 5:
    uVar11 = 0xd;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    uVar11 = 7;
    break;
  default:
switchD_0131ebd0_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  goto switchD_0131ec74_caseD_1;
}

