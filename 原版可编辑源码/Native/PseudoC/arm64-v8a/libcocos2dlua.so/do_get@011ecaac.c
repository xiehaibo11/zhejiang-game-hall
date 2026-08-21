
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
  long lVar1;
  char cVar2;
  long lVar3;
  __shared_count *p_Var4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined8 **__ptr;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  char *pcVar12;
  long *plVar13;
  char local_184 [4];
  __shared_count *local_180;
  char *local_178;
  char *local_170;
  code *local_168;
  long *local_160;
  undefined8 *local_158;
  code *local_150;
  undefined8 uStack_148;
  undefined8 local_f0;
  char local_e8;
  char local_e7;
  char acStack_e6 [6];
  undefined7 local_e0;
  undefined4 uStack_d9;
  char local_d4 [100];
  long local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[0] = *(long *)(lVar3 + 0x28);
  local_170 = local_d4;
  local_168 = __do_nothing;
  local_160 = param_2;
  ios_base::getloc();
  p_Var4 = local_180;
  local_158 = &ctype<char>::id;
  uStack_148 = 0;
  local_150 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_f0 = &local_e0;
    local_e0 = SUB87(&local_158,0);
    uStack_d9._0_1_ = (undefined1)((ulong)&local_158 >> 0x38);
    __call_once((ulong *)&ctype<char>::id,&local_f0,FUN_01208130);
  }
  lVar1 = *(long *)(p_Var4 + 0x10);
  if (((ulong)(*(long *)(p_Var4 + 0x18) - lVar1 >> 3) <= (long)DAT_01794330 - 1U) ||
     (plVar13 = *(long **)(lVar1 + ((long)DAT_01794330 - 1U) * 8), plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  local_184[0] = '\0';
  uVar7 = __do_get(&local_160,param_3,param_4 & 1,&local_180,*(undefined4 *)(param_5 + 8),param_6,
                   local_184,plVar13,&local_170,&local_178,local_70);
  if ((uVar7 & 1) != 0) {
    local_e0 = 0x36353433323130;
    uStack_d9 = 0x393837;
    (**(code **)(*plVar13 + 0x40))(plVar13,&local_e0,(long)&uStack_d9 + 3,&local_f0);
    pcVar12 = local_170;
    pcVar9 = local_178;
    if ((long)local_178 - (long)local_170 < 99) {
      __ptr = (undefined8 **)0x0;
      ppuVar10 = &local_158;
    }
    else {
      __ptr = malloc(((long)local_178 - (long)local_170) + 2);
      ppuVar10 = __ptr;
      if (__ptr == (undefined8 **)0x0) goto LAB_011ece60;
    }
    if (local_184[0] != '\0') {
      *(undefined1 *)ppuVar10 = 0x2d;
      ppuVar10 = (undefined8 **)((long)ppuVar10 + 1);
    }
    if (pcVar12 < pcVar9) {
      cVar5 = (char)local_f0;
      ppuVar11 = ppuVar10;
      do {
        cVar2 = *pcVar12;
        if (cVar5 == cVar2) {
          pcVar9 = (char *)&local_f0;
        }
        else {
          pcVar9 = (char *)((ulong)&local_f0 | 1);
          if ((((((local_f0._1_1_ != cVar2) &&
                 (pcVar9 = (char *)((ulong)&local_f0 | 2), local_f0._2_1_ != cVar2)) &&
                (pcVar9 = (char *)((ulong)&local_f0 | 3), local_f0._3_1_ != cVar2)) &&
               ((pcVar9 = (char *)((long)&local_f0 + 4), local_f0._4_1_ != cVar2 &&
                (pcVar9 = (char *)((long)&local_f0 + 5), local_f0._5_1_ != cVar2)))) &&
              ((pcVar9 = (char *)((long)&local_f0 + 6), local_f0._6_1_ != cVar2 &&
               ((pcVar9 = (char *)((long)&local_f0 + 7), local_f0._7_1_ != cVar2 &&
                (pcVar9 = &local_e8, local_e8 != cVar2)))))) &&
             (pcVar9 = &local_e7, local_e7 != cVar2)) {
            pcVar9 = acStack_e6;
          }
        }
        pcVar12 = pcVar12 + 1;
        ppuVar10 = (undefined8 **)((long)ppuVar11 + 1);
        *(char *)ppuVar11 = pcVar9[(long)&local_e0 - (long)&local_f0];
        ppuVar11 = ppuVar10;
      } while (pcVar12 < local_178);
    }
    *(undefined1 *)ppuVar10 = 0;
    iVar6 = sscanf((char *)&local_158,"%Lf",param_7);
    if (iVar6 != 1) {
      __throw_runtime_error("money_get error");
LAB_011ece60:
      uVar8 = __throw_bad_alloc();
      if (__ptr != (undefined8 **)0x0) {
        free(__ptr);
      }
      __shared_count::__release_shared(local_180);
      pcVar12 = local_170;
      local_170 = (char *)0x0;
      if (pcVar12 != (char *)0x0) {
        (*local_168)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar8);
    }
    if (__ptr != (undefined8 **)0x0) {
      free(__ptr);
    }
  }
  if ((local_160 == (long *)0x0) || (local_160[3] != local_160[4])) {
joined_r0x011ecd88:
    plVar13 = local_160;
    if (param_3 == (long *)0x0) goto LAB_011ece34;
LAB_011ecd8c:
    plVar13 = local_160;
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_011ece34;
    if (plVar13 == (long *)0x0) goto LAB_011ecdc0;
  }
  else {
    iVar6 = (**(code **)(*local_160 + 0x48))(local_160);
    if (iVar6 == -1) {
      local_160 = (long *)0x0;
      goto joined_r0x011ecd88;
    }
    plVar13 = local_160;
    if (param_3 != (long *)0x0) goto LAB_011ecd8c;
LAB_011ece34:
    if (plVar13 != (long *)0x0) goto LAB_011ecdc0;
  }
  *param_6 = *param_6 | 2;
LAB_011ecdc0:
  plVar13 = local_160;
  __shared_count::__release_shared(local_180);
  pcVar12 = local_170;
  local_170 = (char *)0x0;
  if (pcVar12 != (char *)0x0) {
    (*local_168)();
  }
  if (*(long *)(lVar3 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar13;
}

