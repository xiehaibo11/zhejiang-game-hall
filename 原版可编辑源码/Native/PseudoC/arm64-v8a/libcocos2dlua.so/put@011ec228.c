
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
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  __shared_count *local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ios_base::getloc();
  local_90 = &ctype<wchar_t>::id;
  uStack_80 = 0;
  local_88 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_78,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)DAT_01794320 - 1U) ||
     (plVar9 = *(long **)(*(long *)(local_98 + 0x10) + ((long)DAT_01794320 - 1U) * 8),
     plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  plVar5 = (long *)__shared_count::__release_shared(local_98);
joined_r0x011ec2fc:
  do {
    plVar7 = param_2;
    if (param_6 == param_7) {
LAB_011ec420:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return plVar7;
      }
LAB_011ec4f4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(plVar5);
    }
    plVar5 = (long *)(**(code **)(*plVar9 + 0x68))(plVar9,*param_6,0);
    if (((uint)plVar5 & 0xff) == 0x25) {
      piVar8 = param_6 + 1;
      if (piVar8 == param_7) {
        if (param_2 != (long *)0x0) {
          piVar8 = (int *)param_2[6];
          iVar4 = *param_6;
          if (piVar8 == (int *)param_2[7]) {
            iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
          }
          else {
            param_2[6] = (long)(piVar8 + 1);
            *piVar8 = iVar4;
          }
          plVar5 = (long *)0x0;
          if (iVar4 != -1) {
            plVar5 = param_2;
          }
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return plVar5;
          }
          goto LAB_011ec4f4;
        }
        goto LAB_011ec420;
      }
      plVar5 = (long *)(**(code **)(*plVar9 + 0x68))(plVar9,*piVar8,0);
      uVar1 = (uint)plVar5 & 0xff;
      if ((uVar1 == 0x4f) || (uVar1 == 0x45)) {
        piVar2 = param_6 + 2;
        if (piVar2 == param_7) {
          if (param_2 != (long *)0x0) {
            piVar2 = (int *)param_2[6];
            iVar4 = *param_6;
            if (piVar2 == (int *)param_2[7]) {
              plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
              iVar4 = (int)plVar5;
            }
            else {
              param_2[6] = (long)(piVar2 + 1);
              *piVar2 = iVar4;
            }
            if (iVar4 == -1) {
              plVar7 = (long *)0x0;
            }
            else {
              piVar2 = (int *)param_2[6];
              iVar4 = *piVar8;
              if (piVar2 == (int *)param_2[7]) {
                plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
                iVar4 = (int)plVar5;
              }
              else {
                param_2[6] = (long)(piVar2 + 1);
                *piVar2 = iVar4;
              }
              plVar7 = (long *)0x0;
              if (iVar4 != -1) {
                plVar7 = param_2;
              }
            }
          }
          goto LAB_011ec420;
        }
        uVar6 = (**(code **)(*plVar9 + 0x68))(plVar9,*piVar2,0);
        uVar6 = uVar6 & 0xffffffff;
        piVar8 = piVar2;
        uVar10 = (ulong)plVar5 & 0xffffffff;
      }
      else {
        uVar10 = 0;
        uVar6 = (ulong)plVar5 & 0xffffffff;
      }
      plVar5 = (long *)(**(code **)(*(long *)this + 0x18))
                                 (this,param_2,param_3,param_4,param_5,uVar6,uVar10);
      param_6 = piVar8 + 1;
      param_2 = plVar5;
      goto joined_r0x011ec2fc;
    }
    if (param_2 != (long *)0x0) {
      piVar8 = (int *)param_2[6];
      iVar4 = *param_6;
      if (piVar8 == (int *)param_2[7]) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
        iVar4 = (int)plVar5;
      }
      else {
        param_2[6] = (long)(piVar8 + 1);
        *piVar8 = iVar4;
      }
      plVar7 = (long *)0x0;
      if (iVar4 != -1) {
        plVar7 = param_2;
      }
    }
    param_6 = param_6 + 1;
    param_2 = plVar7;
  } while( true );
}

