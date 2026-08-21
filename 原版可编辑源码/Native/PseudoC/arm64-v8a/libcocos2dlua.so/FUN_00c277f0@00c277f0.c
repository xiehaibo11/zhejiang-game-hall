
void FUN_00c277f0(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int local_8 [2];
  
LAB_00c27824:
  do {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0x118:
      *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x2000000;
      FUN_00c2593c(param_1);
      goto LAB_00c27824;
    case 0x119:
      *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x1000000;
      FUN_00c2593c(param_1);
      goto LAB_00c27824;
    default:
      return;
    case 0x122:
      FUN_00c2593c(param_1);
      FUN_00c263a0(param_1,0x28);
      if (*(int *)(param_1 + 4) == 0x101) {
        uVar8 = *(ulong *)(param_1 + 0x10);
        while (iVar5 = FUN_00c2593c(param_1), iVar5 == 0x101) {
          FUN_00c00c18(*(undefined8 *)(param_1 + 0x48),&DAT_01411618,uVar8 + 0x18,
                       *(long *)(param_1 + 0x10) + 0x18);
          lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x28);
          *(long *)(*(long *)(param_1 + 0x48) + 0x28) = lVar9 + -8;
          uVar8 = *(ulong *)(lVar9 + -8) & 0x7fffffffffff;
        }
        *(ulong *)(param_2 + 0x20) = uVar8;
      }
      break;
    case 0x123:
      goto switchD_00c2785c_caseD_123;
    case 0x124:
      FUN_00c2593c(param_1);
      FUN_00c263a0(param_1,0x28);
      iVar5 = *(int *)(param_1 + 4);
      while (iVar5 == 0x100) {
        lVar9 = *(long *)(param_1 + 0x10);
        FUN_00c2593c(param_1);
        if (*(int *)(lVar9 + 0xc) == -0x43dc6a06) {
          FUN_00c27744(param_1,param_2 + 0x2c);
          iVar5 = *(int *)(param_1 + 4);
        }
        else {
          iVar5 = *(int *)(param_1 + 4);
          if (iVar5 == 0x28) {
            FUN_00c2593c(param_1);
            iVar5 = *(int *)(param_1 + 4);
            while ((iVar5 != 0x103 && (iVar5 != 0x29))) {
              FUN_00c2593c(param_1);
              iVar5 = *(int *)(param_1 + 4);
            }
            FUN_00c263a0(param_1,0x29);
            iVar5 = *(int *)(param_1 + 4);
          }
        }
      }
      break;
    case 0x126:
      *(uint *)(param_2 + 0x2c) =
           (*(uint *)(*(long *)(param_1 + 0x18) + 4) & 0xff) << 8 |
           *(uint *)(param_2 + 0x2c) & 0xffff00ff;
    case 0x11a:
    case 0x121:
    case 0x125:
      FUN_00c2593c(param_1);
      goto LAB_00c27824;
    }
    FUN_00c263a0(param_1,0x29);
  } while( true );
