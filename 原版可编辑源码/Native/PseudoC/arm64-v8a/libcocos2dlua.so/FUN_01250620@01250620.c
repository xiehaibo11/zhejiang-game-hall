
void FUN_01250620(ulong *param_1,uint param_2,uint param_3,_Unwind_Exception *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  _Unwind_Exception *p_Var20;
  _Unwind_Exception *p_Var21;
  _Unwind_Exception *local_a8;
  byte *local_80;
  byte *local_78;
  _Unwind_Exception *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) goto LAB_01250680;
    if ((~param_2 & 0xc) != 0) goto LAB_012506cc;
    uVar14 = 2;
  }
  else if ((param_2 & 0xe) == 0) {
LAB_012506cc:
    pbVar7 = (byte *)_Unwind_GetLanguageSpecificData(param_5);
    local_78 = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      param_1[2] = (ulong)pbVar7;
      lVar8 = _Unwind_GetIP(param_5);
      uVar9 = _Unwind_GetRegionStart(param_5);
      local_78 = pbVar7 + 1;
      uVar10 = FUN_01250fe4(&local_78,*pbVar7);
      uVar1 = uVar9;
      if (uVar10 != 0) {
        uVar1 = uVar10;
      }
      pbVar7 = local_78 + 1;
      uVar10 = (ulong)*local_78;
      if (uVar10 == 0xff) {
        p_Var21 = (_Unwind_Exception *)0x0;
      }
      else {
        uVar17 = 0;
        uVar16 = 0;
        pbVar19 = pbVar7;
        do {
          pbVar7 = pbVar19 + 1;
          bVar3 = *pbVar19;
          uVar16 = ((ulong)bVar3 & 0x7f) << (uVar17 & 0x3f) | uVar16;
          uVar17 = uVar17 + 7;
          pbVar19 = pbVar7;
        } while ((char)bVar3 < '\0');
        p_Var21 = (_Unwind_Exception *)(pbVar7 + uVar16);
      }
      bVar3 = *pbVar7;
      uVar17 = 0;
      uVar16 = 0;
      uVar9 = lVar8 + ~uVar9;
      pbVar7 = pbVar7 + 1;
      do {
        pbVar19 = pbVar7 + 1;
        bVar4 = *pbVar7;
        uVar16 = ((ulong)bVar4 & 0x7f) << (uVar17 & 0x3f) | uVar16;
        uVar17 = uVar17 + 7;
        pbVar7 = pbVar19;
      } while ((char)bVar4 < '\0');
      local_80 = pbVar19;
      local_78 = pbVar19;
      do {
        if (pbVar19 + (uVar16 & 0xffffffff) <= local_80) break;
        uVar11 = FUN_01250fe4(&local_80,bVar3);
        lVar8 = FUN_01250fe4(&local_80,bVar3);
        lVar12 = FUN_01250fe4(&local_80,bVar3);
        uVar17 = 0;
        uVar15 = 0;
        pbVar7 = local_80;
        do {
          local_80 = pbVar7 + 1;
          bVar4 = *pbVar7;
          uVar15 = ((ulong)bVar4 & 0x7f) << (uVar17 & 0x3f) | uVar15;
          uVar17 = uVar17 + 7;
          pbVar7 = local_80;
        } while ((char)bVar4 < '\0');
        if ((uVar11 <= uVar9) && (uVar9 < lVar8 + uVar11)) {
          if (lVar12 == 0) goto LAB_01250af4;
          uVar1 = lVar12 + uVar1;
          if (uVar15 != 0) {
            local_a8 = param_4 + 0x20;
            uVar9 = uVar10 & 0xf;
            bVar6 = (param_2 & 5) != 0;
            pbVar19 = pbVar19 + uVar15 + (uVar16 & 0xffffffff) + -1;
            uVar2 = 0x1c1dU >> uVar9 & 1;
            goto LAB_01250898;
          }
          if ((param_2 & 6) != 2) goto LAB_01250b28;
          *param_1 = 0;
          param_1[3] = uVar1;
          uVar14 = 6;
          goto LAB_01250684;
        }
      } while (uVar11 <= uVar9);
LAB_01250bf8:
                    /* WARNING: Subroutine does not return */
      FUN_01250c3c(param_3 & 1,param_4);
    }
LAB_01250b28:
    uVar14 = 8;
  }
  else {
LAB_01250680:
    uVar14 = 3;
  }
LAB_01250684:
  *(undefined4 *)(param_1 + 5) = uVar14;
