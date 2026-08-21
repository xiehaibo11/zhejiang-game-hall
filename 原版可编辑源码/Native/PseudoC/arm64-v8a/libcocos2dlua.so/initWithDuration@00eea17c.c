
/* cocos2d::TurnOffTiles::initWithDuration(float, cocos2d::Size const&, unsigned int) */

bool __thiscall
cocos2d::TurnOffTiles::initWithDuration(TurnOffTiles *this,float param_1,Size *param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(uint *)(this + 0x68) = param_3;
    *(undefined8 *)(this + 0x70) = 0;
  }
  return bVar1;
}

