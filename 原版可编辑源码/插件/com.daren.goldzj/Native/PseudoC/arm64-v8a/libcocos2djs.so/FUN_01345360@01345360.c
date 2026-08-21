
undefined8 FUN_01345360(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x26;
  
  uVar7 = (ulong)*(uint *)(param_2 + 7);
  if (uVar7 != *(uint *)(param_1 + 7)) {
LAB_0134550c:
    return *(undefined8 *)(unaff_x26 + 0xc0);
  }
  while( true ) {
    uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + -1) + 7);
    uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
    if ((int)param_2 == (int)param_1) break;
    uVar4 = uVar2 | uVar3 << 8;
    if ((uVar4 & 0x2020) == 0) goto LAB_0134550c;
    uVar1 = uVar3 & 7;
    if ((uVar4 & 0x1111) == 0) {
      bVar5 = (uVar3 & 7) == 0;
      bVar6 = (uVar2 & 7) == 0;
      uVar4 = uVar4 & 0x808;
      if (uVar4 == 0x808) {
        if (bVar6) {
          param_2 = param_2 + 0xb;
        }
        else {
          param_2 = *(long *)(param_2 + 0x13);
        }
        if (bVar5) {
          param_1 = param_1 + 0xb;
        }
        else {
          param_1 = *(long *)(param_1 + 0x13);
        }
        uVar8 = 0;
        goto LAB_013454e8;
      }
      if (uVar4 == 0) {
        if (bVar6) {
          param_2 = param_2 + 0xb;
        }
        else {
          param_2 = *(long *)(param_2 + 0x13);
        }
        if (bVar5) {
          param_1 = param_1 + 0xb;
        }
        else {
          param_1 = *(long *)(param_1 + 0x13);
        }
        uVar8 = 0;
        goto LAB_0134549c;
      }
      if (uVar4 != 8) {
        if (bVar6) {
          param_2 = param_2 + 0xb;
        }
        else {
          param_2 = *(long *)(param_2 + 0x13);
        }
        if (bVar5) {
          param_1 = param_1 + 0xb;
        }
        else {
          param_1 = *(long *)(param_1 + 0x13);
        }
        uVar8 = 0;
        goto LAB_0134540c;
      }
      if (bVar6) {
        param_2 = param_2 + 0xb;
      }
      else {
        param_2 = *(long *)(param_2 + 0x13);
      }
      if (bVar5) {
        param_1 = param_1 + 0xb;
      }
      else {
        param_1 = *(long *)(param_1 + 0x13);
      }
      uVar8 = 0;
      goto LAB_01345454;
    }
    if ((uVar2 & 7) == 5) {
LAB_01345564:
      param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      if ((uVar1 == 5) ||
         ((uVar1 == 1 && (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 200))))) {
        param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
      }
    }
    else {
      if ((uVar2 & 7) == 1) {
        if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 200)) goto LAB_01345564;
      }
      if (uVar1 != 5) {
        if (uVar1 != 1) {
LAB_01345594:
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2588));
        }
        if (*(int *)(param_1 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) goto LAB_01345594;
      }
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    }
  }
LAB_01345504:
  return *(undefined8 *)(unaff_x26 + 0xb8);
LAB_013454e8:
  if (uVar8 == uVar7) goto LAB_01345504;
  if (*(char *)(param_2 + uVar8) != *(char *)(param_1 + uVar8)) goto LAB_0134550c;
  uVar8 = uVar8 + 1;
  goto LAB_013454e8;
LAB_0134549c:
  if (uVar8 == uVar7) goto LAB_01345504;
  if (*(short *)(param_2 + uVar8 * 2) != *(short *)(param_1 + uVar8 * 2)) goto LAB_0134550c;
  uVar8 = uVar8 + 1;
  goto LAB_0134549c;
LAB_01345454:
  if (uVar8 == uVar7) goto LAB_01345504;
  if ((ushort)*(byte *)(param_2 + uVar8) != *(ushort *)(param_1 + uVar8 * 2)) goto LAB_0134550c;
  uVar8 = uVar8 + 1;
  goto LAB_01345454;
LAB_0134540c:
  if (uVar8 == uVar7) goto LAB_01345504;
  if (*(ushort *)(param_2 + uVar8 * 2) != (ushort)*(byte *)(param_1 + uVar8)) goto LAB_0134550c;
  uVar8 = uVar8 + 1;
  goto LAB_0134540c;
}

