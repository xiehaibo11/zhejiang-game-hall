
void FUN_015ec2c4(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  
  uVar1 = v8::base::hash_combine(*(ulong *)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  pbVar3 = *(byte **)(param_2 + 0x18);
  if (pbVar3 != pbVar3 + *(long *)(param_2 + 0x10) + *(long *)(param_2 + 8)) {
    lVar4 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10);
    do {
      uVar2 = v8::base::hash_combine(0,(ulong)*pbVar3);
      uVar1 = v8::base::hash_value(uVar1);
      uVar1 = v8::base::hash_combine(uVar2,uVar1);
      lVar4 = lVar4 + -1;
      pbVar3 = pbVar3 + 1;
    } while (lVar4 != 0);
  }
  uVar1 = v8::base::hash_combine(0,uVar1);
  v8::base::hash_combine(uVar1,(ulong)*param_2);
  return;
}

