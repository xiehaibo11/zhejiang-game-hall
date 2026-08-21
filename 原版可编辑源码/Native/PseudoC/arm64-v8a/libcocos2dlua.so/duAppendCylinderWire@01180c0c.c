
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* duAppendCylinderWire(duDebugDraw*, float, float, float, float, float, float, unsigned int) */

void duAppendCylinderWire
               (duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  undefined4 in_register_00005024;
  undefined8 uVar5;
  undefined4 in_register_00005084;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = CONCAT44(in_register_00005084,param_6);
  uVar5 = CONCAT44(in_register_00005024,param_3);
  if (param_1 != (duDebugDraw *)0x0) {
    if ((DAT_01793020 & 1) == 0) {
      uRam0000000001792fa8 = 0x3ec3ef163f6c835e;
      _DAT_01792fa0 = 0x3f800000;
      uRam0000000001792fb8 = 0x3f6c835e3ec3ef15;
      _DAT_01792fb0 = 0x3f3504f33f3504f3;
      uRam0000000001792fe8 = 0xbec3ef15bf6c835e;
      _DAT_01792fe0 = 0xb3bbbd2ebf800000;
      uRam0000000001792ff8 = 0xbf6c8361bec3ef0b;
      _DAT_01792ff0 = 0xbf3504f5bf3504f1;
      uRam0000000001792fc8 = 0x3f6c835ebec3ef18;
      _DAT_01792fc0 = 0x3f800000b33bbd2e;
      uRam0000000001792fd8 = 0x3ec3ef10bf6c8360;
      _DAT_01792fd0 = 0x3f3504f3bf3504f3;
      DAT_01793020 = 1;
      uRam0000000001793008 = 0xbf6c835d3ec3ef1b;
      _DAT_01793000 = 0xbf800000324cde2e;
      _DAT_01793018 = 0xbec3ef153f6c835f;
      _DAT_01793010 = 0xbf3504ef3f3504f7;
    }
    lVar3 = 0;
    iVar2 = 0xf;
    fVar8 = (param_2 + param_5) * 0.5;
    fVar7 = (param_4 + param_7) * 0.5;
    fVar10 = (param_5 - param_2) * 0.5;
    fVar9 = (param_7 - param_4) * 0.5;
    pfVar4 = &DAT_01792fa4;
    do {
      uVar1 = iVar2 << 1 | 1;
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar8 + fVar10 * (&DAT_01792fa0)[(uint)(iVar2 << 1)],uVar5,
                 fVar7 + fVar9 * (&DAT_01792fa0)[uVar1],param_1,param_8);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar8 + fVar10 * pfVar4[-1],uVar5,fVar7 + fVar9 * *pfVar4,param_1,param_8);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar8 + fVar10 * (&DAT_01792fa0)[(uint)(iVar2 << 1)],uVar6,
                 fVar7 + fVar9 * (&DAT_01792fa0)[uVar1],param_1,param_8);
      (**(code **)(*(long *)param_1 + 0x30))
                (fVar8 + fVar10 * pfVar4[-1],uVar6,fVar7 + fVar9 * *pfVar4,param_1,param_8);
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 1;
      pfVar4 = pfVar4 + 2;
    } while (lVar3 != 0x10);
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01792fa0,uVar5,fVar7 + fVar9 * DAT_01792fa4,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01792fa0,uVar6,fVar7 + fVar9 * DAT_01792fa4,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01792fc0,uVar5,fVar7 + fVar9 * DAT_01792fc4,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01792fc0,uVar6,fVar7 + fVar9 * DAT_01792fc4,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01792fe0,uVar5,fVar7 + fVar9 * DAT_01792fe4,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01792fe0,uVar6,fVar7 + fVar9 * DAT_01792fe4,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01793000,uVar5,fVar7 + fVar9 * DAT_01793004,param_1,param_8);
                    /* WARNING: Could not recover jumptable at 0x01180f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))
              (fVar8 + fVar10 * DAT_01793000,uVar6,fVar7 + fVar9 * DAT_01793004,param_1,param_8);
    return;
  }
  return;
}

