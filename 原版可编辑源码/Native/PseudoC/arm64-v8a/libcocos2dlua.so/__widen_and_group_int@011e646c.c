
/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_int(char*, char*, char*, wchar_t*, wchar_t*&,
   wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  wchar_t *pwVar8;
  char *pcVar9;
  char *pcVar10;
  wchar_t *pwVar11;
  uint uVar12;
  char *pcVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  uint uVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  char *pcVar22;
  undefined8 *local_90;
  code *local_88;
  void *pvStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar17 = *(long *)param_7;
  local_90 = &ctype<wchar_t>::id;
  pvStack_80 = (void *)0x0;
  local_88 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_78,FUN_01208130);
  }
  lVar3 = *(long *)(lVar17 + 0x10);
  if (((long)DAT_01794320 - 1U < (ulong)(*(long *)(lVar17 + 0x18) - lVar3 >> 3)) &&
     (plVar19 = *(long **)(lVar3 + ((long)DAT_01794320 - 1U) * 8), plVar19 != (long *)0x0)) {
    lVar17 = *(long *)param_7;
    pvStack_80 = (void *)0x0;
    local_88 = locale::id::__init;
    local_90 = &numpunct<wchar_t>::id;
    if (numpunct<wchar_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      __call_once((ulong *)&numpunct<wchar_t>::id,&local_78,FUN_01208130);
    }
    lVar3 = *(long *)(lVar17 + 0x10);
    if (((long)DAT_01794390 - 1U < (ulong)(*(long *)(lVar17 + 0x18) - lVar3 >> 3)) &&
       (plVar20 = *(long **)(lVar3 + ((long)DAT_01794390 - 1U) * 8), plVar20 != (long *)0x0)) {
      (**(code **)(*plVar20 + 0x28))(&local_90,plVar20);
      pcVar2 = (code *)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        pcVar2 = local_88;
      }
      if (pcVar2 == (code *)0x0) {
        (**(code **)(*plVar19 + 0x60))(plVar19,param_1,param_3,param_4);
        *param_6 = param_4 + ((long)param_3 - (long)param_1);
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar18 = param_1, *param_1 == '+')) {
          wVar6 = (**(code **)(*plVar19 + 0x58))(plVar19);
          pwVar8 = *param_6;
          pcVar18 = param_1 + 1;
          *param_6 = pwVar8 + 1;
          *pwVar8 = wVar6;
        }
        if (((1 < (long)param_3 - (long)pcVar18) && (*pcVar18 == '0')) &&
           ((byte)(pcVar18[1] | 0x20U) == 0x78)) {
          wVar6 = (**(code **)(*plVar19 + 0x58))(plVar19,0x30);
          pwVar8 = *param_6;
          *param_6 = pwVar8 + 1;
          *pwVar8 = wVar6;
          wVar6 = (**(code **)(*plVar19 + 0x58))(plVar19,pcVar18[1]);
          pwVar8 = *param_6;
          pcVar18 = pcVar18 + 2;
          *param_6 = pwVar8 + 1;
          *pwVar8 = wVar6;
        }
        if ((pcVar18 != param_3) && (pcVar9 = param_3 + -1, pcVar22 = pcVar18, pcVar18 < pcVar9)) {
          do {
            pcVar13 = pcVar22 + 1;
            cVar4 = *pcVar22;
            *pcVar22 = *pcVar9;
            pcVar10 = pcVar9 + -1;
            *pcVar9 = cVar4;
            pcVar9 = pcVar10;
            pcVar22 = pcVar13;
          } while (pcVar13 < pcVar10);
        }
        wVar6 = (**(code **)(*plVar20 + 0x20))(plVar20);
        if (pcVar18 < param_3) {
          uVar16 = 0;
          uVar21 = 0;
          pcVar22 = pcVar18;
          do {
            pvVar1 = (void *)((ulong)&local_90 | 1);
            if (((ulong)local_90 & 1) != 0) {
              pvVar1 = pvStack_80;
            }
            uVar12 = (uint)(byte)*(code *)((long)pvVar1 + (long)(ulong)uVar16);
            if ((uVar12 != 0) && (uVar21 == uVar12)) {
              pwVar8 = *param_6;
              uVar21 = 0;
              *param_6 = pwVar8 + 1;
              *pwVar8 = wVar6;
              pcVar2 = (code *)((ulong)local_90 >> 1 & 0x7f);
              if (((ulong)local_90 & 1) != 0) {
                pcVar2 = local_88;
              }
              if ((code *)(ulong)uVar16 < pcVar2 + -1) {
                uVar16 = uVar16 + 1;
              }
            }
            wVar7 = (**(code **)(*plVar19 + 0x58))(plVar19,*pcVar22);
            pwVar14 = *param_6;
            pcVar22 = pcVar22 + 1;
            uVar21 = uVar21 + 1;
            pwVar8 = pwVar14 + 1;
            *param_6 = pwVar8;
            *pwVar14 = wVar7;
          } while (param_3 != pcVar22);
        }
        else {
          pwVar8 = *param_6;
        }
        if ((param_4 + ((long)pcVar18 - (long)param_1) != pwVar8) &&
           (param_4 + ((long)pcVar18 - (long)param_1) < pwVar8 + -1)) {
          pwVar14 = pwVar8 + -1;
          pwVar8 = param_4 + ((long)pcVar18 - (long)param_1);
          do {
            pwVar15 = pwVar8 + 1;
            wVar6 = *pwVar8;
            *pwVar8 = *pwVar14;
            pwVar11 = pwVar14 + -1;
            *pwVar14 = wVar6;
            pwVar14 = pwVar11;
            pwVar8 = pwVar15;
          } while (pwVar15 < pwVar11);
        }
      }
      pwVar8 = *param_6;
      if (param_2 != param_3) {
        pwVar8 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pwVar8;
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

