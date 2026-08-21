
/* cocos2d::TTFLabelAtals::init() */

undefined8 __thiscall cocos2d::TTFLabelAtals::init(TTFLabelAtals *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  __shared_weak_count *p_Var8;
  
                    /* try { // try from 009b2178 to 00ab21c7 has its CatchHandler @ 009b21f8 */
  puVar4 = operator_new(0x80);
  puVar4[2] = 0;
  *puVar4 = &PTR____shared_ptr_emplace_01c6ac98;
  puVar4[1] = 0;
  FontFreeType::FontFreeType
            ((FontFreeType *)(puVar4 + 3),(basic_string *)this,*(float *)(this + 0x18),
             *(LabelLayoutInfo **)(this + 0x20));
  p_Var8 = *(__shared_weak_count **)(this + 0x40);
  *(FontFreeType **)(this + 0x38) = (FontFreeType *)(puVar4 + 3);
  *(undefined8 **)(this + 0x40) = puVar4;
                    /* try { // try from 009b21c8 to 00ab220b has its CatchHandler @ 009b2134 */
  if (p_Var8 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
                    /* catch() { ... } // from try @ 009b2178 with catch @ 009b21f8 */
      std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
    }
  }
  uVar5 = FontFreeType::loadFont(*(FontFreeType **)(this + 0x38));
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 009b226c with catch @ 009b220c */
    if (*(float *)(*(long *)(this + 0x20) + 4) <= 0.0) {
      bVar3 = *(char *)(*(long *)(this + 0x20) + 0x35) != '\0';
    }
    else {
      bVar3 = true;
    }
    puVar4 = operator_new(0xd0);
    puVar4[2] = 0;
    *puVar4 = &PTR____shared_ptr_emplace_01c6ace8;
    puVar4[1] = 0;
                    /* try { // try from 009b2258 to 00ab226b has its CatchHandler @ 009b2328 */
                    /* try { // try from 009b226c to 00ab2343 has its CatchHandler @ 009b220c */
    FontAtlas::FontAtlas((FontAtlas *)(puVar4 + 3),1,0x400,0x400,bVar3);
    p_Var8 = *(__shared_weak_count **)(this + 0x30);
    *(FontAtlas **)(this + 0x28) = (FontAtlas *)(puVar4 + 3);
    *(undefined8 **)(this + 0x30) = puVar4;
    if (p_Var8 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var8 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
      }
    }
    FontAtlas::init(*(FontAtlas **)(this + 0x28));
    uVar6 = 1;
  }
  return uVar6;
}

