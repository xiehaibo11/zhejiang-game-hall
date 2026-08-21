
/* v8::internal::StringStream::Add(v8::internal::Vector<char const>,
   v8::internal::Vector<v8::internal::StringStream::FmtElm>) */

void v8::internal::StringStream::Add
               (StringStream *param_1,long param_2,int param_3,long param_4,ulong param_5)

{
  StringStream *pSVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  size_t sVar10;
  char **ppcVar11;
  undefined8 uVar12;
  uint uVar13;
  StringStream *pSVar14;
  long lVar15;
  undefined2 *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  char *pcVar21;
  char *local_c0;
  undefined8 uStack_b8;
  char acStack_b0 [32];
  byte *local_90;
  undefined8 local_88;
  byte local_80 [24];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pSVar14 = param_1 + 0x10;
  if ((*(int *)(param_1 + 0xc) - *(uint *)pSVar14 != 1) && (0 < param_3)) {
    uVar20 = 0;
    uVar18 = 0;
    pSVar1 = param_1 + 0x18;
    do {
      lVar15 = (long)(int)uVar18;
      uVar19 = param_3 - uVar18;
      uVar3 = uVar18 + 2;
      uVar13 = uVar18;
      while( true ) {
        uVar18 = uVar3;
        uVar13 = uVar13 + 1;
        cVar4 = *(char *)(param_2 + lVar15);
        if ((uVar20 != (param_5 & 0xffffffff)) && (cVar4 == '%')) break;
        iVar8 = *(int *)(param_1 + 0xc);
        uVar3 = *(uint *)(param_1 + 0x10);
        if (iVar8 - uVar3 != 1) {
          if (uVar3 == iVar8 - 2U) {
            local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar8);
            lVar9 = (**(code **)(**(long **)param_1 + 0x18))(*(long **)param_1,&local_c0);
            uVar3 = *(uint *)(param_1 + 0xc);
            if ((uint)local_c0 <= uVar3) {
              *(uint *)pSVar14 = uVar3 - 1;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(uVar3 - 5)) = 0x2e;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 3)) = 0x2e;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 2)) = 0x2e;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 1)) = 10;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)*(uint *)pSVar14) = 0;
              goto LAB_011f31c0;
            }
            *(uint *)(param_1 + 0xc) = (uint)local_c0;
            *(long *)(param_1 + 0x18) = lVar9;
            uVar3 = *(uint *)(param_1 + 0x10);
          }
          else {
            lVar9 = *(long *)pSVar1;
          }
          *(char *)(lVar9 + (ulong)uVar3) = cVar4;
          *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 + 1)) = 0;
          *(uint *)pSVar14 = *(uint *)pSVar14 + 1;
        }
