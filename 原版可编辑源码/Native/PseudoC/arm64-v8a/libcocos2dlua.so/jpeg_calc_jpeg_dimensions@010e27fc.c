
void jpeg_calc_jpeg_dimensions(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  
  if ((*(char *)((long)param_1 + 0x33) != '\0') || (*(char *)((long)param_1 + 0x37) != '\0')) {
    puVar7 = (undefined8 *)*param_1;
    puVar7[5] = 0xffdc0000002a;
    (*(code *)*puVar7)(param_1);
  }
  uVar1 = *(uint *)(param_1 + 9);
  iVar2 = *(int *)((long)param_1 + 0x1dc);
  lVar8 = (long)iVar2;
  uVar3 = iVar2 * *(int *)((long)param_1 + 0x4c);
  if (uVar1 < uVar3) {
    if (uVar1 << 1 < uVar3) {
      if (uVar1 * 3 < uVar3) {
        if (uVar1 << 2 < uVar3) {
          if (uVar1 * 5 < uVar3) {
            if (uVar1 * 6 < uVar3) {
              if (uVar1 * 7 < uVar3) {
                if (uVar1 * 8 < uVar3) {
                  if (uVar1 * 9 < uVar3) {
                    if (uVar1 * 10 < uVar3) {
                      if (uVar1 * 0xb < uVar3) {
                        if (uVar1 * 0xc < uVar3) {
                          if (uVar1 * 0xd < uVar3) {
                            if (uVar1 * 0xe < uVar3) {
                              if (uVar1 * 0xf < uVar3) {
                                uVar10 = 0x10;
                                uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,0x10);
                                uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                                lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                                *(undefined4 *)(param_1 + 10) = uVar4;
                                uVar6 = 0x10;
                              }
                              else {
                                uVar10 = 0xf;
                                uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,0xf);
                                uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                                lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                                *(undefined4 *)(param_1 + 10) = uVar4;
                                uVar6 = 0xf;
                              }
                            }
                            else {
                              uVar10 = 0xe;
                              uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,0xe);
                              uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                              lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                              *(undefined4 *)(param_1 + 10) = uVar4;
                              uVar6 = 0xe;
                            }
                          }
                          else {
                            uVar10 = 0xd;
                            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,0xd);
                            uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                            lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                            *(undefined4 *)(param_1 + 10) = uVar4;
                            uVar6 = 0xd;
                          }
                        }
                        else {
                          uVar10 = 0xc;
                          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,0xc);
                          uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                          lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                          *(undefined4 *)(param_1 + 10) = uVar4;
                          uVar6 = 0xc;
                        }
                      }
                      else {
                        uVar10 = 0xb;
                        uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,0xb);
                        uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                        lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                        *(undefined4 *)(param_1 + 10) = uVar4;
                        uVar6 = 0xb;
                      }
                    }
                    else {
                      uVar10 = 10;
                      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,10);
                      uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                      lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                      *(undefined4 *)(param_1 + 10) = uVar4;
                      uVar6 = 10;
                    }
                  }
                  else {
                    uVar10 = 9;
                    uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,9);
                    uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                    lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                    *(undefined4 *)(param_1 + 10) = uVar4;
                    uVar6 = 9;
                  }
                }
                else {
                  uVar10 = 8;
                  uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,8);
                  uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                  lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                  *(undefined4 *)(param_1 + 10) = uVar4;
                  uVar6 = 8;
                }
              }
              else {
                uVar10 = 7;
                uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,7);
                uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
                lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
                *(undefined4 *)(param_1 + 10) = uVar4;
                uVar6 = 7;
              }
            }
            else {
              uVar10 = 6;
              uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,6);
              uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
              lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
              *(undefined4 *)(param_1 + 10) = uVar4;
              uVar6 = 6;
            }
          }
          else {
            uVar10 = 5;
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,5);
            uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
            lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
            *(undefined4 *)(param_1 + 10) = uVar4;
            uVar6 = 5;
          }
        }
        else {
          uVar10 = 4;
          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,4);
          uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
          lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
          *(undefined4 *)(param_1 + 10) = uVar4;
          uVar6 = 4;
        }
      }
      else {
        uVar10 = 3;
        uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,3);
        uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
        lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
        *(undefined4 *)(param_1 + 10) = uVar4;
        uVar6 = 3;
      }
    }
    else {
      uVar10 = 2;
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar8,2);
      uVar9 = (ulong)*(uint *)((long)param_1 + 0x34);
      lVar8 = (long)*(int *)((long)param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 10) = uVar4;
      uVar6 = 2;
    }
    iVar5 = jdiv_round_up(lVar8 * uVar9,uVar6);
  }
  else {
    uVar10 = 1;
    iVar5 = iVar2 * *(int *)((long)param_1 + 0x34);
    *(int *)(param_1 + 10) = (int)param_1[6] * iVar2;
  }
  *(int *)((long)param_1 + 0x54) = iVar5;
  *(undefined4 *)(param_1 + 0x2d) = uVar10;
  *(undefined4 *)((long)param_1 + 0x16c) = uVar10;
  return;
}

