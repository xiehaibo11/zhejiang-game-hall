
void jinit_forward_dct(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xf8);
  *(undefined8 **)(param_1 + 0x228) = puVar1;
  *puVar1 = FUN_00d98b3c;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar3 = 0;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x58);
    do {
      uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x100);
      *puVar1 = uVar2;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 0x5c));
  }
  return;
}

