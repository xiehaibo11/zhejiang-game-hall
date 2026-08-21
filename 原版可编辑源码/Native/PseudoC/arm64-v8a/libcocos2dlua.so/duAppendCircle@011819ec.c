
/* duAppendCircle(duDebugDraw*, float, float, float, float, unsigned int) */

void duAppendCircle(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                   uint param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 in_register_00005024;
  undefined8 uVar8;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  if (param_1 != (duDebugDraw *)0x0) {
    if ((DAT_017931f4 & 1) == 0) {
      uVar8 = 0x100000000;
      DAT_017931f4 = 1;
      lVar3 = 0;
      do {
        uVar6 = NEON_scvtf(uVar8,4);
        fVar5 = ((float)uVar6 / 40.0) * 3.1415927;
        fVar7 = ((float)((ulong)uVar6 >> 0x20) / 40.0) * 3.1415927;
        sincosf(fVar5 + fVar5,&local_8c,&local_90);
        sincosf(fVar7 + fVar7,&local_84,&local_88);
        lVar1 = lVar3 + 0x10;
        uVar8 = CONCAT44((int)((ulong)uVar8 >> 0x20) + 2,(int)uVar8 + 2);
        *(float *)((long)&DAT_017930b4 + lVar3) = local_90;
        *(float *)((long)&DAT_017930b8 + lVar3) = local_8c;
        *(float *)((long)&DAT_017930bc + lVar3) = local_88;
        *(float *)((long)&DAT_017930c0 + lVar3) = local_84;
        lVar3 = lVar1;
      } while (lVar1 != 0x140);
    }
    lVar3 = 0;
    iVar2 = 0x27;
    pfVar4 = (float *)&DAT_017930b8;
    do {
      (**(code **)(*(long *)param_1 + 0x30))
                ((float)(&DAT_017930b4)[(uint)(iVar2 << 1)] * param_5 + param_2,
                 CONCAT44(in_register_00005024,param_3),
                 (float)(&DAT_017930b4)[iVar2 << 1 | 1] * param_5 + param_4,param_1,param_6);
      (**(code **)(*(long *)param_1 + 0x30))
                (pfVar4[-1] * param_5 + param_2,CONCAT44(in_register_00005024,param_3),
                 *pfVar4 * param_5 + param_4,param_1,param_6);
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 1;
      pfVar4 = pfVar4 + 2;
    } while (lVar3 != 0x28);
  }
  return;
}

