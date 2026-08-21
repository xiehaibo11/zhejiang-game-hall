
void FUN_00c21654(long *param_1,ushort *param_2,uint *param_3)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  lVar4 = *param_1;
  uVar5 = *param_3;
  do {
    puVar2 = (uint *)(lVar4 + (ulong)uVar1 * 0x18);
    uVar3 = *puVar2;
    if (uVar3 >> 0x1c == 8) {
      if ((uVar3 >> 0x10 & 0xff) == 1) {
        uVar5 = uVar5 | puVar2[1];
        *param_3 = uVar5;
        uVar3 = *puVar2;
      }
    }
    else if (uVar3 >> 0x1c != 5) {
      *param_3 = uVar3 & 0x3000000 | uVar5;
      return;
    }
    uVar1 = (ushort)uVar3;
  } while( true );
}

