
/* cocos2d::Sprite::initWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&, bool) */

bool __thiscall
cocos2d::Sprite::initWithTexture(Sprite *this,Texture2D *param_1,Rect *param_2,bool param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  
                    /* try { // try from 00f3eb74 to 0103eb7b has its CatchHandler @ 00f3f4c8 */
  uVar3 = Node::init();
                    /* try { // try from 00f3eb9c to 0103eba3 has its CatchHandler @ 00f3f4b4 */
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *(undefined8 *)(this + 0x310) = 0;
    this[0x319] = (Sprite)0x0;
    (**(code **)(*(long *)this + 0x5d8))(this,0);
    this[0x508] = (Sprite)0x1;
                    /* try { // try from 00f3ebd4 to 0103ec9b has its CatchHandler @ 00f3f508 */
    *(undefined8 *)(this + 0x35c) = 0x30300000001;
    *(undefined2 *)(this + 0x509) = 0;
    (**(code **)(*(long *)this + 0x148))(this,&Vec2::ANCHOR_MIDDLE);
    *(undefined8 *)(this + 0x440) = 0;
    *(undefined8 *)(this + 0x458) = 0;
    *(undefined8 *)(this + 0x450) = 0;
    *(undefined8 *)(this + 0x468) = 0;
    *(undefined8 *)(this + 0x460) = 0;
    *(undefined8 *)(this + 0x478) = 0;
    *(undefined8 *)(this + 0x470) = 0;
    *(undefined8 *)(this + 0x488) = 0;
    *(undefined8 *)(this + 0x480) = 0;
    *(undefined8 *)(this + 0x498) = 0;
    *(undefined8 *)(this + 0x490) = 0;
    *(undefined8 *)(this + 0x4a8) = 0;
    *(undefined8 *)(this + 0x4a0) = 0;
    uVar2 = Color4B::WHITE;
    *(undefined4 *)(this + 0x474) = Color4B::WHITE;
    *(undefined4 *)(this + 0x4a4) = uVar2;
    *(undefined4 *)(this + 0x45c) = uVar2;
    *(undefined4 *)(this + 0x48c) = uVar2;
    (**(code **)(*(long *)this + 0x548))(this,param_1);
    (**(code **)(*(long *)this + 0x560))(this,param_2,param_3,param_2 + 8);
    (**(code **)(*(long *)this + 0x538))(this,0);
  }
  this[0x319] = (Sprite)0x1;
  (**(code **)(*(long *)this + 0x5d8))(this,1);
  return bVar1;
}

