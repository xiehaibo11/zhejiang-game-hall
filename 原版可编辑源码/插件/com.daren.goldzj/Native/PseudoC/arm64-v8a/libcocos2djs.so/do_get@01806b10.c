
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*, char, char) const */

void std::__ndk1::
     time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
               int *param_6,undefined1 param_7)

{
  byte bVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 local_70;
  undefined8 local_68;
  byte local_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_5 = 0;
  local_70 = param_2;
  ios_base::getloc();
  uVar5 = locale::use_facet((locale *)&local_68,(id *)&ctype<char>::id);
  __shared_count::__release_shared(local_68);
  switch(param_7) {
  case 0x25:
    __get_percent(param_1,&local_70,param_3,param_5,uVar5);
    uVar5 = local_70;
    goto LAB_01806ffc;
  default:
    goto switchD_01806ba4_caseD_26;
  case 0x41:
  case 0x61:
    lVar6 = (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10);
    lVar7 = FUN_017f9fb8(&local_70,param_3,lVar6,lVar6 + 0x150,uVar5,param_5,0);
    uVar5 = local_70;
    if (lVar7 - lVar6 < 0x150) {
      lVar6 = (lVar7 - lVar6 >> 3) * -0x5555555555555555;
      auVar2 = SEXT816(lVar6) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar6 + ((int)(auVar2._8_8_ >> 1) - (auVar2._12_4_ >> 0x1f)) * -7;
    }
    goto LAB_01806ffc;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar6 = (**(code **)(*(long *)(param_1 + 0x10) + 8))(param_1 + 0x10);
    lVar7 = FUN_017f9fb8(&local_70,param_3,lVar6,lVar6 + 0x240,uVar5,param_5,0);
    uVar5 = local_70;
    if (lVar7 - lVar6 < 0x240) {
      lVar6 = (lVar7 - lVar6 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar6 +
                   ((int)((ulong)(lVar6 / 6 + (lVar6 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar6) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    goto LAB_01806ffc;
  case 0x44:
    local_68 = (__shared_count *)0x79252f64252f6d25;
    goto LAB_01806e98;
  case 0x46:
    local_68 = (__shared_count *)0x64252d6d252d5925;
    goto LAB_01806e98;
  case 0x48:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,2);
    uVar10 = *param_5;
    if (iVar4 < 0x18) {
LAB_01806ef4:
      if ((uVar10 >> 2 & 1) == 0) {
        param_6[2] = iVar4;
        uVar5 = local_70;
        goto LAB_01806ffc;
      }
    }
    break;
  case 0x49:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,2);
    uVar10 = *param_5;
    if (iVar4 - 1U < 0xc) goto LAB_01806ef4;
    break;
  case 0x4d:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,2);
    uVar10 = *param_5;
    if ((iVar4 < 0x3c) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[1] = iVar4;
      uVar5 = local_70;
      goto LAB_01806ffc;
    }
    break;
  case 0x52:
    local_68 = (__shared_count *)CONCAT35(local_68._5_3_,0x4d00000000);
    local_68 = (__shared_count *)CONCAT44(local_68._4_4_,0x253a4825);
    pbVar8 = (byte *)((long)&local_68 + 5);
    goto LAB_01806ea8;
  case 0x53:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,2);
    uVar10 = *param_5;
    if ((iVar4 < 0x3d) && ((uVar10 >> 2 & 1) == 0)) {
      *param_6 = iVar4;
      uVar5 = local_70;
      goto LAB_01806ffc;
    }
    break;
  case 0x54:
    local_68 = (__shared_count *)0x53253a4d253a4825;
LAB_01806e98:
    pbVar8 = local_60;
LAB_01806ea8:
    pbVar9 = (byte *)&local_68;
LAB_01806eac:
    local_70 = get(param_1,local_70,param_3,param_4,param_5,param_6,pbVar9,pbVar8);
    uVar5 = local_70;
    goto LAB_01806ffc;
  case 0x58:
    pcVar12 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
    goto LAB_01806e10;
  case 0x59:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,4);
    uVar5 = local_70;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar4 + -0x76c;
    }
    goto LAB_01806ffc;
  case 99:
    pcVar12 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
LAB_01806e10:
    pbVar8 = (byte *)(*pcVar12)();
    uVar13 = *(ulong *)(pbVar8 + 8);
    pbVar9 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar9 = pbVar8 + 1;
      uVar13 = (ulong)(*pbVar8 >> 1);
    }
    pbVar8 = pbVar9 + uVar13;
    goto LAB_01806eac;
  case 100:
  case 0x65:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,2);
    uVar10 = *param_5;
    if ((iVar4 - 1U < 0x1f) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[3] = iVar4;
      uVar5 = local_70;
      goto LAB_01806ffc;
    }
    break;
  case 0x6a:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,3);
    uVar10 = *param_5;
    if ((iVar4 < 0x16e) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[7] = iVar4;
      uVar5 = local_70;
      goto LAB_01806ffc;
    }
    break;
  case 0x6d:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,2);
    uVar10 = *param_5;
    if ((iVar4 < 0xd) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[4] = iVar4 + -1;
      uVar5 = local_70;
      goto LAB_01806ffc;
    }
    break;
  case 0x6e:
  case 0x74:
    __get_white_space(param_1,&local_70,param_3,param_5,uVar5);
    uVar5 = local_70;
    goto LAB_01806ffc;
  case 0x70:
    pbVar8 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      uVar13 = (ulong)(*pbVar8 >> 1);
      bVar1 = pbVar8[0x18];
      if ((bVar1 & 1) == 0) goto LAB_01806fe0;
