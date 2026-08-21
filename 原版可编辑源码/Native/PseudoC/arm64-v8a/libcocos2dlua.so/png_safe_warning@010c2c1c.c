
void png_safe_warning(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x128);
  if (*(int *)(lVar1 + 0x20) != 0) {
    return;
  }
  if ((param_2 == (char *)0x0) || (cVar2 = *param_2, cVar2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      *(char *)(lVar1 + 0x24 + uVar3) = cVar2;
      if (0x3e < uVar4) break;
      cVar2 = param_2[uVar3 + 1];
      uVar3 = uVar4;
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(lVar1 + uVar4 + 0x24) = 0;
  *(uint *)(lVar1 + 0x20) = *(uint *)(lVar1 + 0x20) | 1;
  return;
}

