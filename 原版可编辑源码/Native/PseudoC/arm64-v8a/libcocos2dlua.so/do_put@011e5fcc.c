
/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, bool) const */

long * __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  code *pcVar9;
  ulong uVar10;
  __shared_count *local_78;
  undefined8 *local_70;
  code *local_68;
  int *piStack_60;
  undefined8 ***local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    plVar7 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return plVar7;
    }
  }
  else {
    ios_base::getloc();
    local_70 = &numpunct<wchar_t>::id;
    piStack_60 = (int *)0x0;
    local_68 = locale::id::__init;
    if (numpunct<wchar_t>::id != -1) {
      local_50 = &local_70;
      local_58 = &local_50;
      __call_once((ulong *)&numpunct<wchar_t>::id,&local_58,FUN_01208130);
    }
    if (((ulong)(*(long *)(local_78 + 0x18) - *(long *)(local_78 + 0x10) >> 3) <=
         (long)DAT_01794390 - 1U) ||
       (plVar7 = *(long **)(*(long *)(local_78 + 0x10) + ((long)DAT_01794390 - 1U) * 8),
       plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    __shared_count::__release_shared(local_78);
    if ((param_5 & 1) == 0) {
      pcVar9 = *(code **)(*plVar7 + 0x38);
    }
    else {
      pcVar9 = *(code **)(*plVar7 + 0x30);
    }
    (*pcVar9)(&local_70,plVar7);
    uVar10 = (ulong)local_70 & 0xff;
    bVar5 = ((ulong)local_70 & 1) == 0;
    pcVar9 = (code *)((ulong)local_70 >> 1 & 0x7f);
    if (!bVar5) {
      pcVar9 = local_68;
    }
    piVar8 = piStack_60;
    if (pcVar9 != (code *)0x0) {
      piVar1 = (int *)((ulong)&local_70 | 4);
      plVar7 = param_2;
      pcVar9 = local_68;
      if (((ulong)local_70 & 1) != 0) {
        piVar1 = piStack_60;
      }
      do {
        param_2 = plVar7;
        if (plVar7 != (long *)0x0) {
          piVar8 = (int *)plVar7[6];
          iVar6 = *piVar1;
          if (piVar8 == (int *)plVar7[7]) {
            iVar6 = (**(code **)(*plVar7 + 0x68))(plVar7);
          }
          else {
            plVar7[6] = (long)(piVar8 + 1);
            *piVar8 = iVar6;
          }
          uVar10 = (ulong)local_70 & 0xff;
          piVar8 = piStack_60;
          pcVar9 = local_68;
          param_2 = (long *)0x0;
          if (iVar6 != -1) {
            param_2 = plVar7;
          }
        }
        bVar5 = (uVar10 & 1) == 0;
        pcVar2 = (code *)(uVar10 >> 1);
        piVar4 = (int *)((ulong)&local_70 | 4);
        if (!bVar5) {
          pcVar2 = pcVar9;
          piVar4 = piVar8;
        }
        piVar1 = piVar1 + 1;
        plVar7 = param_2;
      } while (piVar1 != piVar4 + (long)pcVar2);
    }
    if (!bVar5) {
      operator_delete(piVar8);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

