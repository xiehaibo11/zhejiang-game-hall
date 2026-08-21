
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong *puVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  char *local_b0;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78;
  
  lVar6 = tpidr_el0;
  lVar16 = *(long *)(lVar6 + 0x28);
  uVar3 = 0x6737edf4;
  uVar11 = FUN_00112af0();
  iVar2 = 0x6e80112e;
  if (0x16 < param_2) {
    iVar2 = -0xf6f7837;
  }
  iVar15 = -0x6bf90285;
LAB_001123c0:
  do {
    while( true ) {
      if (-0x23948f4 < iVar15) break;
      if (iVar15 < -0x1ff77f90) {
        if (iVar15 == -0x7b957ae0) goto LAB_00112ab8;
        if (iVar15 == -0x6bf90285) {
          iVar15 = 0x65dafea;
          if (param_2 <= uVar11) {
            iVar15 = 0x7c285b86;
          }
        }
      }
      else if (iVar15 == -0x1ff77f90) {
        local_88 = local_b0;
        bVar9 = (~((x_58 + -1) * x_58) | 0xfffffffeU) != 0xffffffff;
        iVar15 = 0x3fa0be38;
        if (9 < y_59 == bVar9 && (9 < y_59 || bVar9)) {
          iVar15 = -0x23948f3;
        }
      }
      else if (iVar15 == -0xf6f7837) {
        lVar13 = FUN_0011409c(param_2);
        bVar8 = (~((x_50 + -1) * x_50) | 0xfffffffeU) == 0xffffffff;
        bVar9 = y_51 < 10;
        iVar15 = -0xc18ec00;
        if ((!bVar9 || !bVar8) && bVar9 == bVar8) {
          iVar15 = 0x63b54add;
        }
        iVar18 = -0x45d3764d;
LAB_00112968:
        if (iVar18 == -0x45d3764d) {
          iVar18 = 0x51306084;
          if ((!bVar8 || !bVar9) && bVar8 == bVar9) {
            iVar18 = 0x63b54add;
          }
        }
        else if (iVar18 == -0xc18ec00) goto LAB_00112a1c;
        while (0x51306083 < iVar18) {
          while( true ) {
            while (iVar18 == 0x51306084) {
              iVar18 = iVar15;
              local_78 = this;
              if (iVar15 < 0x51306084) goto LAB_00112968;
            }
            if (iVar18 != 0x63b54add) break;
            iVar18 = 0x51306084;
          }
        }
        goto LAB_00112968;
      }
    }
    if (iVar15 < 0x6e80112e) {
      if (iVar15 == -0x23948f3) {
        bVar8 = (~((x_88 + -1) * x_88) | 0xfffffffeU) == 0xffffffff;
        bVar9 = y_89 < 10;
        local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(ulong)bVar9;
        uVar4 = 0xde565b1f;
        if (bVar9 == bVar8 && (9 < y_89 || !bVar8)) {
          uVar4 = uVar3;
        }
        uVar17 = 0xae650f16;
        while( true ) {
          while (uVar17 == 0xae650f16) {
            uVar17 = 0xc47df25;
            if (!bVar8 == !bVar9 && (!bVar8 || !bVar9)) {
              uVar17 = uVar3;
            }
            if (0xc47df24 < uVar17) goto LAB_001128e8;
          }
          uVar7 = uVar17;
          if (uVar17 == 0xde565b1f) break;
          while (uVar17 = uVar7, 0xc47df24 < (int)uVar17) {
LAB_001128e8:
            while ((uVar7 = uVar4, uVar17 != 0xc47df25 && (uVar7 = uVar17, uVar17 == 0x6737edf4))) {
              uVar17 = 0xc47df25;
            }
          }
        }
        char_traits<char>::copy(local_88,param_1,param_2);
        local_88[param_2] = '\0';
        iVar15 = 0x3fa0be38;
      }
      else if (iVar15 == 0x3fa0be38) {
        uVar4 = (x_88 + -1) * x_88;
        bVar8 = ((uVar4 ^ 0xfffffffe) & uVar4) == 0;
        bVar9 = y_89 < 10;
        local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(ulong)bVar9;
        uVar4 = 0xde565b1f;
        if ((!bVar9 || !bVar8) && bVar9 == bVar8) {
          uVar4 = uVar3;
        }
        uVar17 = 0xae650f16;
        while( true ) {
          while (uVar17 == 0xae650f16) {
            uVar17 = 0xc47df25;
            if ((!bVar8 || !bVar9) && bVar8 == bVar9) {
              uVar17 = uVar3;
            }
            if (0xc47df24 < uVar17) goto LAB_001125e4;
          }
          uVar7 = uVar17;
          if (uVar17 == 0xde565b1f) break;
          while (uVar17 = uVar7, 0xc47df24 < (int)uVar17) {
LAB_001125e4:
            while ((uVar7 = uVar4, uVar17 != 0xc47df25 && (uVar7 = uVar17, uVar17 == 0x6737edf4))) {
              uVar17 = 0xc47df25;
            }
          }
        }
        char_traits<char>::copy(local_88,param_1,param_2);
        local_88[param_2] = '\0';
        bVar9 = (~((x_58 + 0x5db9165) * x_58) | 0xfffffffeU) == 0xffffffff;
        iVar15 = -0x7b957ae0;
        if (y_59 < 10 == bVar9 && (9 < y_59 || !bVar9)) {
          iVar15 = -0x23948f3;
        }
      }
      else if (iVar15 == 0x65dafea) {
        __basic_string_common<true>::__throw_length_error();
LAB_00112ab8:
        if (*(long *)(lVar6 + 0x28) == lVar16) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_001123c0;
    }
    if (iVar15 == 0x6e80112e) {
      uVar4 = (x_72 + -1) * x_72;
      bVar8 = ((uVar4 ^ 0xfffffffe) & uVar4) == 0;
      bVar9 = y_73 < 10;
      local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (ulong)bVar9;
      iVar15 = 0x27fbe720;
      do {
        while( true ) {
          while (uVar5 = (undefined1)((int)param_2 << 1), -0x2c2e452f < iVar15) {
            if (iVar15 == -0x2c2e452e) {
              puVar12 = (undefined1 *)FUN_00111fd4(this);
              *puVar12 = uVar5;
              iVar15 = -0x73e49919;
            }
            else if ((iVar15 == 0x27fbe720) &&
                    (iVar15 = -0x73e49919, (!bVar8 || !bVar9) && bVar8 == bVar9)) {
              iVar15 = -0x2c2e452e;
            }
          }
          if (iVar15 != -0x73e49919) break;
          puVar12 = (undefined1 *)FUN_00111fd4(this);
          *puVar12 = uVar5;
          bVar10 = (~((x_72 + -1) * x_72) | 0xfffffffeU) == 0xffffffff;
          iVar15 = -0x514fc445;
          if ((y_73 >= 10 || !bVar10) && y_73 < 10 == bVar10) {
            iVar15 = -0x2c2e452e;
          }
        }
      } while (iVar15 != -0x514fc445);
      lVar13 = FUN_00111fd4(this);
      local_b0 = (char *)(lVar13 + 1);
      iVar15 = -0x1ff77f90;
    }
    else if (iVar15 == 0x7c285b86) {
      iVar15 = iVar2;
    }
  } while( true );
LAB_00112a1c:
  uVar1 = lVar13 + 1;
  local_b0 = (char *)FUN_00114368(local_78,uVar1);
  lVar13 = FUN_00111fd4(this);
  *(char **)(lVar13 + 0x10) = local_b0;
  puVar14 = (ulong *)FUN_00111fd4(this);
  *puVar14 = uVar1 & 1 | uVar1 ^ 1;
  lVar13 = FUN_00111fd4(this);
  *(ulong *)(lVar13 + 8) = param_2;
  iVar15 = -0x1ff77f90;
  goto LAB_001123c0;
}

