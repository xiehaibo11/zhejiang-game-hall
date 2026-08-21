
void FUN_00c1cc3c(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = 0;
  lVar7 = *(long *)(param_1 + 0x10);
  pcVar4 = 
  "__index__newindex__gc__mode__eq__len__lt__le__concat__call__add__sub__mul__div__mod__pow__unm__metatable__tostring__new__pairs__ipairs"
  ;
  do {
    pcVar5 = pcVar4 + 2;
    cVar2 = pcVar4[2];
    while ((cVar2 != '_' && (bVar1 = cVar2 != '\0', cVar2 = '\0', bVar1))) {
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
    uVar3 = FUN_00bfba1c(param_1,pcVar4,(long)pcVar5 - (long)pcVar4);
    *(undefined8 *)(lVar7 + uVar6 * 8 + 0x170) = uVar3;
    uVar6 = (ulong)((int)uVar6 + 1);
    pcVar4 = pcVar5;
  } while (cVar2 != '\0');
  return;
}

