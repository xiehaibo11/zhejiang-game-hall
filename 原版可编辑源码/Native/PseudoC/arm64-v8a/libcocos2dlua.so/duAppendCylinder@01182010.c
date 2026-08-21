
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* duAppendCylinder(duDebugDraw*, float, float, float, float, float, float, unsigned int) */

void duAppendCylinder(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                     float param_6,float param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  undefined4 in_register_00005024;
  undefined8 uVar7;
  undefined4 in_register_00005084;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar8 = CONCAT44(in_register_00005084,param_6);
  uVar7 = CONCAT44(in_register_00005024,param_3);
  if (param_1 != (duDebugDraw *)0x0) {
    if ((DAT_017930b0 & 1) == 0) {
      _DAT_01793038 = 0x3ec3ef163f6c835e;
      _DAT_01793030 = 0x3f800000;
      uRam0000000001793048 = 0x3f6c835e3ec3ef15;
      _DAT_01793040 = 0x3f3504f33f3504f3;
      uRam0000000001793078 = 0xbec3ef15bf6c835e;
      _DAT_01793070 = 0xb3bbbd2ebf800000;
      uRam0000000001793088 = 0xbf6c8361bec3ef0b;
      _DAT_01793080 = 0xbf3504f5bf3504f1;
      uRam0000000001793058 = 0x3f6c835ebec3ef18;
      _DAT_01793050 = 0x3f800000b33bbd2e;
      uRam0000000001793068 = 0x3ec3ef10bf6c8360;
      _DAT_01793060 = 0x3f3504f3bf3504f3;
      DAT_017930b0 = 1;
      uRam0000000001793098 = 0xbf6c835d3ec3ef1b;
      _DAT_01793090 = 0xbf800000324cde2e;
      _DAT_017930a8 = 0xbec3ef153f6c835f;
      _DAT_017930a0 = 0xbf3504ef3f3504f7;
    }
    lVar5 = 0;
    fVar9 = (param_2 + param_5) * 0.5;
    fVar10 = (param_4 + param_7) * 0.5;
    fVar11 = (param_5 - param_2) * 0.5;
    uVar3 = param_8 & 0xff000000 |
            (param_8 & 0xff) + (param_8 & 0xff) * 4 >> 3 |
            ((param_8 >> 8 & 0xff) + (param_8 >> 8 & 0xff) * 4 >> 3) << 8 |
            ((param_8 >> 0x10 & 0xff) + (param_8 >> 0x10 & 0xff) * 4) * 0x2000 & 0xff0000;
    fVar12 = (param_7 - param_4) * 0.5;
    do {
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * DAT_01793030,uVar7,fVar10 + fVar12 * DAT_01793034,param_1,uVar3);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * *(float *)((long)&DAT_01793038 + lVar5),uVar7,
                 fVar10 + fVar12 * *(float *)((long)&DAT_0179303c + lVar5),param_1,uVar3);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * *(float *)((long)&DAT_01793040 + lVar5),uVar7,
                 fVar10 + fVar12 * *(float *)((long)&DAT_01793044 + lVar5),param_1,uVar3);
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x70);
    lVar5 = 0;
    do {
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * DAT_01793030,uVar8,fVar10 + fVar12 * DAT_01793034,param_1,param_8)
      ;
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * *(float *)((long)&DAT_01793040 + lVar5),uVar8,
                 fVar10 + fVar12 * *(float *)((long)&DAT_01793044 + lVar5),param_1,param_8);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * *(float *)((long)&DAT_01793038 + lVar5),uVar8,
                 fVar10 + fVar12 * *(float *)((long)&DAT_0179303c + lVar5),param_1,param_8);
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x70);
    lVar5 = 0;
    iVar4 = 0xf;
    pfVar6 = &DAT_01793034;
    do {
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * pfVar6[-1],uVar7,fVar10 + fVar12 * *pfVar6,param_1,uVar3);
      uVar2 = iVar4 << 1;
      uVar1 = iVar4 << 1 | 1;
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * (&DAT_01793030)[uVar2],uVar7,
                 fVar10 + fVar12 * (&DAT_01793030)[uVar1],param_1,uVar3);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * (&DAT_01793030)[uVar2],uVar8,
                 fVar10 + fVar12 * (&DAT_01793030)[uVar1],param_1,param_8);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * pfVar6[-1],uVar7,fVar10 + fVar12 * *pfVar6,param_1,uVar3);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * (&DAT_01793030)[uVar2],uVar8,
                 fVar10 + fVar12 * (&DAT_01793030)[uVar1],param_1,param_8);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar9 + fVar11 * pfVar6[-1],uVar8,fVar10 + fVar12 * *pfVar6,param_1,param_8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 1;
      pfVar6 = pfVar6 + 2;
    } while (lVar5 != 0x10);
  }
  return;
}

