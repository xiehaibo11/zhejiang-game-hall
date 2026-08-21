
/* cocos2d::Sprite::setScaleX(float) */

void __thiscall cocos2d::Sprite::setScaleX(Sprite *this,float param_1)

{
  Node::setScaleX((Node *)this,param_1);
  if (this[0x319] == (Sprite)0x0) {
    this[0x319] = (Sprite)0x1;
    (**(code **)(*(long *)this + 0x5d8))(this,1);
    if (*(long *)(this + 0x178) != *(long *)(this + 0x180)) {
                    /* WARNING: Could not recover jumptable at 0x00f40c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x658))(this,1);
      return;
    }
  }
  return;
}

