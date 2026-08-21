
/* cocos2d::ShatteredTiles3D::initWithDuration(float, cocos2d::Size const&, int, bool) */

bool __thiscall
cocos2d::ShatteredTiles3D::initWithDuration
          (ShatteredTiles3D *this,float param_1,Size *param_2,int param_3,bool param_4)

{
  bool bVar1;
  ulong uVar2;
  
                    /* try { // try from 00ee8bec to 00fe8c33 has its CatchHandler @ 00ee8bec
                       catch() { ... } // from try @ 00ee8bec with catch @ 00ee8bec
                       catch() { ... } // from try @ 00ee8ca4 with catch @ 00ee8bec */
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    this[0x6c] = (ShatteredTiles3D)0x0;
    *(int *)(this + 0x68) = param_3;
    this[0x6d] = (ShatteredTiles3D)param_4;
  }
  return bVar1;
}

