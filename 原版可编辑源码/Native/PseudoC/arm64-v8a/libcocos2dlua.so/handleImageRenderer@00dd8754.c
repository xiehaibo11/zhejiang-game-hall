
/* cocos2d::ui::RichText::handleImageRenderer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType, cocos2d::Color3B const&, unsigned char, int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::ui::RichText::handleImageRenderer
          (RichText *this,basic_string *param_1,int param_3,undefined8 param_4,undefined8 param_5,
          int param_6,int param_7,undefined8 param_8)

{
  long lVar1;
  Node *pNVar2;
  Size *pSVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  Size aSStack_a0 [8];
  float local_98;
  float local_94;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  RichText *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    pNVar2 = (Node *)Sprite::create(param_1);
  }
  else {
    pNVar2 = (Node *)Sprite::createWithSpriteFrameName(param_1);
  }
  if (pNVar2 != (Node *)0x0) {
    pSVar3 = (Size *)(**(code **)(*(long *)pNVar2 + 0x168))(pNVar2);
    Size::Size((Size *)&local_98,pSVar3);
    if (param_6 != -1) {
      (**(code **)(*(long *)pNVar2 + 0x50))((float)param_6 / local_98,pNVar2);
    }
    if (param_7 != -1) {
                    /* try { // try from 00dd8804 to 00ed889f has its CatchHandler @ 00dd8804
                       catch() { ... } // from try @ 00dd8804 with catch @ 00dd8804
                       catch() { ... } // from try @ 00dd8968 with catch @ 00dd8804 */
      (**(code **)(*(long *)pNVar2 + 0x60))((float)param_7 / local_94,pNVar2);
    }
    fVar6 = (float)(**(code **)(*(long *)pNVar2 + 0x58))(pNVar2);
    fVar7 = (float)(**(code **)(*(long *)pNVar2 + 0x68))(pNVar2);
    Size::Size(aSStack_a0,local_98 * fVar6,local_94 * fVar7);
    (**(code **)(*(long *)pNVar2 + 0x160))(pNVar2,aSStack_a0);
    (**(code **)(*(long *)pNVar2 + 0x90))(0x3f800000,0x3f800000,pNVar2);
    handleCustomRenderer(this,pNVar2);
    local_70 = &local_90;
                    /* try { // try from 00dd88a0 to 00ed88a7 has its CatchHandler @ 00dd89b4 */
    local_90 = &PTR_FUN_016e2cb8;
    uStack_80 = 0;
    local_88 = openUrl;
    local_78 = this;
    uVar4 = ListenerComponent::create(pNVar2,param_8,&local_90);
                    /* try { // try from 00dd88cc to 00ed8947 has its CatchHandler @ 00dd89c8 */
    (**(code **)(*(long *)pNVar2 + 0x460))(pNVar2,uVar4);
    if (&local_90 == local_70) {
      pcVar5 = (code *)(*local_70)[4];
    }
    else {
      if (local_70 == (undefined ***)0x0) goto LAB_00dd8904;
      pcVar5 = (code *)(*local_70)[5];
    }
    (*pcVar5)();
  }
LAB_00dd8904:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

