
/* btTriangleIndexVertexArray::getLockedReadOnlyVertexIndexBase(unsigned char const**, int&,
   PHY_ScalarType&, int&, unsigned char const**, int&, int&, PHY_ScalarType&, int) const */

void __thiscall
btTriangleIndexVertexArray::getLockedReadOnlyVertexIndexBase
          (btTriangleIndexVertexArray *this,uchar **param_1,int *param_2,PHY_ScalarType *param_3,
          int *param_4,uchar **param_5,int *param_6,int *param_7,PHY_ScalarType *param_8,int param_9
          )

{
  int *piVar1;
  
  piVar1 = (int *)(*(long *)(this + 0x28) + (long)param_9 * 0x30);
  *param_2 = piVar1[5];
  *param_1 = *(uchar **)(piVar1 + 6);
  *(int *)param_3 = piVar1[10];
  *param_4 = piVar1[8];
  *param_7 = *piVar1;
  *param_5 = *(uchar **)(piVar1 + 2);
  *param_6 = piVar1[4];
  *(int *)param_8 = piVar1[9];
  return;
}

