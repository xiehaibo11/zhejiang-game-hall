
void vorbis_comment_query(long *param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  byte *__dest;
  ulong uVar11;
  byte abStack_90 [8];
  long local_88;
  int local_7c;
  long local_78;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_7c = param_3;
  sVar4 = strlen(param_2);
  __dest = abStack_90 +
           -(((long)((sVar4 << 0x20) + 0x200000000) >> 0x20) + 0xfU & 0xfffffffffffffff0);
  strcpy((char *)__dest,param_2);
  strcat((char *)__dest,"=");
  local_70 = (long)(int)param_1[2];
  if ((int)param_1[2] < 1) {
    pbVar5 = (byte *)0x0;
  }
  else {
    local_78 = *param_1;
    uVar1 = (int)sVar4 + 1;
    lVar9 = 0;
    iVar10 = 0;
    local_88 = lVar6;
    do {
      pbVar5 = *(byte **)(local_78 + lVar9 * 8);
      pbVar7 = __dest;
      pbVar8 = pbVar5;
      uVar11 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        do {
          iVar2 = toupper((uint)*pbVar8);
          iVar3 = toupper((uint)*pbVar7);
          if (iVar2 != iVar3) goto LAB_00ebc478;
          uVar11 = uVar11 - 1;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
      }
      if (iVar10 == local_7c) {
        pbVar5 = pbVar5 + (int)uVar1;
        lVar6 = local_88;
        goto LAB_00ebc500;
      }
      iVar10 = iVar10 + 1;
LAB_00ebc478:
      lVar9 = lVar9 + 1;
    } while (lVar9 < local_70);
    pbVar5 = (byte *)0x0;
    lVar6 = local_88;
  }
LAB_00ebc500:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}

