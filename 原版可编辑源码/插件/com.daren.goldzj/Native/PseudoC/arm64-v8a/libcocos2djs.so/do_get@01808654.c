
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
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  __shared_count **pp_Var10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 local_98;
  __shared_count *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 local_74;
  byte abStack_70 [24];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_5 = 0;
  local_98 = param_2;
  ios_base::getloc();
  uVar5 = locale::use_facet((locale *)&local_90,(id *)&ctype<wchar_t>::id);
  __shared_count::__release_shared(local_90);
  switch(param_7) {
  case 0x25:
    __get_percent(param_1,&local_98,param_3,param_5,uVar5);
    uVar5 = local_98;
    goto LAB_01808b2c;
  default:
    goto switchD_018086e8_caseD_26;
  case 0x41:
  case 0x61:
    lVar6 = (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10);
    lVar7 = FUN_017fd8d0(&local_98,param_3,lVar6,lVar6 + 0x150,uVar5,param_5,0);
    uVar5 = local_98;
    if (lVar7 - lVar6 < 0x150) {
      lVar6 = (lVar7 - lVar6 >> 3) * -0x5555555555555555;
      auVar2 = SEXT816(lVar6) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar6 + ((int)(auVar2._8_8_ >> 1) - (auVar2._12_4_ >> 0x1f)) * -7;
    }
    goto LAB_01808b2c;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar6 = (**(code **)(*(long *)(param_1 + 0x10) + 8))(param_1 + 0x10);
    lVar7 = FUN_017fd8d0(&local_98,param_3,lVar6,lVar6 + 0x240,uVar5,param_5,0);
    uVar5 = local_98;
    if (lVar7 - lVar6 < 0x240) {
      lVar6 = (lVar7 - lVar6 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar6 +
                   ((int)((ulong)(lVar6 / 6 + (lVar6 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar6) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    goto LAB_01808b2c;
  case 0x44:
    puVar13 = (undefined8 *)&DAT_01a64da0;
    goto LAB_018089c4;
  case 0x46:
    puVar13 = (undefined8 *)&DAT_01a64dc0;
    goto LAB_018089c4;
  case 0x48:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,2);
    uVar11 = *param_5;
    if (iVar4 < 0x18) {
LAB_01808a24:
      if ((uVar11 >> 2 & 1) == 0) {
        param_6[2] = iVar4;
        uVar5 = local_98;
        goto LAB_01808b2c;
      }
    }
    break;
  case 0x49:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,2);
    uVar11 = *param_5;
    if (iVar4 - 1U < 0xc) goto LAB_01808a24;
    break;
  case 0x4d:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,2);
    uVar11 = *param_5;
    if ((iVar4 < 0x3c) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[1] = iVar4;
      uVar5 = local_98;
      goto LAB_01808b2c;
    }
    break;
  case 0x52:
    local_80 = CONCAT44(local_80._4_4_,0x4d);
    uStack_88 = 0x250000003a;
    local_90 = (__shared_count *)0x4800000025;
    pbVar8 = (byte *)((long)&local_80 + 4);
    goto LAB_018089d8;
  case 0x53:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,2);
    uVar11 = *param_5;
    if ((iVar4 < 0x3d) && ((uVar11 >> 2 & 1) == 0)) {
      *param_6 = iVar4;
      uVar5 = local_98;
      goto LAB_01808b2c;
    }
    break;
  case 0x54:
    puVar13 = (undefined8 *)&DAT_01a64de0;
LAB_018089c4:
    uStack_88 = puVar13[1];
    local_90 = (__shared_count *)*puVar13;
    local_80 = puVar13[2];
    pbVar8 = abStack_70;
    uStack_78 = (undefined4)puVar13[3];
    local_74 = (undefined4)((ulong)puVar13[3] >> 0x20);
LAB_018089d8:
    pp_Var10 = &local_90;
LAB_018089dc:
    local_98 = get(param_1,local_98,param_3,param_4,param_5,param_6,pp_Var10,pbVar8);
    uVar5 = local_98;
    goto LAB_01808b2c;
  case 0x58:
    pcVar14 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
    goto LAB_01808940;
  case 0x59:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,4);
    uVar5 = local_98;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar4 + -0x76c;
    }
    goto LAB_01808b2c;
  case 99:
    pcVar14 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
