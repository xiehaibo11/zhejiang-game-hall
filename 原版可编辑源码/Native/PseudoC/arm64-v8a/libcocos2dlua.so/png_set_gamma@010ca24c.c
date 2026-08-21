
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
LAB_010ca33c:
          uVar8 = uVar1 | 0x5000;
          iVar6 = 220000;
          *(uint *)(param_3 + 0x168) = uVar8;
        }
        else if (iVar6 == -50000) goto LAB_010ca378;
LAB_010ca350:
        if (iVar7 < -2) goto LAB_010ca358;
LAB_010ca388:
        if (iVar7 != -2) {
          if (iVar7 != -1) goto LAB_010ca3b0;
          goto LAB_010ca398;
        }
      }
      else {
        if (iVar6 != -2) {
          if (iVar6 != -1) goto LAB_010ca350;
          goto LAB_010ca33c;
        }
LAB_010ca378:
        iVar6 = 0x250ac;
        if (-3 < iVar7) goto LAB_010ca388;
LAB_010ca358:
        if (iVar7 == -100000) {
LAB_010ca398:
          *(uint *)(param_3 + 0x168) = uVar8 | 0x1000;
          iVar2 = 0xb18f;
        }
        else {
                    /* try { // try from 010ca368 to 011ca3b3 has its CatchHandler @ 010ca368
                       catch() { ... } // from try @ 010ca368 with catch @ 010ca368
                       catch() { ... } // from try @ 010ca3e8 with catch @ 010ca368 */
          if (iVar7 != -50000) {
LAB_010ca3b0:
                    /* try { // try from 010ca3b4 to 011ca3db has its CatchHandler @ 010ca3fc */
            iVar2 = iVar7;
            if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 010ca3b4 with catch @ 010ca3fc */
                    /* WARNING: Subroutine does not return */
              png_error(param_3,"invalid file gamma in png_set_gamma");
            }
          }
        }
      }
      if (0 < iVar6) {
        *(int *)(param_3 + 0x510) = iVar2;
        *(int *)(param_3 + 0x2ec) = iVar6;
        *(ushort *)(param_3 + 0x55a) = *(ushort *)(param_3 + 0x55a) | 1;
        return;
      }
      goto LAB_010ca3ec;
    }
  }
                    /* try { // try from 010ca3e4 to 011ca3e7 has its CatchHandler @ 010ca404 */
                    /* try { // try from 010ca3e8 to 011ca443 has its CatchHandler @ 010ca368 */
  param_3 = png_fixed_error(param_3,"gamma value");
LAB_010ca3ec:
                    /* WARNING: Subroutine does not return */
  png_error(param_3,"invalid screen gamma in png_set_gamma");
}

