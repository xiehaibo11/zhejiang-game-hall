
undefined8 FUN_01428460(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x26;
  double dVar4;
  
  uVar2 = param_3;
  do {
    if ((uVar2 & 1) == 0) {
      dVar4 = (double)((int)uVar2 >> 1);
LAB_014284e8:
      if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 0x1b) >> 2 & 1) == 0) {
        *(double *)(*(long *)(param_1 + 0x27) + (ulong)*(uint *)(param_1 + 0x2f) + param_2 * 8) =
             dVar4;
        uVar3 = 0;
      }
      else {
        uVar3 = 2;
      }
      return uVar3;
    }
    lVar1 = unaff_x26 + (ulong)*(uint *)(uVar2 - 1);
    if (((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0x140)) || (*(short *)(lVar1 + 7) == 0x43))
    {
      dVar4 = *(double *)(uVar2 + 3);
      goto LAB_014284e8;
    }
    uVar2 = thunk_FUN_01349c30(param_3);
  } while( true );
}

