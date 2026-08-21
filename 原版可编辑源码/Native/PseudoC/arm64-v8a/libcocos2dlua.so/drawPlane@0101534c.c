
/* btIDebugDraw::drawPlane(btVector3 const&, float, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawPlane
          (btIDebugDraw *this,btVector3 *param_1,float param_2,btTransform *param_3,
          btVector3 *param_4)

{
  long lVar1;
  float fVar2;
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
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)(param_1 + 8);
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar3 = fVar6 * param_2;
  fVar4 = fVar7 * param_2;
  fVar2 = fVar8 * param_2;
  if (ABS(fVar8) <= 0.70710677) {
    fVar9 = fVar6 * fVar6 + fVar7 * fVar7;
    fVar10 = 1.0 / SQRT(fVar9);
    fVar5 = fVar6 * fVar10;
    fVar6 = fVar9 * fVar10;
    fVar9 = -(fVar8 * fVar5);
    fVar8 = fVar8 * fVar7 * fVar10;
    fVar10 = fVar7 * fVar10 * -100.0;
    fVar7 = 0.0;
  }
  else {
    fVar9 = fVar7 * fVar7 + fVar8 * fVar8;
    fVar10 = 1.0 / SQRT(fVar9);
    fVar5 = -(fVar8 * fVar10);
    fVar9 = fVar9 * fVar10;
    fVar8 = fVar6 * fVar7 * fVar10;
    fVar6 = fVar6 * fVar5;
    fVar7 = fVar7 * fVar10 * 100.0;
    fVar10 = 0.0;
  }
  fVar11 = fVar3 + fVar10;
  fVar10 = fVar3 - fVar10;
  fVar13 = fVar4 + fVar5 * 100.0;
  fVar12 = fVar2 + fVar7;
  fVar7 = fVar2 - fVar7;
  fVar5 = fVar4 - fVar5 * 100.0;
  local_78 = fVar11 * *(float *)param_3 + fVar13 * *(float *)(param_3 + 4) +
             fVar12 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_74 = fVar11 * *(float *)(param_3 + 0x10) + fVar13 * *(float *)(param_3 + 0x14) +
              fVar12 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_70 = fVar11 * *(float *)(param_3 + 0x20) + fVar13 * *(float *)(param_3 + 0x24) +
             fVar12 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_88 = fVar10 * *(float *)param_3 + fVar5 * *(float *)(param_3 + 4) +
             fVar7 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_84 = fVar10 * *(float *)(param_3 + 0x10) + fVar5 * *(float *)(param_3 + 0x14) +
              fVar7 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_80 = fVar10 * *(float *)(param_3 + 0x20) + fVar5 * *(float *)(param_3 + 0x24) +
             fVar7 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_6c = 0;
  local_7c = 0;
  fVar7 = fVar3 + fVar9 * 100.0;
  fVar5 = fVar4 + fVar8 * -100.0;
  fVar10 = fVar2 + fVar6 * 100.0;
  fVar3 = fVar3 - fVar9 * 100.0;
  fVar4 = fVar4 - fVar8 * -100.0;
  fVar2 = fVar2 - fVar6 * 100.0;
  (**(code **)(*(long *)this + 0x10))(this,&local_78,&local_88,param_4);
  local_78 = fVar7 * *(float *)param_3 + fVar5 * *(float *)(param_3 + 4) +
             fVar10 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_74 = fVar7 * *(float *)(param_3 + 0x10) + fVar5 * *(float *)(param_3 + 0x14) +
              fVar10 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_70 = fVar7 * *(float *)(param_3 + 0x20) + fVar5 * *(float *)(param_3 + 0x24) +
             fVar10 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_88 = fVar3 * *(float *)param_3 + fVar4 * *(float *)(param_3 + 4) +
             fVar2 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_84 = fVar3 * *(float *)(param_3 + 0x10) + fVar4 * *(float *)(param_3 + 0x14) +
              fVar2 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_80 = fVar3 * *(float *)(param_3 + 0x20) + fVar4 * *(float *)(param_3 + 0x24) +
             fVar2 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_6c = 0;
  local_7c = 0;
  (**(code **)(*(long *)this + 0x10))(this,&local_78,&local_88,param_4);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

