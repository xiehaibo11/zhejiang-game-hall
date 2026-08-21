
undefined * TIFFSetWarningHandler(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = _TIFFwarningHandler;
  _TIFFwarningHandler = param_1;
  return puVar1;
}

