
void FUN_00c22b10(long *param_1,uint *param_2,ushort param_3,long param_4,long param_5,uint param_6,
                 uint *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = (ulong)param_3;
joined_r0x00c22b2c:
  do {
    if (param_3 == 0) {
      return;
    }
    lVar6 = *param_1;
    lVar2 = uVar7 * 0x18;
    lVar1 = lVar6 + lVar2;
    uVar4 = *(uint *)(lVar6 + lVar2);
    param_3 = *(ushort *)(lVar1 + 8);
    uVar7 = (ulong)param_3;
    if ((uVar4 >> 0x1c) - 9 < 2) {
      uVar4 = *param_7;
      if (*(long *)(lVar1 + 0x10) == 0) goto joined_r0x00c22b2c;
      if (param_6 <= uVar4) {
        return;
      }
      *param_7 = uVar4 + 1;
      uVar5 = *(uint *)(lVar6 + lVar2);
      if (uVar5 >> 0x1c == 9) {
        do {
          lVar2 = (ulong)(ushort)uVar5 * 0x18;
          uVar5 = *(uint *)(lVar6 + lVar2);
        } while (uVar5 >> 0x1c == 8);
        FUN_00c22594(param_1,lVar6 + lVar2,param_4 + (ulong)*(uint *)(lVar1 + 4),
                     param_5 + (ulong)uVar4 * 8,0);
      }
      else {
        FUN_00c22274(param_1,lVar1,param_4 + (ulong)*(uint *)(lVar1 + 4),param_5 + (ulong)uVar4 * 8)
        ;
      }
    }
    else {
      if ((uVar4 & 0xf0ff0000) != 0x80030000) goto joined_r0x00c22b2c;
      do {
        lVar3 = (ulong)(ushort)uVar4 * 0x18;
        lVar2 = lVar6 + lVar3;
        uVar4 = *(uint *)(lVar6 + lVar3);
      } while (uVar4 >> 0x1c == 8);
      FUN_00c22b10(param_1,lVar2,*(undefined2 *)(lVar2 + 8),param_4 + (ulong)*(uint *)(lVar1 + 4),
                   param_5,param_6,param_7);
    }
    if ((*param_2 >> 0x17 & 1) != 0) {
      return;
    }
  } while( true );
}

