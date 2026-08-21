
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, char, char)
   const */

void std::__ndk1::
     time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
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
  undefined8 **ppuVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  __shared_count *local_c0;
  undefined8 local_b8;
  undefined8 ***local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  byte abStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_5 = 0;
  local_b8 = param_2;
  ios_base::getloc();
  local_a0 = &ctype<wchar_t>::id;
  uStack_90 = 0;
  pcStack_98 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_a8 = &local_a0;
    local_b0 = &local_a8;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_b0,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_c0 + 0x18) - *(long *)(local_c0 + 0x10) >> 3) <=
       (long)DAT_01794320 - 1U) ||
     (lVar15 = *(long *)(*(long *)(local_c0 + 0x10) + ((long)DAT_01794320 - 1U) * 8), lVar15 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  __shared_count::__release_shared(local_c0);
  switch(param_7) {
  case 0x25:
    __get_percent(param_1,&local_b8,param_3,param_5,lVar15);
    uVar6 = local_b8;
    goto LAB_011eb13c;
  default:
    goto switchD_011eacf8_caseD_26;
  case 0x41:
  case 0x61:
    lVar5 = (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10);
    lVar15 = FUN_011dfbf8(&local_b8,param_3,lVar5,lVar5 + 0x150,lVar15,param_5,0);
    uVar6 = local_b8;
    if (lVar15 - lVar5 < 0x150) {
      lVar15 = (lVar15 - lVar5 >> 3) * -0x5555555555555555;
      auVar2 = SEXT816(lVar15) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar15 + ((int)(auVar2._8_8_ >> 1) - (auVar2._12_4_ >> 0x1f)) * -7;
    }
    goto LAB_011eb13c;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar5 = (**(code **)(*(long *)(param_1 + 0x10) + 8))(param_1 + 0x10);
    lVar15 = FUN_011dfbf8(&local_b8,param_3,lVar5,lVar5 + 0x240,lVar15,param_5,0);
    uVar6 = local_b8;
    if (lVar15 - lVar5 < 0x240) {
      lVar15 = (lVar15 - lVar5 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar15 +
                   ((int)((ulong)(lVar15 / 6 + (lVar15 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar15) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    goto LAB_011eb13c;
  case 0x44:
    puVar12 = (undefined8 *)&DAT_014a2530;
    goto LAB_011eafd4;
  case 0x46:
    puVar12 = (undefined8 *)&DAT_014a2550;
    goto LAB_011eafd4;
  case 0x48:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,2);
    uVar10 = *param_5;
    if (iVar4 < 0x18) {
LAB_011eb034:
      if ((uVar10 >> 2 & 1) == 0) {
        param_6[2] = iVar4;
        uVar6 = local_b8;
        goto LAB_011eb13c;
      }
    }
    break;
  case 0x49:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,2);
    uVar10 = *param_5;
    if (iVar4 - 1U < 0xc) goto LAB_011eb034;
    break;
  case 0x4d:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,2);
    uVar10 = *param_5;
    if ((iVar4 < 0x3c) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[1] = iVar4;
      uVar6 = local_b8;
      goto LAB_011eb13c;
    }
    break;
  case 0x52:
    pcStack_98 = (code *)0x250000003a;
    local_a0 = (undefined8 *)0x4800000025;
    uStack_90 = CONCAT44(uStack_90._4_4_,0x4d);
    pbVar7 = (byte *)((long)&uStack_90 + 4);
    goto LAB_011eafe8;
  case 0x53:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,2);
    uVar10 = *param_5;
    if ((iVar4 < 0x3d) && ((uVar10 >> 2 & 1) == 0)) {
      *param_6 = iVar4;
      uVar6 = local_b8;
      goto LAB_011eb13c;
    }
    break;
  case 0x54:
    puVar12 = (undefined8 *)&DAT_014a2570;
LAB_011eafd4:
    pcStack_98 = (code *)puVar12[1];
    local_a0 = (undefined8 *)*puVar12;
    uStack_90 = puVar12[2];
    pbVar7 = abStack_80;
    uStack_88 = (undefined4)puVar12[3];
    local_84 = (undefined4)((ulong)puVar12[3] >> 0x20);
LAB_011eafe8:
    ppuVar9 = &local_a0;
LAB_011eafec:
    local_b8 = get(param_1,local_b8,param_3,param_4,param_5,param_6,ppuVar9,pbVar7);
    uVar6 = local_b8;
    goto LAB_011eb13c;
  case 0x58:
    pcVar13 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
    goto LAB_011eaf50;
  case 0x59:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,4);
    uVar6 = local_b8;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar4 + -0x76c;
    }
    goto LAB_011eb13c;
  case 99:
    pcVar13 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
LAB_011eaf50:
    pbVar7 = (byte *)(*pcVar13)();
    uVar14 = (ulong)(*pbVar7 >> 1);
    ppuVar9 = (undefined8 **)(pbVar7 + 4);
    if ((*pbVar7 & 1) != 0) {
      uVar14 = *(ulong *)(pbVar7 + 8);
      ppuVar9 = *(undefined8 ***)(pbVar7 + 0x10);
    }
    pbVar7 = (byte *)((long)ppuVar9 + uVar14 * 4);
    goto LAB_011eafec;
  case 100:
  case 0x65:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,2);
    uVar10 = *param_5;
    if ((iVar4 - 1U < 0x1f) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[3] = iVar4;
      uVar6 = local_b8;
      goto LAB_011eb13c;
    }
    break;
  case 0x6a:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,3);
    uVar10 = *param_5;
    if ((iVar4 < 0x16e) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[7] = iVar4;
      uVar6 = local_b8;
      goto LAB_011eb13c;
    }
    break;
  case 0x6d:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,2);
    uVar10 = *param_5;
    if ((iVar4 < 0xd) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[4] = iVar4 + -1;
      uVar6 = local_b8;
      goto LAB_011eb13c;
    }
    break;
  case 0x6e:
  case 0x74:
    __get_white_space(param_1,&local_b8,param_3,param_5,lVar15);
    uVar6 = local_b8;
    goto LAB_011eb13c;
  case 0x70:
    pbVar7 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      uVar14 = (ulong)(*pbVar7 >> 1);
      bVar1 = pbVar7[0x18];
      if ((bVar1 & 1) == 0) goto LAB_011eb120;
