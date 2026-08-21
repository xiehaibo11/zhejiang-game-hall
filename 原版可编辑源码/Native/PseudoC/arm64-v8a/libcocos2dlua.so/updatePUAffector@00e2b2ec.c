
/* cocos2d::PURandomiser::updatePUAffector(cocos2d::PUParticle3D*, float) */

ulong cocos2d::PURandomiser::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  long in_x1;
  float fVar3;
  float fVar4;
  undefined4 in_register_00005004;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = CONCAT44(in_register_00005004,param_2);
  if (param_1[0xc1] != (PUParticle3D)0x0) {
    if (param_1[0xc0] == (PUParticle3D)0x0) {
      if (*(char *)(in_x1 + 0x128) == '\0') {
        iVar1 = rand();
        fVar3 = *(float *)(param_1 + 0xac);
        fVar4 = *(float *)(param_1 + 0x40);
        iVar2 = rand();
        fVar11 = *(float *)(param_1 + 0xb0);
        uVar6 = NEON_scvtf(CONCAT44(iVar2,iVar1),4);
        fVar12 = *(float *)(param_1 + 0x44);
        fVar7 = (float)uVar6 * 4.656613e-10;
        fVar8 = (float)((ulong)uVar6 >> 0x20) * 4.656613e-10;
        uVar6 = NEON_fmov(0xbf800000,4);
        iVar1 = rand();
        fVar9 = *(float *)(param_1 + 0xb4);
        fVar10 = *(float *)(param_1 + 0x48);
        *(ulong *)(in_x1 + 8) =
             CONCAT44(fVar12 * fVar11 * (fVar8 + fVar8 + (float)((ulong)uVar6 >> 0x20)) +
                      (float)((ulong)*(undefined8 *)(in_x1 + 8) >> 0x20),
                      fVar4 * fVar3 * (fVar7 + fVar7 + (float)uVar6) +
                      (float)*(undefined8 *)(in_x1 + 8));
        fVar3 = fVar10 * fVar9 * ((float)iVar1 * 4.656613e-10 + (float)iVar1 * 4.656613e-10 + -1.0)
                + *(float *)(in_x1 + 0x10);
        uVar5 = (ulong)(uint)fVar3;
        *(float *)(in_x1 + 0x10) = fVar3;
      }
    }
    else {
      iVar1 = rand();
      fVar3 = *(float *)(param_1 + 0xac);
      iVar2 = rand();
      fVar10 = *(float *)(param_1 + 0xb0);
      uVar6 = NEON_scvtf(CONCAT44(iVar2,iVar1),4);
      fVar4 = (float)uVar6 * 4.656613e-10;
      fVar7 = (float)((ulong)uVar6 >> 0x20) * 4.656613e-10;
      uVar6 = NEON_fmov(0xbf800000,4);
      iVar1 = rand();
      fVar8 = *(float *)(param_1 + 0xb4);
      *(ulong *)(in_x1 + 0xac) =
           CONCAT44(fVar10 * (fVar7 + fVar7 + (float)((ulong)uVar6 >> 0x20)) +
                    (float)((ulong)*(undefined8 *)(in_x1 + 0xac) >> 0x20),
                    fVar3 * (fVar4 + fVar4 + (float)uVar6) + (float)*(undefined8 *)(in_x1 + 0xac));
      fVar3 = fVar8 * ((float)iVar1 * 4.656613e-10 + (float)iVar1 * 4.656613e-10 + -1.0) +
              *(float *)(in_x1 + 0xb4);
      uVar5 = (ulong)(uint)fVar3;
      *(float *)(in_x1 + 0xb4) = fVar3;
    }
  }
  return uVar5;
}