LAB_01808940:
    pbVar8 = (byte *)(*pcVar14)();
    uVar15 = (ulong)(*pbVar8 >> 1);
    pp_Var10 = (__shared_count **)(pbVar8 + 4);
    if ((*pbVar8 & 1) != 0) {
      uVar15 = *(ulong *)(pbVar8 + 8);
      pp_Var10 = *(__shared_count ***)(pbVar8 + 0x10);
    }
    pbVar8 = (byte *)((long)pp_Var10 + uVar15 * 4);
    goto LAB_018089dc;
  case 100:
  case 0x65:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,2);
    uVar11 = *param_5;
    if ((iVar4 - 1U < 0x1f) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[3] = iVar4;
      uVar5 = local_98;
      goto LAB_01808b2c;
    }
    break;
  case 0x6a:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,3);
    uVar11 = *param_5;
    if ((iVar4 < 0x16e) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[7] = iVar4;
      uVar5 = local_98;
      goto LAB_01808b2c;
    }
    break;
  case 0x6d:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,2);
    uVar11 = *param_5;
    if ((iVar4 < 0xd) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[4] = iVar4 + -1;
      uVar5 = local_98;
      goto LAB_01808b2c;
    }
    break;
  case 0x6e:
  case 0x74:
    __get_white_space(param_1,&local_98,param_3,param_5,uVar5);
    uVar5 = local_98;
    goto LAB_01808b2c;
  case 0x70:
    pbVar8 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      uVar15 = (ulong)(*pbVar8 >> 1);
      bVar1 = pbVar8[0x18];
      if ((bVar1 & 1) == 0) goto LAB_01808b10;
LAB_01808b94:
      lVar6 = uVar15 + *(long *)(pbVar8 + 0x20);
    }
    else {
      uVar15 = *(ulong *)(pbVar8 + 8);
      bVar1 = pbVar8[0x18];
      if ((bVar1 & 1) != 0) goto LAB_01808b94;
LAB_01808b10:
      lVar6 = uVar15 + (bVar1 >> 1);
    }
    if (lVar6 != 0) {
      pbVar9 = (byte *)FUN_017fd8d0(&local_98,param_3,pbVar8,pbVar8 + 0x30,uVar5,param_5,0);
      iVar4 = param_6[2];
      uVar5 = local_98;
      if ((iVar4 == 0xc) && (pbVar9 == pbVar8)) {
        param_6[2] = 0;
      }
      else if ((iVar4 < 0xc) && ((long)pbVar9 - (long)pbVar8 == 0x18)) {
        param_6[2] = iVar4 + 0xc;
      }
      goto LAB_01808b2c;
    }
    goto switchD_018086e8_caseD_26;
  case 0x72:
    abStack_70[4] = 0x25;
    abStack_70[5] = 0;
    abStack_70[6] = 0;
    abStack_70[7] = 0;
    abStack_70[8] = 0x70;
    abStack_70[9] = 0;
    abStack_70[10] = 0;
    abStack_70[0xb] = 0;
    abStack_70[0] = 0x20;
    abStack_70[1] = 0;
    abStack_70[2] = 0;
    abStack_70[3] = 0;
    uStack_88 = 0x250000003a;
    local_90 = (__shared_count *)0x4900000025;
    uStack_78 = 0x25;
    local_74 = 0x53;
    local_80 = 0x3a0000004d;
    pbVar8 = abStack_70 + 0xc;
    goto LAB_018089d8;
  case 0x77:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,1);
    uVar11 = *param_5;
    if ((iVar4 < 7) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[6] = iVar4;
      uVar5 = local_98;
      goto LAB_01808b2c;
    }
    break;
  case 0x78:
    uVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_98,param_3,param_4,param_5,param_6)
    ;
    goto LAB_01808b2c;
  case 0x79:
    iVar4 = FUN_018093f4(&local_98,param_3,param_5,uVar5,4);
    uVar5 = local_98;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      if (iVar4 < 0x45) {
        iVar12 = iVar4 + 2000;
      }
      else {
        iVar12 = iVar4 + 0x76c;
        if (99 < iVar4) {
          iVar12 = iVar4;
        }
      }
      param_6[5] = iVar12 + -0x76c;
    }
    goto LAB_01808b2c;
  }
LAB_01808b20:
  *param_5 = uVar11 | 4;
  uVar5 = local_98;
LAB_01808b2c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
switchD_018086e8_caseD_26:
  uVar11 = *param_5;
  goto LAB_01808b20;
}

