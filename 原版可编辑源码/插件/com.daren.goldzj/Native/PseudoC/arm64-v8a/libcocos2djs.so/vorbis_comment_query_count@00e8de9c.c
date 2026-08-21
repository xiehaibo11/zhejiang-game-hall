
int vorbis_comment_query_count(long *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  char *__dest;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_70;
  long local_68;
  
  local_70 = tpidr_el0;
  local_68 = *(long *)(local_70 + 0x28);
  sVar5 = strlen(param_2);
  __dest = (char *)((long)&local_70 -
                   (((long)((sVar5 << 0x20) + 0x200000000) >> 0x20) + 0xfU & 0xfffffffffffffff0));
  strcpy(__dest,param_2);
  sVar6 = strlen(__dest);
  (__dest + sVar6)[0] = '=';
  (__dest + sVar6)[1] = '\0';
  lVar2 = param_1[2];
  if ((int)lVar2 < 1) {
    iVar7 = 0;
  }
  else {
    lVar10 = *param_1;
    iVar1 = (int)sVar5 + 1;
    lVar9 = 0;
    iVar7 = 0;
    do {
      if (0 < iVar1) {
        lVar11 = *(long *)(lVar10 + lVar9 * 8);
        lVar8 = 0;
        do {
          iVar3 = toupper((uint)*(byte *)(lVar11 + lVar8));
          iVar4 = toupper((uint)(byte)__dest[lVar8]);
          if (iVar3 != iVar4) goto LAB_00e8df7c;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar1);
      }
      iVar7 = iVar7 + 1;
LAB_00e8df7c:
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)lVar2);
  }
  if (*(long *)(local_70 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

