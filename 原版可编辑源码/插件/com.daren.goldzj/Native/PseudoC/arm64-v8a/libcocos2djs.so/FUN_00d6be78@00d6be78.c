
undefined8 FUN_00d6be78(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar3 = 0;
    iVar2 = iVar4 * 0x33;
    iVar1 = iVar5;
    do {
      FUN_00d6b594(param_1,iVar1,iVar2,iVar3,0,0xff,1);
      FUN_00d6b594(param_1,iVar1 + 1,iVar2,iVar3,0x33,0xff,1);
      FUN_00d6b594(param_1,iVar1 + 2,iVar2,iVar3,0x66,0xff,1);
      FUN_00d6b594(param_1,iVar1 + 3,iVar2,iVar3,0x99,0xff,1);
      FUN_00d6b594(param_1,iVar1 + 4,iVar2,iVar3,0xcc,0xff,1);
      FUN_00d6b594(param_1,iVar1 + 5,iVar2,iVar3,0xff,0xff,1);
      iVar3 = iVar3 + 0x33;
      iVar1 = iVar1 + 6;
    } while (iVar3 != 0x132);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x24;
  } while (iVar4 != 6);
  return 0xd8;
}

