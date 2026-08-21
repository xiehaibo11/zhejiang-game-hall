
/* cocos2d::GLProgram::bindPredefinedVertexAttribs() */

void __thiscall cocos2d::GLProgram::bindPredefinedVertexAttribs(GLProgram *this)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00fceed4 with catch @ 00fcef44 */
  if (((DAT_01792650 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792650), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 00fcf03c with catch @ 00fcf00c */
    DAT_017925d8 = 1;
    DAT_017925e8 = 2;
    DAT_017925f8 = 3;
    DAT_01792608 = 4;
                    /* try { // try from 00fcf034 to 010cf03b has its CatchHandler @ 00fcf0a4 */
    DAT_01792618 = 5;
                    /* try { // try from 00fcf03c to 010cf0bf has its CatchHandler @ 00fcf00c */
    DAT_01792628 = 6;
    DAT_017925c0 = ATTRIBUTE_NAME_POSITION;
    DAT_01792638 = 0xb;
    DAT_017925d0 = ATTRIBUTE_NAME_COLOR;
    DAT_017925e0 = ATTRIBUTE_NAME_TEX_COORD;
    DAT_017925f0 = ATTRIBUTE_NAME_TEX_COORD1;
    DAT_01792600 = ATTRIBUTE_NAME_TEX_COORD2;
    DAT_01792610 = ATTRIBUTE_NAME_TEX_COORD3;
                    /* catch() { ... } // from try @ 00fcf034 with catch @ 00fcf0a4 */
    DAT_01792620 = ATTRIBUTE_NAME_NORMAL;
    DAT_01792630 = ATTRIBUTE_NAME_ID;
    DAT_01792640 = ATTRIBUTE_NAME_ALPHA;
    DAT_017925c8 = 0;
    DAT_01792648 = 0xc;
    __cxa_guard_release(&DAT_01792650);
  }
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_017925c8,DAT_017925c0);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_017925d8,DAT_017925d0);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_017925e8,DAT_017925e0);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_017925f8,DAT_017925f0);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_01792608,DAT_01792600);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_01792618,DAT_01792610);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_01792628,DAT_01792620);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_01792638,DAT_01792630);
  glBindAttribLocation(*(undefined4 *)(this + 0x24),DAT_01792648,DAT_01792640);
  return;
}