switchD_00c2785c_caseD_123:
  FUN_00c2593c(param_1);
  FUN_00c263a0(param_1,0x28);
  FUN_00c263a0(param_1,0x28);
  iVar5 = *(int *)(param_1 + 4);
  while (iVar5 != 0x29) {
    if (iVar5 != 0x100) {
      if (0x10c < iVar5) {
        FUN_00c2593c(param_1);
        goto LAB_00c27998;
      }
      break;
    }
    lVar9 = *(long *)(param_1 + 0x10);
    FUN_00c2593c(param_1);
    uVar4 = *(uint *)(lVar9 + 0xc);
    if (uVar4 == 0x42eb47de) {
LAB_00c27c34:
      iVar5 = *(int *)(param_1 + 4);
      *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 2;
    }
    else if (uVar4 < 0x42eb47df) {
      if (uVar4 == 0xab31997) {
LAB_00c27a38:
        uVar1 = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x70) = 0x38c0;
        if (*(int *)(param_1 + 4) != 0x28) {
                    /* WARNING: Subroutine does not return */
          FUN_00c258bc(param_1,0x28);
        }
        FUN_00c2593c();
        FUN_00c273e4(param_1,local_8);
        iVar6 = local_8[0];
        if (local_8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00c2520c(param_1,0xb92);
        }
        *(undefined4 *)(param_1 + 0x70) = uVar1;
        if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
          FUN_00c258bc(param_1,0x29);
        }
        FUN_00c2593c();
        if (iVar6 != 0) {
          iVar5 = *(int *)(param_1 + 4);
          *(uint *)(param_2 + 0x2c) =
               (((uint)LZCOUNT(iVar6) ^ 0x1f) & 0xf) << 4 | *(uint *)(param_2 + 0x2c) & 0xffffff0f;
          goto joined_r0x00c279a8;
        }
      }
      else {
        if (uVar4 == 0x29f48a09) goto LAB_00c27c34;
        if (uVar4 != 0xa84eef6) goto LAB_00c27998;
LAB_00c27b6c:
        FUN_00c263a0(param_1,0x28);
        if (*(int *)(param_1 + 4) != 0x100) goto LAB_00c27ae4;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar9 = lVar7 + 0x18;
        bVar2 = *(byte *)(lVar7 + 0x18);
        if (bVar2 == 0x5f) {
          if (*(char *)(lVar7 + 0x19) == '_') {
            bVar2 = *(byte *)(lVar7 + 0x1a);
            lVar9 = lVar7 + 0x1a;
            goto LAB_00c27b98;
          }
        }
        else {
LAB_00c27b98:
          uVar4 = (uint)bVar2;
          iVar5 = 0;
          if (uVar4 == 0x56) {
            uVar4 = (uint)*(byte *)(lVar9 + 2);
            uVar3 = uVar4 - 0x30;
            iVar5 = *(byte *)(lVar9 + 1) - 0x30;
            if ((uVar3 & 0xff) < 10) {
              uVar4 = (uint)*(byte *)(lVar9 + 3);
              lVar9 = lVar9 + 3;
              iVar5 = uVar3 + iVar5 * 10;
            }
            else {
              lVar9 = lVar9 + 2;
            }
          }
          switch(uVar4) {
          case 0x44:
            iVar6 = 8;
            break;
          default:
            goto switchD_00c27bbc_caseD_45;
          case 0x48:
            iVar6 = 2;
            break;
          case 0x4f:
            iVar6 = 0x20;
            break;
          case 0x51:
            iVar6 = 1;
            break;
          case 0x53:
            iVar6 = 4;
            break;
          case 0x54:
            iVar6 = 0x10;
          }
          if ((*(char *)(lVar9 + 1) == 'F') || (*(char *)(lVar9 + 1) == 'I')) {
            if (iVar5 == 0) {
              *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xffff00ff | iVar6 << 8;
            }
            else {
              *(uint *)(param_2 + 0x2c) =
                   (((uint)LZCOUNT(iVar6 * iVar5) ^ 0x1f) & 0xf) << 4 |
                   *(uint *)(param_2 + 0x2c) & 0xffff000f | iVar6 << 8;
            }
          }
        }
switchD_00c27bbc_caseD_45:
        FUN_00c2593c(param_1);
        FUN_00c263a0(param_1,0x29);
      }
LAB_00c27af0:
      iVar5 = *(int *)(param_1 + 4);
    }
    else if (uVar4 == 0x8e6331b2) {
LAB_00c27bd0:
      FUN_00c27744(param_1,param_2 + 0x2c);
      iVar5 = *(int *)(param_1 + 4);
    }
    else {
      if (uVar4 < 0x8e6331b3) {
        if (uVar4 == 0x64a9208e) goto LAB_00c27bd0;
      }
      else {
        if (uVar4 == 0x995cf92c) goto LAB_00c27b6c;
        if (uVar4 == 0xbf875611) goto LAB_00c27a38;
      }
LAB_00c27998:
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 == 0x28) {
        do {
          FUN_00c2593c(param_1);
          if (*(int *)(param_1 + 4) == 0x103) break;
        } while (*(int *)(param_1 + 4) != 0x29);
LAB_00c27ae4:
        FUN_00c263a0(param_1,0x29);
        goto LAB_00c27af0;
      }
    }
joined_r0x00c279a8:
    if (iVar5 != 0x2c) break;
    FUN_00c2593c(param_1);
    iVar5 = *(int *)(param_1 + 4);
  }
  FUN_00c263a0(param_1,0x29);
  FUN_00c263a0(param_1,0x29);
  goto LAB_00c27824;
}

