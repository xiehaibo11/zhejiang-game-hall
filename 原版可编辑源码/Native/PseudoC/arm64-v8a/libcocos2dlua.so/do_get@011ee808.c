
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
  long lVar2;
  __shared_count *p_Var3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 **__ptr;
  undefined8 uVar7;
  int *piVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  int *piVar11;
  long *plVar12;
  char local_2cc [4];
  __shared_count *local_2c8;
  int *local_2c0;
  int *local_2b8;
  code *local_2b0;
  long *local_2a8;
  undefined8 *local_2a0;
  code *local_298;
  undefined8 uStack_290;
  undefined8 local_238;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined7 local_210;
  undefined4 uStack_209;
  int local_200 [100];
  long local_70 [2];
  
  lVar2 = tpidr_el0;
  local_70[0] = *(long *)(lVar2 + 0x28);
  local_2b8 = local_200;
  local_2b0 = __do_nothing;
  local_2a8 = param_2;
  ios_base::getloc();
  p_Var3 = local_2c8;
  local_2a0 = &ctype<wchar_t>::id;
  uStack_290 = 0;
  local_298 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_238 = &local_2a0;
    local_210 = SUB87(&local_238,0);
    uStack_209._0_1_ = (undefined1)((ulong)&local_238 >> 0x38);
    __call_once((ulong *)&ctype<wchar_t>::id,&local_210,FUN_01208130);
  }
  lVar1 = *(long *)(p_Var3 + 0x10);
  if (((ulong)(*(long *)(p_Var3 + 0x18) - lVar1 >> 3) <= (long)DAT_01794320 - 1U) ||
     (plVar12 = *(long **)(lVar1 + ((long)DAT_01794320 - 1U) * 8), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  local_2cc[0] = '\0';
  uVar6 = __do_get(&local_2a8,param_3,param_4 & 1,&local_2c8,*(undefined4 *)(param_5 + 8),param_6,
                   local_2cc,plVar12,&local_2b8,&local_2c0,local_70);
  if ((uVar6 & 1) != 0) {
    local_210 = 0x36353433323130;
    uStack_209 = 0x393837;
    (**(code **)(*plVar12 + 0x60))(plVar12,&local_210,(long)&uStack_209 + 3,&local_238);
    piVar11 = local_2b8;
    piVar8 = local_2c0;
    if ((long)local_2c0 - (long)local_2b8 < 0x189) {
      __ptr = (undefined8 **)0x0;
      ppuVar9 = &local_2a0;
    }
    else {
      __ptr = malloc(((ulong)((long)local_2c0 - (long)local_2b8) >> 2) + 2);
      ppuVar9 = __ptr;
      if (__ptr == (undefined8 **)0x0) goto LAB_011eebd8;
    }
    if (local_2cc[0] != '\0') {
      *(undefined1 *)ppuVar9 = 0x2d;
      ppuVar9 = (undefined8 **)((long)ppuVar9 + 1);
    }
    if (piVar11 < piVar8) {
      ppuVar10 = ppuVar9;
      do {
        iVar5 = *piVar11;
        if ((int)local_238 == iVar5) {
          piVar8 = (int *)&local_238;
        }
        else {
          piVar8 = (int *)((long)&local_238 + 4);
          if ((((((local_238._4_4_ != iVar5) && (piVar8 = &local_230, local_230 != iVar5)) &&
                (piVar8 = &local_22c, local_22c != iVar5)) &&
               ((piVar8 = &local_228, local_228 != iVar5 &&
                (piVar8 = &local_224, local_224 != iVar5)))) &&
              ((piVar8 = &local_220, local_220 != iVar5 &&
               ((piVar8 = &local_21c, local_21c != iVar5 &&
                (piVar8 = &local_218, local_218 != iVar5)))))) &&
             (piVar8 = &local_214, local_214 != iVar5)) {
            piVar8 = (int *)&local_210;
          }
        }
        piVar11 = piVar11 + 1;
        ppuVar9 = (undefined8 **)((long)ppuVar10 + 1);
        *(undefined1 *)ppuVar10 =
             *(undefined1 *)((long)&local_210 + ((long)piVar8 - (long)&local_238 >> 2));
        ppuVar10 = ppuVar9;
      } while (piVar11 < local_2c0);
    }
    *(undefined1 *)ppuVar9 = 0;
    iVar5 = sscanf((char *)&local_2a0,"%Lf",param_7);
    if (iVar5 != 1) {
      __throw_runtime_error("money_get error");
LAB_011eebd8:
      uVar7 = __throw_bad_alloc();
      if (__ptr != (undefined8 **)0x0) {
        free(__ptr);
      }
      __shared_count::__release_shared(local_2c8);
      piVar11 = local_2b8;
      local_2b8 = (int *)0x0;
      if (piVar11 != (int *)0x0) {
        (*local_2b0)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
    if (__ptr != (undefined8 **)0x0) {
      free(__ptr);
    }
  }
  if (local_2a8 == (long *)0x0) {
LAB_011eeb28:
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_011eeb30;
LAB_011eeb1c:
    if (!bVar4) goto LAB_011eeb70;
  }
  else {
    if ((int *)local_2a8[3] == (int *)local_2a8[4]) {
      iVar5 = (**(code **)(*local_2a8 + 0x48))();
    }
    else {
      iVar5 = *(int *)local_2a8[3];
    }
    if (iVar5 == -1) {
      local_2a8 = (long *)0x0;
      goto LAB_011eeb28;
    }
    bVar4 = local_2a8 == (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_011eeb1c;
LAB_011eeb30:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar5 == -1)) goto LAB_011eeb70;
  }
  *param_6 = *param_6 | 2;
LAB_011eeb70:
  plVar12 = local_2a8;
  __shared_count::__release_shared(local_2c8);
  piVar11 = local_2b8;
  local_2b8 = (int *)0x0;
  if (piVar11 != (int *)0x0) {
    (*local_2b0)();
  }
  if (*(long *)(lVar2 + 0x28) == local_70[0]) {
    return plVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

