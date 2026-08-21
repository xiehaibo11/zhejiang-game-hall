
void __cxa_rethrow_primary_exception(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  
  if (param_1 != 0) {
    plVar5 = (long *)FUN_01836450(0x80);
    if (plVar5 == (long *)0x0) {
LAB_01835090:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    plVar7 = (long *)(param_1 + -0x80);
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[3] = 0;
    plVar5[2] = 0;
    plVar5[1] = 0;
    *plVar5 = param_1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[1] = *(long *)(param_1 + -0x78);
    lVar6 = std::get_unexpected();
    plVar5[3] = lVar6;
    lVar6 = std::get_terminate();
    puVar8 = (ulong *)(plVar5 + 0xc);
    *puVar8 = 0x434c4e47432b2b01;
    plVar5[4] = lVar6;
    lVar6 = __cxa_get_globals();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    plVar5[0xd] = (long)FUN_01835098;
    _Unwind_RaiseException(puVar8);
    uVar9 = *puVar8;
    plVar7 = (long *)__cxa_get_globals();
    if ((uVar9 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = (int)plVar5[6];
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(plVar5 + 6) = iVar1 + 1;
      if ((long *)*plVar7 != plVar5) {
        plVar5[5] = *plVar7;
        *plVar7 = (long)plVar5;
      }
      *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
    }
    else {
      if (*plVar7 != 0) goto LAB_01835090;
      *plVar7 = (long)plVar5;
    }
  }
  return;
}

