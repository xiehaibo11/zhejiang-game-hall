
/* btConvexTriangleCallback::btConvexTriangleCallback(btDispatcher*, btCollisionObjectWrapper
   const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btConvexTriangleCallback::btConvexTriangleCallback
          (btConvexTriangleCallback *this,btDispatcher *param_1,btCollisionObjectWrapper *param_2,
          btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = param_2;
  if (!param_4) {
    pbVar1 = param_3;
    param_3 = param_2;
  }
  *(btDispatcher **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__btConvexTriangleCallback_017343a8;
  *(btCollisionObjectWrapper **)(this + 8) = param_3;
  *(btCollisionObjectWrapper **)(this + 0x10) = pbVar1;
  uVar2 = (**(code **)(*(long *)param_1 + 0x18))
                    (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(pbVar1 + 0x10));
  *(undefined8 *)(this + 0x58) = uVar2;
  (**(code **)(**(long **)(this + 0x40) + 0x28))(*(long **)(this + 0x40),uVar2);
  return;
}

