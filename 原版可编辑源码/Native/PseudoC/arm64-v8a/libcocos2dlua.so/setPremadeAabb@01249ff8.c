
/* btTriangleIndexVertexArray::setPremadeAabb(btVector3 const&, btVector3 const&) const */

void __thiscall
btTriangleIndexVertexArray::setPremadeAabb
          (btTriangleIndexVertexArray *this,btVector3 *param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x4c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x44) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined8 *)(this + 0x5c) = uVar2;
  *(undefined8 *)(this + 0x54) = uVar1;
  return;
}

