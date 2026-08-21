
/* fairygui::GLoader::clearContent() */

void __thiscall fairygui::GLoader::clearContent(GLoader *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x210);
  if (iVar1 == 4) {
    uVar2 = (**(code **)(**(long **)(this + 0x220) + 0x5b0))();
    (**(code **)(*(long *)this + 0xb8))(this,uVar2);
    iVar1 = *(int *)(this + 0x210);
  }
  if (iVar1 == 2) {
                    /* try { // try from 00a7f1bc to 00b7f20f has its CatchHandler @ 00a7f1bc
                       catch() { ... } // from try @ 00a7f1bc with catch @ 00a7f1bc
                       catch() { ... } // from try @ 00a7f2b4 with catch @ 00a7f1bc
                       catch() { ... } // from try @ 00a7f314 with catch @ 00a7f1bc */
    ActionMovieClip::setAnimation(*(ActionMovieClip **)(this + 0x230),(Animation *)0x0,0.0,false);
    cocos2d::Node::stopAction(*(Action **)(this + 0x220));
    lVar3 = *(long *)(this + 0x228);
  }
  else {
    lVar3 = *(long *)(this + 0x228);
  }
  if (lVar3 != 0) {
    (**(code **)(**(long **)(this + 0xa8) + 0x280))
              (*(long **)(this + 0xa8),*(undefined8 *)(lVar3 + 0xa8),1);
    if (*(Ref **)(this + 0x228) != (Ref *)0x0) {
      cocos2d::Ref::release(*(Ref **)(this + 0x228));
    }
  }
  FUISprite::clearContent(*(FUISprite **)(this + 0x220));
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x210) = 0;
                    /* try { // try from 00a7f210 to 00b7f24b has its CatchHandler @ 00a7f354 */
  return;
}

