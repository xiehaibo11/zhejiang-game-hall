
/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&)
   const */

long * __thiscall
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      undefined8 param_7)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  char *__ptr;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_17c [4];
  __shared_count *local_178;
  char *local_170;
  char *local_168;
  code *local_160;
  long *local_158;
  char acStack_150 [100];
  char local_ec;
  char local_eb;
  char local_ea;
  char local_e9;
  char local_e8;
  char local_e7;
  char local_e6;
  char local_e5;
  char local_e4;
  char local_e3;
  char acStack_e2 [2];
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 local_d6 [2];
  char local_d4 [100];
  long local_70 [2];
  
  lVar2 = tpidr_el0;
  local_70[0] = *(long *)(lVar2 + 0x28);
  local_168 = local_d4;
  local_160 = __do_nothing;
  local_158 = param_2;
  ios_base::getloc();
  plVar4 = (long *)locale::use_facet((locale *)&local_178,(id *)&ctype<char>::id);
  local_17c[0] = '\0';
  uVar5 = __do_get(&local_158,param_3,param_4 & 1,&local_178,*(undefined4 *)(param_5 + 8),param_6,
                   local_17c,plVar4,&local_168,&local_170,local_70);
  if ((uVar5 & 1) != 0) {
    local_d6[0] = 0;
    local_d8 = 0x3938;
    local_e0 = 0x3736353433323130;
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_e0,local_d6,&local_ec);
    pcVar10 = local_168;
    pcVar8 = local_170;
    if ((long)local_170 - (long)local_168 < 99) {
      __ptr = (char *)0x0;
      pcVar9 = acStack_150;
    }
    else {
      __ptr = malloc(((long)local_170 - (long)local_168) + 2);
      pcVar9 = __ptr;
      if (__ptr == (char *)0x0) goto LAB_0180a718;
    }
    if (local_17c[0] != '\0') {
      *pcVar9 = '-';
      pcVar9 = pcVar9 + 1;
    }
    if (pcVar10 < pcVar8) {
      pcVar8 = pcVar9;
      do {
        cVar1 = *pcVar10;
        if (local_ec == cVar1) {
          pcVar7 = &local_ec;
        }
        else {
          pcVar7 = (char *)((ulong)&local_ec | 1);
          if ((((((local_eb != cVar1) &&
                 (pcVar7 = (char *)((ulong)&local_ec | 2), local_ea != cVar1)) &&
                (pcVar7 = (char *)((ulong)&local_ec | 3), local_e9 != cVar1)) &&
               ((pcVar7 = &local_e8, local_e8 != cVar1 && (pcVar7 = &local_e7, local_e7 != cVar1))))
              && ((pcVar7 = &local_e6, local_e6 != cVar1 &&
                  ((pcVar7 = &local_e5, local_e5 != cVar1 && (pcVar7 = &local_e4, local_e4 != cVar1)
                   ))))) && (pcVar7 = &local_e3, local_e3 != cVar1)) {
            pcVar7 = acStack_e2;
          }
        }
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar8 + 1;
        *pcVar8 = pcVar7[(long)&local_e0 - (long)&local_ec];
        pcVar8 = pcVar9;
      } while (pcVar10 < local_170);
    }
    *pcVar9 = '\0';
    iVar3 = sscanf(acStack_150,"%Lf",param_7);
    if (iVar3 != 1) {
      __throw_runtime_error("money_get error");
LAB_0180a718:
      uVar6 = __throw_bad_alloc();
      if (__ptr != (char *)0x0) {
        free(__ptr);
      }
      __shared_count::__release_shared(local_178);
      pcVar10 = local_168;
      local_168 = (char *)0x0;
      if (pcVar10 != (char *)0x0) {
        (*local_160)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar6);
    }
    if (__ptr != (char *)0x0) {
      free(__ptr);
    }
  }
  if ((local_158 == (long *)0x0) || (local_158[3] != local_158[4])) {
joined_r0x0180a644:
    plVar4 = local_158;
    if (param_3 == (long *)0x0) goto LAB_0180a6f0;
LAB_0180a648:
    plVar4 = local_158;
    if ((param_3[3] == param_3[4]) && (iVar3 = (**(code **)(*param_3 + 0x48))(param_3), iVar3 == -1)
       ) goto LAB_0180a6f0;
    if (plVar4 == (long *)0x0) goto LAB_0180a67c;
  }
  else {
    iVar3 = (**(code **)(*local_158 + 0x48))(local_158);
    if (iVar3 == -1) {
      local_158 = (long *)0x0;
      goto joined_r0x0180a644;
    }
    plVar4 = local_158;
    if (param_3 != (long *)0x0) goto LAB_0180a648;
LAB_0180a6f0:
    if (plVar4 != (long *)0x0) goto LAB_0180a67c;
  }
  *param_6 = *param_6 | 2;
LAB_0180a67c:
  plVar4 = local_158;
  __shared_count::__release_shared(local_178);
  pcVar10 = local_168;
  local_168 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    (*local_160)();
  }
  if (*(long *)(lVar2 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar4;
}

