
/* btSingleSweepCallback::process(btBroadphaseProxy const*) */

undefined8 __thiscall
btSingleSweepCallback::process(btSingleSweepCallback *this,btBroadphaseProxy *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  plVar1 = *(long **)(this + 0xc0);
  if (*(float *)(plVar1 + 1) == 0.0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)param_1;
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar4 + 0xc0));
    if ((uVar3 & 1) != 0) {
      uStack_40 = *(undefined8 *)(lVar4 + 200);
      lStack_30 = lVar4 + 8;
      local_48 = 0;
      local_28 = 0xffffffffffffffff;
      local_38 = lVar4;
      btCollisionWorld::objectQuerySingleInternal
                (*(btConvexShape **)(this + 0xd0),(btTransform *)(this + 0x28),
                 (btTransform *)(this + 0x68),(btCollisionObjectWrapper *)&local_48,
                 *(ConvexResultCallback **)(this + 0xc0),*(float *)(this + 200));
    }
    uVar2 = 1;
  }
  return uVar2;
}

