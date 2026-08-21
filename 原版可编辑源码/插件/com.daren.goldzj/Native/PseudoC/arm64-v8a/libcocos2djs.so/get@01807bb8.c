
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, wchar_t const*,
   wchar_t const*) const */

long * __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::get
          (time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,long *param_3,undefined8 param_4,uint *param_5,undefined8 param_6,
          undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  __shared_count *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ios_base::getloc();
  plVar10 = (long *)locale::use_facet((locale *)&local_70,(id *)&ctype<wchar_t>::id);
  __shared_count::__release_shared(local_70);
  *param_5 = 0;
  if (param_7 != param_8) {
    while (param_2 == (long *)0x0) {
      bVar3 = true;
      if (param_3 != (long *)0x0) goto LAB_01807c80;
LAB_01807c58:
      if (bVar3) goto LAB_01807f90;
LAB_01807cb8:
      cVar4 = (**(code **)(*plVar10 + 0x68))(plVar10,*param_7,0);
      if (cVar4 == '%') {
        puVar1 = param_7 + 1;
        if (puVar1 == param_8) goto LAB_01807f90;
        uVar5 = (**(code **)(*plVar10 + 0x68))(plVar10,*puVar1,0);
        if (((uVar5 & 0xff) == 0x45) || ((uVar5 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_01807f90;
          uVar6 = (**(code **)(*plVar10 + 0x68))(plVar10,param_7[2],0);
          lVar14 = 2;
          uVar12 = uVar5;
        }
        else {
          uVar12 = 0;
          lVar14 = 1;
          uVar6 = uVar5;
        }
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,param_2,param_3,param_4,param_5,param_6,uVar6,uVar12);
        param_7 = puVar1 + lVar14;
      }
      else {
        uVar11 = (**(code **)(*plVar10 + 0x18))(plVar10,1,*param_7);
        if ((uVar11 & 1) == 0) {
          if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
            uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            uVar7 = *(undefined4 *)param_2[3];
          }
          iVar9 = (**(code **)(*plVar10 + 0x38))(plVar10,uVar7);
          iVar8 = (**(code **)(*plVar10 + 0x38))(plVar10,*param_7);
          if (iVar9 == iVar8) {
            if (param_2[3] == param_2[4]) {
              (**(code **)(*param_2 + 0x50))(param_2);
            }
            else {
              param_2[3] = param_2[3] + 4;
            }
            param_7 = param_7 + 1;
          }
          else {
            *param_5 = 4;
          }
        }
        else {
          do {
            param_7 = param_7 + 1;
            puVar1 = param_8;
            if (param_8 == param_7) break;
            uVar11 = (**(code **)(*plVar10 + 0x18))(plVar10,1,*param_7);
            puVar1 = param_7;
          } while ((uVar11 & 1) != 0);
          plVar13 = param_2;
          param_7 = puVar1;
          if (param_2 != (long *)0x0) goto LAB_01807e28;
LAB_01807e6c:
          bVar3 = true;
          if (param_3 == (long *)0x0) goto LAB_01807eac;
          while( true ) {
            if ((int *)param_3[3] == (int *)param_3[4]) {
              iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
            }
            else {
              iVar9 = *(int *)param_3[3];
            }
            if (iVar9 == -1) goto LAB_01807eac;
            if (!bVar3) break;
            while( true ) {
              if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
                uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              else {
                uVar7 = *(undefined4 *)param_2[3];
              }
              uVar11 = (**(code **)(*plVar10 + 0x18))(plVar10,1,uVar7);
              if ((uVar11 & 1) == 0) goto joined_r0x01807f88;
              if (param_2[3] == param_2[4]) {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
              else {
                param_2[3] = param_2[3] + 4;
              }
              plVar13 = param_2;
              if (param_2 == (long *)0x0) goto LAB_01807e6c;
LAB_01807e28:
              if ((int *)plVar13[3] == (int *)plVar13[4]) {
                iVar9 = (**(code **)(*plVar13 + 0x48))(plVar13);
              }
              else {
                iVar9 = *(int *)plVar13[3];
              }
              bVar3 = iVar9 == -1;
              param_2 = (long *)0x0;
              if (!bVar3) {
                param_2 = plVar13;
              }
              if (param_3 != (long *)0x0) break;
LAB_01807eac:
              param_3 = (long *)0x0;
              if (bVar3) goto joined_r0x01807f88;
            }
          }
        }
      }
joined_r0x01807f88:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_01807f98;
    }
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar9 = *(int *)param_2[3];
    }
    bVar3 = iVar9 == -1;
    plVar13 = (long *)0x0;
    if (!bVar3) {
      plVar13 = param_2;
    }
    param_2 = plVar13;
    if (param_3 == (long *)0x0) goto LAB_01807c58;
LAB_01807c80:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar9 = *(int *)param_3[3];
    }
    plVar13 = (long *)0x0;
    if (iVar9 != -1) {
      plVar13 = param_3;
    }
    param_3 = plVar13;
    if (bVar3 != (iVar9 == -1)) goto LAB_01807cb8;
LAB_01807f90:
    *param_5 = 4;
  }
LAB_01807f98:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_01807fe0;
LAB_01807fb8:
    if (!bVar3) goto LAB_01808020;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar9 = *(int *)param_2[3];
    }
    bVar3 = iVar9 == -1;
    plVar10 = (long *)0x0;
    if (!bVar3) {
      plVar10 = param_2;
    }
    param_2 = plVar10;
    if (param_3 == (long *)0x0) goto LAB_01807fb8;
LAB_01807fe0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar9 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar9 == -1)) goto LAB_01808020;
  }
  *param_5 = *param_5 | 2;
LAB_01808020:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

