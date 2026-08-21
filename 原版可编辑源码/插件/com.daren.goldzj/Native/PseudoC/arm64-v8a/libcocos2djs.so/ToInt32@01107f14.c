
/* v8::internal::Object::ToInt32(int*) */

undefined8 __thiscall v8::internal::Object::ToInt32(Object *this,int *param_1)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  
  uVar2 = *(ulong *)this;
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)uVar2 >> 1;
  }
  else if ((((*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x42) ||
            (dVar3 = *(double *)(uVar2 + 3), dVar3 < -2147483648.0)) || (2147483647.0 < dVar3)) ||
          (iVar1 = (int)dVar3, dVar3 != (double)iVar1)) {
    return 0;
  }
  *param_1 = iVar1;
  return 1;
}

