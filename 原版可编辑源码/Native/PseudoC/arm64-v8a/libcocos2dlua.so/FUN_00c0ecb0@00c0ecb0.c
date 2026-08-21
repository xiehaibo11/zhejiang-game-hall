
uint FUN_00c0ecb0(long *param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  param_2 = param_2 & 0xffffffff;
  uVar3 = 0;
  do {
    puVar4 = (uint *)(*param_1 + param_2 * 0x18);
    uVar1 = *puVar4;
    uVar2 = uVar1 >> 0x1c;
    if (uVar2 != 5) {
      if (uVar2 != 8) {
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar1 & 0xf0000 | uVar3;
        }
        uVar3 = uVar3 | uVar1 & 0xfff00000;
        if (uVar2 != 6) {
          *param_3 = puVar4[1];
          return uVar3;
        }
        *param_3 = 0xffffffff;
        return uVar3;
      }
      if ((uVar1 & 0xf0ff0000) == 0x80010000) {
        uVar3 = uVar3 | puVar4[1];
      }
      else if (((uVar1 & 0xf0ff0000) == 0x80020000) && ((uVar3 & 1) == 0)) {
        uVar3 = uVar3 | puVar4[1] * 0x10000 + 1;
      }
    }
    param_2 = (ulong)(ushort)uVar1;
  } while( true );
}

