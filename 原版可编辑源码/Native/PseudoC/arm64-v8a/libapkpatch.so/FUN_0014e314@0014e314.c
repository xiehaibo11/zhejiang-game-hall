
byte FUN_0014e314(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(long **)(param_1 + 0x18) + 10);
    if (cVar1 == '\x02') {
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 8))();
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

