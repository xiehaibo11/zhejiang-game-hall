
/* cocos2d::Sprite::initWithPolygon(cocos2d::PolygonInfo const&) */

undefined4 __thiscall cocos2d::Sprite::initWithPolygon(Sprite *this,PolygonInfo *param_1)

{
  long lVar1;
  TextureCache *this_00;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (TextureCache *)Director::getTextureCache(*(Director **)(this + 0x198));
  lVar2 = TextureCache::addImage(this_00,(basic_string *)(param_1 + 0x30));
  if ((lVar2 == 0) || (uVar3 = (**(code **)(*(long *)this + 0x5f0))(this,lVar2), (uVar3 & 1) == 0))
  {
    uVar4 = 0;
  }
  else {
    PolygonInfo::operator=((PolygonInfo *)(this + 0x4c0),param_1);
    uVar4 = 1;
    *(undefined4 *)(this + 0x42c) = 1;
    Size::operator/((Size *)(this + 0x4e4),*(float *)(*(long *)(this + 0x198) + 0x1a0));
                    /* try { // try from 00f3eb3c to 0103eb43 has its CatchHandler @ 00f3f4bc */
    Node::setContentSize((Node *)this,aSStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

