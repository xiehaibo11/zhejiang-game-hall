
/* cocos2d::ui::ScrollViewBar::init() */

undefined8 __thiscall cocos2d::ui::ScrollViewBar::init(ScrollViewBar *this)

{
  ulong uVar1;
  long *plVar2;
  Texture2D *pTVar3;
  undefined8 uVar4;
  
  uVar1 = Node::init();
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    plVar2 = (long *)utils::createSpriteFromBase64Cached
                               ("iVBORw0KGgoAAAANSUhEUgAAAAwAAAAGCAMAAADAMI+zAAAAJ1BMVEX///////////////////////////////////////////////////9Ruv0SAAAADHRSTlMABgcbbW7Hz9Dz+PmlcJP5AAAAMElEQVR4AUXHwQ2AQAhFwYcLH1H6r1djzDK3ASxUpTBeK/uTCyz7dx54b44m4p5cD1MwAooEJyk3AAAAAElFTkSuQmCC"
                                ,"/__halfCircleImage");
    *(long **)(this + 0x328) = plVar2;
    (**(code **)(*plVar2 + 0x148))(plVar2,&Vec2::ANCHOR_MIDDLE_BOTTOM);
    (**(code **)(*(long *)this + 0x530))(this,*(undefined8 *)(this + 0x328));
    pTVar3 = (Texture2D *)(**(code **)(**(long **)(this + 0x328) + 0x550))();
    plVar2 = (long *)Sprite::createWithTexture
                               (pTVar3,(Rect *)(*(long *)(this + 0x328) + 0x408),
                                *(bool *)(*(long *)(this + 0x328) + 0x418));
    *(long **)(this + 0x330) = plVar2;
    (**(code **)(*plVar2 + 0x60))(0xbf800000);
    (**(code **)(**(long **)(this + 0x330) + 0x148))
              (*(long **)(this + 0x330),&Vec2::ANCHOR_MIDDLE_BOTTOM);
    (**(code **)(*(long *)this + 0x530))(this,*(undefined8 *)(this + 0x330));
    plVar2 = (long *)utils::createSpriteFromBase64Cached
                               ("iVBORw0KGgoAAAANSUhEUgAAAAwAAAABCAMAAADdNb8LAAAAA1BMVEX///+nxBvIAAAACklEQVR4AWNABgAADQABYc2cpAAAAABJRU5ErkJggg=="
                                ,"/__bodyImage");
    *(long **)(this + 0x338) = plVar2;
    (**(code **)(*plVar2 + 0x148))(plVar2,&Vec2::ANCHOR_MIDDLE_BOTTOM);
    (**(code **)(*(long *)this + 0x530))(this,*(undefined8 *)(this + 0x338));
    (**(code **)(*(long *)this + 0x4c0))(this,&DAT_0178810c);
    (**(code **)(*(long *)this + 0x580))(this,&Vec2::ZERO);
    Node::setOpacity((Node *)this,'\0');
    *(undefined4 *)(this + 0x354) = 0;
    if (*(int *)(this + 800) == 2) {
      (**(code **)(*(long *)this + 0x180))(0x42b40000,this);
    }
    uVar4 = 1;
  }
  return uVar4;
}

