
void kiss_fft_alloc(uint param_1,uint param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort uVar10;
  
  uVar6 = (-(ulong)(param_1 - 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(param_1 - 1) << 2) + 0x10c;
  if (param_4 == (ulong *)0x0) {
    puVar2 = calloc((long)(int)uVar6,1);
  }
  else {
    if (param_3 == (uint *)0x0) {
      *param_4 = uVar6;
      return;
    }
    puVar2 = (uint *)0x0;
    if (uVar6 <= *param_4) {
      puVar2 = param_3;
    }
    *param_4 = uVar6;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    if (0 < (int)param_1) {
      iVar4 = 0;
      uVar6 = 0;
      uVar10 = 0x7fff;
      puVar9 = (ushort *)((long)puVar2 + 0x10a);
      do {
        iVar5 = iVar4;
        if (param_2 != 0) {
          iVar5 = (int)uVar6;
        }
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = (iVar5 << 0x11) / (int)param_1;
        }
        uVar8 = uVar7 & 0x1ffff;
        uVar1 = 0x20000 - uVar8;
        if (uVar8 < 0x10001) {
          uVar1 = uVar8;
        }
        if ((uVar1 & 0x7fff) == 0) {
          if ((uVar1 & 0xffff) == 0) {
            uVar3 = 0x8001;
            if ((uVar1 & 0x1ffff) == 0) {
              uVar3 = uVar10;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else if (uVar1 >> 0xf == 0) {
          iVar5 = ((int)(uVar1 * 0x10000) >> 0xf) * ((int)(uVar1 * 0x10000) >> 0x10) + 0x8000 >>
                  0x10;
          iVar5 = (0x7fff - iVar5) +
                  (((int)((((iVar5 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar5 * 2 + 0x8000U &
                          0xffff0000) + 0xe21d0000) >> 0x10) * iVar5 + 0x4000 >> 0xf);
          uVar3 = uVar10;
          if (iVar5 < 0x7fff) {
            uVar3 = (short)iVar5 + 1;
          }
        }
        else {
          iVar5 = ((int)(uVar1 * -0x10000) >> 0xf) * ((int)(uVar1 * -0x10000) >> 0x10) + 0x8000 >>
                  0x10;
          iVar5 = (0x7fff - iVar5) +
                  (((int)((((iVar5 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar5 * 2 + 0x8000U &
                          0xffff0000) + 0xe21d0000) >> 0x10) * iVar5 + 0x4000 >> 0xf);
          uVar3 = 0x8001;
          if (iVar5 < 0x7fff) {
            uVar3 = ~(ushort)iVar5;
          }
        }
        uVar7 = uVar7 + 0x18000 & 0x1ffff;
        uVar8 = 0x20000 - uVar7;
        if (uVar7 < 0x10001) {
          uVar8 = uVar7;
        }
        puVar9[-1] = uVar3;
        if ((uVar8 & 0x7fff) == 0) {
          if ((uVar8 & 0xffff) == 0) {
            uVar3 = 0x8001;
            if ((uVar8 & 0x1ffff) == 0) {
              uVar3 = uVar10;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else if (uVar8 >> 0xf == 0) {
          iVar5 = ((int)(uVar8 * 0x10000) >> 0xf) * ((int)(uVar8 * 0x10000) >> 0x10) + 0x8000 >>
                  0x10;
          iVar5 = (0x7fff - iVar5) +
                  (((int)((((iVar5 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar5 * 2 + 0x8000U &
                          0xffff0000) + 0xe21d0000) >> 0x10) * iVar5 + 0x4000 >> 0xf);
          uVar3 = uVar10;
          if (iVar5 < 0x7fff) {
            uVar3 = (short)iVar5 + 1;
          }
        }
        else {
          iVar5 = ((int)(uVar8 * -0x10000) >> 0xf) * ((int)(uVar8 * -0x10000) >> 0x10) + 0x8000 >>
                  0x10;
          iVar5 = (0x7fff - iVar5) +
                  (((int)((((iVar5 * -0x272 + 0x4000 >> 0xf) + 0x2055) * iVar5 * 2 + 0x8000U &
                          0xffff0000) + 0xe21d0000) >> 0x10) * iVar5 + 0x4000 >> 0xf);
          uVar3 = 0x8001;
          if (iVar5 < 0x7fff) {
            uVar3 = ~(ushort)iVar5;
          }
        }
        uVar6 = uVar6 + 1;
        *puVar9 = uVar3;
        iVar4 = iVar4 + -1;
        puVar9 = puVar9 + 2;
      } while (param_1 != uVar6);
    }
    puVar2 = puVar2 + 2;
    uVar7 = 4;
    do {
      while( true ) {
        iVar4 = 0;
        if (uVar7 != 0) {
          iVar4 = (int)param_1 / (int)uVar7;
        }
        if (param_1 == iVar4 * uVar7) break;
        if (uVar7 == 4) {
          uVar8 = 2;
        }
        else if (uVar7 == 2) {
          uVar8 = 3;
        }
        else {
          uVar8 = uVar7 + 2;
        }
        uVar7 = param_1;
        if ((int)(uVar8 * uVar8) <= (int)param_1 && (int)uVar8 < 0x7d01) {
          uVar7 = uVar8;
        }
      }
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = (int)param_1 / (int)uVar7;
      }
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2 = puVar2 + 2;
      param_1 = uVar8;
    } while (1 < (int)uVar8);
  }
  return;
}

