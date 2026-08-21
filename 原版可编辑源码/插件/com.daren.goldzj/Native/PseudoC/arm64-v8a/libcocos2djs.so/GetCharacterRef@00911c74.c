
/* tinyxml2::XMLUtil::GetCharacterRef(char const*, char*, int*) */

void tinyxml2::XMLUtil::GetCharacterRef(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long local_70 [8];
  
  lVar3 = tpidr_el0;
  local_70[7] = *(long *)(lVar3 + 0x28);
  *param_3 = 0;
  pcVar5 = param_1 + 1;
  if (*pcVar5 != '#') goto LAB_00911e88;
  cVar1 = param_1[2];
  if (cVar1 == '\0') goto LAB_00911e88;
  if (cVar1 == 'x') {
    if (param_1[3] != '\0') {
      pcVar6 = strchr(param_1 + 3,0x3b);
      pcVar5 = (char *)0x0;
      if (pcVar6 == (char *)0x0) goto LAB_00911e88;
      if (*pcVar6 != '\0') {
        cVar1 = pcVar6[-1];
        lVar7 = (long)pcVar6 - (long)param_1;
        uVar8 = 0;
        if (cVar1 != 'x') {
          iVar10 = 1;
          pcVar5 = pcVar6 + -2;
          do {
            iVar2 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              iVar11 = -0x30;
            }
            else if (iVar2 - 0x61U < 6) {
              iVar11 = -0x57;
            }
            else {
              if (5 < iVar2 - 0x41U) goto LAB_00911dfc;
              iVar11 = -0x37;
            }
            cVar1 = *pcVar5;
            uVar8 = uVar8 + (uint)((iVar11 + iVar2) * iVar10);
            iVar10 = iVar10 << 4;
            pcVar5 = pcVar5 + -1;
          } while (cVar1 != 'x');
        }
        goto LAB_00911dc8;
      }
    }
LAB_00911dfc:
    pcVar5 = (char *)0x0;
    goto LAB_00911e88;
  }
  pcVar6 = strchr(param_1 + 2,0x3b);
  pcVar5 = (char *)0x0;
  if (pcVar6 == (char *)0x0) goto LAB_00911e88;
  if (*pcVar6 == '\0') goto LAB_00911dfc;
  cVar1 = pcVar6[-1];
  lVar7 = (long)pcVar6 - (long)param_1;
  uVar8 = 0;
  if (cVar1 != '#') {
    iVar10 = 1;
    pcVar5 = pcVar6 + -2;
    do {
      if (9 < (byte)(cVar1 - 0x30U)) goto LAB_00911dfc;
      iVar2 = (int)cVar1;
      cVar1 = *pcVar5;
      uVar8 = uVar8 + (uint)((iVar2 + -0x30) * iVar10);
      iVar10 = iVar10 * 10;
      pcVar5 = pcVar5 + -1;
    } while (cVar1 != '#');
  }
LAB_00911dc8:
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[3] = 0xe0;
  local_70[2] = 0xc0;
  local_70[5] = 0xf8;
  local_70[4] = 0xf0;
  local_70[6] = 0xfc;
  if (uVar8 < 0x80) {
    lVar9 = 1;
    *param_3 = 1;
LAB_00911e70:
    *param_2 = (byte)local_70[lVar9] | (byte)uVar8;
  }
  else {
    if (uVar8 < 0x800) {
      *param_3 = 2;
LAB_00911e5c:
      param_2[1] = (byte)uVar8 & 0x3f | 0x80;
      lVar9 = (long)*param_3;
      uVar8 = uVar8 >> 6;
      goto LAB_00911e70;
    }
    if (uVar8 >> 0x10 == 0) {
      *param_3 = 3;
LAB_00911e4c:
      bVar4 = (byte)uVar8;
      uVar8 = uVar8 >> 6;
      param_2[2] = bVar4 & 0x3f | 0x80;
      goto LAB_00911e5c;
    }
    if (uVar8 < 0x200000) {
      bVar4 = (byte)uVar8;
      uVar8 = uVar8 >> 6;
      *param_3 = 4;
      param_2[3] = bVar4 & 0x3f | 0x80;
      goto LAB_00911e4c;
    }
    *param_3 = 0;
  }
  pcVar5 = param_1 + lVar7 + 1;
LAB_00911e88:
  if (*(long *)(lVar3 + 0x28) != local_70[7]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar5);
  }
  return;
}

