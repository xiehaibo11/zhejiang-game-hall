
int FUN_010bb4d8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  uVar1 = uVar3 & 0x7fffffff;
  uVar2 = uVar4 & 0x7fffffff;
  if (uVar1 == uVar2) {
    bVar5 = uVar4 <= uVar3;
    if (uVar4 < uVar3) {
      return 1;
    }
  }
  else {
                    /* try { // try from 010bb500 to 011bb513 has its CatchHandler @ 010bb67c */
    if (uVar2 < uVar1) {
      return 1;
    }
    bVar5 = uVar2 <= uVar1;
  }
  return -(uint)!bVar5;
}

