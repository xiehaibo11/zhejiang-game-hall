
/* dragonBones::JSONDataParser::_getBoolean(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, bool) */

bool dragonBones::JSONDataParser::_getBoolean(GenericValue *param_1,char *param_2,bool param_3)

{
  int *__s2;
  uint uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  int *piVar13;
  ulong local_80;
  size_t local_78;
  int *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar11 = param_2 + -1;
  pcVar6 = pcVar11;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar1 = *(uint *)param_1;
  uVar12 = (ulong)uVar1;
  piVar10 = piVar8 + uVar12 * 0xc;
  piVar7 = piVar8;
  if (uVar1 != 0) {
    lVar9 = uVar12 * 0x30;
    piVar13 = piVar8;
    do {
      iVar4 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar6 - (long)param_2)) {
        __s2 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          __s2 = piVar13;
        }
        piVar7 = piVar13;
        if ((__s2 == (int *)param_2) ||
           (iVar4 = memcmp(param_2,__s2,(long)pcVar6 - (long)param_2 & 0xffffffff), iVar4 == 0))
        break;
      }
      lVar9 = lVar9 + -0x30;
      piVar13 = piVar13 + 0xc;
      piVar7 = piVar10;
    } while (lVar9 != 0);
  }
  if (piVar10 == piVar7) goto LAB_00d41c84;
  do {
    pcVar11 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  if (uVar1 != 0) {
    lVar9 = uVar12 * 0x30;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar11 - (long)param_2)) {
        piVar7 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar7 = piVar8;
        }
        if ((piVar7 == (int *)param_2) ||
           (iVar4 = memcmp(param_2,piVar7,(long)pcVar11 - (long)param_2 & 0xffffffff), iVar4 == 0))
        goto LAB_00d41c38;
      }
      lVar9 = lVar9 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar9 != 0);
LAB_00d41c6c:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
    goto LAB_00d41c84;
  }
LAB_00d41c38:
  if (piVar8 == piVar10) goto LAB_00d41c6c;
  uVar2 = *(ushort *)((long)piVar8 + 0x2e);
  if ((uVar2 >> 3 & 1) != 0) {
    param_3 = uVar2 == 10;
    goto LAB_00d41c84;
  }
  piVar7 = piVar8 + 6;
  if ((uVar2 >> 10 & 1) == 0) {
    if ((uVar2 >> 4 & 1) != 0) {
      param_3 = *piVar7 != 0;
    }
    goto LAB_00d41c84;
  }
  if ((uVar2 >> 0xc & 1) == 0) {
    piVar7 = *(int **)(piVar8 + 8);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = (int *)0x0;
  sVar5 = strlen((char *)piVar7);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar5 < 0x17) {
    piVar8 = (int *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_00d41d34;
  }
  else {
    uVar12 = sVar5 + 0x10 & 0xfffffffffffffff0;
    piVar8 = operator_new(uVar12);
    local_80 = uVar12 | 1;
    local_78 = sVar5;
    local_70 = piVar8;
LAB_00d41d34:
    memcpy(piVar8,piVar7,sVar5);
  }
  uVar12 = local_80;
  *(undefined1 *)((long)piVar8 + sVar5) = 0;
  sVar5 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    sVar5 = local_78;
  }
  param_3 = false;
  switch(sVar5) {
  case 0:
    goto switchD_00d41d7c_caseD_0;
  case 1:
    piVar8 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar8 = local_70;
    }
    if ((char)*piVar8 != '0') break;
LAB_00d41da0:
    param_3 = false;
    goto joined_r0x00d41da4;
  case 3:
    piVar8 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar8 = local_70;
    }
    iVar4 = memcmp(piVar8,"NaN",3);
    if (iVar4 == 0) goto LAB_00d41da0;
    break;
  case 4:
    piVar8 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar8 = local_70;
    }
    if (*piVar8 == 0x6c6c756e) goto LAB_00d41da0;
    break;
  case 5:
    piVar8 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar8 = local_70;
    }
    pcVar6 = "false";
    sVar5 = 5;
    goto LAB_00d41e50;
  case 9:
    piVar8 = (int *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      piVar8 = local_70;
    }
    pcVar6 = "undefined";
    sVar5 = 9;
LAB_00d41e50:
    iVar4 = memcmp(piVar8,pcVar6,sVar5);
    param_3 = iVar4 != 0;
switchD_00d41d7c_caseD_0:
joined_r0x00d41da4:
    if ((uVar12 & 1) == 0) goto LAB_00d41c84;
    goto LAB_00d41e60;
  }
  param_3 = true;
  if ((uVar12 & 1) != 0) {
LAB_00d41e60:
    operator_delete(local_70);
  }
LAB_00d41c84:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

