
void FUN_018356ec(ulong *param_1,uint param_2,uint param_3,_Unwind_Exception *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  _Unwind_Exception _Var5;
  long lVar6;
  bool bVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  _Unwind_Exception *p_Var21;
  _Unwind_Exception *p_Var23;
  _Unwind_Exception *p_Var24;
  _Unwind_Exception *local_a8;
  byte *local_80;
  byte *local_78;
  _Unwind_Exception *local_70;
  long local_68;
  _Unwind_Exception *p_Var22;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) goto LAB_0183574c;
    if ((~param_2 & 0xc) != 0) goto LAB_01835798;
    uVar15 = 2;
  }
  else if ((param_2 & 0xe) == 0) {
LAB_01835798:
    pbVar8 = (byte *)_Unwind_GetLanguageSpecificData(param_5);
    local_78 = pbVar8;
    if (pbVar8 != (byte *)0x0) {
      param_1[2] = (ulong)pbVar8;
      lVar9 = _Unwind_GetIP(param_5);
      uVar10 = _Unwind_GetRegionStart(param_5);
      local_78 = pbVar8 + 1;
      uVar11 = FUN_01836094(&local_78,*pbVar8);
      uVar1 = uVar10;
      if (uVar11 != 0) {
        uVar1 = uVar11;
      }
      pbVar8 = local_78 + 1;
      uVar11 = (ulong)*local_78;
      if (uVar11 == 0xff) {
        p_Var24 = (_Unwind_Exception *)0x0;
      }
      else {
        uVar18 = 0;
        uVar17 = 0;
        pbVar20 = pbVar8;
        do {
          pbVar8 = pbVar20 + 1;
          bVar3 = *pbVar20;
          uVar17 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f) | uVar17;
          uVar18 = uVar18 + 7;
          pbVar20 = pbVar8;
        } while ((char)bVar3 < '\0');
        p_Var24 = (_Unwind_Exception *)(pbVar8 + uVar17);
      }
      bVar3 = *pbVar8;
      uVar18 = 0;
      uVar17 = 0;
      uVar10 = lVar9 + ~uVar10;
      pbVar8 = pbVar8 + 1;
      do {
        pbVar20 = pbVar8 + 1;
        bVar4 = *pbVar8;
        uVar17 = ((ulong)bVar4 & 0x7f) << (uVar18 & 0x3f) | uVar17;
        uVar18 = uVar18 + 7;
        pbVar8 = pbVar20;
      } while ((char)bVar4 < '\0');
      local_80 = pbVar20;
      local_78 = pbVar20;
      do {
        if (pbVar20 + (uVar17 & 0xffffffff) <= local_80) break;
        uVar12 = FUN_01836094(&local_80,bVar3);
        lVar9 = FUN_01836094(&local_80,bVar3);
        lVar13 = FUN_01836094(&local_80,bVar3);
        uVar18 = 0;
        uVar16 = 0;
        pbVar8 = local_80;
        do {
          local_80 = pbVar8 + 1;
          bVar4 = *pbVar8;
          uVar16 = ((ulong)bVar4 & 0x7f) << (uVar18 & 0x3f) | uVar16;
          uVar18 = uVar18 + 7;
          pbVar8 = local_80;
        } while ((char)bVar4 < '\0');
        if ((uVar12 <= uVar10) && (uVar10 < lVar9 + uVar12)) {
          if (lVar13 == 0) goto LAB_01835bcc;
          uVar1 = lVar13 + uVar1;
          if (uVar16 != 0) {
            uVar10 = uVar11 & 0xf;
            local_a8 = param_4 + 0x20;
            bVar7 = (param_2 & 5) != 0;
            pbVar20 = pbVar20 + uVar16 + (uVar17 & 0xffffffff) + -1;
            uVar2 = 0x1c1dU >> uVar10 & 1;
            goto LAB_0183597c;
          }
          if ((param_2 & 6) != 2) goto LAB_01835bfc;
          *param_1 = 0;
          param_1[3] = uVar1;
          uVar15 = 6;
          goto LAB_01835750;
        }
      } while (uVar12 <= uVar10);
LAB_01835900:
                    /* WARNING: Subroutine does not return */
      FUN_01835cf4(param_3 & 1,param_4);
    }
LAB_01835bfc:
    uVar15 = 8;
  }
  else {
LAB_0183574c:
    uVar15 = 3;
  }
LAB_01835750:
  *(undefined4 *)(param_1 + 5) = uVar15;
