
float png_get_x_offset_inches(long param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xdc) == '\x01')) {
    fVar1 = (float)((double)(long)*(int *)(param_2 + 0xd4) * 3.937e-05);
  }
  return fVar1;
}

