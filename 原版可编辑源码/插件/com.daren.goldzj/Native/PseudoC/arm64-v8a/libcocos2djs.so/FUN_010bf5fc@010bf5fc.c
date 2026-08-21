
void FUN_010bf5fc(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  double dVar3;
  
  lVar1 = *(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f);
  if ((param_4 & 1) == 0) {
    if (-1 < (int)param_4) {
      iVar2 = (int)param_4 >> 1;
      if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(lVar1 + param_3) = (char)iVar2;
      return;
    }
  }
  else {
    dVar3 = *(double *)(param_4 + 3);
    if (0.0 < dVar3) {
      if (255.0 < dVar3) {
        *(undefined1 *)(lVar1 + param_3) = 0xff;
        return;
      }
      *(char *)(lVar1 + param_3) = (char)(long)(double)(long)dVar3;
      return;
    }
  }
  *(undefined1 *)(lVar1 + param_3) = 0;
  return;
}

