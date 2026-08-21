
undefined8 FUN_00a67c9c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *param_1;
  puVar6 = *(undefined8 **)(lVar5 + 0x218);
  if (*(char *)((long)param_1 + 0x3ce) != '\0') {
    FUN_00a38740(lVar5,"Doing the SSL/TLS handshake on the data stream\n");
    uVar1 = FUN_00a2d590(param_1,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int *)((long)param_1 + 0x6cc) == 0x21) {
    *(undefined8 *)*puVar6 = 0;
    FUN_00a30ed8(lVar5,*(undefined8 *)(lVar5 + 0x8cf8));
    uVar4 = *puVar6;
    uVar1 = 0xffffffff;
    lVar5 = -1;
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
    lVar5 = param_1[0xda];
    uVar2 = *puVar6;
    uVar1 = 1;
    uVar3 = 0xffffffff;
    uVar4 = 0;
  }
  FUN_00a49fc0(param_1,uVar1,lVar5,0,uVar2,uVar3,uVar4);
  *(undefined1 *)(param_1 + 199) = 1;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  return 0;
}

