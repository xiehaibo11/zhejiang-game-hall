
void png_set_IHDR(long param_1,uint *param_2,uint param_3,uint param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    *param_2 = param_3;
    param_2[1] = param_4;
    *(undefined1 *)(param_2 + 9) = param_5;
    *(undefined1 *)((long)param_2 + 0x25) = param_6;
    *(undefined1 *)((long)param_2 + 0x26) = param_8;
    *(undefined1 *)(param_2 + 10) = param_7;
    *(undefined1 *)((long)param_2 + 0x27) = param_9;
    png_check_IHDR(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    bVar1 = *(byte *)((long)param_2 + 0x25);
    if (bVar1 == 3) {
      bVar2 = 1;
    }
    else {
      bVar2 = bVar1 & 2 | 1;
      if ((bVar1 & 4) != 0) {
        bVar2 = bVar2 + 1;
      }
    }
    *(byte *)((long)param_2 + 0x29) = bVar2;
    bVar2 = (char)param_2[9] * bVar2;
    *(byte *)((long)param_2 + 0x2a) = bVar2;
    if ((bVar2 & 0xf8) < 8) {
      uVar3 = (ulong)bVar2 * (ulong)param_3 + 7 >> 3;
    }
    else {
      uVar3 = (ulong)(bVar2 >> 3) * (ulong)param_3;
    }
    *(ulong *)(param_2 + 4) = uVar3;
  }
  return;
}

