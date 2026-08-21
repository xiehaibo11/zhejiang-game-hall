
/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, bool) const */

long * __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  locale local_50;
  undefined7 uStack_4f;
  ulong local_48;
  int *piStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    plVar6 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return plVar6;
    }
  }
  else {
    ios_base::getloc();
    plVar6 = (long *)locale::use_facet(&local_50,(id *)&numpunct<wchar_t>::id);
    __shared_count::__release_shared((__shared_count *)CONCAT71(uStack_4f,local_50));
    if ((param_5 & 1) == 0) {
      pcVar8 = *(code **)(*plVar6 + 0x38);
    }
    else {
      pcVar8 = *(code **)(*plVar6 + 0x30);
    }
    (*pcVar8)(&local_50,plVar6);
    uVar9 = (ulong)(byte)local_50;
    bVar4 = ((byte)local_50 & 1) == 0;
    uVar10 = (ulong)((byte)local_50 >> 1);
    if (!bVar4) {
      uVar10 = local_48;
    }
    piVar7 = piStack_40;
    if (uVar10 != 0) {
      uVar10 = local_48;
      plVar6 = param_2;
      piVar11 = (int *)((ulong)&local_50 | 4);
      if (((byte)local_50 & 1) != 0) {
        piVar11 = piStack_40;
      }
      do {
        param_2 = plVar6;
        if (plVar6 != (long *)0x0) {
          piVar7 = (int *)plVar6[6];
          iVar5 = *piVar11;
          if (piVar7 == (int *)plVar6[7]) {
            iVar5 = (**(code **)(*plVar6 + 0x68))(plVar6);
          }
          else {
            plVar6[6] = (long)(piVar7 + 1);
            *piVar7 = iVar5;
          }
          uVar9 = (ulong)(byte)local_50;
          piVar7 = piStack_40;
          uVar10 = local_48;
          param_2 = (long *)0x0;
          if (iVar5 != -1) {
            param_2 = plVar6;
          }
        }
        bVar4 = (uVar9 & 1) == 0;
        uVar1 = uVar9 >> 1;
        piVar3 = (int *)((ulong)&local_50 | 4);
        if (!bVar4) {
          uVar1 = uVar10;
          piVar3 = piVar7;
        }
        piVar11 = piVar11 + 1;
        plVar6 = param_2;
      } while (piVar11 != piVar3 + uVar1);
    }
    if (!bVar4) {
      operator_delete(piVar7);
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

