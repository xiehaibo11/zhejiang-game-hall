
long FUN_01342ad0(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,int param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x26;
  undefined4 unaff_w27;
  undefined4 unaff_000040dc;
  
  *(undefined4 *)(param_4 + -1) =
       *(undefined4 *)
        (unaff_x26 +
         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(CONCAT44(unaff_000040dc,unaff_w27) + -1) +
                         0x13) + 0x1af);
  *(int *)(param_4 + 3) = (param_6 + 2) * 2;
  *(undefined4 *)(param_4 + 7) = param_2;
  *(undefined4 *)(param_4 + 0xb) = unaff_w27;
  if (param_7 != 0x10) {
    lVar1 = 0x10;
    uVar2 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      *(int *)(param_4 + lVar1 + -1) = (int)uVar2;
      lVar1 = lVar1 + 4;
    } while (lVar1 != param_7);
  }
  return param_4;
}