LAB_01835754:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0183597c:
  uVar18 = 0;
  uVar17 = 0;
  pbVar8 = pbVar20;
  do {
    pbVar19 = pbVar8 + 1;
    bVar3 = *pbVar8;
    uVar17 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f) | uVar17;
    uVar18 = uVar18 + 7;
    pbVar8 = pbVar19;
  } while ((char)bVar3 < '\0');
  uVar12 = -1L << (uVar18 & 0x3f);
  if (((uint)(uVar18 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar12 = 0;
  }
  uVar17 = uVar17 | uVar12;
  if ((long)uVar17 < 1) {
    if ((long)uVar17 < 0) {
      if ((param_3 & 1) == 0) {
        if (bVar7) goto LAB_01835c04;
        if ((param_2 >> 3 & 1) == 0) goto LAB_01835ce8;
      }
      else {
        lVar9 = __cxxabiv1::__getExceptionClass(param_4);
        p_Var23 = local_a8;
        if (lVar9 == 0x434c4e47432b2b01) {
          p_Var23 = *(_Unwind_Exception **)(param_4 + -0x60);
        }
        if ((p_Var23 == (_Unwind_Exception *)0x0) ||
           (lVar9 = *(long *)(param_4 + -0x58), lVar9 == 0)) goto LAB_01835cdc;
        if (p_Var24 == (_Unwind_Exception *)0x0) {
LAB_01835ce8:
                    /* WARNING: Subroutine does not return */
          FUN_01835cf4(0,param_4);
        }
        uVar18 = 0;
        uVar12 = 0;
        p_Var22 = p_Var24 + ~uVar17;
        do {
          do {
            p_Var21 = p_Var22 + 1;
            _Var5 = *p_Var22;
            uVar12 = ((ulong)(byte)_Var5 & 0x7f) << (uVar18 & 0x3f) | uVar12;
            uVar18 = uVar18 + 7;
            p_Var22 = p_Var21;
          } while ((char)_Var5 < '\0');
          if (uVar12 == 0) {
            if ((param_2 & 1) == 0) goto LAB_01835b7c;
            *param_1 = uVar17;
            param_1[1] = (ulong)pbVar20;
            param_1[3] = uVar1;
            param_1[4] = (ulong)p_Var23;
            uVar15 = 6;
            goto LAB_01835bd0;
          }
          local_70 = p_Var24;
          if ((0xc < (uint)uVar10) || (uVar2 == 0)) goto LAB_01835ccc;
          local_70 = p_Var24 + -(uVar12 << (*(ulong *)(&DAT_01a67798 + uVar10 * 8) & 0x3f));
          plVar14 = (long *)FUN_01836094(&local_70,uVar11);
          local_70 = p_Var23;
          uVar16 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar9,&local_70);
          uVar18 = 0;
          uVar12 = 0;
        } while ((uVar16 & 1) == 0);
      }
    }
    else if ((param_2 & 6) == 2) {
      *param_1 = uVar17;
      param_1[1] = (ulong)pbVar20;
      param_1[3] = uVar1;
      lVar9 = __cxxabiv1::__getExceptionClass(param_4);
      if (lVar9 == 0x434c4e47432b2b01) {
        local_a8 = *(_Unwind_Exception **)(param_4 + -0x60);
      }
      param_1[4] = (ulong)local_a8;
      uVar15 = 6;
      goto LAB_01835750;
    }
  }
  else {
    local_70 = p_Var24;
    if (((p_Var24 == (_Unwind_Exception *)0x0) || (0xc < (uint)uVar10)) || (uVar2 == 0))
    goto LAB_01835900;
    local_70 = p_Var24 + -(uVar17 << (*(ulong *)(&DAT_01a67798 + uVar10 * 8) & 0x3f));
    plVar14 = (long *)FUN_01836094(&local_70,uVar11);
    if (plVar14 == (long *)0x0) {
      if (bVar7) {
LAB_01835c04:
        *param_1 = uVar17;
        param_1[1] = (ulong)pbVar20;
        param_1[3] = uVar1;
        lVar9 = __cxxabiv1::__getExceptionClass(param_4);
        if (lVar9 == 0x434c4e47432b2b01) {
          local_a8 = *(_Unwind_Exception **)(param_4 + -0x60);
        }
        param_1[4] = (ulong)local_a8;
        uVar15 = 6;
        goto LAB_01835bd0;
      }
      if ((param_2 >> 3 & 1) == 0) goto LAB_01835900;
    }
    else if ((param_3 & 1) != 0) {
      lVar9 = __cxxabiv1::__getExceptionClass(param_4);
      local_70 = local_a8;
      if (lVar9 == 0x434c4e47432b2b01) {
        local_70 = *(_Unwind_Exception **)(param_4 + -0x60);
      }
      if ((local_70 == (_Unwind_Exception *)0x0) || (*(long *)(param_4 + -0x58) == 0)) {
LAB_01835cdc:
                    /* WARNING: Subroutine does not return */
        FUN_01835cf4(1,param_4);
      }
      uVar18 = (**(code **)(*plVar14 + 0x20))(plVar14,*(long *)(param_4 + -0x58),&local_70);
      if ((uVar18 & 1) != 0) {
        if ((param_2 & 1) != 0) {
          *param_1 = uVar17;
          param_1[1] = (ulong)pbVar20;
          param_1[3] = uVar1;
          *(undefined4 *)(param_1 + 5) = 6;
          param_1[4] = (ulong)local_70;
          goto LAB_01835754;
        }
LAB_01835b7c:
        if ((param_2 >> 3 & 1) == 0) {
LAB_01835ccc:
                    /* WARNING: Subroutine does not return */
          FUN_01835cf4(1,param_4);
        }
      }
    }
  }
  lVar9 = 0;
  uVar18 = 0;
  uVar17 = 0;
  do {
    bVar3 = pbVar19[lVar9];
    lVar9 = lVar9 + 1;
    uVar17 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f) | uVar17;
    uVar18 = uVar18 + 7;
  } while ((char)bVar3 < '\0');
  uVar12 = -1L << (uVar18 & 0x3f);
  if (((uint)(uVar18 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar12 = 0;
  }
  if ((uVar17 | uVar12) == 0) goto LAB_01835bcc;
  pbVar20 = pbVar19 + (uVar17 | uVar12);
  goto LAB_0183597c;
LAB_01835bcc:
  uVar15 = 8;
LAB_01835bd0:
  *(undefined4 *)(param_1 + 5) = uVar15;
  goto LAB_01835754;
}

