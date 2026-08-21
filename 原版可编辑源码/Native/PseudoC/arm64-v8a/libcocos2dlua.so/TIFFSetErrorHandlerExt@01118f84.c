
undefined8 TIFFSetErrorHandlerExt(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _TIFFerrorHandlerExt;
  _TIFFerrorHandlerExt = param_1;
  return uVar1;
}

