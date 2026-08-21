
void FUN_007cfc7c(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte local_98 [64];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  *param_1 = 0;
  iVar7 = FUN_007cfbd0(param_2,local_98,0x40);
  if ((-1 < iVar7) && (iVar7 != 0)) {
    pbVar2 = local_98 + iVar7;
    pbVar11 = local_98;
    while (bVar5 = *pbVar11, bVar5 != 10) {
      pbVar8 = memchr(pbVar11,0x2c,(long)pbVar2 - (long)pbVar11);
      pbVar4 = pbVar2;
      if (pbVar8 != (byte *)0x0) {
        pbVar4 = pbVar8;
      }
      if ((pbVar4 <= pbVar11) || (uVar10 = bVar5 - 0x30, 9 < uVar10)) break;
      uVar9 = 0;
      pbVar8 = pbVar11;
      do {
        pbVar8 = pbVar8 + 1;
        uVar9 = uVar10 + uVar9 * 10;
        pbVar3 = pbVar4;
        if (pbVar4 == pbVar8) break;
        uVar10 = *pbVar8 - 0x30;
        pbVar3 = pbVar8;
      } while (uVar10 < 10);
      if (pbVar3 == pbVar11) break;
      uVar10 = uVar9;
      if ((pbVar3 < pbVar4) && (*pbVar3 == 0x2d)) {
        pbVar3 = pbVar3 + 1;
        if (pbVar4 <= pbVar3) break;
        uVar10 = 0;
        pbVar11 = pbVar3;
        do {
          bVar5 = *pbVar11;
          pbVar8 = pbVar11;
          if (9 < bVar5 - 0x30) break;
          pbVar11 = pbVar11 + 1;
          uVar10 = (bVar5 - 0x30) + uVar10 * 10;
          pbVar8 = pbVar4;
        } while (pbVar4 != pbVar11);
        if (pbVar8 == pbVar3) break;
      }
      if ((int)uVar9 <= (int)uVar10) {
        do {
          if (uVar9 < 0x20) {
            *param_1 = *param_1 | 1 << (ulong)(uVar9 & 0x1f);
          }
          bVar1 = (int)uVar9 < (int)uVar10;
          uVar9 = uVar9 + 1;
        } while (bVar1);
      }
      if (pbVar4 < pbVar2) {
        pbVar4 = pbVar4 + 1;
      }
      pbVar11 = pbVar4;
      if (pbVar2 <= pbVar4) break;
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

