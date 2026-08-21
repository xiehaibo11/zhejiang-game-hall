
void FT_Library_Version(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar3;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  return;
}

