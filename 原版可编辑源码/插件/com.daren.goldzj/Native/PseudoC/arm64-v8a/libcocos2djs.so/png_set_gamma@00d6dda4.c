
void png_set_gamma(double param_1,double param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (param_1 < 128.0) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 < 0.0;
      bVar4 = param_1 == 0.0;
      bVar5 = false;
    }
  }
  dVar9 = param_1 * 100000.0;
  if (bVar4 || bVar3 != bVar5) {
    dVar9 = param_1;
  }
  dVar9 = (double)(long)(dVar9 + 0.5);
  if ((dVar9 <= 2147483647.0) && (-2147483647.0 <= dVar9)) {
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (param_2 < 128.0) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_2)) {
        bVar3 = param_2 < 0.0;
        bVar4 = param_2 == 0.0;
        bVar5 = false;
      }
    }
    dVar10 = param_2 * 100000.0;
    if (bVar4 || bVar3 != bVar5) {
      dVar10 = param_2;
    }
    dVar10 = (double)(long)(dVar10 + 0.5);
    if ((dVar10 <= 2147483647.0) && (-2147483647.0 <= dVar10)) {
      if (param_3 == 0) {
        return;
      }
      uVar1 = *(uint *)(param_3 + 0x168);
      if ((uVar1 >> 6 & 1) != 0) {
        png_app_error(param_3,"invalid after png_start_read_image or png_read_update_info");
        return;
      }
      iVar6 = (int)dVar9;
      iVar7 = (int)dVar10;
      uVar8 = uVar1 | 0x4000;
      iVar2 = 0x10175;
      *(uint *)(param_3 + 0x168) = uVar8;
      if (iVar6 < -2) {
        if (iVar6 == -100000) {
LAB_00d6de94:
          uVar8 = uVar1 | 0x5000;
          iVar6 = 220000;
          *(uint *)(param_3 + 0x168) = uVar8;
        }
        else if (iVar6 == -50000) goto LAB_00d6ded0;
LAB_00d6dea8:
        if (iVar7 < -2) goto LAB_00d6deb0;
LAB_00d6dee0:
        if (iVar7 != -2) {
          if (iVar7 != -1) goto LAB_00d6df08;
          goto LAB_00d6def0;
        }
      }
      else {
        if (iVar6 != -2) {
          if (iVar6 != -1) goto LAB_00d6dea8;
          goto LAB_00d6de94;
        }
LAB_00d6ded0:
        iVar6 = 0x250ac;
        if (-3 < iVar7) goto LAB_00d6dee0;
LAB_00d6deb0:
        if (iVar7 == -100000) {
LAB_00d6def0:
          *(uint *)(param_3 + 0x168) = uVar8 | 0x1000;
          iVar2 = 0xb18f;
        }
        else if (iVar7 != -50000) {
LAB_00d6df08:
          iVar2 = iVar7;
          if (iVar7 < 1) {
                    /* WARNING: Subroutine does not return */
            png_error(param_3,"invalid file gamma in png_set_gamma");
          }
        }
      }
      if (0 < iVar6) {
        *(int *)(param_3 + 0x510) = iVar2;
        *(int *)(param_3 + 0x2ec) = iVar6;
        *(ushort *)(param_3 + 0x55a) = *(ushort *)(param_3 + 0x55a) | 1;
        return;
      }
      goto LAB_00d6df44;
    }
  }
  param_3 = png_fixed_error(param_3,"gamma value");
LAB_00d6df44:
                    /* WARNING: Subroutine does not return */
  png_error(param_3,"invalid screen gamma in png_set_gamma");
}

