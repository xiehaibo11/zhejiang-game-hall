
void FUN_00df2270(undefined4 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)((long)param_1 + -0x21);
  uVar3 = NEON_uhadd(uVar2,uVar2 >> 0x10,1);
  uVar3 = NEON_urhadd(uVar3,uVar2 >> 8,1);
  uVar1 = (undefined4)uVar3;
  *param_1 = uVar1;
  param_1[8] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x18] = uVar1;
  return;
}

