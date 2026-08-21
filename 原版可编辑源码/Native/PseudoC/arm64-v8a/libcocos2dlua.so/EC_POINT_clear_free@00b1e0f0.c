
void EC_POINT_clear_free(EC_POINT *point)

{
  code *pcVar1;
  
  if (point != (EC_POINT *)0x0) {
    pcVar1 = *(code **)(*(long *)point + 0x60);
    if ((pcVar1 != (code *)0x0) ||
       (pcVar1 = *(code **)(*(long *)point + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)(point);
    }
    CRYPTO_clear_free(point,0x28,"crypto/ec/ec_lib.c",0x252);
    return;
  }
  return;
}