LAB_01250688:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_01250898:
  uVar17 = 0;
  uVar16 = 0;
  pbVar7 = pbVar19;
  do {
    pbVar18 = pbVar7 + 1;
    bVar3 = *pbVar7;
    uVar16 = ((ulong)bVar3 & 0x7f) << (uVar17 & 0x3f) | uVar16;
    uVar17 = uVar17 + 7;
    pbVar7 = pbVar18;
  } while ((char)bVar3 < '\0');
  uVar11 = -1L << (uVar17 & 0x3f);
  if (((uint)(uVar17 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar11 = 0;
  }
  uVar16 = uVar16 | uVar11;
  if ((long)uVar16 < 1) {
    if ((long)uVar16 < 0) {
      if ((param_3 & 1) == 0) {
        if (bVar6) goto LAB_01250b30;
        if ((param_2 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01250c3c(0,param_4);
        }
      }
      else {
        lVar8 = __cxxabiv1::__getExceptionClass(param_4);
        p_Var20 = local_a8;
        if (lVar8 == 0x434c4e47432b2b01) {
          p_Var20 = *(_Unwind_Exception **)(param_4 + -0x60);
        }
        if ((p_Var20 == (_Unwind_Exception *)0x0) ||
           (lVar8 = *(long *)(param_4 + -0x58), lVar8 == 0)) goto LAB_01250c18;
        if (p_Var21 == (_Unwind_Exception *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01250c3c(0,param_4);
        }
        uVar17 = 0;
        uVar15 = 0;
        uVar11 = ~uVar16;
        while( true ) {
          for (; uVar15 = ((ulong)(byte)p_Var21[uVar11] & 0x7f) << (uVar17 & 0x3f) | uVar15,
              (char)p_Var21[uVar11] < '\0'; uVar11 = uVar11 + 1) {
            uVar17 = uVar17 + 7;
          }
          if (uVar15 == 0) {
            if ((param_2 & 1) == 0) goto LAB_01250aa0;
            *param_1 = uVar16;
            param_1[1] = (ulong)pbVar19;
            param_1[3] = uVar1;
            param_1[4] = (ulong)p_Var20;
            uVar14 = 6;
            goto LAB_01250af8;
          }
          local_70 = p_Var21;
          if ((0xc < (uint)uVar9) || (uVar2 == 0)) goto LAB_01250c08;
          local_70 = p_Var21 + -(uVar15 << (*(ulong *)(&DAT_014a70d0 + uVar9 * 8) & 0x3f));
          plVar13 = (long *)FUN_01250fe4(&local_70,uVar10);
          local_70 = p_Var20;
          uVar17 = (**(code **)(*plVar13 + 0x20))(plVar13,lVar8,&local_70);
          if ((uVar17 & 1) != 0) break;
          uVar17 = 0;
          uVar15 = 0;
          uVar11 = uVar11 + 1;
        }
      }
    }
    else if ((param_2 & 6) == 2) {
      *param_1 = uVar16;
      param_1[1] = (ulong)pbVar19;
      param_1[3] = uVar1;
      lVar8 = __cxxabiv1::__getExceptionClass(param_4);
      if (lVar8 == 0x434c4e47432b2b01) {
        local_a8 = *(_Unwind_Exception **)(param_4 + -0x60);
      }
      param_1[4] = (ulong)local_a8;
      uVar14 = 6;
      goto LAB_01250684;
    }
  }
  else {
    local_70 = p_Var21;
    if (((p_Var21 == (_Unwind_Exception *)0x0) || (0xc < (uint)uVar9)) || (uVar2 == 0))
    goto LAB_01250bf8;
    local_70 = p_Var21 + -(uVar16 << (*(ulong *)(&DAT_014a70d0 + uVar9 * 8) & 0x3f));
    plVar13 = (long *)FUN_01250fe4(&local_70,uVar10);
    if (plVar13 == (long *)0x0) {
      if (bVar6) {
LAB_01250b30:
        *param_1 = uVar16;
        param_1[1] = (ulong)pbVar19;
        param_1[3] = uVar1;
        lVar8 = __cxxabiv1::__getExceptionClass(param_4);
        if (lVar8 == 0x434c4e47432b2b01) {
          local_a8 = *(_Unwind_Exception **)(param_4 + -0x60);
        }
        param_1[4] = (ulong)local_a8;
        uVar14 = 6;
        goto LAB_01250af8;
      }
      if ((param_2 >> 3 & 1) == 0) goto LAB_01250bf8;
    }
    else if ((param_3 & 1) != 0) {
      lVar8 = __cxxabiv1::__getExceptionClass(param_4);
      local_70 = local_a8;
      if (lVar8 == 0x434c4e47432b2b01) {
        local_70 = *(_Unwind_Exception **)(param_4 + -0x60);
      }
      if ((local_70 == (_Unwind_Exception *)0x0) || (*(long *)(param_4 + -0x58) == 0)) {
LAB_01250c18:
                    /* WARNING: Subroutine does not return */
        FUN_01250c3c(1,param_4);
      }
      uVar17 = (**(code **)(*plVar13 + 0x20))(plVar13,*(long *)(param_4 + -0x58),&local_70);
      if ((uVar17 & 1) != 0) {
        if ((param_2 & 1) != 0) {
          *param_1 = uVar16;
          param_1[1] = (ulong)pbVar19;
          param_1[3] = uVar1;
          *(undefined4 *)(param_1 + 5) = 6;
          param_1[4] = (ulong)local_70;
          goto LAB_01250688;
        }
LAB_01250aa0:
        if ((param_2 >> 3 & 1) == 0) {
LAB_01250c08:
                    /* WARNING: Subroutine does not return */
          FUN_01250c3c(1,param_4);
        }
      }
    }
  }
  uVar17 = 0;
  uVar16 = 0;
  do {
    bVar3 = *pbVar7;
    uVar16 = ((ulong)bVar3 & 0x7f) << (uVar17 & 0x3f) | uVar16;
    uVar17 = uVar17 + 7;
    pbVar7 = pbVar7 + 1;
  } while ((char)bVar3 < '\0');
  uVar11 = -1L << (uVar17 & 0x3f);
  if (((uint)(uVar17 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar11 = 0;
  }
  if ((uVar16 | uVar11) == 0) goto LAB_01250af4;
  pbVar19 = pbVar18 + (uVar16 | uVar11);
  goto LAB_01250898;
LAB_01250af4:
  uVar14 = 8;
LAB_01250af8:
  *(undefined4 *)(param_1 + 5) = uVar14;
  goto LAB_01250688;
}

