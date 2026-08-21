
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
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  __shared_count *local_a0;
  undefined8 local_98;
  undefined4 **local_90;
  undefined4 *local_88;
  undefined4 local_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  byte abStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_5 = 0;
  local_98 = param_2;
  ios_base::getloc();
  local_80 = 0x1794328;
  uStack_7c = 0;
  uStack_7b = 0;
  abStack_78[8] = 0;
  abStack_78[9] = 0;
  abStack_78[10] = 0;
  abStack_78[0xb] = 0;
  abStack_78[0xc] = 0;
  abStack_78[0xd] = 0;
  abStack_78[0xe] = 0;
  abStack_78[0xf] = 0;
  uStack_79 = 0;
  abStack_78[0] = 0x8c;
  abStack_78[1] = 0x97;
  abStack_78[2] = 0x1f;
  abStack_78[3] = 1;
  abStack_78[4] = 0;
  abStack_78[5] = 0;
  abStack_78[6] = 0;
  abStack_78[7] = 0;
  if (ctype<char>::id != -1) {
    local_88 = &local_80;
    local_90 = &local_88;
    __call_once((ulong *)&ctype<char>::id,&local_90,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_a0 + 0x18) - *(long *)(local_a0 + 0x10) >> 3) <=
       (long)DAT_01794330 - 1U) ||
     (lVar13 = *(long *)(*(long *)(local_a0 + 0x10) + ((long)DAT_01794330 - 1U) * 8), lVar13 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  __shared_count::__release_shared(local_a0);
  switch(param_7) {
  case 0x25:
    __get_percent(param_1,&local_98,param_3,param_5,lVar13);
    uVar6 = local_98;
    goto LAB_011e9404;
  default:
    goto switchD_011e8fb0_caseD_26;
  case 0x41:
  case 0x61:
    lVar5 = (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10);
    lVar13 = FUN_011dcaa8(&local_98,param_3,lVar5,lVar5 + 0x150,lVar13,param_5,0);
    uVar6 = local_98;
    if (lVar13 - lVar5 < 0x150) {
      lVar13 = (lVar13 - lVar5 >> 3) * -0x5555555555555555;
      auVar2 = SEXT816(lVar13) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar13 + ((int)(auVar2._8_8_ >> 1) - (auVar2._12_4_ >> 0x1f)) * -7;
    }
    goto LAB_011e9404;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar5 = (**(code **)(*(long *)(param_1 + 0x10) + 8))(param_1 + 0x10);
    lVar13 = FUN_011dcaa8(&local_98,param_3,lVar5,lVar5 + 0x240,lVar13,param_5,0);
    uVar6 = local_98;
    if (lVar13 - lVar5 < 0x240) {
      lVar13 = (lVar13 - lVar5 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar13 +
                   ((int)((ulong)(lVar13 / 6 + (lVar13 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar13) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    goto LAB_011e9404;
  case 0x44:
    uVar6 = 0x79252f64252f6d25;
    goto LAB_011e92a0;
  case 0x46:
    uVar6 = 0x64252d6d252d5925;
    goto LAB_011e92a0;
  case 0x48:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,2);
    uVar9 = *param_5;
    if (iVar4 < 0x18) {
LAB_011e92fc:
      if ((uVar9 >> 2 & 1) == 0) {
        param_6[2] = iVar4;
        uVar6 = local_98;
        goto LAB_011e9404;
      }
    }
    break;
  case 0x49:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,2);
    uVar9 = *param_5;
    if (iVar4 - 1U < 0xc) goto LAB_011e92fc;
    break;
  case 0x4d:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,2);
    uVar9 = *param_5;
    if ((iVar4 < 0x3c) && ((uVar9 >> 2 & 1) == 0)) {
      param_6[1] = iVar4;
      uVar6 = local_98;
      goto LAB_011e9404;
    }
    break;
  case 0x52:
    uStack_7c = 0x4d;
    local_80 = 0x253a4825;
    pbVar7 = (byte *)&uStack_7b;
    goto LAB_011e92b0;
  case 0x53:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,2);
    uVar9 = *param_5;
    if ((iVar4 < 0x3d) && ((uVar9 >> 2 & 1) == 0)) {
      *param_6 = iVar4;
      uVar6 = local_98;
      goto LAB_011e9404;
    }
    break;
  case 0x54:
    uVar6 = 0x53253a4d253a4825;
LAB_011e92a0:
    local_80 = (undefined4)uVar6;
    uStack_7c = (undefined1)((ulong)uVar6 >> 0x20);
    uStack_7b = (undefined2)((ulong)uVar6 >> 0x28);
    uStack_79 = (undefined1)((ulong)uVar6 >> 0x38);
    pbVar7 = abStack_78;
LAB_011e92b0:
    pbVar8 = (byte *)&local_80;
LAB_011e92b4:
    local_98 = get(param_1,local_98,param_3,param_4,param_5,param_6,pbVar8,pbVar7);
    uVar6 = local_98;
    goto LAB_011e9404;
  case 0x58:
    pcVar11 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
    goto LAB_011e9218;
  case 0x59:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,4);
    uVar6 = local_98;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar4 + -0x76c;
    }
    goto LAB_011e9404;
  case 99:
    pcVar11 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
LAB_011e9218:
    pbVar7 = (byte *)(*pcVar11)();
    uVar12 = *(ulong *)(pbVar7 + 8);
    pbVar8 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar8 = pbVar7 + 1;
      uVar12 = (ulong)(*pbVar7 >> 1);
    }
    pbVar7 = pbVar8 + uVar12;
    goto LAB_011e92b4;
  case 100:
  case 0x65:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,2);
    uVar9 = *param_5;
    if ((iVar4 - 1U < 0x1f) && ((uVar9 >> 2 & 1) == 0)) {
      param_6[3] = iVar4;
      uVar6 = local_98;
      goto LAB_011e9404;
    }
    break;
  case 0x6a:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,3);
    uVar9 = *param_5;
    if ((iVar4 < 0x16e) && ((uVar9 >> 2 & 1) == 0)) {
      param_6[7] = iVar4;
      uVar6 = local_98;
      goto LAB_011e9404;
    }
    break;
  case 0x6d:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,2);
    uVar9 = *param_5;
    if ((iVar4 < 0xd) && ((uVar9 >> 2 & 1) == 0)) {
      param_6[4] = iVar4 + -1;
      uVar6 = local_98;
      goto LAB_011e9404;
    }
    break;
  case 0x6e:
  case 0x74:
    __get_white_space(param_1,&local_98,param_3,param_5,lVar13);
    uVar6 = local_98;
    goto LAB_011e9404;
  case 0x70:
    pbVar7 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      uVar12 = (ulong)(*pbVar7 >> 1);
      bVar1 = pbVar7[0x18];
      if ((bVar1 & 1) == 0) goto LAB_011e93e8;
