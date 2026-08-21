
undefined8 FUN_00a2e3b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a5e9e8();
  if ((int)uVar1 != 0) {
    FUN_00a38a08(param_1,"PRNG seeding failed");
    uVar1 = 2;
  }
  return uVar1;
}

