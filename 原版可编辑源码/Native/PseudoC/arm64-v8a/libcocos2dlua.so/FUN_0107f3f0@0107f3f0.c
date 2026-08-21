
undefined8 FUN_0107f3f0(long param_1,int param_2,uint param_3,uint param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x98);
    uVar4 = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x78);
    if ((param_4 & 0x10) == 0) {
      puVar1 = (undefined8 *)(lVar3 + 0x70);
    }
    do {
      uVar2 = FUN_0107e938(lVar3,*(undefined8 *)(param_1 + 0xa0),param_2 + (int)uVar4,
                           param_4 | 0x100);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(undefined8 *)(param_5 + uVar4 * 8) = *puVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return 0;
}

