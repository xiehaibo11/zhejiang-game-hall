
/* btBoxBoxDetector::getClosestPoints(btDiscreteCollisionDetectorInterface::ClosestPointInput
   const&, btDiscreteCollisionDetectorInterface::Result&, btIDebugDraw*, bool) */

void btBoxBoxDetector::getClosestPoints
               (ClosestPointInput *param_1,Result *param_2,btIDebugDraw *param_3,bool param_4)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  dContactGeom *in_stack_fffffffffffffee0;
  int in_stack_fffffffffffffee8;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  btVector3 abStack_e0 [16];
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int iStack_68;
  float fStack_64;
  
  local_a0 = *(float *)param_2;
  local_d0 = *(float *)(param_2 + 0x40);
  local_9c = *(undefined4 *)(param_2 + 4);
  local_cc = *(undefined4 *)(param_2 + 0x44);
  local_98 = *(undefined4 *)(param_2 + 8);
  local_c8 = *(undefined4 *)(param_2 + 0x48);
  local_90 = *(undefined4 *)(param_2 + 0x10);
  local_c0 = *(undefined4 *)(param_2 + 0x50);
  local_8c = *(undefined4 *)(param_2 + 0x14);
  local_bc = *(undefined4 *)(param_2 + 0x54);
  local_88 = *(undefined4 *)(param_2 + 0x18);
  local_b8 = *(undefined4 *)(param_2 + 0x58);
  local_80 = *(undefined4 *)(param_2 + 0x20);
  local_b0 = *(undefined4 *)(param_2 + 0x60);
  local_7c = *(undefined4 *)(param_2 + 0x24);
  local_ac = *(undefined4 *)(param_2 + 100);
  local_78 = *(undefined4 *)(param_2 + 0x28);
  local_a8 = *(undefined4 *)(param_2 + 0x68);
  plVar1 = *(long **)(param_1 + 8);
  fVar5 = *(float *)(plVar1 + 5);
  fVar6 = *(float *)((long)plVar1 + 0x2c);
  fVar7 = *(float *)(plVar1 + 6);
  fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3,param_4);
  fVar3 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  fVar4 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  fVar6 = fVar6 + fVar3;
  local_f0 = fVar5 + fVar2 + fVar5 + fVar2;
  fStack_ec = fVar6 + fVar6;
  local_e8 = fVar7 + fVar4 + fVar7 + fVar4;
  local_e4 = 0;
  plVar1 = *(long **)(param_1 + 0x10);
  fVar5 = *(float *)(plVar1 + 5);
  fVar6 = *(float *)((long)plVar1 + 0x2c);
  fVar7 = *(float *)(plVar1 + 6);
  fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  fVar3 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  fVar4 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  fVar6 = fVar6 + fVar3;
  local_100 = fVar5 + fVar2 + fVar5 + fVar2;
  fStack_fc = fVar6 + fVar6;
  local_f8 = fVar7 + fVar4 + fVar7 + fVar4;
  local_f4 = 0;
  dBoxBox2((btVector3 *)(param_2 + 0x30),&local_a0,(btVector3 *)&local_f0,
           (btVector3 *)(param_2 + 0x70),&local_d0,(btVector3 *)&local_100,abStack_e0,&fStack_64,
           &iStack_68,4,in_stack_fffffffffffffee0,in_stack_fffffffffffffee8,(Result *)param_3);
  return;
}

