
void png_colorspace_set_rgb_coefficients(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  
  if ((*(char *)(param_1 + 0x449) != '\0') || ((*(byte *)(param_1 + 0x55a) >> 1 & 1) == 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x538);
  if (-1 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x544);
    iVar4 = *(int *)(param_1 + 0x550);
    iVar1 = iVar3 + iVar2 + iVar4;
    if (0 < iVar1) {
      uVar5 = 0;
      if (iVar2 != 0) {
        dVar9 = (double)(long)(((double)iVar2 * 32768.0) / (double)iVar1 + 0.5);
                    /* try { // try from 010bf2e0 to 011bf32b has its CatchHandler @ 010bf2e0
                       catch() { ... } // from try @ 010bf2e0 with catch @ 010bf2e0
                       catch() { ... } // from try @ 010bf348 with catch @ 010bf2e0 */
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010bf430;
        uVar5 = (uint)dVar9;
      }
      if ((-1 < iVar3) && (uVar5 < 0x8001)) {
        uVar6 = 0;
        if (iVar3 != 0) {
                    /* try { // try from 010bf32c to 011bf347 has its CatchHandler @ 010bf384 */
          dVar9 = (double)(long)(((double)iVar3 * 32768.0) / (double)iVar1 + 0.5);
          if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010bf430;
                    /* try { // try from 010bf348 to 011bf397 has its CatchHandler @ 010bf2e0 */
          uVar6 = (uint)dVar9;
        }
        if ((-1 < iVar4) && (uVar6 < 0x8001)) {
          if (iVar4 == 0) {
            uVar7 = 0;
          }
          else {
                    /* catch() { ... } // from try @ 010bf32c with catch @ 010bf384 */
            dVar9 = (double)(long)(((double)iVar4 * 32768.0) / (double)iVar1 + 0.5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bf3f0 with catch @ 010bf398
                       catch(type#1 @ 00000000) { ... } // from try @ 010bf5c8 with catch @ 010bf398
                        */
            if (((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) ||
               (uVar7 = (uint)dVar9, 0x8000 < uVar7)) goto LAB_010bf430;
          }
          iVar2 = uVar6 + uVar5 + uVar7;
          if (iVar2 < 0x8002) {
            uVar8 = (uint)(iVar2 < 0x8000);
            if (iVar2 == 0x8001) {
              uVar8 = 0xffffffff;
            }
            if (uVar8 != 0) {
                    /* try { // try from 010bf3e8 to 011bf3ef has its CatchHandler @ 010bf6ec */
              if (((int)uVar6 < (int)uVar5) || ((int)uVar6 < (int)uVar7)) {
                if (((int)uVar5 < (int)uVar6) || ((int)uVar5 < (int)uVar7)) {
                  uVar7 = uVar8 + uVar7;
                }
                else {
                  uVar5 = uVar8 + uVar5;
                }
              }
              else {
                uVar6 = uVar8 + uVar6;
                    /* try { // try from 010bf3f0 to 011bf547 has its CatchHandler @ 010bf398 */
              }
            }
            if (uVar6 + uVar5 + uVar7 == 0x8000) {
              *(short *)(param_1 + 0x44a) = (short)uVar5;
              *(short *)(param_1 + 0x44c) = (short)uVar6;
              return;
            }
                    /* WARNING: Subroutine does not return */
            png_error(param_1,"internal error handling cHRM coefficients");
          }
        }
      }
    }
  }
LAB_010bf430:
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"internal error handling cHRM->XYZ");
}

