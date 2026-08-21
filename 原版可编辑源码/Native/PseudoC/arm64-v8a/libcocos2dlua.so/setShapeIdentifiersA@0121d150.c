
/* btManifoldResult::setShapeIdentifiersA(int, int) */

void __thiscall
btManifoldResult::setShapeIdentifiersA(btManifoldResult *this,int param_1,int param_2)

{
  *(int *)(this + 0x20) = param_1;
  *(int *)(this + 0x28) = param_2;
  return;
}

