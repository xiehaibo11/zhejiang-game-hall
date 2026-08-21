
/* std::__ndk1::__num_put<char>::__widen_and_group_int(char*, char*, char*, char*, char*&, char*&,
   std::__ndk1::locale const&) */

void std::__ndk1::__num_put<char>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,char *param_4,char **param_5,
               char **param_6,locale *param_7)

{
  bool bVar1;
  void *pvVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *local_90;
  code *local_88;
  void *pvStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar15 = *(long *)param_7;
  local_90 = &ctype<char>::id;
  pvStack_80 = (void *)0x0;
  local_88 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)&ctype<char>::id,&local_78,FUN_01208130);
  }
  lVar4 = *(long *)(lVar15 + 0x10);
  if (((long)DAT_01794330 - 1U < (ulong)(*(long *)(lVar15 + 0x18) - lVar4 >> 3)) &&
     (plVar16 = *(long **)(lVar4 + ((long)DAT_01794330 - 1U) * 8), plVar16 != (long *)0x0)) {
    lVar15 = *(long *)param_7;
    pvStack_80 = (void *)0x0;
    local_88 = locale::id::__init;
    local_90 = &numpunct<char>::id;
    if (numpunct<char>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      __call_once((ulong *)&numpunct<char>::id,&local_78,FUN_01208130);
    }
    lVar4 = *(long *)(lVar15 + 0x10);
    if (((long)DAT_01794380 - 1U < (ulong)(*(long *)(lVar15 + 0x18) - lVar4 >> 3)) &&
       (plVar17 = *(long **)(lVar4 + ((long)DAT_01794380 - 1U) * 8), plVar17 != (long *)0x0)) {
      (**(code **)(*plVar17 + 0x28))(&local_90,plVar17);
      pcVar3 = (code *)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        pcVar3 = local_88;
      }
      if (pcVar3 == (code *)0x0) {
        (**(code **)(*plVar16 + 0x40))(plVar16,param_1,param_3,param_4);
        pcVar8 = param_4 + ((long)param_3 - (long)param_1);
        *param_6 = pcVar8;
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar11 = param_1, *param_1 == '+')) {
          cVar6 = (**(code **)(*plVar16 + 0x38))(plVar16);
          pcVar8 = *param_6;
          pcVar11 = param_1 + 1;
          *param_6 = pcVar8 + 1;
          *pcVar8 = cVar6;
        }
        if (((1 < (long)param_3 - (long)pcVar11) && (*pcVar11 == '0')) &&
           ((byte)(pcVar11[1] | 0x20U) == 0x78)) {
          cVar6 = (**(code **)(*plVar16 + 0x38))(plVar16,0x30);
          pcVar8 = *param_6;
          *param_6 = pcVar8 + 1;
          *pcVar8 = cVar6;
          cVar6 = (**(code **)(*plVar16 + 0x38))(plVar16,pcVar11[1]);
          pcVar8 = *param_6;
          pcVar11 = pcVar11 + 2;
          *param_6 = pcVar8 + 1;
          *pcVar8 = cVar6;
        }
        if ((pcVar11 != param_3) && (pcVar9 = param_3 + -1, pcVar8 = pcVar11, pcVar11 < pcVar9)) {
          do {
            pcVar13 = pcVar8 + 1;
            cVar6 = *pcVar8;
            *pcVar8 = *pcVar9;
            pcVar10 = pcVar9 + -1;
            *pcVar9 = cVar6;
            pcVar9 = pcVar10;
            pcVar8 = pcVar13;
          } while (pcVar13 < pcVar10);
        }
        cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
        if (pcVar11 < param_3) {
          uVar14 = 0;
          uVar18 = 0;
          pcVar8 = pcVar11;
          do {
            pvVar2 = (void *)((ulong)&local_90 | 1);
            if (((ulong)local_90 & 1) != 0) {
              pvVar2 = pvStack_80;
            }
            uVar12 = (uint)(byte)*(code *)((long)pvVar2 + (long)(ulong)uVar14);
            if ((uVar12 != 0) && (uVar18 == uVar12)) {
              pcVar9 = *param_6;
              uVar18 = 0;
              *param_6 = pcVar9 + 1;
              *pcVar9 = cVar6;
              pcVar3 = (code *)((ulong)local_90 >> 1 & 0x7f);
              if (((ulong)local_90 & 1) != 0) {
                pcVar3 = local_88;
              }
              if ((code *)(ulong)uVar14 < pcVar3 + -1) {
                uVar14 = uVar14 + 1;
              }
            }
            cVar7 = (**(code **)(*plVar16 + 0x38))(plVar16,*pcVar8);
            pcVar9 = *param_6;
            pcVar8 = pcVar8 + 1;
            uVar18 = uVar18 + 1;
            *param_6 = pcVar9 + 1;
            *pcVar9 = cVar7;
          } while (param_3 != pcVar8);
        }
        pcVar9 = *param_6;
        pcVar8 = param_4 + ((long)pcVar11 - (long)param_1);
        if ((pcVar8 != pcVar9) && (bVar1 = pcVar8 < pcVar9 + -1, pcVar8 = pcVar9, bVar1)) {
          pcVar9 = pcVar9 + -1;
          pcVar8 = param_4 + ((long)pcVar11 - (long)param_1);
          do {
            pcVar10 = pcVar8 + 1;
            cVar6 = *pcVar8;
            *pcVar8 = *pcVar9;
            pcVar11 = pcVar9 + -1;
            *pcVar9 = cVar6;
            pcVar9 = pcVar11;
            pcVar8 = pcVar10;
          } while (pcVar10 < pcVar11);
          pcVar8 = *param_6;
        }
      }
      if (param_2 != param_3) {
        pcVar8 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pcVar8;
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(pvStack_80);
      }
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cc7c00();
}

