
undefined8 FUN_01428080(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  long unaff_x26;
  double dVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  uVar1 = param_3;
  do {
    if ((uVar1 & 1) == 0) {
      iVar4 = (int)uVar1 >> 1;
LAB_0142812c:
      lVar2 = auVar7._0_8_;
      if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb) + 0x1b) >> 2 & 1) == 0) {
        *(int *)(*(long *)(lVar2 + 0x27) + (ulong)*(uint *)(lVar2 + 0x2f) + auVar7._8_8_ * 4) =
             iVar4;
        uVar3 = 0;
      }
      else {
        uVar3 = 2;
      }
      return uVar3;
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(uVar1 - 1);
    if (((int)lVar2 == (int)*(undefined8 *)(unaff_x26 + 0x140)) || (*(short *)(lVar2 + 7) == 0x43))
    {
      dVar6 = *(double *)(uVar1 + 3);
      dVar5 = (double)(long)dVar6;
      if (SBORROW8((long)dVar5,1) || SCARRY8((long)dVar5,1)) {
        auVar7 = FUN_013c0b40();
        dVar5 = dVar6;
      }
      iVar4 = SUB84(dVar5,0);
      goto LAB_0142812c;
    }
    uVar1 = thunk_FUN_01349c30(param_3);
  } while( true );
}

