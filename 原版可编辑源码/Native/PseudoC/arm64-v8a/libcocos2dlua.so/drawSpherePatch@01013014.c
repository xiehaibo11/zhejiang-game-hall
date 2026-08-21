
/* btIDebugDraw::drawSpherePatch(btVector3 const&, btVector3 const&, btVector3 const&, float, float,
   float, float, float, btVector3 const&, float, bool) */

void __thiscall
btIDebugDraw::drawSpherePatch
          (btIDebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float param_4
          ,float param_5,float param_6,float param_7,float param_8,btVector3 *param_9,float param_10
          ,bool param_11)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  bool bVar5;
  btVector3 *pbVar6;
  float *pfVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_a30;
  float fStack_a2c;
  float local_a28;
  float fStack_a24;
  undefined8 local_a20;
  undefined8 uStack_a18;
  float local_a10;
  undefined8 local_a0c;
  undefined4 local_a04;
  float local_a00;
  undefined8 local_9fc;
  undefined4 local_9f4;
  undefined8 local_9f0 [148];
  undefined8 auStack_550 [148];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  fVar33 = param_10 * 0.017453292;
  fVar29 = *(float *)param_2;
  fVar30 = (float)*(undefined8 *)(param_2 + 4);
  fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  local_a00 = fVar29 * param_4 + *(float *)param_1;
  local_a10 = *(float *)param_1 - fVar29 * param_4;
  fVar26 = (float)*(undefined8 *)(param_1 + 4);
  fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  local_9f4 = 0;
  local_a04 = 0;
  local_9fc = CONCAT44(fVar31 * param_4 + fVar32,fVar30 * param_4 + fVar26);
  local_a0c = CONCAT44(fVar32 - fVar31 * param_4,fVar26 - fVar30 * param_4);
  fVar32 = *(float *)param_3;
  fVar26 = param_5;
  if (param_5 <= -1.5707964) {
    fVar26 = fVar33 + -1.5707964;
  }
  fVar19 = param_6;
  if (1.5707964 <= param_6) {
    fVar19 = 1.5707964 - fVar33;
  }
  fVar25 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar24 = (float)*(undefined8 *)(param_3 + 4);
  bVar1 = fVar19 < fVar26;
  if (bVar1) {
    fVar26 = fVar33 + -1.5707964;
    fVar19 = 1.5707964 - fVar33;
  }
  uVar13 = (uint)((fVar19 - fVar26) / fVar33);
  if ((int)uVar13 < 2) {
    uVar13 = 1;
  }
  fVar27 = fVar33 + -3.1415927;
  fVar4 = 3.1415927;
  if (param_7 <= param_8) {
    fVar27 = param_7;
    fVar4 = param_8;
  }
  uVar11 = (uint)((fVar4 - fVar27) / fVar33);
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  lVar12 = (ulong)uVar11 << 4;
  puVar2 = auStack_550;
  puVar17 = local_9f0;
  uVar15 = 0;
  do {
    puVar8 = puVar2;
    sincosf(fVar26 + ((fVar19 - fVar26) / (float)(int)uVar13) * (float)(int)uVar15,&fStack_a24,
            &local_a28);
    fVar33 = fStack_a24 * param_4;
    lVar14 = 0;
    fVar28 = local_a28 * param_4;
    uVar16 = 0xffffffffffffffff;
    do {
      sincosf(fVar27 + ((fVar4 - fVar27) / (float)(int)uVar11) * (float)((int)uVar16 + 1),
              &fStack_a2c,&local_a30);
      fVar21 = *(float *)(param_3 + 8);
      fVar20 = fVar28 * local_a30;
      fVar22 = *(float *)(param_1 + 8);
      fVar18 = fVar28 * fStack_a2c;
      fVar23 = *(float *)(param_2 + 8);
      puVar2 = (undefined8 *)((long)puVar17 + lVar14);
      *puVar2 = CONCAT44((fVar31 * fVar32 - fVar29 * fVar25) * fVar18 +
                         (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar20 +
                         (float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                         fVar33 * (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                         (fVar30 * fVar25 - fVar31 * fVar24) * fVar18 +
                         (float)*(undefined8 *)param_3 * fVar20 + (float)*(undefined8 *)param_1 +
                         fVar33 * (float)*(undefined8 *)param_2);
      *(float *)(puVar2 + 1) =
           (fVar29 * fVar24 - fVar32 * fVar30) * fVar18 + fVar20 * fVar21 + fVar22 + fVar33 * fVar23
      ;
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      if (uVar15 == 0) {
        if (bVar1 || 1.5707964 <= param_6) {
          pfVar7 = &local_a10;
          pcVar9 = *(code **)(*(long *)this + 0x10);
          goto LAB_01013358;
        }
      }
      else {
        pcVar9 = *(code **)(*(long *)this + 0x10);
        pfVar7 = (float *)((long)puVar8 + lVar14);
LAB_01013358:
        (*pcVar9)(this,pfVar7,puVar2,param_9);
      }
      if (lVar14 == 0) {
        uStack_a18 = puVar17[1];
        local_a20 = *puVar17;
      }
      else {
        (**(code **)(*(long *)this + 0x10))(this,(long)puVar17 + lVar14 + -0x10,puVar2,param_9);
      }
      if ((bVar1 || param_5 <= -1.5707964) && uVar15 == uVar13) {
        (**(code **)(*(long *)this + 0x10))(this,&local_a00,puVar2,param_9);
      }
      if (param_11) {
        if (param_7 <= param_8 && param_8 - param_7 < 6.2831855) {
          if ((uVar15 == uVar13 || uVar15 == 0) && ((lVar12 == lVar14 || (lVar14 == 0)))) {
            lVar10 = *(long *)this;
            pbVar6 = param_1;
            goto LAB_01013284;
          }
        }
        else if (lVar12 == lVar14) {
          lVar10 = *(long *)this;
          pbVar6 = (btVector3 *)&local_a20;
LAB_01013284:
          (**(code **)(lVar10 + 0x10))(this,pbVar6,puVar2,param_9);
        }
      }
      uVar16 = uVar16 + 1;
      lVar14 = lVar14 + 0x10;
    } while (uVar16 < uVar11);
    bVar5 = uVar13 <= uVar15;
    puVar2 = puVar17;
    puVar17 = puVar8;
    uVar15 = uVar15 + 1;
    if (bVar5) {
      if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}

