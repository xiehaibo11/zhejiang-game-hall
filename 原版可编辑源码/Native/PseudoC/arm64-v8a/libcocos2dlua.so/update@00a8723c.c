
/* fairygui::GProgressBar::update(double) */

void __thiscall fairygui::GProgressBar::update(GProgressBar *this,double param_1)

{
  long lVar1;
  basic_ostream *pbVar2;
  GProgressBar *this_00;
  ulong uVar3;
  GObject *pGVar4;
  long *plVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
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
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  dVar7 = *(double *)(this + 0x280);
  fVar8 = 0.0;
                    /* try { // try from 00a8728c to 00b872ef has its CatchHandler @ 00a88188 */
  if ((*(double *)(this + 0x288) != dVar7) &&
     (fVar6 = (float)((param_1 - dVar7) / (*(double *)(this + 0x288) - dVar7)), fVar8 = 0.0,
     0.0 <= fVar6)) {
    fVar8 = (float)NEON_fminnm(fVar6,0x3f800000);
  }
  this_00 = this;
  if (*(long *)(this + 0x2a0) != 0) {
    local_1a0 = 0x16a0c88;
    local_130[0] = 0x16a0cb0;
    std::__ndk1::ios_base::init((ios_base *)local_130,(void *)((ulong)&local_1a0 | 8));
                    /* try { // try from 00a872f4 to 00b872fb has its CatchHandler @ 00a88104 */
    local_1a0 = 0x16a0c38;
                    /* try { // try from 00a872fc to 00b8731b has its CatchHandler @ 00a870f0 */
    ppuStack_198 = &PTR__basic_streambuf_01698a08;
    local_a0 = 0xffffffff;
    local_130[0] = 0x16a0c60;
    local_a8 = 0;
                    /* try { // try from 00a8731c to 00b87323 has its CatchHandler @ 00a8815c */
                    /* try { // try from 00a87324 to 00b8732f has its CatchHandler @ 00a8814c */
    std::__ndk1::locale::locale(alStack_190);
                    /* try { // try from 00a87330 to 00b87483 has its CatchHandler @ 00a881a0 */
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
    if (*(uint *)(this + 0x298) < 4) {
      switch(*(uint *)(this + 0x298)) {
      case 0:
        pbVar2 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                            (float)(int)(fVar8 * 100.0));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"%",1);
        break;
      case 1:
        pbVar2 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                            (double)(long)param_1);
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar2,"/",1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                   (double)(long)*(double *)(this + 0x288));
        break;
      case 2:
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                   (double)(long)param_1);
        break;
      case 3:
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,
                   (double)(long)*(double *)(this + 0x288));
      }
    }
    plVar5 = *(long **)(this + 0x2a0);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    (**(code **)(*plVar5 + 0x18))(plVar5,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    local_1a0 = 0x16a0c38;
    local_130[0] = 0x16a0c60;
    ppuStack_198 = &PTR__basic_stringbuf_01698960;
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    ppuStack_198 = &PTR__basic_streambuf_01698a08;
    std::__ndk1::locale::~locale(alStack_190);
    this_00 = (GProgressBar *)std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
  }
  pGVar4 = *(GObject **)(this + 0x2a8);
  fVar9 = *(float *)(this + 200) - *(float *)(this + 0x2c0);
  fVar6 = *(float *)(this + 0xcc) - *(float *)(this + 0x2c4);
  if (this[0x29c] == (GProgressBar)0x0) {
    if ((pGVar4 != (GObject *)0x0) &&
       (this_00 = (GProgressBar *)setFillAmount(this_00,pGVar4,fVar8), ((ulong)this_00 & 1) == 0)) {
                    /* try { // try from 00a8751c to 00b8753f has its CatchHandler @ 00a870f0 */
      this_00 = (GProgressBar *)
                GObject::setSize(*(GObject **)(this + 0x2a8),(float)(int)(fVar8 * fVar9),
                                 *(float *)(*(GObject **)(this + 0x2a8) + 0xd4),false);
    }
                    /* try { // try from 00a87540 to 00b87547 has its CatchHandler @ 00a88148 */
    if ((*(GObject **)(this + 0x2b0) != (GObject *)0x0) &&
       (uVar3 = setFillAmount(this_00,*(GObject **)(this + 0x2b0),fVar8), (uVar3 & 1) == 0)) {
                    /* try { // try from 00a87548 to 00b8765b has its CatchHandler @ 00a88190 */
      GObject::setSize(*(GObject **)(this + 0x2b0),*(float *)(*(GObject **)(this + 0x2b0) + 0xd0),
                       (float)(int)(fVar8 * fVar6),false);
    }
  }
  else {
    if ((pGVar4 != (GObject *)0x0) &&
       (this_00 = (GProgressBar *)setFillAmount(this_00,pGVar4,1.0 - fVar8),
       ((ulong)this_00 & 1) == 0)) {
      GObject::setSize(*(GObject **)(this + 0x2a8),(float)(int)(fVar8 * fVar9),
                       *(float *)(*(GObject **)(this + 0x2a8) + 0xd4),false);
      this_00 = (GProgressBar *)
                GObject::setX(*(GObject **)(this + 0x2a8),
                              *(float *)(this + 0x2c8) +
                              (fVar9 - *(float *)(*(GObject **)(this + 0x2a8) + 200)));
    }
                    /* try { // try from 00a874d0 to 00b8751b has its CatchHandler @ 00a88114 */
    if ((*(GObject **)(this + 0x2b0) != (GObject *)0x0) &&
       (uVar3 = setFillAmount(this_00,*(GObject **)(this + 0x2b0),1.0 - fVar8), (uVar3 & 1) == 0)) {
      GObject::setSize(*(GObject **)(this + 0x2b0),*(float *)(*(GObject **)(this + 0x2b0) + 0xd0),
                       (float)(int)(fVar8 * fVar6),false);
      GObject::setY(*(GObject **)(this + 0x2b0),
                    *(float *)(this + 0x2cc) +
                    (fVar6 - *(float *)(*(GObject **)(this + 0x2b0) + 0xcc)));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

