
/* tinyxml2::XMLUtil::ToBool(char const*, bool*) */

void tinyxml2::XMLUtil::ToBool(char *param_1,bool *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  long lVar7;
  char cVar8;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  iVar3 = sscanf(param_1,"%d",&local_3c);
  if (iVar3 == 1) {
    *param_2 = local_3c != 0;
    uVar4 = 1;
    goto LAB_0102172c;
  }
  if (param_1 == "true") {
LAB_010216f0:
    uVar4 = 1;
    *param_2 = true;
    goto LAB_0102172c;
  }
  cVar5 = *param_1;
  pcVar6 = "true";
  if (cVar5 == '\0') {
LAB_0102169c:
    if (*pcVar6 == '\0') goto LAB_010216f0;
  }
  else {
    lVar7 = 0;
    cVar8 = cVar5;
    do {
      if (((&DAT_012a5ace)[lVar7] == '\0') || ((&DAT_012a5ace)[lVar7] != cVar8)) {
        bVar2 = false;
        goto LAB_0102168c;
      }
      cVar8 = param_1[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (cVar8 != '\0');
    bVar2 = true;
LAB_0102168c:
    pcVar6 = &DAT_012a5ace + lVar7;
    if ((int)lVar7 == 0x7fffffff) goto LAB_010216f0;
    if (bVar2) goto LAB_0102169c;
  }
  if (param_1 == "false") {
LAB_01021724:
    uVar4 = 1;
    *param_2 = false;
  }
  else {
    pcVar6 = "false";
    if (cVar5 == '\0') {
LAB_01021714:
      if (*pcVar6 == '\0') goto LAB_01021724;
    }
    else {
      lVar7 = 0;
      do {
        if (("false"[lVar7] == '\0') || ("false"[lVar7] != cVar5)) {
          bVar2 = false;
          goto LAB_01021704;
        }
        cVar5 = param_1[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (cVar5 != '\0');
      bVar2 = true;
LAB_01021704:
      pcVar6 = "false" + lVar7;
      if ((int)lVar7 == 0x7fffffff) goto LAB_01021724;
      if (bVar2) goto LAB_01021714;
    }
    uVar4 = 0;
  }
LAB_0102172c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

