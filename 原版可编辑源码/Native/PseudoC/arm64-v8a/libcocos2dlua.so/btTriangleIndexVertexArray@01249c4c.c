
/* btTriangleIndexVertexArray::btTriangleIndexVertexArray(int, int*, int, int, float*, int) */

void __thiscall
btTriangleIndexVertexArray::btTriangleIndexVertexArray
          (btTriangleIndexVertexArray *this,int param_1,int *param_2,int param_3,int param_4,
          float *param_5,int param_6)

{
  int local_50 [2];
  int *local_48;
  int local_40;
  int iStack_3c;
  float *local_38;
  int local_30;
  undefined8 local_2c;
  
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined8 *)(this + 0xc) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x30] = (btTriangleIndexVertexArray)0x1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__btTriangleIndexVertexArray_01734850;
  local_2c = 2;
  local_50[0] = param_1;
  local_48 = param_2;
  local_40 = param_3;
  iStack_3c = param_4;
  local_38 = param_5;
  local_30 = param_6;
  addIndexedMesh(this,local_50,2);
  return;
}

