
void EC_POINT_free(EC_POINT *point)

{
  if (point != (EC_POINT *)0x0) {
    if (*(code **)(*(long *)point + 0x58) != (code *)0x0) {
      (**(code **)(*(long *)point + 0x58))(point);
    }
    CRYPTO_free(point);
    return;
  }
  return;
}

