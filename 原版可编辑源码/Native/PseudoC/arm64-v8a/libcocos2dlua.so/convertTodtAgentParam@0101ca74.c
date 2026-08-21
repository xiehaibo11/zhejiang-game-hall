
/* cocos2d::NavMeshAgent::convertTodtAgentParam(cocos2d::NavMeshAgentParam const&,
   dtCrowdAgentParams&) */

void cocos2d::NavMeshAgent::convertTodtAgentParam
               (NavMeshAgentParam *param_1,dtCrowdAgentParams *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(NavMeshAgentParam *)(param_2 + 0x1d) = param_1[0x1d];
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
                    /* try { // try from 0101ca98 to 0111ca9f has its CatchHandler @ 0101cbdc */
  *(NavMeshAgentParam *)(param_2 + 0x1e) = param_1[0x1e];
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_2 = uVar1;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(NavMeshAgentParam *)(param_2 + 0x1c) = param_1[0x1c];
  return;
}

