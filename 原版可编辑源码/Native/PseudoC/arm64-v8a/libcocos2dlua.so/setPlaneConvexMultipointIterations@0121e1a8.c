
/* btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations(int, int) */

void __thiscall
btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations
          (btDefaultCollisionConfiguration *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb0);
  *(int *)(lVar1 + 0xc) = param_1;
  *(int *)(lVar1 + 0x10) = param_2;
  lVar1 = *(long *)(this + 0xa8);
  *(int *)(lVar1 + 0xc) = param_1;
  *(int *)(lVar1 + 0x10) = param_2;
  return;
}

