
undefined8 FUN_00c13904(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  undefined4 local_4;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x168);
  *(long *)(lVar5 + 0x10) = param_1;
  uVar2 = FUN_00c132c0(param_1,lVar5,0);
  uVar3 = FUN_00c29ac0(param_1,2);
  puVar4 = (uint *)FUN_00c0eb40(lVar5,uVar2);
  if (((*puVar4 >> 0x1c == 1) && (puVar4[1] != 0xffffffff)) &&
     (puVar4 = (uint *)FUN_00c0e9cc(lVar5,puVar4,uVar3,&local_4,0), puVar4 != (uint *)0x0)) {
    lVar5 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(lVar5 + -8) = local_4;
    *(undefined4 *)(lVar5 + -4) = 0xfff90000;
    uVar1 = *puVar4;
    if (uVar1 >> 0x1c == 9) {
      return 1;
    }
    if (uVar1 >> 0x1c == 10) {
      puVar4 = *(uint **)(param_1 + 0x28);
      *(uint **)(param_1 + 0x28) = puVar4 + 2;
      *puVar4 = uVar1 & 0x7f;
      puVar4[1] = 0xfff90000;
      puVar4 = *(uint **)(param_1 + 0x28);
      *(uint **)(param_1 + 0x28) = puVar4 + 2;
      *puVar4 = uVar1 >> 8 & 0x7f;
      puVar4[1] = 0xfff90000;
      return 3;
    }
  }
  return 0;
}

