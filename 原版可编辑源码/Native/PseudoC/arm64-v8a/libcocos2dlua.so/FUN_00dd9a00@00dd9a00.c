
void FUN_00dd9a00(long *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  locale alStack_50 [8];
  long local_48;
  
                    /* try { // try from 00dd9a10 to 00ed9a1f has its CatchHandler @ 00dd9d08 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pbVar1 = (byte *)param_1[1];
  iVar3 = (int)((ulong)((long)pbVar1 - *param_1) >> 3) * -0x55555555;
  if (param_2 + 1 < iVar3) {
    pbVar8 = (byte *)(*param_1 + (long)param_2 * 0x18 + 0x18);
    pbVar9 = pbVar8;
    if (pbVar8 != pbVar1) {
      while( true ) {
        bVar2 = *pbVar8;
        pbVar9 = pbVar8;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 != 1) goto LAB_00dd9aec;
        }
        else if (*(long *)(pbVar8 + 8) != 1) goto LAB_00dd9aec;
        if ((bVar2 & 1) == 0) {
          pbVar6 = pbVar8 + 1;
        }
        else {
          pbVar6 = *(byte **)(pbVar8 + 0x10);
        }
        bVar2 = *pbVar6;
        std::__ndk1::locale::locale(alStack_50);
        lVar5 = std::__ndk1::locale::use_facet(alStack_50,(id *)&std::__ndk1::ctype<char>::id);
        if ((char)bVar2 < '\0') break;
        uVar7 = *(ulong *)(*(long *)(lVar5 + 0x10) + (long)(char)bVar2 * 8);
        std::__ndk1::locale::~locale(alStack_50);
        if (((uVar7 & 0x60) == 0) || (pbVar8 = pbVar8 + 0x18, pbVar9 = pbVar1, pbVar1 == pbVar8))
        goto LAB_00dd9aec;
      }
                    /* try { // try from 00dd9ae4 to 00ed9b1b has its CatchHandler @ 00dd97f0 */
      std::__ndk1::locale::~locale(alStack_50);
    }
LAB_00dd9aec:
    iVar3 = (int)((ulong)((long)pbVar9 - *param_1) >> 3) * -0x55555555;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
                    /* try { // try from 00dd9b1c to 00ed9b37 has its CatchHandler @ 00dd9ca4 */
  return;
}