LAB_01807064:
      lVar6 = uVar13 + *(long *)(pbVar8 + 0x20);
    }
    else {
      uVar13 = *(ulong *)(pbVar8 + 8);
      bVar1 = pbVar8[0x18];
      if ((bVar1 & 1) != 0) goto LAB_01807064;
LAB_01806fe0:
      lVar6 = uVar13 + (bVar1 >> 1);
    }
    if (lVar6 != 0) {
      pbVar9 = (byte *)FUN_017f9fb8(&local_70,param_3,pbVar8,pbVar8 + 0x30,uVar5,param_5,0);
      iVar4 = param_6[2];
      uVar5 = local_70;
      if ((iVar4 == 0xc) && (pbVar9 == pbVar8)) {
        param_6[2] = 0;
      }
      else if ((iVar4 < 0xc) && ((long)pbVar9 - (long)pbVar8 == 0x18)) {
        param_6[2] = iVar4 + 0xc;
      }
      goto LAB_01806ffc;
    }
    goto switchD_01806ba4_caseD_26;
  case 0x72:
    local_60[2] = 0x70;
    local_60[0] = 0x20;
    local_60[1] = 0x25;
    local_68 = (__shared_count *)0x53253a4d253a4925;
    pbVar8 = local_60 + 3;
    goto LAB_01806ea8;
  case 0x77:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,1);
    uVar10 = *param_5;
    if ((iVar4 < 7) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[6] = iVar4;
      uVar5 = local_70;
      goto LAB_01806ffc;
    }
    break;
  case 0x78:
    uVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_70,param_3,param_4,param_5,param_6)
    ;
    goto LAB_01806ffc;
  case 0x79:
    iVar4 = FUN_0180786c(&local_70,param_3,param_5,uVar5,4);
    uVar5 = local_70;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      if (iVar4 < 0x45) {
        iVar11 = iVar4 + 2000;
      }
      else {
        iVar11 = iVar4 + 0x76c;
        if (99 < iVar4) {
          iVar11 = iVar4;
        }
      }
      param_6[5] = iVar11 + -0x76c;
    }
    goto LAB_01806ffc;
  }
LAB_01806ff0:
  *param_5 = uVar10 | 4;
  uVar5 = local_70;
LAB_01806ffc:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
switchD_01806ba4_caseD_26:
  uVar10 = *param_5;
  goto LAB_01806ff0;
}

