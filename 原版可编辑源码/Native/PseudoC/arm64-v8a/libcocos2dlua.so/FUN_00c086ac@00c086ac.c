
void FUN_00c086ac(long param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == *(int *)(param_1 + 0x34)) {
    FUN_00c079c0();
    return;
  }
  if (*(int *)(param_1 + 0x70) != param_4) {
    uVar1 = FUN_00c06478();
    uVar2 = FUN_00c06478(param_1,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_00c064c4(param_1,*(undefined4 *)(param_1 + 0x34),0x9c9,uVar1,uVar2,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c07c88();
}

