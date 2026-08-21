
/* std::__ndk1::__num_put<char>::__widen_and_group_int(char*, char*, char*, char*, char*&, char*&,
   std::__ndk1::locale const&) */

void std::__ndk1::__num_put<char>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,char *param_4,char **param_5,
               char **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar7 = (long *)locale::use_facet(param_7,(id *)&ctype<char>::id);
  plVar8 = (long *)locale::use_facet(param_7,(id *)&numpunct<char>::id);
  (**(code **)(*plVar8 + 0x28))(local_80);
  uVar2 = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    uVar2 = local_78;
  }
  if (uVar2 == 0) {
    (**(code **)(*plVar7 + 0x40))(plVar7,param_1,param_3,param_4);
    *param_6 = param_4 + ((long)param_3 - (long)param_1);
    pcVar9 = param_4 + ((long)param_3 - (long)param_1);
  }
  else {
    *param_6 = param_4;
    if ((*param_1 == '-') || (pcVar14 = param_1, *param_1 == '+')) {
      cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7);
      pcVar9 = *param_6;
      pcVar14 = param_1 + 1;
      *param_6 = pcVar9 + 1;
      *pcVar9 = cVar5;
    }
    if (((1 < (long)param_3 - (long)pcVar14) && (*pcVar14 == '0')) &&
       ((byte)(pcVar14[1] | 0x20U) == 0x78)) {
      cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,0x30);
      pcVar9 = *param_6;
      *param_6 = pcVar9 + 1;
      *pcVar9 = cVar5;
      cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,pcVar14[1]);
      pcVar9 = *param_6;
      pcVar14 = pcVar14 + 2;
      *param_6 = pcVar9 + 1;
      *pcVar9 = cVar5;
    }
    if ((pcVar14 != param_3) && (pcVar10 = param_3 + -1, pcVar9 = pcVar14, pcVar14 < pcVar10)) {
      do {
        pcVar13 = pcVar9 + 1;
        cVar5 = *pcVar9;
        *pcVar9 = *pcVar10;
        pcVar11 = pcVar10 + -1;
        *pcVar10 = cVar5;
        pcVar10 = pcVar11;
        pcVar9 = pcVar13;
      } while (pcVar13 < pcVar11);
    }
    cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
    if (pcVar14 < param_3) {
      uVar15 = 0;
      uVar16 = 0;
      pcVar9 = pcVar14;
      do {
        pvVar1 = (void *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          pvVar1 = local_70;
        }
        uVar12 = (uint)*(byte *)((long)pvVar1 + (ulong)uVar15);
        if ((uVar12 != 0) && (uVar16 == uVar12)) {
          pcVar10 = *param_6;
          uVar16 = 0;
          *param_6 = pcVar10 + 1;
          *pcVar10 = cVar5;
          uVar2 = (ulong)(local_80[0] >> 1);
          if ((local_80[0] & 1) != 0) {
            uVar2 = local_78;
          }
          if ((ulong)uVar15 < uVar2 - 1) {
            uVar15 = uVar15 + 1;
          }
        }
        cVar6 = (**(code **)(*plVar7 + 0x38))(plVar7,*pcVar9);
        pcVar10 = *param_6;
        pcVar9 = pcVar9 + 1;
        uVar16 = uVar16 + 1;
        *param_6 = pcVar10 + 1;
        *pcVar10 = cVar6;
      } while (pcVar9 < param_3);
    }
    pcVar11 = *param_6;
    pcVar10 = param_4 + ((long)pcVar14 - (long)param_1);
    pcVar9 = pcVar10;
    if ((pcVar10 != pcVar11) && (pcVar9 = pcVar11, pcVar10 < pcVar11 + -1)) {
      pcVar9 = param_4 + (long)(pcVar14 + (1 - (long)param_1));
      pcVar14 = pcVar11 + -1;
      do {
        cVar5 = pcVar9[-1];
        pcVar9[-1] = *pcVar14;
        *pcVar14 = cVar5;
        bVar4 = pcVar9 < pcVar14 + -1;
        pcVar9 = pcVar9 + 1;
        pcVar14 = pcVar14 + -1;
      } while (bVar4);
      pcVar9 = *param_6;
    }
  }
  if (param_2 != param_3) {
    pcVar9 = param_4 + ((long)param_2 - (long)param_1);
  }
  *param_5 = pcVar9;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