LAB_011e9470:
      lVar5 = uVar12 + *(long *)(pbVar7 + 0x20);
    }
    else {
      uVar12 = *(ulong *)(pbVar7 + 8);
      bVar1 = pbVar7[0x18];
      if ((bVar1 & 1) != 0) goto LAB_011e9470;
LAB_011e93e8:
      lVar5 = uVar12 + (bVar1 >> 1);
    }
    if (lVar5 != 0) {
      pbVar8 = (byte *)FUN_011dcaa8(&local_98,param_3,pbVar7,pbVar7 + 0x30,lVar13,param_5,0);
      iVar4 = param_6[2];
      uVar6 = local_98;
      if ((iVar4 == 0xc) && (pbVar8 == pbVar7)) {
        param_6[2] = 0;
      }
      else if ((iVar4 < 0xc) && ((long)pbVar8 - (long)pbVar7 == 0x18)) {
        param_6[2] = iVar4 + 0xc;
      }
      goto LAB_011e9404;
    }
    goto switchD_011e8fb0_caseD_26;
  case 0x72:
    local_80 = 0x253a4925;
    uStack_7c = 0x4d;
    uStack_7b = 0x253a;
    abStack_78[0] = 0x20;
    abStack_78[1] = 0x25;
    abStack_78[2] = 0x70;
    uStack_79 = 0x53;
    pbVar7 = abStack_78 + 3;
    goto LAB_011e92b0;
  case 0x77:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,1);
    uVar9 = *param_5;
    if ((iVar4 < 7) && ((uVar9 >> 2 & 1) == 0)) {
      param_6[6] = iVar4;
      uVar6 = local_98;
      goto LAB_011e9404;
    }
    break;
  case 0x78:
    uVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_98,param_3,param_4,param_5,param_6)
    ;
    goto LAB_011e9404;
  case 0x79:
    iVar4 = FUN_011e9c7c(&local_98,param_3,param_5,lVar13,4);
    uVar6 = local_98;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      if (iVar4 < 0x45) {
        iVar10 = iVar4 + 2000;
      }
      else {
        iVar10 = iVar4 + 0x76c;
        if (99 < iVar4) {
          iVar10 = iVar4;
        }
      }
      param_6[5] = iVar10 + -0x76c;
    }
    goto LAB_011e9404;
  }
LAB_011e93f8:
  *param_5 = uVar9 | 4;
  uVar6 = local_98;
LAB_011e9404:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
switchD_011e8fb0_caseD_26:
  uVar9 = *param_5;
  goto LAB_011e93f8;
}

