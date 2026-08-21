
void FUN_00da2344(undefined8 *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  size_t __n;
  
  if (param_2 != 0) {
    puVar4 = (ulong *)*param_1;
    uVar1 = *(uint *)(param_1 + 1);
    puVar5 = puVar4;
    if ((param_3 & 1) == 0) {
      if (uVar1 != 0) {
        uVar3 = (ulong)(0x40 - uVar1);
        uVar2 = param_2;
        if (uVar3 <= param_2) {
          uVar2 = uVar3;
        }
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar4 & (0xffffffffffffffffU >> (uVar3 - uVar2 & 0x3f) &
                             -1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffff);
        param_2 = param_2 - uVar2;
      }
      __n = (param_2 >> 6) * 8;
      memset(puVar5,0,__n);
      if ((param_2 & 0x3f) == 0) {
        return;
      }
      uVar2 = puVar5[param_2 >> 6] &
              (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
    else {
      if (uVar1 != 0) {
        uVar3 = (ulong)(0x40 - uVar1);
        uVar2 = param_2;
        if (uVar3 <= param_2) {
          uVar2 = uVar3;
        }
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar4 | 0xffffffffffffffffU >> (uVar3 - uVar2 & 0x3f) &
                            -1L << ((ulong)uVar1 & 0x3f);
        param_2 = param_2 - uVar2;
      }
      __n = (param_2 >> 6) * 8;
      memset(puVar5,0xff,__n);
      if ((param_2 & 0x3f) == 0) {
        return;
      }
      uVar2 = puVar5[param_2 >> 6] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
    }
    *(ulong *)((long)puVar5 + __n) = uVar2;
  }
  return;
}

