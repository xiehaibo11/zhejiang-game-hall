
long * kiss_fftr_alloc(uint param_1,ulong param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ushort *puVar9;
  ushort uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ushort uVar14;
  long local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if ((param_1 & 1) == 0) {
    iVar3 = (int)param_1 >> 1;
    plVar8 = (long *)kiss_fft_alloc(iVar3,param_2,0,&local_60);
    uVar1 = local_60 + (long)(int)(param_1 & 0xfffffffe) * 4 + 0x18;
    if (param_4 == (ulong *)0x0) {
      plVar8 = calloc((long)(int)uVar1,1);
      param_3 = plVar8;
    }
    else {
      uVar12 = *param_4;
      *param_4 = uVar1;
      if (uVar12 < uVar1) {
        param_3 = (long *)0x0;
        goto LAB_0010fc6c;
      }
    }
    if (param_3 != (long *)0x0) {
      plVar8 = param_3 + 3;
      *param_3 = (long)plVar8;
      param_3[1] = (long)plVar8 + local_60;
      param_3[2] = (long)plVar8 + local_60 + (long)iVar3 * 4;
      plVar8 = (long *)kiss_fft_alloc(iVar3,param_2 & 0xffffffff,plVar8,&local_60);
      if (1 < (int)param_1) {
        lVar11 = 0;
        iVar13 = -(param_1 >> 2);
        uVar14 = 0x7fff;
        plVar8 = (long *)(ulong)(param_1 >> 2);
        puVar9 = (ushort *)(param_3[2] + 2);
        do {
          iVar4 = iVar13;
          if ((int)param_2 != 0) {
            iVar4 = (param_1 >> 2) + (int)lVar11;
          }
          uVar7 = 0;
          if (iVar3 != 0) {
            uVar7 = (iVar4 << 0x10) / iVar3;
          }
          uVar2 = uVar7 & 0x1ffff;
          uVar5 = 0x20000 - uVar2;
          if (uVar2 < 0x10001) {
            uVar5 = uVar2;
          }
          if ((uVar5 & 0x7fff) == 0) {
            if ((uVar5 & 0xffff) == 0) {
              uVar10 = 0x8001;
              if ((uVar5 & 0x1ffff) == 0) {
                uVar10 = uVar14;
              }
            }
            else {
              uVar10 = 0;
            }
          }
          else if (uVar5 >> 0xf == 0) {
            iVar4 = ((int)(uVar5 * 0x10000) >> 0xf) * ((int)(uVar5 * 0x10000) >> 0x10) + 0x8000 >>
                    0x10;
            iVar4 = (0x7fff - iVar4) +
                    (((int)((((iVar4 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar4 * 2 + 0x8000U &
                            0xffff0000) + 0xe21d0000) >> 0x10) * iVar4 + 0x4000 >> 0xf);
            uVar10 = uVar14;
            if (iVar4 < 0x7fff) {
              uVar10 = (short)iVar4 + 1;
            }
          }
          else {
            iVar4 = ((int)(uVar5 * -0x10000) >> 0xf) * ((int)(uVar5 * -0x10000) >> 0x10) + 0x8000 >>
                    0x10;
            iVar4 = (0x7fff - iVar4) +
                    (((int)((((iVar4 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar4 * 2 + 0x8000U &
                            0xffff0000) + 0xe21d0000) >> 0x10) * iVar4 + 0x4000 >> 0xf);
            uVar10 = 0x8001;
            if (iVar4 < 0x7fff) {
              uVar10 = ~(ushort)iVar4;
            }
          }
          uVar7 = uVar7 + 0x18000 & 0x1ffff;
          uVar2 = 0x20000 - uVar7;
          if (uVar7 < 0x10001) {
            uVar2 = uVar7;
          }
          puVar9[-1] = uVar10;
          if ((uVar2 & 0x7fff) == 0) {
            if ((uVar2 & 0xffff) == 0) {
              uVar10 = 0x8001;
              if ((uVar2 & 0x1ffff) == 0) {
                uVar10 = uVar14;
              }
            }
            else {
              uVar10 = 0;
            }
          }
          else if (uVar2 >> 0xf == 0) {
            iVar4 = ((int)(uVar2 * 0x10000) >> 0xf) * ((int)(uVar2 * 0x10000) >> 0x10) + 0x8000 >>
                    0x10;
            iVar4 = (0x7fff - iVar4) +
                    (((int)((((iVar4 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar4 * 2 + 0x8000U &
                            0xffff0000) + 0xe21d0000) >> 0x10) * iVar4 + 0x4000 >> 0xf);
            uVar10 = uVar14;
            if (iVar4 < 0x7fff) {
              uVar10 = (short)iVar4 + 1;
            }
          }
          else {
            iVar4 = ((int)(uVar2 * -0x10000) >> 0xf) * ((int)(uVar2 * -0x10000) >> 0x10) + 0x8000 >>
                    0x10;
            iVar4 = (0x7fff - iVar4) +
                    (((int)((((iVar4 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar4 * 2 + 0x8000U &
                            0xffff0000) + 0xe21d0000) >> 0x10) * iVar4 + 0x4000 >> 0xf);
            uVar10 = 0x8001;
            if (iVar4 < 0x7fff) {
              uVar10 = ~(ushort)iVar4;
            }
          }
          lVar11 = lVar11 + 1;
          *puVar9 = uVar10;
          iVar13 = iVar13 + -1;
          puVar9 = puVar9 + 2;
        } while (lVar11 < iVar3);
      }
    }
  }
  else {
    uVar7 = fprintf((FILE *)0x14d168,"warning: %s\n","Real FFT optimization must be even.\n");
    plVar8 = (long *)(ulong)uVar7;
    param_3 = (long *)0x0;
  }
LAB_0010fc6c:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar8);
  }
  return param_3;
}

