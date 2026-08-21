
void FUN_010e5490(long *param_1,long *param_2,undefined8 *param_3,void *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)jpeg_alloc_huff_table(param_1);
    *param_2 = (long)puVar1;
  }
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_3 + 2);
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  uVar7 = *(undefined8 *)((long)param_3 + 9);
  uVar6 = *(undefined8 *)((long)param_3 + 1);
  bVar3 = (byte)((ulong)uVar7 >> 0x28);
  bVar2 = (byte)((ulong)uVar6 >> 8);
  bVar4 = (byte)((ulong)uVar6 >> 0x28);
  iVar5 = ((CONCAT12(bVar2,(short)uVar6) & 0xff00ff) & 0xffff) + (uint)(byte)uVar7 +
          (CONCAT12(bVar4,(ushort)(byte)((ulong)uVar6 >> 0x20)) & 0xffff) +
          (CONCAT12(bVar3,(ushort)(byte)((ulong)uVar7 >> 0x20)) & 0xffff) +
          (uint)bVar2 + (uint)(byte)((ulong)uVar7 >> 8) + (uint)bVar4 + (uint)bVar3 +
          (uint)(byte)((ulong)uVar6 >> 0x10) + (uint)(byte)((ulong)uVar7 >> 0x10) +
          (uint)(byte)((ulong)uVar6 >> 0x30) + (uint)(byte)((ulong)uVar7 >> 0x30) +
          (uint)(byte)((ulong)uVar6 >> 0x18) + (uint)(byte)((ulong)uVar7 >> 0x18) +
          (uint)(byte)((ulong)uVar6 >> 0x38) + (uint)(byte)((ulong)uVar7 >> 0x38);
  if (0xff < iVar5 - 1U) {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 9;
    (*(code *)*puVar1)(param_1);
  }
  memcpy((void *)(*param_2 + 0x11),param_4,(long)iVar5);
  *(undefined4 *)(*param_2 + 0x114) = 0;
  return;
}

