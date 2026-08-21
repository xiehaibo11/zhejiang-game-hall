
void FUN_00d8b328(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x1000);
  puVar2[6] = uVar1;
  *puVar2 = uVar1;
  puVar2[1] = 0x1000;
  return;
}

