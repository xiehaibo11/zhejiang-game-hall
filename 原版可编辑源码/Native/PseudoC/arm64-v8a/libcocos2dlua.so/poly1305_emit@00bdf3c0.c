
void poly1305_emit(ulong *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = *param_3;
  uVar4 = param_3[1];
  if ((param_1[2] + (ulong)CARRY8(uVar3,(ulong)(0xfffffffffffffffa < uVar1)) & 0xfffffffffffffffc)
      != 0) {
    uVar3 = uVar3 + (0xfffffffffffffffa < uVar1);
    uVar1 = uVar1 + 5;
  }
  *param_2 = uVar1 + uVar2;
  param_2[1] = uVar3 + uVar4 + (ulong)CARRY8(uVar1,uVar2);
  return;
}

