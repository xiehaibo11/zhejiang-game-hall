
/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&)
   const */

long * __thiscall
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      undefined8 param_7)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  char *__ptr;
  undefined8 uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  char local_2cc [4];
  __shared_count *local_2c8;
  int *local_2c0;
  int *local_2b8;
  code *local_2b0;
  long *local_2a8;
  char acStack_29c [100];
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined8 local_210;
  undefined2 local_208;
  undefined1 local_206 [6];
  int local_200 [100];
  long local_70 [2];
  
  lVar1 = tpidr_el0;
  local_70[0] = *(long *)(lVar1 + 0x28);
  local_2b8 = local_200;
  local_2b0 = __do_nothing;
  local_2a8 = param_2;
  ios_base::getloc();
  plVar4 = (long *)locale::use_facet((locale *)&local_2c8,(id *)&ctype<wchar_t>::id);
  local_2cc[0] = '\0';
  uVar5 = __do_get(&local_2a8,param_3,param_4 & 1,&local_2c8,*(undefined4 *)(param_5 + 8),param_6,
                   local_2cc,plVar4,&local_2b8,&local_2c0,local_70);
  if ((uVar5 & 1) != 0) {
    local_206[0] = 0;
    local_208 = 0x3938;
    local_210 = 0x3736353433323130;
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_210,local_206,&local_238);
    piVar10 = local_2b8;
    piVar7 = local_2c0;
    if ((long)local_2c0 - (long)local_2b8 < 0x189) {
      __ptr = (char *)0x0;
      pcVar9 = acStack_29c;
    }
    else {
      __ptr = malloc(((ulong)((long)local_2c0 - (long)local_2b8) >> 2) + 2);
      pcVar9 = __ptr;
      if (__ptr == (char *)0x0) goto LAB_0180c3b8;
    }
    if (local_2cc[0] != '\0') {
      *pcVar9 = '-';
      pcVar9 = pcVar9 + 1;
    }
    if (piVar10 < piVar7) {
      pcVar8 = pcVar9;
      do {
        iVar3 = *piVar10;
        if (local_238 == iVar3) {
          piVar7 = &local_238;
        }
        else {
          piVar7 = &local_234;
          if ((((((local_234 != iVar3) && (piVar7 = &local_230, local_230 != iVar3)) &&
                (piVar7 = &local_22c, local_22c != iVar3)) &&
               ((piVar7 = &local_228, local_228 != iVar3 &&
                (piVar7 = &local_224, local_224 != iVar3)))) &&
              ((piVar7 = &local_220, local_220 != iVar3 &&
               ((piVar7 = &local_21c, local_21c != iVar3 &&
                (piVar7 = &local_218, local_218 != iVar3)))))) &&
             (piVar7 = &local_214, local_214 != iVar3)) {
            piVar7 = (int *)&local_210;
          }
        }
        piVar10 = piVar10 + 1;
        pcVar9 = pcVar8 + 1;
        *pcVar8 = *(char *)((long)&local_210 + ((long)piVar7 - (long)&local_238 >> 2));
        pcVar8 = pcVar9;
      } while (piVar10 < local_2c0);
    }
    *pcVar9 = '\0';
    iVar3 = sscanf(acStack_29c,"%Lf",param_7);
    if (iVar3 != 1) {
      __throw_runtime_error("money_get error");
LAB_0180c3b8:
      uVar6 = __throw_bad_alloc();
      if (__ptr != (char *)0x0) {
        free(__ptr);
      }
      __shared_count::__release_shared(local_2c8);
      piVar10 = local_2b8;
      local_2b8 = (int *)0x0;
      if (piVar10 != (int *)0x0) {
        (*local_2b0)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar6);
    }
    if (__ptr != (char *)0x0) {
      free(__ptr);
    }
  }
  if (local_2a8 == (long *)0x0) {
LAB_0180c30c:
    bVar2 = true;
    if (param_3 != (long *)0x0) goto LAB_0180c314;
LAB_0180c300:
    if (!bVar2) goto LAB_0180c354;
  }
  else {
    if ((int *)local_2a8[3] == (int *)local_2a8[4]) {
      iVar3 = (**(code **)(*local_2a8 + 0x48))();
    }
    else {
      iVar3 = *(int *)local_2a8[3];
    }
    if (iVar3 == -1) {
      local_2a8 = (long *)0x0;
      goto LAB_0180c30c;
    }
    bVar2 = local_2a8 == (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_0180c300;
LAB_0180c314:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (bVar2 != (iVar3 == -1)) goto LAB_0180c354;
  }
  *param_6 = *param_6 | 2;
LAB_0180c354:
  plVar4 = local_2a8;
  __shared_count::__release_shared(local_2c8);
  piVar10 = local_2b8;
  local_2b8 = (int *)0x0;
  if (piVar10 != (int *)0x0) {
    (*local_2b0)();
  }
  if (*(long *)(lVar1 + 0x28) == local_70[0]) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

