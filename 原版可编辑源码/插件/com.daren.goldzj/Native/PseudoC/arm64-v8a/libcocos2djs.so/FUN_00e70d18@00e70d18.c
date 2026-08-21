
long FUN_00e70d18(long param_1,ulong param_2,long param_3,ulong param_4)

{
  size_t __n;
  int iVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  uVar3 = puVar7[0x21e];
  uVar5 = uVar3 - param_2;
  if (param_2 <= uVar3 && uVar5 != 0) {
    if (uVar5 <= (ulong)(puVar7[0x21f] - (long)(puVar7 + 0x1e))) {
      puVar7[0x21f] = puVar7[0x21f] - uVar5;
      puVar7[0x21e] = param_2;
      goto joined_r0x00e70e38;
    }
    iVar1 = FUN_00e1bb5c(*puVar7,0);
    if (iVar1 != 0) {
      return 0;
    }
    uVar3 = 0;
    *(undefined4 *)((long)puVar7 + 0x54) = 9;
    puVar7[8] = 0;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    *(undefined1 *)(puVar7 + 7) = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[0x220] = puVar7 + 0x21e;
    puVar7[0x21f] = puVar7 + 0x21e;
    puVar7[0x21e] = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 - uVar3;
    uVar5 = puVar7[0x220] - puVar7[0x21f];
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
    param_2 = param_2 - uVar5;
    puVar7[0x21f] = puVar7[0x21f] + uVar5;
    puVar7[0x21e] = uVar5 + uVar3;
    if (param_2 != 0) {
      do {
        uVar5 = param_2;
        if (0xfff < param_2) {
          uVar5 = 0x1000;
        }
        uVar3 = FUN_00e710ac(puVar7 + 3,0,uVar5);
        if (uVar3 < uVar5) goto LAB_00e70e24;
        param_2 = param_2 - uVar5;
        puVar7[0x21e] = puVar7[0x21e] + uVar5;
      } while (param_2 != 0);
    }
  }
joined_r0x00e70e38:
  if (param_4 == 0) {
LAB_00e70e24:
    lVar6 = 0;
  }
  else {
    lVar4 = puVar7[0x220];
    __src = (void *)puVar7[0x21f];
    lVar6 = 0;
    do {
      __n = lVar4 - (long)__src;
      if (param_4 <= (ulong)(lVar4 - (long)__src)) {
        __n = param_4;
      }
      memcpy((void *)(param_3 + lVar6),__src,__n);
      lVar6 = __n + lVar6;
      param_4 = param_4 - __n;
      puVar7[0x21f] = puVar7[0x21f] + __n;
      puVar7[0x21e] = puVar7[0x21e] + __n;
      if (param_4 == 0) {
        return lVar6;
      }
      puVar7[0x21f] = puVar7 + 0x1e;
      lVar2 = FUN_00e710ac(puVar7 + 3,puVar7 + 0x1e,0x1000);
      __src = (void *)puVar7[0x21f];
      lVar4 = (long)__src + lVar2;
      puVar7[0x220] = lVar4;
    } while (lVar2 != 0);
  }
  return lVar6;
}

