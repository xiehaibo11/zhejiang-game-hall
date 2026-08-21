
void vorbis_comment_query(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  long lVar7;
  byte *__dest;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  byte abStack_80 [8];
  long local_78;
  int local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  local_6c = param_3;
  sVar5 = strlen(param_2);
  __dest = abStack_80 +
           -(((long)((sVar5 << 0x20) + 0x200000000) >> 0x20) + 0xfU & 0xfffffffffffffff0);
  strcpy((char *)__dest,param_2);
  sVar6 = strlen((char *)__dest);
  (__dest + sVar6)[0] = 0x3d;
  (__dest + sVar6)[1] = 0;
  lVar2 = param_1[2];
  if ((int)lVar2 < 1) {
    lVar8 = 0;
  }
  else {
    lVar11 = *param_1;
    iVar1 = (int)sVar5 + 1;
    lVar9 = 0;
    iVar10 = 0;
    local_78 = lVar7;
    do {
      lVar8 = *(long *)(lVar11 + lVar9 * 8);
      if (0 < iVar1) {
        lVar7 = 0;
        do {
          iVar3 = toupper((uint)*(byte *)(lVar8 + lVar7));
          iVar4 = toupper((uint)__dest[lVar7]);
          if (iVar3 != iVar4) goto LAB_00e8de44;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar1);
      }
      if (iVar10 == local_6c) {
        lVar8 = lVar8 + iVar1;
        lVar7 = local_78;
        goto LAB_00e8de68;
      }
      iVar10 = iVar10 + 1;
LAB_00e8de44:
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)lVar2);
    lVar8 = 0;
    lVar7 = local_78;
  }
LAB_00e8de68:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar8);
  }
  return;
}

