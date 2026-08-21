
/* btTriangleConvexcastCallback::btTriangleConvexcastCallback(btConvexShape const*, btTransform
   const&, btTransform const&, btTransform const&, float) */

void __thiscall
btTriangleConvexcastCallback::btTriangleConvexcastCallback
          (btTriangleConvexcastCallback *this,btConvexShape *param_1,btTransform *param_2,
          btTransform *param_3,btTransform *param_4,float param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__btTriangleCallback_01733d60;
  *(btConvexShape **)(this + 8) = param_1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x40) = uVar1;
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x50) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(this + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + 0x80) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x90) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(this + 0xa0) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this + 0xb0) = uVar1;
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(float *)(this + 0xd4) = param_5;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 200) = uVar2;
  *(undefined8 *)(this + 0xc0) = uVar1;
  return;
}

