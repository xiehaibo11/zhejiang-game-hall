
void FUN_01116638(void)

{
  long unaff_x19;
  uint *unaff_x20;
  int unaff_w24;
  ulong *unaff_x25;
  
  for (; unaff_w24 != 0; unaff_w24 = unaff_w24 + -1) {
    if (*(char *)(unaff_x19 + 0x10) < '\0') {
      TIFFSwabLong(unaff_x20);
    }
    *unaff_x25 = (ulong)*unaff_x20;
    unaff_x20 = unaff_x20 + 1;
    unaff_x25 = unaff_x25 + 1;
  }
  switchD_011154ec::caseD_2();
  return;
}

