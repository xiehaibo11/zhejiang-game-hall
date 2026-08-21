
undefined8
FT_Get_SubGlyph_Info
          (long param_1,uint param_2,undefined4 *param_3,uint *param_4,undefined4 *param_5,
          undefined4 *param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 6;
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    return 6;
  }
  if (*(int *)(param_1 + 0x90) != 0x636f6d70) {
    return 6;
  }
  if (param_2 < *(uint *)(param_1 + 0xf0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0xf8) + (ulong)param_2 * 0x30);
    *param_3 = *puVar1;
    *param_4 = (uint)*(ushort *)(puVar1 + 1);
    *param_5 = puVar1[2];
    *param_6 = puVar1[3];
    uVar2 = *(undefined8 *)(puVar1 + 4);
    uVar4 = *(undefined8 *)(puVar1 + 10);
    uVar3 = *(undefined8 *)(puVar1 + 8);
    param_7[1] = *(undefined8 *)(puVar1 + 6);
    *param_7 = uVar2;
    param_7[3] = uVar4;
    param_7[2] = uVar3;
    return 0;
  }
  return 6;
}

