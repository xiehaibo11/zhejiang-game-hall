
undefined8 TIFFSetWarningHandlerExt(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _TIFFwarningHandlerExt;
  _TIFFwarningHandlerExt = param_1;
  return uVar1;
}

