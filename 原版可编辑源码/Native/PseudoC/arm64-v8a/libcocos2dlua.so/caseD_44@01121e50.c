
undefined8 switchD_01119da4::caseD_44(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *unaff_x26;
  char *unaff_x27;
  
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  if ((*(long *)(unaff_x20 + 0x40) == 0) || (*(long *)(unaff_x20 + 0x48) == 0)) {
    builtin_strncpy(unaff_x27,"Sorry, can not handle image",0x1c);
    _TIFFfree(*(void **)(unaff_x20 + 0x28));
    _TIFFfree(*(void **)(unaff_x20 + 0x30));
    _TIFFfree(*(void **)(unaff_x20 + 0x38));
    uVar1 = 0;
    unaff_x26[1] = 0;
    unaff_x26[2] = 0;
    *unaff_x26 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

