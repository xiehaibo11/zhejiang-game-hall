
void FUN_01340f40(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x26;
  
  lVar4 = *(long *)(&stack0x00000000 + param_3 * 8);
  iVar5 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  if (*(int *)(param_2 + 0x1f) == iVar5) {
LAB_01340ffc:
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x17);
    FUN_01348140(lVar4,*(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 7) + 3),param_3,
                 unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb));
    return;
  }
LAB_01340f78:
  uVar1 = unaff_x26 + (ulong)*(uint *)(lVar4 + -1);
  uVar6 = uVar1;
  do {
    uVar6 = unaff_x26 + (ulong)*(uint *)(uVar6 + 0x13);
    if ((uVar6 & 1) == 0) goto LAB_0134102c;
    sVar3 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7);
    if (sVar3 == 0x439) {
      uVar6 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar6 + 0xb) + 3);
      if ((uVar6 & 1) == 0) goto LAB_0134102c;
      break;
    }
  } while (sVar3 == 0xa2);
  do {
    if ((int)uVar6 == *(int *)(param_2 + 0x1f)) goto LAB_01340ffc;
    if ((*(int *)(uVar6 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xca8)) ||
       (lVar2 = unaff_x26 + (ulong)*(uint *)(uVar6 + 0x23), (int)lVar2 == iVar5)) break;
    uVar6 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb);
  } while( true );
LAB_0134102c:
  lVar4 = unaff_x26 + (ulong)*(uint *)(uVar1 + 0xf);
  if (*(short *)(uVar1 + 7) != 0xab) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  goto LAB_01340f78;
}

