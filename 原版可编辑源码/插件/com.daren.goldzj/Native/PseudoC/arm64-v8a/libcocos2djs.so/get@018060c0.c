
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*, char const*, char const*) const */

long * __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
get(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
   long *param_2,long *param_3,undefined8 param_4,uint *param_5,undefined8 param_6,byte *param_7,
   byte *param_8)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  __shared_count *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  plVar9 = (long *)locale::use_facet((locale *)&local_70,(id *)&ctype<char>::id);
  __shared_count::__release_shared(local_70);
  *param_5 = 0;
  if (param_7 != param_8) {
    while ((plVar12 = param_2, param_2 != (long *)0x0 && (param_2[3] == param_2[4]))) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (long *)0x0;
      if (iVar6 != -1) {
        plVar12 = param_2;
      }
      if (param_3 != (long *)0x0) goto LAB_01806154;
LAB_0180619c:
      param_3 = (long *)0x0;
      param_2 = plVar12;
      if (plVar12 == (long *)0x0) goto LAB_01806468;
LAB_018061a4:
      cVar3 = (**(code **)(*plVar9 + 0x48))(plVar9,*param_7,0);
      param_2 = plVar12;
      if (cVar3 == '%') {
        pbVar11 = param_7 + 1;
        if (pbVar11 == param_8) goto LAB_01806468;
        uVar7 = (**(code **)(*plVar9 + 0x48))(plVar9,*pbVar11,0);
        if (((uVar7 & 0xff) == 0x45) || ((uVar7 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_01806468;
          uVar8 = (**(code **)(*plVar9 + 0x48))(plVar9,param_7[2],0);
          lVar13 = 2;
          uVar10 = uVar7;
        }
        else {
          uVar10 = 0;
          lVar13 = 1;
          uVar8 = uVar7;
        }
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,plVar12,param_3,param_4,param_5,param_6,uVar8,uVar10);
        param_7 = pbVar11 + lVar13;
      }
      else {
        if ((-1 < (char)*param_7) &&
           (pbVar11 = param_7, (*(ulong *)(plVar9[2] + (ulong)*param_7 * 8) & 1) != 0)) {
          while (pbVar11 = pbVar11 + 1, pbVar2 = param_8, param_8 != pbVar11) {
            param_7 = param_7 + 1;
            pbVar2 = param_7;
            if (((char)*pbVar11 < '\0') ||
               (pbVar2 = pbVar11, (*(ulong *)(plVar9[2] + (ulong)*pbVar11 * 8) & 1) == 0)) break;
          }
joined_r0x0180636c:
          param_2 = plVar12;
          if ((plVar12 != (long *)0x0) && (plVar12[3] == plVar12[4])) {
            iVar6 = (**(code **)(*plVar12 + 0x48))(plVar12);
            param_2 = (long *)0x0;
            if (iVar6 != -1) {
              param_2 = plVar12;
            }
          }
          param_7 = pbVar2;
          if ((param_3 == (long *)0x0) ||
             ((param_3[3] == param_3[4] &&
              (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)))) {
            param_3 = (long *)0x0;
            if (param_2 == (long *)0x0) goto joined_r0x01806458;
          }
          else if (param_2 != (long *)0x0) goto joined_r0x01806458;
          if ((byte *)param_2[3] == (byte *)param_2[4]) {
            bVar5 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            bVar5 = *(byte *)param_2[3];
          }
          if (((char)bVar5 < '\0') || ((*(ulong *)(plVar9[2] + (ulong)bVar5 * 8) & 1) == 0))
          goto joined_r0x01806458;
          plVar12 = param_2;
          if (param_2[3] == param_2[4]) {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          else {
            param_2[3] = param_2[3] + 1;
          }
          goto joined_r0x0180636c;
        }
        if ((byte *)plVar12[3] == (byte *)plVar12[4]) {
          uVar7 = (**(code **)(*plVar12 + 0x48))(plVar12);
        }
        else {
          uVar7 = (uint)*(byte *)plVar12[3];
        }
        cVar3 = (**(code **)(*plVar9 + 0x18))(plVar9,uVar7);
        cVar4 = (**(code **)(*plVar9 + 0x18))(plVar9,*param_7);
        if (cVar3 == cVar4) {
          if (plVar12[3] == plVar12[4]) {
            (**(code **)(*plVar12 + 0x50))(plVar12);
          }
          else {
            plVar12[3] = plVar12[3] + 1;
          }
          param_7 = param_7 + 1;
        }
        else {
          *param_5 = 4;
        }
      }
joined_r0x01806458:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_01806470;
    }
    if (param_3 == (long *)0x0) goto LAB_0180619c;
LAB_01806154:
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_0180619c;
    param_2 = plVar12;
    if (plVar12 == (long *)0x0) goto LAB_018061a4;
LAB_01806468:
    *param_5 = 4;
  }
LAB_01806470:
  plVar9 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 != (long *)0x0) goto LAB_01806484;
LAB_0180650c:
    if (plVar9 != (long *)0x0) goto LAB_018064b8;
  }
  else {
    iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar9 = (long *)0x0;
    if (iVar6 != -1) {
      plVar9 = param_2;
    }
    if (param_3 == (long *)0x0) goto LAB_0180650c;
LAB_01806484:
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_0180650c;
    if (plVar9 == (long *)0x0) goto LAB_018064b8;
  }
  *param_5 = *param_5 | 2;
LAB_018064b8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

