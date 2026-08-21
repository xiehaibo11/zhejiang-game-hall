
byte FUN_0183e4bc(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(long **)(param_1 + 0x18) + 0xb);
    if (cVar1 == '\x02') {
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}

