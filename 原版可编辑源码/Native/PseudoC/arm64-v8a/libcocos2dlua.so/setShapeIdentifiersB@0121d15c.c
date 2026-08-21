
/* btManifoldResult::setShapeIdentifiersB(int, int) */

void __thiscall
btManifoldResult::setShapeIdentifiersB(btManifoldResult *this,int param_1,int param_2)

{
  *(int *)(this + 0x24) = param_1;
  *(int *)(this + 0x2c) = param_2;
  return;
}