LAB_011eb1a8:
      lVar5 = uVar14 + *(long *)(pbVar7 + 0x20);
    }
    else {
      uVar14 = *(ulong *)(pbVar7 + 8);
      bVar1 = pbVar7[0x18];
      if ((bVar1 & 1) != 0) goto LAB_011eb1a8;
LAB_011eb120:
      lVar5 = uVar14 + (bVar1 >> 1);
    }
    if (lVar5 != 0) {
      pbVar8 = (byte *)FUN_011dfbf8(&local_b8,param_3,pbVar7,pbVar7 + 0x30,lVar15,param_5,0);
      iVar4 = param_6[2];
      uVar6 = local_b8;
      if ((iVar4 == 0xc) && (pbVar8 == pbVar7)) {
        param_6[2] = 0;
      }
      else if ((iVar4 < 0xc) && ((long)pbVar8 - (long)pbVar7 == 0x18)) {
        param_6[2] = iVar4 + 0xc;
      }
      goto LAB_011eb13c;
    }
    goto switchD_011eacf8_caseD_26;
  case 0x72:
    pcStack_98 = (code *)0x250000003a;
    local_a0 = (undefined8 *)0x4900000025;
    uStack_88 = 0x25;
    uStack_90 = 0x3a0000004d;
    abStack_80[4] = 0x25;
    abStack_80[5] = 0;
    abStack_80[6] = 0;
    abStack_80[7] = 0;
    abStack_80[8] = 0x70;
    abStack_80[9] = 0;
    abStack_80[10] = 0;
    abStack_80[0xb] = 0;
    local_84 = 0x53;
    abStack_80[0] = 0x20;
    abStack_80[1] = 0;
    abStack_80[2] = 0;
    abStack_80[3] = 0;
    pbVar7 = abStack_80 + 0xc;
    goto LAB_011eafe8;
  case 0x77:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,1);
    uVar10 = *param_5;
    if ((iVar4 < 7) && ((uVar10 >> 2 & 1) == 0)) {
      param_6[6] = iVar4;
      uVar6 = local_b8;
      goto LAB_011eb13c;
    }
    break;
  case 0x78:
    uVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_b8,param_3,param_4,param_5,param_6)
    ;
    goto LAB_011eb13c;
  case 0x79:
    iVar4 = FUN_011eba0c(&local_b8,param_3,param_5,lVar15,4);
    uVar6 = local_b8;
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
    goto LAB_011eb13c;
  }
LAB_011eb130:
  *param_5 = uVar10 | 4;
  uVar6 = local_b8;
LAB_011eb13c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
switchD_011eacf8_caseD_26:
  uVar10 = *param_5;
  goto LAB_011eb130;
}

