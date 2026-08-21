
/* cocos2d::ui::HBox::initWithSize(cocos2d::Size const&) */

bool __thiscall cocos2d::ui::HBox::initWithSize(HBox *this,Size *param_1)

{
  bool bVar1;
  ulong uVar2;
  
                    /* try { // try from 00dde180 to 00ede18f has its CatchHandler @ 00ddec4c */
  uVar2 = (**(code **)(*(long *)this + 0x500))();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x160))(this,param_1);
  }
  return bVar1;
}

