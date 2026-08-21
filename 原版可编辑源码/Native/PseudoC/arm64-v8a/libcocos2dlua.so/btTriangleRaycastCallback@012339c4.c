
/* btTriangleRaycastCallback::btTriangleRaycastCallback(btVector3 const&, btVector3 const&, unsigned
   int) */

void __thiscall
btTriangleRaycastCallback::btTriangleRaycastCallback
          (btTriangleRaycastCallback *this,btVector3 *param_1,btVector3 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__btTriangleCallback_01733d30;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(uint *)(this + 0x28) = param_3;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

