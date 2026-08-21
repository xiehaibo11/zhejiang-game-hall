
/* cocos2d::ShakyTiles3D::initWithDuration(float, cocos2d::Size const&, int, bool) */

bool __thiscall
cocos2d::ShakyTiles3D::initWithDuration
          (ShakyTiles3D *this,float param_1,Size *param_2,int param_3,bool param_4)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(int *)(this + 0x68) = param_3;
    this[0x6c] = (ShakyTiles3D)param_4;
  }
  return bVar1;
}

