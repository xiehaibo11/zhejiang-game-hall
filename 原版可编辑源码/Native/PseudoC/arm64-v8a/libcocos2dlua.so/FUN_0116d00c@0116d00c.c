
undefined8 *
FUN_0116d00c(undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5,
            long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  (**(code **)(param_6 + 8))();
  puVar4 = *(undefined8 **)(param_6 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = calloc(1,0x8000);
    cpArrayPush(*(undefined8 *)(param_6 + 0x48),puVar4);
    lVar3 = 0x2a9;
    puVar2 = *(undefined8 **)(param_6 + 0x38);
    puVar1 = puVar4;
    do {
      puVar1[9] = puVar2;
      lVar3 = lVar3 + -1;
      puVar2 = puVar1 + 6;
      puVar1 = puVar1 + 6;
    } while (lVar3 != 0);
    puVar1 = puVar4 + 0xff6;
  }
  else {
    puVar1 = (undefined8 *)puVar4[3];
  }
  *(undefined8 **)(param_6 + 0x38) = puVar1;
  *puVar4 = param_5;
  fVar5 = (float)(**(code **)(param_6 + 8))(param_5);
  if (*(code **)(param_6 + 0x20) != (code *)0x0) {
    fVar9 = param_4 - param_2;
    fVar8 = param_3 - fVar5;
    fVar7 = param_2;
    fVar6 = (float)(**(code **)(param_6 + 0x20))(param_5);
    fVar6 = (float)NEON_fminnm(fVar6 * 0.1,-(fVar8 * 0.1));
    fVar7 = (float)NEON_fminnm(fVar7 * 0.1,-(fVar9 * 0.1));
    fVar5 = fVar6 + fVar5;
    param_2 = fVar7 + param_2;
    param_3 = fVar8 * 0.1 + param_3;
    param_4 = fVar9 * 0.1 + param_4;
  }
  *(float *)(puVar4 + 1) = fVar5;
  *(float *)((long)puVar4 + 0xc) = param_2;
  *(float *)(puVar4 + 2) = param_3;
  *(float *)((long)puVar4 + 0x14) = param_4;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4[5] = 0;
  return puVar4;
}

