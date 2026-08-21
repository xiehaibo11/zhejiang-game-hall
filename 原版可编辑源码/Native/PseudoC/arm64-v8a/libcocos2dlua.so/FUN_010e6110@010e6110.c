
void FUN_010e6110(long param_1,long param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_1 + 0x5c)) {
    lVar3 = *(long *)(param_1 + 0x68);
    lVar4 = 0;
    lVar1 = *(long *)(param_1 + 0x220) + 0x68;
    do {
      lVar2 = lVar4 * 8;
      (**(code **)(lVar1 + lVar2 + -0x50))
                (param_1,lVar3,*(long *)(param_2 + lVar2) + (param_3 & 0xffffffff) * 8,
                 *(long *)(param_4 + lVar2) +
                 (ulong)(uint)(*(int *)(lVar1 + lVar4 * 4) * param_5) * 8);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x60;
    } while (lVar4 < *(int *)(param_1 + 0x5c));
  }
  return;
}