LAB_011f31c0:
        lVar15 = lVar15 + 1;
        uVar19 = uVar19 - 1;
        uVar3 = uVar18 + 1;
        if (param_3 <= lVar15) goto LAB_011f3808;
      }
      local_88 = 0x18;
      local_80[0] = *(byte *)(param_2 + lVar15);
      local_90 = local_80;
      if (param_3 <= (int)lVar15 + 1) break;
      lVar15 = (ulong)uVar13 << 0x20;
      lVar9 = 0;
      while( true ) {
        bVar5 = *(byte *)(param_2 + (int)uVar13 + lVar9);
        if ((9 < bVar5 - 0x30) && (1 < bVar5 - 0x2d)) break;
        lVar15 = lVar15 + 0x100000000;
        uVar18 = uVar18 + 1;
        lVar2 = lVar9 + 1;
        local_80[lVar9 + 1] = bVar5;
        lVar9 = lVar2;
        if ((ulong)uVar19 - 1 == lVar2) goto LAB_011f3808;
      }
      bVar5 = *(byte *)(param_2 + (lVar15 >> 0x20));
      local_80[(int)lVar9 + 1] = bVar5;
      local_80[(int)lVar9 + 2] = 0;
      if (0x33 < bVar5 - 0x45) {
switchD_011f33a4_caseD_46:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pcVar21 = *(char **)(param_4 + uVar20 * 8);
      switch((uint)bVar5) {
      case 0x45:
      case 0x47:
      case 0x65:
      case 0x66:
      case 0x67:
        if (ABS((double)pcVar21) == INFINITY) {
          pcVar21 = "inf";
          sVar10 = __strlen_chk("inf",4);
          goto LAB_011f36a4;
        }
        if (NAN((double)pcVar21)) {
          pcVar21 = "nan";
          sVar10 = __strlen_chk("nan",4);
        }
        else {
          uStack_b8 = 0x1c;
          local_c0 = acStack_b0;
          SNPrintF(acStack_b0,0x1c,local_80);
          pcVar21 = local_c0;
          sVar10 = strlen(local_c0);
        }
        ppcVar11 = (char **)0x0;
        uVar12 = 0;
LAB_011f374c:
        Add(param_1,pcVar21,sVar10,ppcVar11,uVar12);
        break;
      default:
        goto switchD_011f33a4_caseD_46;
      case 0x58:
      case 99:
      case 100:
      case 0x69:
      case 0x75:
      case 0x78:
        uStack_b8 = 0x18;
        local_c0 = acStack_b0;
        iVar8 = SNPrintF(acStack_b0,0x18,local_80,(ulong)pcVar21 & 0xffffffff);
        sVar10 = (size_t)iVar8;
        pcVar21 = local_c0;
        goto LAB_011f36a4;
      case 0x6b:
        iVar8 = (int)pcVar21;
        if (0x5f < iVar8 - 0x20U) {
          if (iVar8 < 0x100) {
            pcVar21 = "\\x%02x";
          }
          else {
            pcVar21 = "\\u%04x";
          }
          sVar10 = __strlen_chk(pcVar21,7);
          local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar8);
          ppcVar11 = &local_c0;
          uVar12 = 1;
          goto LAB_011f374c;
        }
        iVar8 = *(int *)(param_1 + 0xc);
        uVar13 = *(uint *)(param_1 + 0x10);
        if (iVar8 - uVar13 != 1) {
          if (uVar13 == iVar8 - 2U) {
            local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar8);
            lVar15 = (**(code **)(**(long **)param_1 + 0x18))(*(long **)param_1,&local_c0);
            uVar13 = *(uint *)(param_1 + 0xc);
            if ((uint)local_c0 <= uVar13) {
              *(uint *)pSVar14 = uVar13 - 1;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(uVar13 - 5)) = 0x2e;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 3)) = 0x2e;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 2)) = 0x2e;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 1)) = 10;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)*(uint *)pSVar14) = 0;
              break;
            }
            uVar13 = *(uint *)(param_1 + 0x10);
            *(uint *)(param_1 + 0xc) = (uint)local_c0;
            *(long *)(param_1 + 0x18) = lVar15;
          }
          else {
            lVar15 = *(long *)pSVar1;
          }
          *(char *)(lVar15 + (ulong)uVar13) = (char)pcVar21;
          *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 + 1)) = 0;
          *(uint *)pSVar14 = *(uint *)pSVar14 + 1;
        }
        break;
      case 0x6f:
        PrintObject(param_1,pcVar21);
        break;
      case 0x70:
        uStack_b8 = 0x14;
        local_c0 = acStack_b0;
        SNPrintF(acStack_b0,0x14,local_80,pcVar21);
        pcVar21 = local_c0;
        sVar10 = strlen(local_c0);
        goto LAB_011f36a4;
      case 0x73:
        sVar10 = strlen(pcVar21);
LAB_011f36a4:
        Add(param_1,pcVar21,sVar10,0,0);
        break;
      case 0x77:
        if (0 < (int)*(ulong *)(pcVar21 + 8)) {
          puVar16 = *(undefined2 **)pcVar21;
          uVar17 = *(ulong *)(pcVar21 + 8) & 0xffffffff;
          do {
            iVar8 = *(int *)(param_1 + 0xc);
            uVar13 = *(uint *)(param_1 + 0x10);
            if (iVar8 - uVar13 != 1) {
              uVar6 = *puVar16;
              if (uVar13 == iVar8 - 2U) {
                local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar8);
                lVar15 = (**(code **)(**(long **)param_1 + 0x18))(*(long **)param_1,&local_c0);
                uVar13 = *(uint *)(param_1 + 0xc);
                if ((uint)local_c0 <= uVar13) {
                  *(uint *)pSVar14 = uVar13 - 1;
                  *(undefined1 *)(*(long *)pSVar1 + (ulong)(uVar13 - 5)) = 0x2e;
                  *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 3)) = 0x2e;
                  *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 2)) = 0x2e;
                  *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 - 1)) = 10;
                  *(undefined1 *)(*(long *)pSVar1 + (ulong)*(uint *)pSVar14) = 0;
                  goto LAB_011f3554;
                }
                uVar13 = *(uint *)(param_1 + 0x10);
                *(uint *)(param_1 + 0xc) = (uint)local_c0;
                *(long *)(param_1 + 0x18) = lVar15;
              }
              else {
                lVar15 = *(long *)pSVar1;
              }
              *(char *)(lVar15 + (ulong)uVar13) = (char)uVar6;
              *(undefined1 *)(*(long *)pSVar1 + (ulong)(*(uint *)pSVar14 + 1)) = 0;
              *(uint *)pSVar14 = *(uint *)pSVar14 + 1;
            }
LAB_011f3554:
            uVar17 = uVar17 - 1;
            puVar16 = puVar16 + 1;
          } while (uVar17 != 0);
        }
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar18 < param_3);
  }
LAB_011f3808:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

