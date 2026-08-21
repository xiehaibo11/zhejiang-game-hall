
void FUN_01150bfc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    pcVar1 = DAT_017961d8;
    if ((*(int *)(param_1 + 4) == 0) && (pcVar1 = DAT_017961f0, *(int *)(param_1 + 0x14) == 0)) {
      if (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8)) {
        lVar2 = *(long *)(param_1 + 0x58);
        lVar3 = 0;
        do {
          lVar4 = lVar3 * 4;
          *(char *)(*(long *)(param_1 + 0x48) + lVar3) = (char)*(undefined4 *)(lVar2 + lVar4);
          lVar2 = *(long *)(param_1 + 0x58);
          lVar3 = lVar3 + 1;
          *(undefined4 *)(lVar2 + lVar4) = 0;
        } while (lVar3 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
      }
    }
    else {
      (*pcVar1)(param_1);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  return;
}

