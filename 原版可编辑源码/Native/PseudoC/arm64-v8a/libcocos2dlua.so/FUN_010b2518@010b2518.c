
long FUN_010b2518(long param_1,ulong param_2,long param_3,ulong param_4)

{
  size_t __n;
  int iVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  uVar3 = puVar8[0x21e];
  uVar6 = uVar3 - param_2;
  if (param_2 <= uVar3 && uVar6 != 0) {
    if ((ulong)(puVar8[0x21f] - (long)(puVar8 + 0x1e)) < uVar6) {
      iVar1 = FT_Stream_Seek(*puVar8,0);
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)((long)puVar8 + 0x54) = 9;
      puVar5 = puVar8 + 0x21e;
      puVar8[3] = 0;
      puVar8[8] = 0;
      *(undefined4 *)(puVar8 + 0x12) = 0;
      puVar8[6] = 0;
      *(undefined1 *)(puVar8 + 7) = 0;
      puVar8[0x220] = puVar5;
      uVar3 = 0;
    }
    else {
      puVar5 = (undefined8 *)(puVar8[0x21f] - uVar6);
      uVar3 = param_2;
    }
    puVar8[0x21f] = puVar5;
    puVar8[0x21e] = uVar3;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 - uVar3;
    uVar6 = puVar8[0x220] - puVar8[0x21f];
    if (param_2 <= uVar6) {
      uVar6 = param_2;
    }
    param_2 = param_2 - uVar6;
    puVar8[0x21f] = puVar8[0x21f] + uVar6;
    puVar8[0x21e] = uVar6 + uVar3;
    if (param_2 != 0) {
      do {
        uVar6 = param_2;
        if (0xfff < param_2) {
          uVar6 = 0x1000;
        }
        uVar3 = ft_lzwstate_io(puVar8 + 3,0,uVar6);
        if (uVar3 < uVar6) goto LAB_010b26b8;
        param_2 = param_2 - uVar6;
        puVar8[0x21e] = puVar8[0x21e] + uVar6;
      } while (param_2 != 0);
    }
  }
  if (param_4 == 0) {
LAB_010b26b8:
    lVar7 = 0;
  }
  else {
    lVar4 = puVar8[0x220];
    __src = (void *)puVar8[0x21f];
    lVar7 = 0;
    do {
      __n = lVar4 - (long)__src;
      if (param_4 <= (ulong)(lVar4 - (long)__src)) {
        __n = param_4;
      }
      memcpy((void *)(param_3 + lVar7),__src,__n);
      lVar7 = __n + lVar7;
      param_4 = param_4 - __n;
      puVar8[0x21f] = puVar8[0x21f] + __n;
      puVar8[0x21e] = puVar8[0x21e] + __n;
      if (param_4 == 0) {
        return lVar7;
      }
      puVar8[0x21f] = puVar8 + 0x1e;
      lVar2 = ft_lzwstate_io(puVar8 + 3,puVar8 + 0x1e,0x1000);
      __src = (void *)puVar8[0x21f];
      lVar4 = (long)__src + lVar2;
      puVar8[0x220] = lVar4;
    } while (lVar2 != 0);
  }
  return lVar7;
}

