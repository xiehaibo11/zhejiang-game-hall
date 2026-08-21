
void __cxa_rethrow(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
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
      lVar5 = plVar3[1];
      *(int *)(lVar7 + 0x38) = -*(int *)(lVar7 + 0x38);
      *(int *)(plVar3 + 1) = (int)lVar5 + 1;
    }
    else {
      *plVar3 = 0;
    }
    FUN_001612b4(puVar6);
    uVar8 = *puVar6;
    plVar3 = (long *)__cxa_get_globals();
    if ((uVar8 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(lVar7 + 0x38);
      lVar5 = *plVar3;
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(lVar7 + 0x38) = iVar1 + 1;
      if (lVar5 != lVar7) {
        *(long *)(lVar7 + 0x30) = lVar5;
        *plVar3 = lVar7;
      }
      *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    }
    else {
      if (*plVar3 != 0) goto LAB_00148d0c;
      *plVar3 = lVar7;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_00149158(*(undefined8 *)(lVar7 + 0x28));
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
  }
LAB_00148d0c:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

