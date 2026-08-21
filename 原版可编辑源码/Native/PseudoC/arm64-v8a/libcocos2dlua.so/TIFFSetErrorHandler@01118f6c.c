
undefined * TIFFSetErrorHandler(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = _TIFFerrorHandler;
  _TIFFerrorHandler = param_1;
  return puVar1;
}

