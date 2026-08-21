
/* duAppendArc(duDebugDraw*, float, float, float, float, float, float, float, float, float, unsigned
   int) */

void duAppendArc(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                float param_6,float param_7,float param_8,float param_9,float param_10,uint param_11
                )

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (param_1 != (duDebugDraw *)0x0) {
    fVar13 = param_5 - param_2;
    fVar12 = param_6 - param_3;
    fVar11 = param_7 - param_4;
    fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11) * param_8;
    fVar9 = fVar13 * 0.05 + param_2;
    fVar8 = fVar11 * 0.05 + param_4;
    iVar2 = 1;
    fVar4 = fVar12 * 0.05 + param_3 + fVar15 * 0.19000006;
    fVar5 = fVar4;
    fVar6 = fVar8;
    fVar3 = fVar9;
    do {
      fVar7 = (float)iVar2 * 0.1125 + 0.05;
      fVar14 = fVar13 * fVar7 + param_2;
      fVar10 = fVar7 + fVar7 + -1.0;
      fVar10 = fVar12 * fVar7 + param_3 + fVar15 * (1.0 - fVar10 * fVar10);
      fVar7 = fVar11 * fVar7 + param_4;
      (**(code **)(*(long *)param_1 + 0x30))(fVar3,fVar5,fVar6,param_1,param_11);
      (**(code **)(*(long *)param_1 + 0x30))(fVar14,fVar10,fVar7,param_1,param_11);
      iVar2 = iVar2 + 1;
      fVar5 = fVar10;
      fVar6 = fVar7;
      fVar3 = fVar14;
    } while (iVar2 != 9);
    if (0.001 < param_9) {
      local_a0 = fVar13 * 0.1 + param_2;
      local_98 = fVar11 * 0.1 + param_4;
      local_9c = fVar12 * 0.1 + param_3 + fVar15 * 0.35999995;
      local_94 = fVar9;
      local_90 = fVar4;
      local_8c = fVar8;
      appendArrowHead(param_1,&local_94,&local_a0,param_9,param_11);
    }
    if (0.001 < param_10) {
      local_94 = fVar13 * 0.95 + param_2;
      local_98 = fVar11 * 0.9 + param_4;
      local_a0 = fVar13 * 0.9 + param_2;
      local_8c = fVar11 * 0.95 + param_4;
      local_90 = fVar12 * 0.95 + param_3 + fVar15 * 0.19000006;
      local_9c = fVar12 * 0.9 + param_3 + fVar15 * 0.36000007;
      appendArrowHead(param_1,&local_94,&local_a0,param_10,param_11);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

