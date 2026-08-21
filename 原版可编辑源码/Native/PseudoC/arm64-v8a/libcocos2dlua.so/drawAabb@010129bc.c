
/* btIDebugDraw::drawAabb(btVector3 const&, btVector3 const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawAabb(btIDebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)(param_2 + 8);
  fVar9 = *(float *)(param_1 + 8);
  fVar6 = (float)*(undefined8 *)param_2;
  fVar13 = (float)*(undefined8 *)param_1;
  fVar7 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar3 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar10 = (fVar6 - fVar13) * 0.5;
  fVar11 = (fVar7 - fVar3) * 0.5;
  fVar6 = (fVar6 + fVar13) * 0.5;
  fVar7 = (fVar7 + fVar3) * 0.5;
  uVar2 = 0;
  local_98 = NEON_fmov(0x3f800000,4);
  local_90._0_4_ = 1.0;
  uVar12 = NEON_fmov(0xbf800000,4);
  fVar13 = (fVar8 + fVar9) * 0.5;
  local_90 = 0x3f800000;
  do {
    fVar5 = (float)((ulong)local_98 >> 0x20);
    fVar14 = (fVar8 - fVar9) * 0.5 * (float)local_90;
    fVar15 = fVar7 + fVar11 * fVar5;
    fVar16 = fVar13 + fVar14;
    local_9c = 0;
    local_ac = 0;
    fVar3 = fVar6 - (float)local_98 * fVar10;
    uVar4 = CONCAT44(fVar7 - fVar5 * fVar11,fVar3);
    local_a8 = CONCAT44(fVar15,fVar6 + fVar10 * (float)local_98);
    local_b8 = CONCAT44(fVar15,fVar3);
    local_b0 = fVar16;
    local_a0 = fVar16;
    (**(code **)(*(long *)this + 0x10))(this,&local_a8,&local_b8,param_3);
    local_9c = 0;
    local_ac = 0;
    local_a8 = CONCAT44(fVar15,fVar3);
    local_b8 = uVar4;
    local_b0 = fVar16;
    local_a0 = fVar16;
    (**(code **)(*(long *)this + 0x10))(this,&local_a8,&local_b8,param_3);
    local_9c = 0;
    local_ac = 0;
    local_b0 = fVar13 - fVar14;
    local_b8 = uVar4;
    local_a8 = uVar4;
    local_a0 = fVar16;
    (**(code **)(*(long *)this + 0x10))(this,&local_a8,&local_b8,param_3);
    local_98 = uVar12;
    local_90 = 0xbf800000;
    if (uVar2 < 3) {
      *(float *)((long)&local_98 + uVar2 * 4) = -*(float *)((long)&local_98 + uVar2 * 4);
    }
    else if (uVar2 == 3) {
      if (*(long *)(lVar1 + 0x28) == local_88) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

