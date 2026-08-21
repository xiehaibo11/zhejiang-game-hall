
void png_warning_parameter(long param_1,int param_2,char *param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_2 - 1U < 8) && (lVar1 = (long)(int)(param_2 - 1U), param_1 + lVar1 * 0x20 != 0)) {
    if ((param_3 == (char *)0x0) || (cVar2 = *param_3, cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar3 = uVar4 + 1;
        *(char *)(param_1 + lVar1 * 0x20 + uVar4) = cVar2;
        if (0x1e < uVar3) break;
        cVar2 = param_3[uVar4 + 1];
        uVar4 = uVar3;
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + lVar1 * 0x20 + uVar3) = 0;
  }
  return;
}

