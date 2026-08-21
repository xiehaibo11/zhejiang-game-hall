
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf9bc0(byte *param_1,uint *param_2)

{
  bool bVar1;
  char *pcVar2;
  uint __c;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 local_10;
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  pbVar4 = (byte *)&local_10;
  local_10 = local_10 & 0xffffff00;
  while (bVar1 = false, __c = (uint)*param_1, uVar3 = __c, *param_1 != 0) {
    while( true ) {
      param_1 = param_1 + 1;
      pcVar2 = strchr("0123456789",__c);
      if (pcVar2 == (char *)0x0) break;
      uVar3 = (int)pcVar2 + -0x18e1800 + (uint)*pbVar4 * 10;
      if (((*pbVar4 == 0) && (bVar1)) || (0xff < uVar3)) goto LAB_00bf9c7c;
      *pbVar4 = (byte)uVar3;
      if (!bVar1) {
        iVar5 = iVar5 + 1;
        if (4 < iVar5) goto LAB_00bf9c7c;
      }
      __c = (uint)*param_1;
      bVar1 = true;
      uVar3 = 0;
      if (__c == 0) goto LAB_00bf9c64;
    }
    if ((byte)(bVar1 & __c == 0x2e) <= (iVar5 == 4)) goto LAB_00bf9c7c;
    pbVar4[1] = 0;
    pbVar4 = pbVar4 + 1;
  }
LAB_00bf9c64:
  if (iVar5 < 4) {
LAB_00bf9c7c:
    uVar3 = 0xffffffea;
  }
  else {
    *param_2 = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

