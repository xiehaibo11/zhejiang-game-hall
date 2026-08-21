
uint FUN_00c06324(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar2 = *(uint *)(param_1 + 0x30);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  uVar3 = uVar2;
  while( true ) {
    puVar4 = (undefined1 *)*puVar1;
    if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar4) {
      puVar4 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
    }
    *puVar4 = (char)uVar3;
    pbVar5 = *(byte **)(param_1 + 0x20);
    *puVar1 = puVar4 + 1;
    if (pbVar5 < *(byte **)(param_1 + 0x28)) {
      *(byte **)(param_1 + 0x20) = pbVar5 + 1;
      uVar3 = (uint)*pbVar5;
      *(uint *)(param_1 + 0x30) = uVar3;
    }
    else {
      uVar3 = FUN_00c062d0(param_1);
      *(uint *)(param_1 + 0x30) = uVar3;
    }
    if (uVar3 != 0x3d) break;
    uVar6 = uVar6 + 1;
    uVar3 = 0x3d;
  }
  if (uVar2 != uVar3) {
    uVar6 = ~uVar6;
  }
  return uVar6;
}

