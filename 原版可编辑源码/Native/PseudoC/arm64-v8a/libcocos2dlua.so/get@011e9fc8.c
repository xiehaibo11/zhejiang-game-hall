
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
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  __shared_count *local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
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
     (plVar13 = *(long **)(*(long *)(local_98 + 0x10) + ((long)DAT_01794320 - 1U) * 8),
     plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  __shared_count::__release_shared(local_98);
  *param_5 = 0;
  if (param_7 != param_8) {
    while (param_2 == (long *)0x0) {
      bVar3 = true;
      if (param_3 != (long *)0x0) goto LAB_011ea0f0;
LAB_011ea0c8:
      if (bVar3) goto LAB_011ea3f8;
LAB_011ea128:
      cVar4 = (**(code **)(*plVar13 + 0x68))(plVar13,*param_7,0);
      if (cVar4 == '%') {
        puVar1 = param_7 + 1;
        if (puVar1 == param_8) goto LAB_011ea3f8;
        uVar5 = (**(code **)(*plVar13 + 0x68))(plVar13,*puVar1,0);
        if (((uVar5 & 0xff) == 0x45) || ((uVar5 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_011ea3f8;
          uVar6 = (**(code **)(*plVar13 + 0x68))(plVar13,param_7[2],0);
          lVar14 = 2;
          uVar11 = uVar5;
        }
        else {
          uVar11 = 0;
          lVar14 = 1;
          uVar6 = uVar5;
        }
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,param_2,param_3,param_4,param_5,param_6,uVar6,uVar11);
        param_7 = puVar1 + lVar14;
      }
      else {
        uVar10 = (**(code **)(*plVar13 + 0x18))(plVar13,1,*param_7);
        if ((uVar10 & 1) == 0) {
          if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
            uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            uVar7 = *(undefined4 *)param_2[3];
          }
          iVar9 = (**(code **)(*plVar13 + 0x38))(plVar13,uVar7);
          iVar8 = (**(code **)(*plVar13 + 0x38))(plVar13,*param_7);
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
            uVar10 = (**(code **)(*plVar13 + 0x18))(plVar13,1,*param_7);
            puVar1 = param_7;
          } while ((uVar10 & 1) != 0);
          plVar12 = param_2;
          param_7 = puVar1;
          if (param_2 != (long *)0x0) goto LAB_011ea28c;
LAB_011ea2d0:
          bVar3 = true;
          if (param_3 == (long *)0x0) goto LAB_011ea310;
          while( true ) {
            if ((int *)param_3[3] == (int *)param_3[4]) {
              iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
            }
            else {
              iVar9 = *(int *)param_3[3];
            }
            if (iVar9 == -1) goto LAB_011ea310;
            if (!bVar3) break;
            while( true ) {
              if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
                uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              else {
                uVar7 = *(undefined4 *)param_2[3];
              }
              uVar10 = (**(code **)(*plVar13 + 0x18))(plVar13,1,uVar7);
              if ((uVar10 & 1) == 0) goto joined_r0x011ea3f0;
              if (param_2[3] == param_2[4]) {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
              else {
                param_2[3] = param_2[3] + 4;
              }
              plVar12 = param_2;
              if (param_2 == (long *)0x0) goto LAB_011ea2d0;
LAB_011ea28c:
              if ((int *)plVar12[3] == (int *)plVar12[4]) {
                iVar9 = (**(code **)(*plVar12 + 0x48))(plVar12);
              }
              else {
                iVar9 = *(int *)plVar12[3];
              }
              bVar3 = iVar9 == -1;
              param_2 = (long *)0x0;
              if (!bVar3) {
                param_2 = plVar12;
              }
              if (param_3 != (long *)0x0) break;
LAB_011ea310:
              param_3 = (long *)0x0;
              if (bVar3) goto joined_r0x011ea3f0;
            }
          }
        }
      }
joined_r0x011ea3f0:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_011ea400;
    }
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar9 = *(int *)param_2[3];
    }
    bVar3 = iVar9 == -1;
    plVar12 = (long *)0x0;
    if (!bVar3) {
      plVar12 = param_2;
    }
    param_2 = plVar12;
    if (param_3 == (long *)0x0) goto LAB_011ea0c8;
LAB_011ea0f0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar9 = *(int *)param_3[3];
    }
    plVar12 = (long *)0x0;
    if (iVar9 != -1) {
      plVar12 = param_3;
    }
    param_3 = plVar12;
    if (bVar3 != (iVar9 == -1)) goto LAB_011ea128;
LAB_011ea3f8:
    *param_5 = 4;
  }
LAB_011ea400:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_011ea44c;
LAB_011ea420:
    if (!bVar3) goto LAB_011ea490;
  }
  else {
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
    if (param_3 == (long *)0x0) goto LAB_011ea420;
LAB_011ea44c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar9 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar9 == -1)) goto LAB_011ea490;
  }
  *param_5 = *param_5 | 2;
LAB_011ea490:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

