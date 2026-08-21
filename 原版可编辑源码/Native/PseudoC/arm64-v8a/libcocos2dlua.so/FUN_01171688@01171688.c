
void FUN_01171688(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)cpHashSetRemove(*(undefined8 *)(param_1 + 0x30),param_3,param_2);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar2 + 1);
    *puVar2 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      cpArrayPush(uVar3,puVar2);
    }
    uVar3 = cpHashSetInsert(*(undefined8 *)(param_1 + 0x30),param_3,param_2,FUN_01171d00,param_1);
    (**(code **)(param_1 + 8))(param_2);
    FUN_01171d84(param_1,uVar3);
    return;
  }
  return;
}

