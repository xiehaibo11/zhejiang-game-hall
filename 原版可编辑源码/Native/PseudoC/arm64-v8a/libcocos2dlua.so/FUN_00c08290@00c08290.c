
void FUN_00c08290(long param_1,ulong *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_00c08060();
  uVar2 = (uint)param_2[1];
  if (uVar2 == 3) {
    iVar1 = FUN_00c07b10(param_1,*param_2,0xfffffffb);
    uVar2 = param_3 << 8 | 0x27 | iVar1 << 0x10;
  }
  else if (uVar2 == 4) {
    if (((int)((long)*param_2 >> 0x2f) == -0xe) &&
       (uVar2 = (uint)*param_2, uVar2 == (int)(short)uVar2)) {
      uVar2 = uVar2 << 0x10 | param_3 << 8 | 0x29;
    }
    else {
      iVar1 = FUN_00c07b70(param_1,param_2);
      uVar2 = param_3 << 8 | 0x2a | iVar1 << 0x10;
    }
  }
  else if (uVar2 == 5) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 4;
    iVar1 = FUN_00c07b10(param_1,*param_2 & 0x7fffffffffff,0xfffffff5);
    uVar2 = param_3 << 8 | 0x28 | iVar1 << 0x10;
  }
  else {
    if (uVar2 == 0xb) {
      *(char *)(*(long *)(param_1 + 0x48) + (ulong)(uint)*param_2 * 8 + 1) = (char)param_3;
      goto LAB_00c08324;
    }
    if (uVar2 == 0xc) {
      if ((uint)*param_2 == param_3) goto LAB_00c08324;
      uVar2 = (uint)*param_2 << 0x10 | 0x12 | param_3 << 8;
    }
    else {
      if (uVar2 == 0) {
        FUN_00c081ac(param_1,param_3,1);
        goto LAB_00c08324;
      }
      if (2 < uVar2) {
        return;
      }
      uVar2 = uVar2 << 0x10 | 0x2b | param_3 << 8;
    }
  }
  FUN_00c07f70(param_1,uVar2);
LAB_00c08324:
  *(uint *)param_2 = param_3;
  *(uint *)(param_2 + 1) = 0xc;
  return;
}

