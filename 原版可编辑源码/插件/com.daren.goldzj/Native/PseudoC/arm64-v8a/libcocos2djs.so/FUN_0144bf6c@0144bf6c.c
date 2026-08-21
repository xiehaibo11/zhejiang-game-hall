
void FUN_0144bf6c(long param_1,ulong param_2,undefined8 param_3,long param_4,int param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int unaff_w19;
  long unaff_x26;
  double dVar10;
  
  lVar6 = unaff_x26 + (ulong)*(uint *)(param_1 + -1);
  if ((int)lVar6 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
    dVar10 = *(double *)(param_1 + 3);
    uVar9 = **(ulong **)(unaff_x26 + 0x1428);
    uVar5 = uVar9 + 0xc;
    if (uVar5 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar6 = uVar9 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar5;
    }
    else {
      lVar6 = FUN_01348560(param_1,0xc);
    }
    *(int *)(lVar6 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(lVar6 + 3) = dVar10 + (double)((int)param_2 >> 1);
    FUN_0144bee4(0xe);
    return;
  }
  uVar1 = *(ushort *)(lVar6 + 7);
  bVar4 = (param_2 & 1) == 0;
  iVar3 = (unaff_w19 + -1) * 2;
  if (uVar1 == 0x43) {
    if (((bVar4) ||
        (lVar6 = unaff_x26 + (ulong)*(uint *)(param_2 - 1),
        (int)lVar6 == (int)*(undefined8 *)(unaff_x26 + 0x140))) || (*(short *)(lVar6 + 7) == 0x43))
    {
      uVar8 = 0x1e;
      goto LAB_0144c11c;
    }
  }
  else if (!bVar4) {
    if (uVar1 < 0x40) {
      if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) < 0x40) {
        *(int *)(param_4 + -0x20) = iVar3;
        FUN_013bf600();
        FUN_0144bee4(0x20);
        return;
      }
    }
    else if ((uVar1 == 0x41) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x41))
    {
      *(int *)(param_4 + -0x20) = iVar3;
      uVar5 = FUN_013e9ae0();
      if ((uVar5 & 1) != 0) {
        FUN_0144bee4(0x40);
        return;
      }
      if (param_5 == 0) {
        lVar6 = param_8 * 4 + 0x1f;
        uVar7 = (int)unaff_x26 + *(int *)(param_6 + lVar6);
        uVar2 = uVar7 | 0xfe;
        if (uVar7 != uVar2) {
          *(uint *)(param_6 + lVar6) = uVar2;
          *(undefined4 *)(param_6 + 0x17) = 0;
        }
      }
      *(int *)(param_4 + -0x20) = iVar3;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
    }
  }
  uVar8 = 0xfe;
LAB_0144c11c:
  *(int *)(param_4 + -0x20) = iVar3;
  thunk_FUN_01391c34(param_2,param_1);
  FUN_0144bee4(uVar8);
  return;
}

