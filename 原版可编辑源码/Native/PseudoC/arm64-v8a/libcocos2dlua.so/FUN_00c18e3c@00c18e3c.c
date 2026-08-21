
void FUN_00c18e3c(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_2 + 8);
  while( true ) {
    cVar2 = *(char *)(param_2 + 9);
    *(byte *)(param_2 + 8) = bVar1 & 0xfc;
    if (cVar2 != '\f') break;
    *(byte *)(param_2 + 8) = bVar1 & 0xfc | 4;
    if ((*(long *)(param_2 + 0x20) != 0) && ((*(byte *)(*(long *)(param_2 + 0x20) + 8) & 3) != 0)) {
      FUN_00c18e3c(param_1);
    }
    param_2 = *(long *)(param_2 + 0x10);
    bVar1 = *(byte *)(param_2 + 8);
    if ((bVar1 & 3) == 0) {
      return;
    }
  }
  if (cVar2 == '\x05') {
    if ((0xfffffff6 < (int)((long)**(ulong **)(param_2 + 0x20) >> 0x2f) + 4U) &&
       ((*(byte *)((**(ulong **)(param_2 + 0x20) & 0x7fffffffffff) + 8) & 3) != 0)) {
      FUN_00c18e3c(param_1);
    }
    if (*(char *)(param_2 + 10) == '\0') {
      return;
    }
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
    return;
  }
  if (cVar2 == '\n') {
    return;
  }
  if (cVar2 == '\x04') {
    return;
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = param_2;
  return;
}

