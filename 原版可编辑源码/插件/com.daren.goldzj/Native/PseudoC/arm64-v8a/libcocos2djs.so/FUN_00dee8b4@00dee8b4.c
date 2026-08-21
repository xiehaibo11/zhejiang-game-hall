
void FUN_00dee8b4(long param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  bVar2 = *(byte *)(param_1 + -0x21);
  lVar4 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + 7 + lVar4);
    lVar3 = (ulong)(byte)puVar1[-8] - (ulong)bVar2;
    *(undefined *)(param_1 + lVar4) = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x20) + lVar3];
    lVar4 = lVar4 + 0x20;
    puVar1[-6] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x1f) + lVar3];
    puVar1[-5] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x1e) + lVar3];
    puVar1[-4] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x1d) + lVar3];
    puVar1[-3] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x1c) + lVar3];
    puVar1[-2] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x1b) + lVar3];
    puVar1[-1] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x1a) + lVar3];
    *puVar1 = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x19) + lVar3];
    puVar1[1] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x18) + lVar3];
    puVar1[2] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x17) + lVar3];
    puVar1[3] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x16) + lVar3];
    puVar1[4] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x15) + lVar3];
    puVar1[5] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x14) + lVar3];
    puVar1[6] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x13) + lVar3];
    puVar1[7] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x12) + lVar3];
    puVar1[8] = (&DAT_0197075d)[(ulong)*(byte *)(param_1 + -0x11) + lVar3];
  } while ((int)lVar4 != 0x200);
  return;
}

