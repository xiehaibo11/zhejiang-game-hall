
/* btDefaultCollisionConfiguration::setConvexConvexMultipointIterations(int, int) */

void __thiscall
btDefaultCollisionConfiguration::setConvexConvexMultipointIterations
          (btDefaultCollisionConfiguration *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x40);
  *(int *)(lVar1 + 0x20) = param_1;
  *(int *)(lVar1 + 0x24) = param_2;
  return;
}

