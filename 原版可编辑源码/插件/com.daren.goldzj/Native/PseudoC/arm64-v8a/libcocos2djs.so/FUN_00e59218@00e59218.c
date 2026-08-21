
void FUN_00e59218(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x2f0) == 0x25000) {
      FUN_00e139fc(uVar2,*(undefined8 *)(param_1 + 0x408));
      *(undefined8 *)(param_1 + 0x408) = 0;
      *(undefined2 *)(param_1 + 0x400) = 0;
    }
    else if (*(long *)(param_1 + 0x2f0) == 0x20000) {
      FUN_00e139fc(uVar2,*(undefined8 *)(param_1 + 0x408));
      lVar1 = *(long *)(param_1 + 0x410);
      *(undefined8 *)(param_1 + 0x408) = 0;
      *(undefined2 *)(param_1 + 0x400) = 0;
      if (*(short *)(param_1 + 0x402) != 0) {
        uVar3 = 0;
        do {
          lVar4 = uVar3 * 8;
          FUN_00e139fc(uVar2,*(undefined8 *)(lVar1 + lVar4));
          uVar3 = uVar3 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x410) + lVar4) = 0;
          lVar1 = *(long *)(param_1 + 0x410);
        } while (uVar3 < *(ushort *)(param_1 + 0x402));
      }
      FUN_00e139fc(uVar2);
      *(undefined8 *)(param_1 + 0x410) = 0;
      *(undefined2 *)(param_1 + 0x402) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  return;
}

