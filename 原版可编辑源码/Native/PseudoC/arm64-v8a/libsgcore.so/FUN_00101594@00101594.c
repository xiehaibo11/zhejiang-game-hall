
undefined8 FUN_00101594(long *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 == (long *)0x0) || (param_2 == (char *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_0010145c(param_1,"java/lang/String");
    uVar2 = FUN_001014f0(param_1,uVar1,"<init>","([BLjava/lang/String;)V");
    sVar3 = strlen(param_2);
    uVar4 = (**(code **)(*param_1 + 0x580))(param_1,sVar3 & 0xffffffff);
    (**(code **)(*param_1 + 0x680))(param_1,uVar4,0,sVar3 & 0xffffffff,param_2);
    uVar5 = (**(code **)(*param_1 + 0x538))(param_1,"utf-8");
    uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,uVar1,uVar2,uVar4,uVar5);
    (**(code **)(*param_1 + 0xb8))(param_1,uVar5);
    (**(code **)(*param_1 + 0xb8))(param_1,uVar4);
    (**(code **)(*param_1 + 0xb8))(param_1,uVar1);
  }
  return uVar2;
}

