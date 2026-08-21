
void FT_Done_Glyph(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)*param_1;
    if (*(code **)(param_1[1] + 0x18) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x18))(param_1);
    }
    FUN_00e139fc(uVar1,param_1);
    return;
  }
  return;
}

