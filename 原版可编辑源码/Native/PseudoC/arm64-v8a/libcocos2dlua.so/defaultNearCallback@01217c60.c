
/* btCollisionDispatcher::defaultNearCallback(btBroadphasePair&, btCollisionDispatcher&,
   btDispatcherInfo const&) */

void btCollisionDispatcher::defaultNearCallback
               (btBroadphasePair *param_1,btCollisionDispatcher *param_2,btDispatcherInfo *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  btManifoldResult abStack_c0 [48];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  lVar5 = **(long **)param_1;
  lVar4 = **(long **)(param_1 + 8);
  uVar1 = (**(code **)(*(long *)param_2 + 0x30))(param_2,lVar5,lVar4);
  if ((uVar1 & 1) != 0) {
    uStack_60 = *(undefined8 *)(lVar5 + 200);
    lStack_50 = lVar5 + 8;
    local_68 = 0;
    local_48 = 0xffffffffffffffff;
    uStack_88 = *(undefined8 *)(lVar4 + 200);
    lStack_78 = lVar4 + 8;
    local_70 = 0xffffffffffffffff;
    local_90 = 0;
    local_80 = lVar4;
    local_58 = lVar5;
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar2 = (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_68,&local_90,0);
      *(long *)(param_1 + 0x10) = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    btManifoldResult::btManifoldResult
              (abStack_c0,(btCollisionObjectWrapper *)&local_68,
               (btCollisionObjectWrapper *)&local_90);
    plVar3 = *(long **)(param_1 + 0x10);
    if (*(int *)(param_3 + 8) == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_68,&local_90,param_3,abStack_c0);
    }
    else {
      fVar6 = (float)(**(code **)(*plVar3 + 0x18))(plVar3,lVar5,lVar4,param_3,abStack_c0);
      if (fVar6 < *(float *)(param_3 + 0xc)) {
        *(float *)(param_3 + 0xc) = fVar6;
      }
    }
  }
  return;
}

