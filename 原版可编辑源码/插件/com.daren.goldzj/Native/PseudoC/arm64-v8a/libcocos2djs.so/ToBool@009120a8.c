
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
    goto LAB_009121fc;
  }
  if (param_1 == "true") {
LAB_009121c0:
    uVar4 = 1;
    *param_2 = true;
    goto LAB_009121fc;
  }
  cVar5 = *param_1;
  pcVar6 = "true";
  if (cVar5 == '\0') {
LAB_0091216c:
    if (*pcVar6 == '\0') goto LAB_009121c0;
  }
  else {
    lVar7 = 0;
    cVar8 = cVar5;
    do {
      if (("Invalid ScriptOrigin: is_module must be true"[lVar7 + 0x28] == '\0') ||
         ("Invalid ScriptOrigin: is_module must be true"[lVar7 + 0x28] != cVar8)) {
        bVar2 = false;
        goto LAB_0091215c;
      }
      cVar8 = param_1[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (cVar8 != '\0');
    bVar2 = true;
LAB_0091215c:
    pcVar6 = "Invalid ScriptOrigin: is_module must be true" + lVar7 + 0x28;
    if ((int)lVar7 == 0x7fffffff) goto LAB_009121c0;
    if (bVar2) goto LAB_0091216c;
  }
  if (param_1 == "false") {
LAB_009121f4:
    uVar4 = 1;
    *param_2 = false;
  }
  else {
    pcVar6 = "false";
    if (cVar5 == '\0') {
LAB_009121e4:
      if (*pcVar6 == '\0') goto LAB_009121f4;
    }
    else {
      lVar7 = 0;
      do {
        if (("1 == count_false"[lVar7 + 0xb] == '\0') || ("1 == count_false"[lVar7 + 0xb] != cVar5))
        {
          bVar2 = false;
          goto LAB_009121d4;
        }
        cVar5 = param_1[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (cVar5 != '\0');
      bVar2 = true;
LAB_009121d4:
      pcVar6 = "1 == count_false" + lVar7 + 0xb;
      if ((int)lVar7 == 0x7fffffff) goto LAB_009121f4;
      if (bVar2) goto LAB_009121e4;
    }
    uVar4 = 0;
  }
LAB_009121fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

