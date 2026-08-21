
void FUN_00a10540(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  uVar4 = *param_1;
  local_24 = 1;
  iVar1 = setsockopt(param_2,6,1,&local_24,4);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)__errno();
    uVar3 = FUN_00a155d4(param_1,*puVar2);
    FUN_00a22d58(uVar4,"Could not set TCP_NODELAY: %s\n",uVar3);
  }
  else {
    FUN_00a22d58(uVar4,"TCP_NODELAY set\n");
  }
  return;
}

