
undefined8 FUN_01429440(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long extraout_x1;
  int iVar2;
  double dVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x26;
  double dVar6;
  
  lVar4 = *(long *)(param_1 + 0x27);
  uVar5 = (ulong)*(uint *)(param_1 + 0x2f);
  do {
    if ((param_3 & 1) == 0) {
      iVar2 = (int)param_3 >> 1;
LAB_014294fc:
      *(int *)(lVar4 + uVar5 + param_2 * 4) = iVar2;
      return 0;
    }
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_3 - 1);
    if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      dVar6 = *(double *)(param_3 + 3);
      dVar3 = (double)(long)dVar6;
      if (SBORROW8((long)dVar3,1) || SCARRY8((long)dVar3,1)) {
        FUN_013c0b40();
        param_2 = extraout_x1;
        dVar3 = dVar6;
      }
      iVar2 = SUB84(dVar3,0);
      goto LAB_014294fc;
    }
    if (*(short *)(lVar1 + 7) == 0x43) {
      param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xf);
    }
    else {
      param_3 = thunk_FUN_01349c30(param_3);
    }
  } while( true );
}

