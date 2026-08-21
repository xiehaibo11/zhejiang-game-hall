
long FUN_00c0e9cc(long *param_1,long param_2,long param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  do {
    do {
      if (*(ushort *)(param_2 + 8) == 0) {
        return 0;
      }
      lVar4 = *param_1;
      lVar2 = (ulong)*(ushort *)(param_2 + 8) * 0x18;
      param_2 = lVar4 + lVar2;
      if (param_3 == *(long *)(param_2 + 0x10)) {
        *param_4 = *(int *)(param_2 + 4);
        return param_2;
      }
      uVar1 = *(uint *)(lVar4 + lVar2);
    } while ((uVar1 & 0xf0ff0000) != 0x80030000);
    uVar5 = 0;
    lVar2 = (ulong)(ushort)uVar1 * 0x18;
    uVar1 = *(uint *)(lVar4 + lVar2);
    while (lVar3 = lVar4 + lVar2, uVar1 >> 0x1c == 8) {
      while (lVar2 = ((ulong)uVar1 & 0xffff) * 0x18, (uVar1 >> 0x10 & 0xff) != 1) {
        lVar3 = lVar4 + lVar2;
        uVar1 = *(uint *)(lVar4 + lVar2);
        if (uVar1 >> 0x1c != 8) goto LAB_00c0eaa4;
      }
      uVar5 = uVar5 | *(uint *)(lVar3 + 4);
      uVar1 = *(uint *)(lVar4 + lVar2);
    }
LAB_00c0eaa4:
    lVar2 = FUN_00c0e9cc(param_1,lVar3,param_3,param_4,param_5);
    if (lVar2 != 0) {
      if (param_5 != (uint *)0x0) {
        *param_5 = *param_5 | uVar5;
      }
      *param_4 = *param_4 + *(int *)(param_2 + 4);
      return lVar2;
    }
  } while( true );
}

