
/* btIDebugDraw::drawArc(btVector3 const&, btVector3 const&, btVector3 const&, float, float, float,
   float, btVector3 const&, bool, float) */

void __thiscall
btIDebugDraw::drawArc
          (btIDebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float param_4
          ,float param_5,float param_6,float param_7,btVector3 *param_8,bool param_9,float param_10)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar5;
  undefined8 uVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulong uStack_a8;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  iVar2 = (int)((param_7 - param_6) / (param_10 * 0.017453292));
  fVar11 = *(float *)(param_3 + 8);
  fVar7 = *(float *)param_2;
  fVar5 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar6 = (float)*(undefined8 *)param_3;
  fVar10 = (float)*(undefined8 *)(param_2 + 4);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  sincosf(param_6,&fStack_c4,&local_c8);
  fVar8 = (fVar10 * fVar11 - fVar9 * fVar5) * param_5;
  fVar9 = (fVar9 * fVar6 - fVar11 * fVar7) * param_5;
  fVar10 = (fVar7 * fVar5 - fVar10 * fVar6) * param_5;
  local_b0 = CONCAT44(fVar9 * fStack_c4 +
                      fVar5 * param_4 * local_c8 + (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      fVar8 * fStack_c4 + fVar6 * param_4 * local_c8 + (float)*(undefined8 *)param_1
                     );
  uStack_a8 = (ulong)(uint)(fStack_c4 * fVar10 +
                           local_c8 * fVar11 * param_4 + *(float *)(param_1 + 8));
  if (param_9) {
    (**(code **)(*(long *)this + 0x10))(this,param_1,&local_b0,param_8);
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      uVar4 = *(undefined8 *)param_3;
      fVar6 = *(float *)(param_3 + 8);
      sincosf(((param_7 - param_6) * (float)iVar3) / (float)iVar2 + param_6,&fStack_cc,&local_d0);
      uStack_b4 = 0;
      local_c0 = CONCAT44(fVar9 * fStack_cc +
                          (float)((ulong)uVar4 >> 0x20) * param_4 * local_d0 +
                          (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                          fVar8 * fStack_cc +
                          (float)uVar4 * param_4 * local_d0 + (float)*(undefined8 *)param_1);
      fStack_b8 = fVar10 * fStack_cc + local_d0 * fVar6 * param_4 + *(float *)(param_1 + 8);
      (**(code **)(*(long *)this + 0x10))(this,&local_b0,&local_c0,param_8);
      uStack_a8 = CONCAT44(uStack_b4,fStack_b8);
      local_b0 = local_c0;
    } while (iVar3 < iVar2);
  }
  if (param_9) {
    (**(code **)(*(long *)this + 0x10))(this,param_1,&local_b0,param_8);
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

