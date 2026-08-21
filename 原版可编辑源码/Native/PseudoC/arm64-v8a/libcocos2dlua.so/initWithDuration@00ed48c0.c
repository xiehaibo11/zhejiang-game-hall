
/* cocos2d::GridAction::initWithDuration(float, cocos2d::Size const&) */

bool __thiscall cocos2d::GridAction::initWithDuration(GridAction *this,float param_1,Size *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    Size::operator=((Size *)(this + 0x58),param_2);
  }
  return bVar1;
}

