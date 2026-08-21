
void png_set_gamma_fixed(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x168);
  if ((uVar1 >> 6 & 1) != 0) {
    png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  uVar3 = uVar1 | 0x4000;
  iVar2 = 0x10175;
  *(uint *)(param_1 + 0x168) = uVar3;
  if (param_2 < -2) {
    if (param_2 == -100000) {
LAB_010ca190:
                    /* try { // try from 010ca190 to 011ca19b has its CatchHandler @ 010ca1cc */
      uVar3 = uVar1 | 0x5000;
                    /* try { // try from 010ca19c to 011ca1eb has its CatchHandler @ 010ca0d8 */
      param_2 = 220000;
      *(uint *)(param_1 + 0x168) = uVar3;
    }
    else if (param_2 == -50000) goto LAB_010ca1cc;
LAB_010ca1a4:
    if (param_3 < -2) goto LAB_010ca1ac;
LAB_010ca1dc:
    if (param_3 == -2) goto joined_r0x010ca1fc;
    if (param_3 == -1) goto LAB_010ca1ec;
  }
  else {
    if (param_2 != -2) {
      if (param_2 != -1) goto LAB_010ca1a4;
      goto LAB_010ca190;
    }
LAB_010ca1cc:
                    /* catch() { ... } // from try @ 010ca190 with catch @ 010ca1cc */
    param_2 = 0x250ac;
    if (-3 < param_3) goto LAB_010ca1dc;
LAB_010ca1ac:
    if (param_3 == -100000) {
LAB_010ca1ec:
      *(uint *)(param_1 + 0x168) = uVar3 | 0x1000;
      iVar2 = 0xb18f;
      goto joined_r0x010ca1fc;
    }
    if (param_3 == -50000) goto joined_r0x010ca1fc;
  }
  iVar2 = param_3;
  if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"invalid file gamma in png_set_gamma");
  }
joined_r0x010ca1fc:
  if (0 < param_2) {
    *(int *)(param_1 + 0x510) = iVar2;
    *(int *)(param_1 + 0x2ec) = param_2;
    *(ushort *)(param_1 + 0x55a) = *(ushort *)(param_1 + 0x55a) | 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"invalid screen gamma in png_set_gamma");
}

