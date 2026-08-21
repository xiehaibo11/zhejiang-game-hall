
undefined8 switchD_01119bc4::caseD_4(void)

{
  long unaff_x20;
  undefined8 *unaff_x26;
  char *unaff_x27;
  
  builtin_strncpy(unaff_x27,"Sorry, can not handle image",0x1c);
  _TIFFfree(*(void **)(unaff_x20 + 0x28));
  _TIFFfree(*(void **)(unaff_x20 + 0x30));
  _TIFFfree(*(void **)(unaff_x20 + 0x38));
  unaff_x26[1] = 0;
  unaff_x26[2] = 0;
  *unaff_x26 = 0;
  return 0;
}

