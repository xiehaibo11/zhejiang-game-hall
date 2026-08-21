
/* std::__ndk1::__num_put<char>::__widen_and_group_float(char*, char*, char*, char*, char*&, char*&,
   std::__ndk1::locale const&) */

void std::__ndk1::__num_put<char>::__widen_and_group_float
               (char *param_1,char *param_2,char *param_3,char *param_4,char **param_5,
               char **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar9 = (long *)locale::use_facet(param_7,(id *)&ctype<char>::id);
  plVar10 = (long *)locale::use_facet(param_7,(id *)&numpunct<char>::id);
  (**(code **)(*plVar10 + 0x28))(local_80);
  *param_6 = param_4;
  if ((*param_1 == '-') || (pbVar19 = (byte *)param_1, *param_1 == '+')) {
    cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
    pcVar11 = *param_6;
    pbVar19 = (byte *)(param_1 + 1);
    *param_6 = pcVar11 + 1;
    *pcVar11 = cVar6;
  }
  pbVar20 = pbVar19;
  if ((((long)param_3 - (long)pbVar19 < 2) || (*pbVar19 != 0x30)) || ((pbVar19[1] | 0x20) != 0x78))
  {
    for (; pbVar20 < param_3; pbVar20 = pbVar20 + 1) {
      bVar3 = *pbVar20;
      if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      if (9 < bVar3 - 0x30) break;
    }
  }
  else {
    cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,0x30);
    pcVar11 = *param_6;
    *param_6 = pcVar11 + 1;
    *pcVar11 = cVar6;
    cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,pbVar19[1]);
    pcVar11 = *param_6;
    *param_6 = pcVar11 + 1;
    *pcVar11 = cVar6;
    pbVar19 = pbVar19 + 2;
    for (pbVar20 = pbVar19; pbVar20 < param_3; pbVar20 = pbVar20 + 1) {
      bVar3 = *pbVar20;
      if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      iVar8 = isxdigit((uint)bVar3);
      if (iVar8 == 0) break;
    }
  }
  uVar2 = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    uVar2 = local_78;
  }
  if (uVar2 == 0) {
    (**(code **)(*plVar9 + 0x40))(plVar9,pbVar19,pbVar20,*param_6);
    *param_6 = *param_6 + ((long)pbVar20 - (long)pbVar19);
  }
  else {
    if ((pbVar19 != pbVar20) && (pbVar12 = pbVar20 + -1, pbVar21 = pbVar19, pbVar19 < pbVar12)) {
      do {
        pbVar15 = pbVar21 + 1;
        bVar3 = *pbVar21;
        *pbVar21 = *pbVar12;
        pbVar13 = pbVar12 + -1;
        *pbVar12 = bVar3;
        pbVar12 = pbVar13;
        pbVar21 = pbVar15;
      } while (pbVar15 < pbVar13);
    }
    cVar6 = (**(code **)(*plVar10 + 0x20))();
    if (pbVar19 < pbVar20) {
      uVar18 = 0;
      uVar17 = 0;
      pbVar21 = pbVar19;
      do {
        pvVar1 = (void *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          pvVar1 = local_70;
        }
        uVar14 = (uint)*(byte *)((long)pvVar1 + (ulong)uVar18);
        if ((uVar14 != 0) && (uVar17 == uVar14)) {
          pcVar11 = *param_6;
          uVar17 = 0;
          *param_6 = pcVar11 + 1;
          *pcVar11 = cVar6;
          uVar2 = (ulong)(local_80[0] >> 1);
          if ((local_80[0] & 1) != 0) {
            uVar2 = local_78;
          }
          if ((ulong)uVar18 < uVar2 - 1) {
            uVar18 = uVar18 + 1;
          }
        }
        cVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,*pbVar21);
        pcVar11 = *param_6;
        pbVar21 = pbVar21 + 1;
        uVar17 = uVar17 + 1;
        *param_6 = pcVar11 + 1;
        *pcVar11 = cVar7;
      } while (pbVar21 < pbVar20);
    }
    if ((param_4 + ((long)pbVar19 - (long)param_1) != *param_6) &&
       (pcVar11 = *param_6 + -1, param_4 + ((long)pbVar19 - (long)param_1) < pcVar11)) {
      pcVar16 = param_4 + (long)(pbVar19 + (1 - (long)param_1));
      do {
        cVar6 = pcVar16[-1];
        pcVar16[-1] = *pcVar11;
        *pcVar11 = cVar6;
        bVar5 = pcVar16 < pcVar11 + -1;
        pcVar16 = pcVar16 + 1;
        pcVar11 = pcVar11 + -1;
      } while (bVar5);
    }
  }
  do {
    if (param_3 <= pbVar20) {
LAB_01803904:
      (**(code **)(*plVar9 + 0x40))(plVar9,pbVar20,param_3,*param_6);
      pcVar11 = *param_6;
      *param_6 = pcVar11 + ((long)param_3 - (long)pbVar20);
      pcVar11 = pcVar11 + ((long)param_3 - (long)pbVar20);
      if (param_2 != param_3) {
        pcVar11 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pcVar11;
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*pbVar20 == 0x2e) {
      cVar6 = (**(code **)(*plVar10 + 0x18))();
      pcVar11 = *param_6;
      pbVar20 = pbVar20 + 1;
      *param_6 = pcVar11 + 1;
      *pcVar11 = cVar6;
      goto LAB_01803904;
    }
    cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
    pcVar11 = *param_6;
    pbVar20 = pbVar20 + 1;
    *param_6 = pcVar11 + 1;
    *pcVar11 = cVar6;
  } while( true );
}

