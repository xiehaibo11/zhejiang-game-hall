
void FUN_00c0fc84(long param_1,double *param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3 + 0x88;
  *(long *)(lVar3 + 0xa0) = param_1;
  *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar3 + 0x98);
  if (param_3 == 0x10) {
    dVar4 = *param_2;
    dVar5 = param_2[1];
  }
  else {
    dVar4 = (double)*(float *)param_2;
    dVar5 = (double)*(float *)((long)param_2 + 4);
  }
  FUN_00c030d0(dVar4,lVar1,0xf000035);
  if ((-1 < (long)dVar5) || (NAN(dVar5))) {
    FUN_00c1a64c(lVar1,0x2b);
  }
  FUN_00c030d0(dVar5,lVar1,0xf000035);
  uVar2 = 0x49;
  if (*(byte *)(*(long *)(lVar3 + 0x88) + -1) < 0x61) {
    uVar2 = 0x69;
  }
  FUN_00c1a64c(lVar1,uVar2);
  FUN_00bfba1c(param_1,*(undefined8 *)(lVar3 + 0x98),
               (int)*(undefined8 *)(lVar3 + 0x88) - (int)*(undefined8 *)(lVar3 + 0x98));
  return;
}

