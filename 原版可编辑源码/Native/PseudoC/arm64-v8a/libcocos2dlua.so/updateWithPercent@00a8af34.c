
/* fairygui::GSlider::updateWithPercent(float, bool) */

void __thiscall fairygui::GSlider::updateWithPercent(GSlider *this,float param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  basic_ostream *pbVar3;
  GObject *pGVar4;
  long *plVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  byte local_1b8 [16];
  void *local_1a8;
  undefined8 local_1a0;
  undefined **ppuStack_198;
  locale alStack_190 [8];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130 [17];
  undefined8 local_a8;
  undefined4 local_a0;
  long local_90;
  
                    /* catch() { ... } // from try @ 00a8aeb4 with catch @ 00a8af4c */
                    /* catch() { ... } // from try @ 00a8aecc with catch @ 00a8af50 */
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  fVar6 = (float)NEON_fminnm(param_1,0x3f800000);
  fVar11 = 0.0;
  if (0.0 <= param_1) {
    fVar11 = fVar6;
  }
                    /* catch() { ... } // from try @ 00a8ae80 with catch @ 00a8af80 */
  if (param_2) {
    dVar8 = *(double *)(this + 0x288);
    dVar7 = *(double *)(this + 0x290);
    dVar9 = dVar8 + (dVar7 - dVar8) * (double)fVar11;
    dVar10 = dVar8;
    if (dVar8 <= dVar9) {
      dVar10 = dVar9;
    }
    dVar9 = dVar7;
    if (dVar10 <= dVar7) {
      dVar9 = dVar10;
    }
    if (this[0x2a5] != (GSlider)0x0) {
      dVar9 = (double)(long)dVar9;
      fVar6 = (float)((dVar9 - dVar8) / (dVar7 - dVar8));
      fVar11 = 0.0;
      if (0.0 <= fVar6) {
        fVar11 = (float)NEON_fminnm(fVar6,0x3f800000);
      }
    }
    if (dVar9 != *(double *)(this + 0x298)) {
      *(double *)(this + 0x298) = dVar9;
      uVar2 = UIEventDispatcher::dispatchEvent
                        ((UIEventDispatcher *)this,2,(void *)0x0,(Value *)&cocos2d::Value::Null);
      if ((uVar2 & 1) != 0) goto LAB_00a8b278;
    }
  }
  if (*(long *)(this + 0x2a8) != 0) {
    local_1a0 = 0x16a0c88;
    local_130[0] = 0x16a0cb0;
    std::__ndk1::ios_base::init((ios_base *)local_130,(void *)((ulong)&local_1a0 | 8));
    local_1a0 = 0x16a0c38;
    ppuStack_198 = &PTR__basic_streambuf_01698a08;
    local_a0 = 0xffffffff;
    local_130[0] = 0x16a0c60;
    local_a8 = 0;
    std::__ndk1::locale::locale(alStack_190);
    uStack_160 = 0;
    local_168 = 0;
    ppuStack_198 = &PTR__basic_stringbuf_01698960;
    uStack_170 = 0;
    local_178 = 0;
    uStack_180 = 0;
    local_188 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_140 = 0;
    local_148 = (void *)0x0;
    local_138 = 0x10;
    switch(*(undefined4 *)(this + 0x2a0)) {
    case 0:
                    /* try { // try from 00a8b0e0 to 00b8b12b has its CatchHandler @ 00a8b0e0
                       catch() { ... } // from try @ 00a8b0e0 with catch @ 00a8b0e0
                       catch() { ... } // from try @ 00a8b148 with catch @ 00a8b0e0 */
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                          (float)(int)(fVar11 * 100.0));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"%",1);
      break;
    case 1:
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                          (double)(long)*(double *)(this + 0x298));
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"/",1);
                    /* try { // try from 00a8b12c to 00b8b12f has its CatchHandler @ 00a8b1a4 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                 (double)(long)*(double *)(this + 0x290));
      break;
    case 2:
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                 *(double *)(this + 0x298));
      break;
    case 3:
                    /* try { // try from 00a8b144 to 00b8b147 has its CatchHandler @ 00a8b194 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                 *(double *)(this + 0x290));
    }
                    /* try { // try from 00a8b148 to 00b8b1b7 has its CatchHandler @ 00a8b0e0 */
    plVar5 = *(long **)(this + 0x2a8);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    (**(code **)(*plVar5 + 0x18))(plVar5,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    local_1a0 = 0x16a0c38;
    local_130[0] = 0x16a0c60;
    ppuStack_198 = &PTR__basic_stringbuf_01698960;
                    /* catch() { ... } // from try @ 00a8b144 with catch @ 00a8b194 */
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
                    /* catch() { ... } // from try @ 00a8b12c with catch @ 00a8b1a4 */
    ppuStack_198 = &PTR__basic_streambuf_01698a08;
    std::__ndk1::locale::~locale(alStack_190);
                    /* try { // try from 00a8b1b8 to 00b8b26b has its CatchHandler @ 00a8b1b8
                       catch() { ... } // from try @ 00a8b1b8 with catch @ 00a8b1b8
                       catch() { ... } // from try @ 00a8b2ec with catch @ 00a8b1b8 */
    std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
  }
  pGVar4 = *(GObject **)(this + 0x2b0);
  fVar12 = *(float *)(this + 200) - *(float *)(this + 0x2c8);
  fVar6 = *(float *)(this + 0xcc) - *(float *)(this + 0x2cc);
  if (this[0x2a4] == (GSlider)0x0) {
    if (pGVar4 != (GObject *)0x0) {
      GObject::setSize(pGVar4,(float)(int)(fVar11 * fVar12),*(float *)(pGVar4 + 0xd4),false);
    }
    pGVar4 = *(GObject **)(this + 0x2b8);
    if (pGVar4 != (GObject *)0x0) {
                    /* try { // try from 00a8b26c to 00b8b29f has its CatchHandler @ 00a8b36c */
      GObject::setSize(pGVar4,*(float *)(pGVar4 + 0xd0),(float)(int)(fVar11 * fVar6),false);
    }
  }
  else {
    if (pGVar4 != (GObject *)0x0) {
      GObject::setSize(pGVar4,(float)(int)(fVar11 * fVar12),*(float *)(pGVar4 + 0xd4),false);
      GObject::setX(*(GObject **)(this + 0x2b0),
                    *(float *)(this + 0x2e4) +
                    (fVar12 - *(float *)(*(GObject **)(this + 0x2b0) + 200)));
    }
    pGVar4 = *(GObject **)(this + 0x2b8);
    if (pGVar4 != (GObject *)0x0) {
      GObject::setSize(pGVar4,*(float *)(pGVar4 + 0xd0),(float)(int)(fVar11 * fVar6),false);
      GObject::setY(*(GObject **)(this + 0x2b8),
                    *(float *)(this + 0x2e8) +
                    (fVar6 - *(float *)(*(GObject **)(this + 0x2b8) + 0xcc)));
    }
  }
LAB_00a8b278:
  if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a8b2a0 to 00b8b2b3 has its CatchHandler @ 00a8b338 */
  return;
}

