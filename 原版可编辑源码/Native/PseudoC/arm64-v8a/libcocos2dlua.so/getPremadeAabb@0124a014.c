
/* btTriangleIndexVertexArray::getPremadeAabb(btVector3*, btVector3*) const */

void __thiscall
btTriangleIndexVertexArray::getPremadeAabb
          (btTriangleIndexVertexArray *this,btVector3 *param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x44);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x4c);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x54);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(this + 0x5c);
  *(undefined8 *)param_2 = uVar1;
  return;
}

