
/* std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, tm const*, wchar_t const*,
   wchar_t const*) const */

long * __thiscall
std::__ndk1::
time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::put
          (time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,int *param_6
          ,int *param_7)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  __shared_count *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ios_base::getloc();
  plVar5 = (long *)locale::use_facet((locale *)&local_70,(id *)&ctype<wchar_t>::id);
  plVar6 = (long *)__shared_count::__release_shared(local_70);
joined_r0x01809c1c:
  do {
    plVar8 = param_2;
    if (param_6 == param_7) {
LAB_01809e28:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return plVar8;
      }
LAB_01809e60:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(plVar6);
    }
    plVar6 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,*param_6,0);
    if (((uint)plVar6 & 0xff) == 0x25) {
      piVar9 = param_6 + 1;
      if (piVar9 == param_7) {
        if (param_2 != (long *)0x0) {
          piVar9 = (int *)param_2[6];
          iVar4 = *param_6;
          if (piVar9 == (int *)param_2[7]) {
            iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
          }
          else {
            param_2[6] = (long)(piVar9 + 1);
            *piVar9 = iVar4;
          }
          plVar6 = (long *)0x0;
          if (iVar4 != -1) {
            plVar6 = param_2;
          }
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return plVar6;
          }
          goto LAB_01809e60;
        }
        goto LAB_01809e28;
      }
      plVar6 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,*piVar9,0);
      uVar1 = (uint)plVar6 & 0xff;
      if ((uVar1 == 0x4f) || (uVar1 == 0x45)) {
        piVar2 = param_6 + 2;
        if (piVar2 == param_7) {
          if (param_2 != (long *)0x0) {
            piVar2 = (int *)param_2[6];
            iVar4 = *param_6;
            if (piVar2 == (int *)param_2[7]) {
              plVar6 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
              iVar4 = (int)plVar6;
            }
            else {
              param_2[6] = (long)(piVar2 + 1);
              *piVar2 = iVar4;
            }
            if (iVar4 == -1) {
              plVar8 = (long *)0x0;
            }
            else {
              piVar2 = (int *)param_2[6];
              iVar4 = *piVar9;
              if (piVar2 == (int *)param_2[7]) {
                plVar6 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
                iVar4 = (int)plVar6;
              }
              else {
                param_2[6] = (long)(piVar2 + 1);
                *piVar2 = iVar4;
              }
              plVar8 = (long *)0x0;
              if (iVar4 != -1) {
                plVar8 = param_2;
              }
            }
          }
          goto LAB_01809e28;
        }
        uVar7 = (**(code **)(*plVar5 + 0x68))(plVar5,*piVar2,0);
        uVar7 = uVar7 & 0xffffffff;
        piVar9 = piVar2;
        uVar10 = (ulong)plVar6 & 0xffffffff;
      }
      else {
        uVar10 = 0;
        uVar7 = (ulong)plVar6 & 0xffffffff;
      }
      plVar6 = (long *)(**(code **)(*(long *)this + 0x18))
                                 (this,param_2,param_3,param_4,param_5,uVar7,uVar10);
      param_6 = piVar9 + 1;
      param_2 = plVar6;
      goto joined_r0x01809c1c;
    }
    if (param_2 != (long *)0x0) {
      piVar9 = (int *)param_2[6];
      iVar4 = *param_6;
      if (piVar9 == (int *)param_2[7]) {
        plVar6 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
        iVar4 = (int)plVar6;
      }
      else {
        param_2[6] = (long)(piVar9 + 1);
        *piVar9 = iVar4;
      }
      plVar8 = (long *)0x0;
      if (iVar4 != -1) {
        plVar8 = param_2;
      }
    }
    param_6 = param_6 + 1;
    param_2 = plVar8;
  } while( true );
}

