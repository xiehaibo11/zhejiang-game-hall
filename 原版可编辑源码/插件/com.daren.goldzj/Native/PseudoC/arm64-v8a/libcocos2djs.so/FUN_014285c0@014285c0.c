
undefined8 FUN_014285c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  double dVar6;
  long unaff_x26;
  double dVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  uVar1 = param_3;
  do {
    if ((uVar1 & 1) == 0) {
      uVar5 = (int)uVar1 >> 1;
      if (0xff < uVar5) {
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0xff;
        }
      }
      uVar4 = (undefined1)uVar5;
LAB_014286c0:
      lVar2 = auVar8._0_8_;
      if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb) + 0x1b) >> 2 & 1) == 0) {
        *(undefined1 *)(*(long *)(lVar2 + 0x27) + (ulong)*(uint *)(lVar2 + 0x2f) + auVar8._8_8_) =
             uVar4;
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
      dVar7 = *(double *)(uVar1 + 3);
      if (dVar7 <= 0.0) {
        uVar4 = 0;
      }
      else if (255.0 <= dVar7) {
        uVar4 = 0xff;
      }
      else {
        dVar6 = (double)(long)(double)(long)dVar7;
        if (SBORROW8((long)dVar6,1) || SCARRY8((long)dVar6,1)) {
          auVar8 = FUN_013c0b40();
          dVar6 = (double)(long)dVar7;
        }
        uVar4 = SUB81(dVar6,0);
      }
      goto LAB_014286c0;
    }
    uVar1 = thunk_FUN_01349c30(param_3);
  } while( true );
}

