
void FUN_010671e4(long param_1,long param_2,undefined8 *param_3)

{
  if (param_2 != 0) {
    FT_Outline_Transform(param_1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    FT_Outline_Translate(param_1 + 0x28,*param_3,param_3[1]);
    return;
  }
  return;
}

