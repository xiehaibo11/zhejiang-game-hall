
int vorbis_comment_query_count(long *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  int iVar7;
  byte *__dest;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte abStack_80 [8];
  long local_78;
  long local_70;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
  sVar5 = strlen(param_2);
  __dest = abStack_80 +
           -(((long)((sVar5 << 0x20) + 0x200000000) >> 0x20) + 0xfU & 0xfffffffffffffff0);
  strcpy((char *)__dest,param_2);
  strcat((char *)__dest,"=");
  lVar2 = param_1[2];
  if (0 < (int)lVar2) {
    local_70 = *param_1;
    uVar1 = (int)sVar5 + 1;
    lVar8 = 0;
    iVar7 = 0;
    if (0 < (int)uVar1) goto LAB_00ebc5f8;
LAB_00ebc5e0:
    do {
      iVar7 = iVar7 + 1;
      while( true ) {
        lVar8 = lVar8 + 1;
        if ((int)lVar2 <= lVar8) goto LAB_00ebc640;
        if ((int)uVar1 < 1) break;
LAB_00ebc5f8:
        pbVar10 = *(byte **)(local_70 + lVar8 * 8);
        pbVar6 = __dest;
        uVar9 = (ulong)uVar1;
        while( true ) {
          iVar3 = toupper((uint)*pbVar10);
          iVar4 = toupper((uint)*pbVar6);
          if (iVar3 != iVar4) break;
          uVar9 = uVar9 - 1;
          pbVar6 = pbVar6 + 1;
          pbVar10 = pbVar10 + 1;
          if (uVar9 == 0) goto LAB_00ebc5e0;
        }
      }
    } while( true );
  }
  iVar7 = 0;
LAB_00ebc640:
  if (*(long *)(local_78 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

