
undefined8 FT_Glyph_Transform(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
    uVar1 = 6;
  }
  else {
    pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x28);
    if (pcVar2 == (code *)0x0) {
      uVar1 = 0x12;
    }
    else {
      (*pcVar2)(param_1,param_2);
      if (param_2 != 0) {
        FT_Vector_Transform(param_1 + 0x18,param_2);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

