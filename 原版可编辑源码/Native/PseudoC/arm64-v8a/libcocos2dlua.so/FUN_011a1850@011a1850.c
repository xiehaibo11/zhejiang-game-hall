
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_011a1850(undefined *param_1,int param_2,FILE *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = param_1;
  if ((param_1 == (undefined *)0x0) && (puVar2 = DAT_017932d0, DAT_017932d0 == (undefined *)0x0)) {
    param_1 = (undefined *)uv_loop_init(&DAT_017932d8);
    if ((int)param_1 == 0) {
      DAT_017932d0 = &DAT_017932d8;
      puVar3 = &DAT_017932e8;
      puVar4 = DAT_017932e8;
      if ((undefined8 **)DAT_017932e8 == &DAT_017932e8) {
        return param_1;
      }
    }
    else {
      puVar3 = (undefined8 *)&DAT_00000010;
      puVar4 = _DAT_00000010;
      if (_DAT_00000010 == (undefined8 *)&DAT_00000010) {
        return param_1;
      }
    }
  }
  else {
    puVar3 = (undefined8 *)(puVar2 + 0x10);
    puVar4 = (undefined8 *)*puVar3;
    if ((undefined8 *)*puVar3 == puVar3) {
      return param_1;
    }
  }
  if (param_2 == 0) {
    do {
      puVar2 = &DAT_012f5b1a;
      if (*(int *)(puVar4 + -2) - 1U < 0x10) {
        puVar2 = *(undefined **)(&DAT_0172d4c0 + (long)(int)(*(int *)(puVar4 + -2) - 1U) * 8);
      }
      uVar1 = *(uint *)(puVar4 + 7);
      uVar1 = fprintf(param_3,"[%c%c%c] %-8s %p\n",
                      (ulong)(byte)(&DAT_014a1057)[(uVar1 >> 3 ^ 0xffffffff) & 1],
                      (ulong)(byte)(&DAT_014a105a)[(uVar1 >> 2 ^ 0xffffffff) & 1],
                      (ulong)(byte)(&DAT_014a105d)[(uVar1 >> 4 ^ 0xffffffff) & 1],puVar2,puVar4 + -4
                     );
      param_1 = (undefined *)(ulong)uVar1;
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != puVar3);
  }
  else {
    do {
      uVar1 = *(uint *)(puVar4 + 7);
      if ((uVar1 >> 2 & 1) != 0) {
        puVar2 = &DAT_012f5b1a;
        if (*(int *)(puVar4 + -2) - 1U < 0x10) {
          puVar2 = *(undefined **)(&DAT_0172d4c0 + (long)(int)(*(int *)(puVar4 + -2) - 1U) * 8);
        }
        uVar1 = fprintf(param_3,"[%c%c%c] %-8s %p\n",
                        (ulong)(byte)(&DAT_014a1057)[(uVar1 >> 3 ^ 0xffffffff) & 1],
                        (ulong)(byte)(&DAT_014a105a)[(uVar1 >> 2 ^ 0xffffffff) & 1],
                        (ulong)(byte)(&DAT_014a105d)[(uVar1 >> 4 ^ 0xffffffff) & 1],puVar2,
                        puVar4 + -4);
        param_1 = (undefined *)(ulong)uVar1;
      }
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != puVar3);
  }
  return param_1;
}

