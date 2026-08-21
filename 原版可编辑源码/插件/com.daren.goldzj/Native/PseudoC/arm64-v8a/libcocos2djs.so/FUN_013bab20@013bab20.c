
void FUN_013bab20(ulong param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x26;
  
  lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x27);
  uVar2 = *(uint *)(lVar1 + 3);
  uVar3 = (ulong)uVar2;
  *(uint *)(param_1 + 0x27) = uVar2;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar2 & 1) != 0)) &&
     (uVar3 = unaff_x26 + uVar3,
     ((uint)*(undefined8 *)((uVar3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_1,param_1 + 0x27,0,2);
  }
  FUN_013f9920(unaff_x26 + (ulong)*(uint *)(lVar1 + 0xf),param_2,*(undefined8 *)(unaff_x26 + 0xb8),
               lVar1,uVar3);
  return;
}

