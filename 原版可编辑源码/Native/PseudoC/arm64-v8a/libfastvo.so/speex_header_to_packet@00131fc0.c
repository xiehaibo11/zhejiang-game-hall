
void speex_header_to_packet(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = calloc(0x50,1);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar2 = param_1[6];
  uVar4 = param_1[9];
  uVar3 = param_1[8];
  uVar6 = param_1[5];
  uVar5 = param_1[4];
  puVar1[7] = param_1[7];
  puVar1[6] = uVar2;
  puVar1[9] = uVar4;
  puVar1[8] = uVar3;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  *param_2 = 0x50;
  return;
}

