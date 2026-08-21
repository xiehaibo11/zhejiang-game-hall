
/* v8::internal::FlagList::ResetAllFlags() */

void v8::internal::FlagList::ResetAllFlags(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  
  ppuVar3 = &PTR_DAT_01d2f070;
  lVar4 = 0x1d7;
  do {
    switch(*(undefined4 *)(ppuVar3 + -3)) {
    case 0:
      *ppuVar3[-1] = **ppuVar3;
      break;
    case 1:
      *(undefined2 *)ppuVar3[-1] = 0;
      break;
    case 2:
    case 3:
      *(undefined4 *)ppuVar3[-1] = *(undefined4 *)*ppuVar3;
      break;
    case 4:
    case 5:
    case 6:
      *(undefined8 *)ppuVar3[-1] = *(undefined8 *)*ppuVar3;
      break;
    case 7:
      puVar1 = (undefined8 *)ppuVar3[-1];
      uVar5 = *(undefined8 *)*ppuVar3;
      if ((*(char *)(ppuVar3 + 2) != '\0') && (pvVar2 = (void *)*puVar1, pvVar2 != (void *)0x0)) {
        operator_delete__(pvVar2);
      }
      *puVar1 = uVar5;
      *(undefined1 *)(ppuVar3 + 2) = 0;
    }
    lVar4 = lVar4 + -1;
    ppuVar3 = ppuVar3 + 6;
  } while (lVar4 != 0);
  return;
}

