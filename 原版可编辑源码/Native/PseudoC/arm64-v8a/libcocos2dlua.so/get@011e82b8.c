
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
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  __shared_count *local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  local_90 = &ctype<char>::id;
  uStack_80 = 0;
  local_88 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)&ctype<char>::id,&local_78,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)DAT_01794330 - 1U) ||
     (plVar12 = *(long **)(*(long *)(local_98 + 0x10) + ((long)DAT_01794330 - 1U) * 8),
     plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  __shared_count::__release_shared(local_98);
  *param_5 = 0;
  if (param_7 != param_8) {
    while ((plVar11 = param_2, param_2 != (long *)0x0 && (param_2[3] == param_2[4]))) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar11 = (long *)0x0;
      if (iVar8 != -1) {
        plVar11 = param_2;
      }
      if (param_3 != (long *)0x0) goto LAB_011e83c8;
LAB_011e8410:
      param_3 = (long *)0x0;
      param_2 = plVar11;
      if (plVar11 == (long *)0x0) goto LAB_011e86c0;
LAB_011e8418:
      cVar3 = (**(code **)(*plVar12 + 0x48))(plVar12,*param_7,0);
      param_2 = plVar11;
      if (cVar3 == '%') {
        pbVar10 = param_7 + 1;
        if (pbVar10 == param_8) goto LAB_011e86c0;
        uVar6 = (**(code **)(*plVar12 + 0x48))(plVar12,*pbVar10,0);
        if (((uVar6 & 0xff) == 0x45) || ((uVar6 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_011e86c0;
          uVar7 = (**(code **)(*plVar12 + 0x48))(plVar12,param_7[2],0);
          lVar13 = 2;
          uVar9 = uVar6;
        }
        else {
          uVar9 = 0;
          lVar13 = 1;
          uVar7 = uVar6;
        }
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,plVar11,param_3,param_4,param_5,param_6,uVar7,uVar9);
        param_7 = pbVar10 + lVar13;
      }
      else {
        if ((-1 < (char)*param_7) &&
           (pbVar10 = param_7, (*(ulong *)(plVar12[2] + (ulong)*param_7 * 8) & 1) != 0)) {
          while (pbVar10 = pbVar10 + 1, pbVar2 = param_8, param_8 != pbVar10) {
            param_7 = param_7 + 1;
            pbVar2 = param_7;
            if (((char)*pbVar10 < '\0') ||
               (pbVar2 = pbVar10, (*(ulong *)(plVar12[2] + (ulong)*pbVar10 * 8) & 1) == 0)) break;
          }
joined_r0x011e85cc:
          param_2 = plVar11;
          if ((plVar11 != (long *)0x0) && (plVar11[3] == plVar11[4])) {
            iVar8 = (**(code **)(*plVar11 + 0x48))(plVar11);
            param_2 = (long *)0x0;
            if (iVar8 != -1) {
              param_2 = plVar11;
            }
          }
          param_7 = pbVar2;
          if ((param_3 == (long *)0x0) ||
             ((param_3[3] == param_3[4] &&
              (iVar8 = (**(code **)(*param_3 + 0x48))(param_3), iVar8 == -1)))) {
            param_3 = (long *)0x0;
            if (param_2 == (long *)0x0) goto joined_r0x011e86b8;
          }
          else if (param_2 != (long *)0x0) goto joined_r0x011e86b8;
          if ((byte *)param_2[3] == (byte *)param_2[4]) {
            bVar5 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            bVar5 = *(byte *)param_2[3];
          }
          if (((char)bVar5 < '\0') || ((*(ulong *)(plVar12[2] + (ulong)bVar5 * 8) & 1) == 0))
          goto joined_r0x011e86b8;
          plVar11 = param_2;
          if (param_2[3] == param_2[4]) {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          else {
            param_2[3] = param_2[3] + 1;
          }
          goto joined_r0x011e85cc;
        }
        if ((byte *)plVar11[3] == (byte *)plVar11[4]) {
          uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
        }
        else {
          uVar6 = (uint)*(byte *)plVar11[3];
        }
        cVar3 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar6);
        cVar4 = (**(code **)(*plVar12 + 0x18))(plVar12,*param_7);
        if (cVar3 == cVar4) {
          if (plVar11[3] == plVar11[4]) {
            (**(code **)(*plVar11 + 0x50))(plVar11);
          }
          else {
            plVar11[3] = plVar11[3] + 1;
          }
          param_7 = param_7 + 1;
        }
        else {
          *param_5 = 4;
        }
      }
joined_r0x011e86b8:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_011e86c8;
    }
    if (param_3 == (long *)0x0) goto LAB_011e8410;
LAB_011e83c8:
    if ((param_3[3] == param_3[4]) && (iVar8 = (**(code **)(*param_3 + 0x48))(param_3), iVar8 == -1)
       ) goto LAB_011e8410;
    param_2 = plVar11;
    if (plVar11 == (long *)0x0) goto LAB_011e8418;
LAB_011e86c0:
    *param_5 = 4;
  }
LAB_011e86c8:
  plVar12 = param_2;
  if (param_2 == (long *)0x0) {
joined_r0x011e86e8:
    param_2 = plVar12;
    if (param_3 == (long *)0x0) goto LAB_011e8774;
LAB_011e870c:
    if ((param_3[3] == param_3[4]) && (iVar8 = (**(code **)(*param_3 + 0x48))(param_3), iVar8 == -1)
       ) goto LAB_011e8774;
    if (param_2 == (long *)0x0) goto LAB_011e8740;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (long *)0x0;
      if (iVar8 != -1) {
        plVar12 = param_2;
      }
      goto joined_r0x011e86e8;
    }
    if (param_3 != (long *)0x0) goto LAB_011e870c;
LAB_011e8774:
    if (param_2 != (long *)0x0) goto LAB_011e8740;
  }
  *param_5 = *param_5 | 2;
LAB_011e8740:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

