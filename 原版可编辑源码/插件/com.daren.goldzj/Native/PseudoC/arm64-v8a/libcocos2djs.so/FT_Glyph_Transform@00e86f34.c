
undefined8 FT_Glyph_Transform(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    return 6;
  }
  if (*(long *)(param_1 + 8) != 0) {
    pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x28);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
      if (param_2 != 0) {
        FT_Vector_Transform(param_1 + 0x18,param_2);
      }
      return 0;
    }
    return 0x12;
  }
  return 6;
}

