
void TIFFSetSubDirectory(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x32) = 0;
  TIFFReadDirectory();
  return;
}

