
bool FUN_00bfb678(double *param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = (uint)((long)*param_1 >> 0x2f);
  uVar2 = (uint)((long)*param_2 >> 0x2f);
  if (uVar1 == uVar2) {
    if (0xfffffffc < uVar1) {
      return true;
    }
    if (0xfffffff1 < uVar1) {
      return *param_1 == *param_2;
    }
  }
  else if ((0xfffffff2 < uVar1) || (0xfffffff2 < uVar2)) {
    return false;
  }
  if (uVar1 == 0xfffffff2) {
    dVar4 = (double)*(int *)param_1;
  }
  else {
    dVar4 = *param_1;
  }
  if (uVar2 == 0xfffffff2) {
    dVar3 = (double)*(int *)param_2;
  }
  else {
    dVar3 = *param_2;
  }
  return dVar4 == dVar3;
}

