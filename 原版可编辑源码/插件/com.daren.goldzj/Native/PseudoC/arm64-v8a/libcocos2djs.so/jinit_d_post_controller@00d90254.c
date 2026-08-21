
void jinit_d_post_controller(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x30);
  *(undefined8 **)(param_1 + 600) = puVar4;
  *puVar4 = FUN_00d90320;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(puVar4 + 4) = uVar2;
    if (param_2 == 0) {
      uVar5 = (**(code **)(*(long *)(param_1 + 8) + 0x10))
                        (param_1,1,*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88),uVar2);
      puVar4[3] = uVar5;
    }
    else {
      pcVar6 = *(code **)(*(long *)(param_1 + 8) + 0x20);
      iVar1 = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x88);
      uVar5 = jround_up(*(undefined4 *)(param_1 + 0x8c),uVar2);
      uVar5 = (*pcVar6)(param_1,1,0,iVar1 * iVar3,uVar5,*(undefined4 *)(puVar4 + 4));
      puVar4[2] = uVar5;
    }
  }
  return;
}

