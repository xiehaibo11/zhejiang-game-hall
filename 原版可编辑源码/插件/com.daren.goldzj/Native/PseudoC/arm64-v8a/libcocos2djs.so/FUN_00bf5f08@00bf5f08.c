
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf5f08(FILE *param_1,uint param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint local_43c;
  long local_438;
  long local_430;
  long local_428;
  long local_420;
  undefined1 auStack_418 [8];
  long local_410;
  char acStack_408 [1024];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = sysconf(6);
  rewind(param_1);
  pcVar4 = fgets(acStack_408,0x400,param_1);
  if (pcVar4 != (char *)0x0) {
    pcVar4 = fgets(acStack_408,0x400,param_1);
    while( true ) {
      if (((pcVar4 == (char *)0x0) || (param_2 <= uVar7)) ||
         (iVar2 = strncmp(acStack_408,"cpu",3), iVar2 != 0)) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(0);
        }
        return;
      }
      sscanf(acStack_408,"cpu%u ",&local_43c);
      uVar5 = (ulong)local_43c / 10;
      local_43c = (uint)uVar5;
      if (local_43c == 0) {
        uVar5 = 5;
      }
      else {
        uVar6 = 5;
        do {
          uVar6 = uVar6 + 1;
          uVar5 = uVar5 / 10;
        } while ((int)uVar5 != 0);
        uVar5 = (ulong)uVar6;
      }
      iVar2 = sscanf(acStack_408 + uVar5,"%lu %lu %lu %lu %lu %lu",&local_438,&local_430,&local_428,
                     &local_420,auStack_418,&local_410);
      if (iVar2 != 6) break;
      uVar5 = (ulong)uVar7;
      uVar7 = uVar7 + 1;
      lVar1 = param_3 + uVar5 * 0x38;
      *(long *)(lVar1 + 0x28) = lVar3 * local_420;
      *(long *)(lVar1 + 0x30) = lVar3 * local_410;
      *(long *)(lVar1 + 0x10) = lVar3 * local_438;
      *(long *)(lVar1 + 0x18) = lVar3 * local_430;
      *(long *)(lVar1 + 0x20) = lVar3 * local_428;
      pcVar4 = fgets(acStack_408,0x400,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

