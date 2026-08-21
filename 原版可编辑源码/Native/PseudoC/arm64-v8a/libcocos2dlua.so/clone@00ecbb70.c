
/* cocos2d::Follow::clone() const */

Follow * __thiscall cocos2d::Follow::clone(Follow *this)

{
  Follow *this_00;
  ulong uVar1;
  Node *pNVar2;
  float fVar3;
  float fVar4;
  
  pNVar2 = *(Node **)(this + 0x50);
  fVar3 = *(float *)(this + 0x7c);
  fVar4 = *(float *)(this + 0x80);
  this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this_00 != (Follow *)0x0) {
    Follow(this_00);
    uVar1 = initWithTargetAndOffset(this_00,pNVar2,fVar3,fVar4,this + 0x84);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (Follow *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

