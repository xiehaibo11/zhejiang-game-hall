
undefined8 FUN_00117a44(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  char cVar4;
  
  param_2 = param_2 - ((ulong)(*(byte *)(param_1 + 0xcd) >> 1) & 1);
  if ((param_3 != 0) || (uVar3 = 0, (*(byte *)(param_1 + 0xcd) >> 2 & 1) == 0)) {
    puVar1 = param_1 + 0xce;
    param_1[0xd6] = 0;
    *puVar1 = 0;
    param_1[0xcf] = 0;
    param_1[0xd0] = 0;
    param_1[0xd1] = 0;
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
    param_1[0xd4] = 0;
    param_1[0xd5] = 0;
    uVar3 = FUN_0011be30(param_1[1],param_2,puVar1,param_3,*param_1);
    cVar4 = '\x01';
    if ((int)uVar3 == -10) {
      uVar3 = (**(code **)param_1[1])((undefined8 *)param_1[1],param_2,puVar1,param_3,*param_1);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      cVar4 = '\0';
    }
    if (*(uint *)(param_1 + 0xd4) < 3) {
      bVar2 = *(byte *)(param_1 + 0xcd);
      *(byte *)(param_1 + 0xcd) = bVar2 & 0xf0 | bVar2 & 7 | 4 | cVar4 << 3;
      if (param_3 != 0) {
        *(byte *)(param_1 + 0xcd) =
             bVar2 & 0xf0 | cVar4 << 3 | 4U |
             bVar2 & 1 |
             (byte)(((uint)(((ulong)*(byte *)(param_1[0xd5] + 0x46) ^ 4) >> 2) & 1) << 1);
        return uVar3;
      }
    }
    else {
      uVar3 = 0xfffffff6;
    }
  }
  return uVar3;
}

