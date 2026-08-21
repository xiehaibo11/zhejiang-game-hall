
/* cocos2d::FontAtlas::FontAtlas(cocos2d::Font&) */

void __thiscall cocos2d::FontAtlas::FontAtlas(FontAtlas *this,Font *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  EventDispatcher *this_00;
  FontAtlas *pFVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  FontAtlas *local_68;
  undefined ***local_60;
  long local_48;
  
                    /* try { // try from 00efc700 to 00ffc707 has its CatchHandler @ 00efc944 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__FontAtlas_016fd000;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
                    /* try { // try from 00efc75c to 00ffc763 has its CatchHandler @ 00efc8c4 */
  *(undefined4 *)(this + 0x70) = 0x3f800000;
                    /* try { // try from 00efc764 to 00ffc773 has its CatchHandler @ 00efc8bc */
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(Font **)(this + 0x80) = param_1;
  pFVar8 = this + 0x88;
  *(undefined8 *)pFVar8 = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[200] = (FontAtlas)0x1;
  *(undefined4 *)(this + 0xcc) = 0;
  Ref::retain((Ref *)param_1);
  plVar7 = *(long **)(this + 0x80);
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)pFVar8 = 0;
    goto LAB_00efc8bc;
  }
  lVar4 = __dynamic_cast(plVar7,&Font::typeinfo,&FontFreeType::typeinfo,0);
                    /* try { // try from 00efc7b4 to 00ffc7c3 has its CatchHandler @ 00efc8c0 */
  *(long *)pFVar8 = lVar4;
  if (lVar4 == 0) goto LAB_00efc8bc;
  iVar2 = (**(code **)(*plVar7 + 0x20))(plVar7);
  *(float *)(this + 0x78) = (float)iVar2;
  uVar3 = FontFreeType::getFontAscender(*(FontFreeType **)(this + 0x88));
  *(undefined4 *)(this + 0xbc) = uVar3;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb4) = 0x200000000;
  if (*(char *)(*(long *)(this + 0x88) + 0x58) != '\0') {
                    /* try { // try from 00efc80c to 00ffc81f has its CatchHandler @ 00efc8c4 */
    *(undefined4 *)(this + 0xb4) = 6;
  }
  lVar4 = Director::getInstance();
  this_00 = *(EventDispatcher **)(lVar4 + 0xb0);
                    /* try { // try from 00efc820 to 00ffc953 has its CatchHandler @ 00efc68c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"event_renderer_recreated");
  local_80 = &PTR_FUN_016fd038;
  uStack_70 = 0;
  local_78 = listenRendererRecreated;
  local_68 = this;
  local_60 = &local_80;
  uVar5 = EventListenerCustom::create((basic_string *)local_98,(function *)&local_80);
  *(undefined8 *)(this + 0xc0) = uVar5;
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_00efc898:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00efc898;
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  EventDispatcher::addEventListenerWithFixedPriority(this_00,*(EventListener **)(this + 0xc0),1);
LAB_00efc8bc:
                    /* catch() { ... } // from try @ 00efc764 with catch @ 00efc8bc */
                    /* catch() { ... } // from try @ 00efc7b4 with catch @ 00efc8c0 */
                    /* catch() { ... } // from try @ 00efc75c with catch @ 00efc8c4
                       catch() { ... } // from try @ 00efc80c with catch @ 00efc8c4 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

