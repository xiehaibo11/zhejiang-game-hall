
undefined8 FUN_00a189c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a48000();
  if ((int)uVar1 != 0) {
    FUN_00a23020(param_1,"PRNG seeding failed");
    uVar1 = 2;
  }
  return uVar1;
}

