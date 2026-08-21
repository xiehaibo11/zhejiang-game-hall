
void FUN_0139b2c0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x26;
  long unaff_x27;
  
  if (**(char **)(unaff_x26 + 0x1488) != '\0') {
LAB_0139b500:
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2418));
  }
  if ((int)param_1 == (int)param_2) goto LAB_0139b500;
  if ((param_2 & 1) != 0) {
    lVar4 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    if (*(ushort *)(lVar4 + 7) < 0xa9) goto LAB_0139b390;
    lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    if (*(int *)(*(long *)(unaff_x26 + 0xf00) + 0xb) != 0) {
      if (*(ushort *)(lVar4 + 7) == 0x42d) {
        if (*(int *)(lVar4 + 0xf) == *(int *)(lVar2 + 0x23b)) {
          uVar3 = (ulong)*(uint *)(lVar2 + 0x413);
          goto LAB_0139b348;
        }
      }
      else if ((int)lVar4 == *(int *)(lVar2 + 0x15b)) goto LAB_0139b390;
    }
    uVar3 = FUN_013c0ba0(param_2,*(undefined8 *)(unaff_x26 + 0xa38),param_3,param_1,param_2);
    if (((uVar3 & 1) != 0) &&
       ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar3 - 1) + 9) >> 1 & 1) != 0)) {
LAB_0139b348:
      uVar5 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar5 + 0x14;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar4 = uVar5 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar4 = FUN_01348560(param_1,0x14,param_3,uVar3,param_2);
      }
      *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xca0);
      *(int *)(lVar4 + 3) = (int)lVar2;
      *(int *)(lVar4 + 7) = (int)param_1;
      *(int *)(lVar4 + 0xb) = (int)uVar3;
      *(int *)(lVar4 + 0xf) = (int)param_2;
      FUN_01369320(lVar4);
      return;
    }
  }
LAB_0139b390:
  FUN_013f95e0(param_1,param_2);
  return;
}

