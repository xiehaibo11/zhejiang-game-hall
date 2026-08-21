
undefined8 FUN_0113b3b4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(param_1 + 0x350);
  puVar2 = *(undefined1 **)(param_1 + 0x388);
  uVar5 = *(ulong *)(lVar6 + 0x88);
  uVar7 = *(ulong *)(lVar6 + 0x90);
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x80);
  if (*(undefined1 **)(lVar6 + 0x110) < puVar2) {
    *(long *)(param_1 + 0x390) = (long)puVar2 - *(long *)(param_1 + 0x368);
    TIFFFlushData1(param_1);
    puVar2 = *(undefined1 **)(param_1 + 0x368);
  }
  puVar3 = puVar2;
  if (*(int *)(lVar6 + 0xe8) != 0xffff) {
    lVar1 = uVar7 + uVar4;
    uVar5 = uVar5 << (uVar4 & 0x3f) | (long)*(int *)(lVar6 + 0xe8);
    uVar7 = lVar1 - 8;
    puVar3 = puVar2 + 1;
    *puVar2 = (char)((long)uVar5 >> (uVar7 & 0x3f));
    if (0xf < lVar1) {
      puVar3 = puVar2 + 2;
      puVar2[1] = (char)((long)uVar5 >> (lVar1 - 0x10U & 0x3f));
      uVar7 = lVar1 - 0x10U;
    }
    *(undefined4 *)(lVar6 + 0xe8) = 0xffff;
  }
  lVar6 = uVar7 + uVar4;
  uVar7 = uVar5 << (uVar4 & 0x3f) | 0x101;
  puVar2 = puVar3 + 1;
  *puVar3 = (char)((long)uVar7 >> (lVar6 - 8U & 0x3f));
  uVar5 = lVar6 - 8U;
  if (0xf < lVar6) {
    puVar2 = puVar3 + 2;
    puVar3[1] = (char)((long)uVar7 >> (lVar6 - 0x10U & 0x3f));
    uVar5 = lVar6 - 0x10U;
  }
  puVar3 = puVar2;
  if (0 < (long)uVar5) {
    puVar3 = puVar2 + 1;
    *puVar2 = (char)(uVar7 << (8 - uVar5 & 0x3f));
  }
  *(long *)(param_1 + 0x390) = (long)puVar3 - *(long *)(param_1 + 0x368);
  return 1;
}

