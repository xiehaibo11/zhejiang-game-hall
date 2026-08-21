
uint FUN_00c084cc(long param_1,long param_2,uint *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  ushort *puVar6;
  long *plVar7;
  long lVar8;
  
  if (param_1 == 0) {
    *(long *)param_3 = param_2;
    param_3[3] = 0xffffffff;
    param_3[4] = 0xffffffff;
    param_3[2] = 8;
    return 0xffffffff;
  }
  uVar4 = *(int *)(param_1 + 0x38) - 1;
  if ((int)uVar4 < 0) {
LAB_00c08544:
    uVar3 = FUN_00c084cc(*(undefined8 *)(param_1 + 0x20),param_2,param_3,0);
    uVar4 = 0xffffffff;
    if (-1 < (int)uVar3) {
      bVar1 = *(byte *)(param_1 + 0x5b);
      if (bVar1 == 0) {
LAB_00c085a4:
        sVar5 = (short)uVar3;
        lVar8 = param_1 + (ulong)bVar1 * 2;
        *(short *)(lVar8 + 0x1ec) = sVar5;
        if (param_3[2] != 6) {
          sVar5 = (short)*param_3 + -0x3c;
        }
        *(short *)(lVar8 + 0x264) = sVar5;
        *(byte *)(param_1 + 0x5b) = bVar1 + 1;
        uVar4 = (uint)bVar1;
      }
      else {
        uVar4 = 0;
        puVar6 = (ushort *)(param_1 + 0x1ee);
        if (uVar3 == *(ushort *)(param_1 + 0x1ec)) {
          uVar4 = 0;
        }
        else {
          do {
            uVar4 = uVar4 + 1;
            if (bVar1 == uVar4) {
              if (0x3b < bVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_007b6014(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x44),0x3c,
                             "upvalues");
              }
              goto LAB_00c085a4;
            }
            uVar2 = *puVar6;
            puVar6 = puVar6 + 1;
          } while (uVar3 != uVar2);
        }
      }
      *param_3 = uVar4;
      param_3[2] = 7;
      uVar4 = uVar3;
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x90);
    if (param_2 !=
        *(long *)(lVar8 + (ulong)*(ushort *)(param_1 + (long)(int)uVar4 * 2 + 0x5c) * 0x18)) {
      puVar6 = (ushort *)(param_1 + ((long)(*(int *)(param_1 + 0x38) + -2) + 0x2e) * 2);
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 == 0xffffffff) goto LAB_00c08544;
        uVar2 = *puVar6;
        puVar6 = puVar6 + -1;
      } while (param_2 != *(long *)(lVar8 + (ulong)uVar2 * 0x18));
    }
    *param_3 = uVar4;
    param_3[2] = 6;
    param_3[3] = 0xffffffff;
    param_3[4] = 0xffffffff;
    if ((param_4 == 0) && (plVar7 = *(long **)(param_1 + 0x18), plVar7 != (long *)0x0)) {
      bVar1 = *(byte *)((long)plVar7 + 0xc);
      while (uVar4 < bVar1) {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_00c08630;
        bVar1 = *(byte *)((long)plVar7 + 0xc);
      }
      *(byte *)((long)plVar7 + 0xd) = *(byte *)((long)plVar7 + 0xd) | 8;
    }
LAB_00c08630:
    uVar2 = *(ushort *)(param_1 + (ulong)uVar4 * 2 + 0x5c);
    uVar4 = (uint)uVar2;
    param_3[1] = (uint)uVar2;
  }
  return uVar4;
}

