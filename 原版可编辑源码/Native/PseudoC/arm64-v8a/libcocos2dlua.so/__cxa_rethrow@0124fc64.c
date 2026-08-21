
void __cxa_rethrow(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  plVar3 = (long *)__cxa_get_globals();
  lVar7 = *plVar3;
  if (lVar7 != 0) {
    puVar6 = (ulong *)(lVar7 + 0x60);
    uVar4 = *puVar6;
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      *(int *)(lVar7 + 0x30) = -*(int *)(lVar7 + 0x30);
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    else {
      *plVar3 = 0;
    }
    _Unwind_RaiseException(puVar6);
    uVar8 = *puVar6;
    plVar3 = (long *)__cxa_get_globals();
    lVar5 = lVar7;
    if ((uVar8 & 0xffffffffffffff00) != 0x434c4e47432b2b00) goto LAB_0124fd2c;
    iVar2 = *(int *)(lVar7 + 0x30);
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(lVar7 + 0x30) = iVar1 + 1;
    if (*plVar3 != lVar7) {
      *(long *)(lVar7 + 0x28) = *plVar3;
      *plVar3 = lVar7;
    }
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    while ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      plVar3 = (long *)FUN_01250414(*(undefined8 *)(lVar7 + 0x20));
      lVar5 = extraout_x8;
LAB_0124fd2c:
      if (*plVar3 != 0) break;
      *plVar3 = lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

