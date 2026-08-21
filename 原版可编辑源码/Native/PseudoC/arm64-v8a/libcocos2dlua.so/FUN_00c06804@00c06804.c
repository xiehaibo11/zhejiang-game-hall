
void FUN_00c06804(long param_1,ulong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  puVar2 = *(undefined1 **)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar2) {
    puVar2 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
  }
  *puVar2 = (char)uVar5;
  pbVar4 = *(byte **)(param_1 + 0x20);
  *(undefined1 **)(param_1 + 0x40) = puVar2 + 1;
  if (pbVar4 < *(byte **)(param_1 + 0x28)) {
    *(byte **)(param_1 + 0x20) = pbVar4 + 1;
    uVar6 = (uint)*pbVar4;
  }
  else {
    uVar6 = FUN_00c062d0(param_1);
  }
  *(uint *)(param_1 + 0x30) = uVar6;
  if ((uVar6 == 0xd) || (uVar6 == 10)) {
    FUN_00c065b0(param_1);
    uVar6 = *(uint *)(param_1 + 0x30);
  }
  do {
    while (uVar6 == 10) {
LAB_00c06a00:
      puVar2 = (undefined1 *)*puVar1;
      if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar2) {
        puVar2 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
      }
      *puVar2 = 10;
      *puVar1 = puVar2 + 1;
      FUN_00c065b0(param_1);
      if (param_2 == (ulong *)0x0) {
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
        uVar6 = *(uint *)(param_1 + 0x30);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x30);
      }
    }
    if ((int)uVar6 < 0xb) {
      if (uVar6 == 0xffffffff) {
        uVar5 = 0x895;
        if (param_2 == (ulong *)0x0) {
          uVar5 = 0x8ac;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00c064c4(param_1,0x121,uVar5);
      }
LAB_00c069c0:
      puVar2 = (undefined1 *)*puVar1;
      if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar2) {
        puVar2 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
      }
      *puVar2 = (char)uVar6;
      pbVar4 = *(byte **)(param_1 + 0x20);
      *puVar1 = puVar2 + 1;
      if (pbVar4 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar4 + 1;
        uVar6 = (uint)*pbVar4;
        *(uint *)(param_1 + 0x30) = uVar6;
      }
      else {
        uVar6 = FUN_00c062d0(param_1);
        *(uint *)(param_1 + 0x30) = uVar6;
      }
    }
    else {
      if (uVar6 == 0xd) goto LAB_00c06a00;
      uVar7 = 0;
      if (uVar6 != 0x5d) goto LAB_00c069c0;
      while( true ) {
        puVar2 = (undefined1 *)*puVar1;
        if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar2) {
          puVar2 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
        }
        *puVar2 = (char)uVar6;
        pbVar4 = *(byte **)(param_1 + 0x20);
        *puVar1 = puVar2 + 1;
        if (pbVar4 < *(byte **)(param_1 + 0x28)) {
          *(byte **)(param_1 + 0x20) = pbVar4 + 1;
          uVar6 = (uint)*pbVar4;
          *(uint *)(param_1 + 0x30) = uVar6;
        }
        else {
          uVar6 = FUN_00c062d0(param_1);
          *(uint *)(param_1 + 0x30) = uVar6;
        }
        if (uVar6 != 0x3d) break;
        uVar7 = uVar7 + 1;
      }
      if (uVar6 != 0x5d) {
        uVar7 = ~uVar7;
      }
      if (param_3 == uVar7) {
        puVar2 = *(undefined1 **)(param_1 + 0x40);
        if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar2) {
          puVar2 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
        }
        *puVar2 = (char)uVar6;
        pbVar4 = *(byte **)(param_1 + 0x20);
        *(undefined1 **)(param_1 + 0x40) = puVar2 + 1;
        if (pbVar4 < *(byte **)(param_1 + 0x28)) {
          *(byte **)(param_1 + 0x20) = pbVar4 + 1;
          uVar6 = (uint)*pbVar4;
        }
        else {
          uVar6 = FUN_00c062d0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar6;
        if (param_2 != (ulong *)0x0) {
          uVar3 = FUN_00c0a8f4(param_1,*(long *)(param_1 + 0x50) + (ulong)(param_3 + 2),
                               ((int)*(undefined8 *)(param_1 + 0x40) -
                               (int)*(long *)(param_1 + 0x50)) + (param_3 + 2) * -2);
          *param_2 = uVar3 | 0xfffd800000000000;
        }
        return;
      }
    }
  } while( true );
}

