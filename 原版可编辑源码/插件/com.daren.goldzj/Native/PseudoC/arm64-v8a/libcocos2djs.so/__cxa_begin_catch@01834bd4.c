
ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  plVar3 = (long *)__cxa_get_globals();
  puVar4 = param_1 + -0xc;
  if (uVar5 >> 8 == 0x434c4e47432b2b) {
    iVar2 = (int)param_1[-6];
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + -6) = iVar1 + 1;
    if ((ulong *)*plVar3 != puVar4) {
      param_1[-7] = (ulong)*plVar3;
      *plVar3 = (long)puVar4;
    }
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    param_1 = (ulong *)param_1[-2];
  }
  else {
    if (*plVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *plVar3 = (long)puVar4;
    param_1 = param_1 + 4;
  }
  return param_1;
}

