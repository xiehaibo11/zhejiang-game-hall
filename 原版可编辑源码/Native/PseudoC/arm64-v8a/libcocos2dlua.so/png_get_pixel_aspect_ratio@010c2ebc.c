
float png_get_pixel_aspect_ratio(long param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((((param_1 != 0) && (param_2 != 0)) && (*(char *)(param_2 + 8) < '\0')) &&
     (*(uint *)(param_2 + 0xe0) != 0)) {
    fVar1 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xe4));
    fVar1 = fVar1 / (float)*(uint *)(param_2 + 0xe0);
  }
  return fVar1;
}

