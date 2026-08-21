
void FUN_00c26828(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong extraout_x1;
  int iVar6;
  uint *unaff_x21;
  undefined1 auVar7 [16];
  undefined1 auStack_8 [4];
  undefined4 local_4;
  
  iVar6 = *(int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = iVar6;
  if (0x14 < iVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00c2520c(param_1,0x863);
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar5 = (ulong)uVar2;
  if (uVar2 == 0x102) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 8);
    FUN_00c2593c();
    goto LAB_00c268f0;
  }
  if (uVar2 == 0x2b) {
    FUN_00c2593c();
    FUN_00c26828(param_1,param_2);
    goto LAB_00c268f0;
  }
  if (uVar2 == 0x2d) {
    FUN_00c2593c();
    FUN_00c26828(param_1,param_2);
    *param_2 = -*param_2;
    goto LAB_00c268f0;
  }
  if (uVar2 == 0x7e) {
    FUN_00c2593c();
    FUN_00c26828(param_1,param_2);
    *param_2 = ~*param_2;
    goto LAB_00c268f0;
  }
  if (uVar2 == 0x21) {
    FUN_00c2593c();
    FUN_00c26828(param_1,param_2);
    param_2[1] = 9;
    *param_2 = (uint)(*param_2 == 0);
    goto LAB_00c268f0;
  }
  if (uVar2 != 0x28) {
    if (uVar2 == 0x2a) {
      FUN_00c2593c();
      FUN_00c26828(param_1,param_2);
      puVar3 = (uint *)FUN_00c0eb40(*(undefined8 *)(param_1 + 0x50),param_2[1]);
      uVar2 = *puVar3;
      if (uVar2 >> 0x1d != 1) {
        auVar7 = FUN_00c2564c(param_1,puVar3);
        lVar4 = auVar7._0_8_;
        while( true ) {
          FUN_00c26828(lVar4,auVar7._8_8_);
          FUN_00c26d5c(lVar4,auVar7._8_8_,0);
          if (*(int *)(lVar4 + 4) != 0x2c) break;
          FUN_00c2593c(lVar4);
        }
        return;
      }
      *param_2 = 0;
      param_2[1] = uVar2 & 0xffff;
    }
    else if (uVar2 == 0x26) {
      FUN_00c2593c();
      FUN_00c26828(param_1,param_2);
      uVar2 = FUN_00c0e7d0(*(undefined8 *)(param_1 + 0x50),param_2[1] + 0x20030000,8);
      param_2[1] = uVar2;
    }
    else if (uVar2 == 0x12a) {
      FUN_00c2593c(param_1);
      FUN_00c27590(param_1,param_2,1);
    }
    else if (uVar2 == 299) {
      FUN_00c2593c(param_1);
      FUN_00c27590(param_1,param_2,0);
    }
    else if (uVar2 == 0x100) {
      uVar2 = **(uint **)(param_1 + 0x18) >> 0x1c;
      if (uVar2 == 0xb) {
        *param_2 = (*(uint **)(param_1 + 0x18))[1];
        param_2[1] = (uint)**(ushort **)(param_1 + 0x18);
      }
      else if (uVar2 == 0xc) {
        *param_2 = *(uint *)(param_1 + 0xc);
        param_2[1] = (uint)**(ushort **)(param_1 + 0x18);
      }
      else {
        if (uVar2 != 6) goto LAB_00c26ce8;
        uVar2 = *(uint *)(param_1 + 0xc);
        *param_2 = uVar2;
        param_2[1] = uVar2;
      }
      FUN_00c2593c(param_1);
    }
    else {
      if (uVar2 != 0x101) {
LAB_00c26ce8:
                    /* WARNING: Subroutine does not return */
        FUN_00c24fe0(param_1,uVar5,0xa7b);
      }
      iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x10);
      while (iVar1 = FUN_00c2593c(param_1), iVar1 == 0x101) {
        iVar6 = iVar6 + *(int *)(*(long *)(param_1 + 0x10) + 0x10);
      }
      *param_2 = iVar6 + 1;
      param_2[1] = 0x14;
    }
    goto LAB_00c268f0;
  }
  FUN_00c2593c();
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 - 0x10dU < 0x1d) {
LAB_00c26b44:
    uVar2 = FUN_00c267d0(param_1);
    FUN_00c263a0(param_1,0x29);
    FUN_00c26828(param_1,param_2);
    param_2[1] = uVar2;
  }
  else {
    if (iVar6 == 0x100) {
      if (**(uint **)(param_1 + 0x18) >> 0x1c == 7) goto LAB_00c26b44;
    }
    else if (iVar6 == 0x24) goto LAB_00c26b44;
    FUN_00c26d04(param_1,param_2);
    FUN_00c263a0(param_1,0x29);
  }
LAB_00c268f0:
  do {
    iVar6 = *(int *)(param_1 + 4);
    if (iVar6 == 0x5b) {
      FUN_00c2593c(param_1);
      FUN_00c26d04(param_1,auStack_8);
      puVar3 = (uint *)FUN_00c0eb40(*(undefined8 *)(param_1 + 0x50),param_2[1]);
      if ((*puVar3 >> 0x1d != 1) &&
         (puVar3 = (uint *)FUN_00c0eb40(*(undefined8 *)(param_1 + 0x50),local_4),
         *puVar3 >> 0x1d != 1)) break;
      FUN_00c263a0(param_1,0x5d);
      *param_2 = 0;
    }
    else {
      if ((iVar6 != 0x10c) && (iVar6 != 0x2e)) {
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
        return;
      }
      unaff_x21 = (uint *)FUN_00c0eb40(*(undefined8 *)(param_1 + 0x50),param_2[1]);
      if (*(int *)(param_1 + 4) == 0x10c) {
        if (*unaff_x21 >> 0x1d != 1) goto LAB_00c26cdc;
        unaff_x21 = (uint *)FUN_00c0eb40(*(undefined8 *)(param_1 + 0x50),(short)*unaff_x21);
      }
      FUN_00c2593c(param_1);
      if (*(int *)(param_1 + 4) != 0x100) {
                    /* WARNING: Subroutine does not return */
        FUN_00c258bc(param_1,0x100);
      }
      if ((((*unaff_x21 >> 0x1c != 1) || (unaff_x21[1] == 0xffffffff)) ||
          (puVar3 = (uint *)FUN_00c0e9cc(*(undefined8 *)(param_1 + 0x50),unaff_x21,
                                         *(undefined8 *)(param_1 + 0x10),auStack_8,0),
          puVar3 == (uint *)0x0)) || (*puVar3 >> 0x1c == 10)) {
        lVar4 = FUN_00c0ee70((*(long **)(param_1 + 0x50))[2],
                             (int)((long)unaff_x21 - **(long **)(param_1 + 0x50) >> 3) * -0x55555555
                             ,0);
                    /* WARNING: Subroutine does not return */
        FUN_00c24fe0(param_1,0,0xd53,lVar4 + 0x18,*(long *)(param_1 + 0x10) + 0x18);
      }
      uVar2 = 0;
      if (*puVar3 >> 0x1c == 0xb) {
        uVar2 = puVar3[1];
      }
      *param_2 = uVar2;
      FUN_00c2593c(param_1);
    }
    param_2[1] = (uint)(ushort)*puVar3;
  } while( true );
  FUN_00c2564c(param_1,puVar3);
LAB_00c26cdc:
  FUN_00c2564c(param_1,unaff_x21);
  uVar5 = extraout_x1;
  goto LAB_00c26ce8;
}

