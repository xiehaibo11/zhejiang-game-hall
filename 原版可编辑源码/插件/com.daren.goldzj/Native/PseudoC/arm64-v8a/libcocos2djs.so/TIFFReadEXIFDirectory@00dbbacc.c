
void TIFFReadEXIFDirectory(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = _TIFFGetExifFields();
  TIFFReadCustomDirectory(param_1,param_2,uVar1);
  return;
}

