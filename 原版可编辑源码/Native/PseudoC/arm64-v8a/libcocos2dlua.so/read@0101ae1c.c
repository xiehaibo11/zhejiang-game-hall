
/* cocos2d::NavMesh::read() */

undefined8 __thiscall cocos2d::NavMesh::read(NavMesh *this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = loadGeomFile(this);
  if ((uVar1 & 1) != 0) {
    uVar2 = loadNavMeshFile(this);
    return uVar2;
  }
  return 0;
}

