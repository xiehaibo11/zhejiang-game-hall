
int _TIFFgetMode(char *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  if ((cVar1 != 'a') && (cVar1 != 'w')) {
    if (cVar1 == 'r') {
      return (uint)(param_1[1] == '+') << 1;
    }
    TIFFErrorExt(0,param_2,"\"%s\": Bad mode",param_1);
    return -1;
  }
  iVar2 = 0x242;
  if (cVar1 != 'w') {
    iVar2 = 0x42;
  }
  return iVar2;
}

