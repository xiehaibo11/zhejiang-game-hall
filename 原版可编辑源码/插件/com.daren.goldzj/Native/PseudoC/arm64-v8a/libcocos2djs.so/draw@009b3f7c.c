
/* cocos2d::renderer::DeviceGraphics::draw(unsigned long, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::draw(DeviceGraphics *this,ulong param_1,int param_2)

{
  long lVar1;
  Uniform *pUVar2;
  long lVar3;
  Uniform *pUVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  State *pSVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  
                    /* try { // try from 009b3f9c to 00ab3ffb has its CatchHandler @ 009b3f9c
                       catch() { ... } // from try @ 009b3f9c with catch @ 009b3f9c
                       catch() { ... } // from try @ 009b47b0 with catch @ 009b3f9c
                       catch() { ... } // from try @ 009b47d4 with catch @ 009b3f9c */
  commitBlendStates(this);
  commitDepthStates(this);
  commitStencilStates(this);
  if (*(short *)(*(long *)(this + 0xc0) + 0x48) != *(short *)(*(long *)(this + 0xb8) + 0x48)) {
    if (*(short *)(*(long *)(this + 0xb8) + 0x48) == 0) {
      glDisable(0xb44);
    }
    else {
      glEnable();
      glCullFace(*(undefined2 *)(*(long *)(this + 0xb8) + 0x48));
    }
  }
  commitVertexBuffer(this);
                    /* try { // try from 009b3ffc to 00ab4013 has its CatchHandler @ 009b48a4 */
  lVar7 = State::getIndexBuffer(*(State **)(this + 0xb8));
  lVar8 = State::getIndexBuffer(*(State **)(this + 0xc0));
  if (lVar8 != lVar7) {
    if (lVar7 == 0) {
      uVar10 = 0;
    }
    else {
                    /* try { // try from 009b401c to 00ab4027 has its CatchHandler @ 009b485c */
      uVar10 = *(uint *)(lVar7 + 0xc);
    }
                    /* try { // try from 009b4028 to 00ab4033 has its CatchHandler @ 009b4858 */
    ccBindBuffer(0x8893,uVar10);
  }
                    /* try { // try from 009b4034 to 00ab403b has its CatchHandler @ 009b48b4 */
  lVar8 = State::getProgram(*(State **)(this + 0xc0));
  lVar9 = State::getProgram(*(State **)(this + 0xb8));
  if (lVar8 == lVar9) {
    bVar6 = false;
  }
  else {
    lVar8 = State::getProgram(*(State **)(this + 0xb8));
    if (*(char *)(lVar8 + 0x7c) == '\0') {
      __android_log_print(5,"renderer"," (396): Failed to use program: has not linked yet.\n");
    }
    else {
      lVar8 = State::getProgram(*(State **)(this + 0xb8));
      glUseProgram(*(undefined4 *)(lVar8 + 0xc));
                    /* try { // try from 009b4070 to 00ab409f has its CatchHandler @ 009b4860 */
    }
    bVar6 = true;
  }
  pSVar17 = *(State **)(this + 0xb8);
  lVar8 = *(long *)(pSVar17 + 0x88);
  lVar9 = *(long *)(pSVar17 + 0x90);
  if (0 < (int)((ulong)(lVar9 - lVar8) >> 3)) {
    lVar19 = *(long *)(this + 0xc0);
    lVar1 = *(long *)(lVar19 + 0x88);
    lVar3 = *(long *)(lVar19 + 0x90);
    uVar18 = 0;
    do {
                    /* try { // try from 009b40ec to 00ab40f3 has its CatchHandler @ 009b4824 */
      if ((long)uVar18 < (lVar3 - lVar1) * 0x20000000 >> 0x20) {
                    /* try { // try from 009b40fc to 00ab4103 has its CatchHandler @ 009b481c */
        lVar16 = *(long *)(*(long *)(pSVar17 + 0x88) + uVar18 * 8);
        if (*(long *)(*(long *)(lVar19 + 0x88) + uVar18 * 8) != lVar16) goto joined_r0x009b40e4;
      }
      else {
        lVar16 = *(long *)(*(long *)(pSVar17 + 0x88) + uVar18 * 8);
joined_r0x009b40e4:
        if (lVar16 != 0) {
          glActiveTexture((int)uVar18 + 0x84c0);
                    /* try { // try from 009b411c to 00ab4133 has its CatchHandler @ 009b47f8 */
          glBindTexture(*(undefined4 *)(lVar16 + 0x1c),*(undefined4 *)(lVar16 + 0xc));
        }
      }
      uVar18 = uVar18 + 1;
    } while (((ulong)(lVar9 - lVar8) >> 3 & 0xffffffff) != uVar18);
    pSVar17 = *(State **)(this + 0xb8);
  }
  lVar8 = State::getProgram(pSVar17);
  pUVar2 = *(Uniform **)(lVar8 + 0x30);
  pUVar4 = *(Uniform **)(lVar8 + 0x38);
  do {
    if (pUVar2 == pUVar4) {
      if (lVar7 == 0) {
                    /* try { // try from 009b424c to 00ab4263 has its CatchHandler @ 009b48b4 */
        glDrawArrays(*(undefined2 *)(*(long *)(this + 0xb8) + 0x4a),param_1 & 0xffffffff,param_2);
      }
      else {
        glDrawElements(*(undefined2 *)(*(long *)(this + 0xb8) + 0x4a),param_2,
                       *(undefined2 *)(lVar7 + 0x18),*(uint *)(lVar7 + 0x20) * param_1);
      }
      pSVar17 = *(State **)(this + 0xc0);
      auVar20 = NEON_ext(*(undefined1 (*) [16])(this + 0xb8),*(undefined1 (*) [16])(this + 0xb8),8,1
                        );
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      *(long *)(this + 0xc0) = auVar20._8_8_;
      *(long *)(this + 0xb8) = auVar20._0_8_;
                    /* try { // try from 009b4268 to 00ab42ab has its CatchHandler @ 009b4860 */
      State::reset(pSVar17);
      return;
    }
    uVar18 = *(ulong *)(this + 0x98);
    if (uVar18 != 0) {
      uVar11 = *(ulong *)(pUVar2 + 0x18);
      uVar12 = uVar18 - 1;
      if ((uVar12 & uVar18) == 0) {
        uVar13 = uVar12 & uVar11;
      }
      else {
        uVar13 = uVar11;
        if (uVar18 <= uVar11) {
          uVar13 = 0;
          if (uVar18 != 0) {
            uVar13 = uVar11 / uVar18;
          }
          uVar13 = uVar11 - uVar13 * uVar18;
        }
      }
      plVar14 = *(long **)(*(long *)(this + 0x90) + uVar13 * 8);
      if (plVar14 != (long *)0x0) {
        do {
          while( true ) {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_009b415c;
            uVar15 = plVar14[1];
            if (uVar15 != uVar11) break;
            if (plVar14[2] == uVar11) {
              if ((plVar14 != (long *)0x0) && ((bVar6 || (*(char *)(plVar14 + 6) != '\0')))) {
                    /* try { // try from 009b4208 to 00ab420b has its CatchHandler @ 009b47e0 */
                *(undefined1 *)(plVar14 + 6) = 0;
                Program::Uniform::setUniform
                          (pUVar2,plVar14[3],*(undefined1 *)((long)plVar14 + 0x31),plVar14[5]);
              }
              goto LAB_009b415c;
            }
          }
          if ((uVar12 & uVar18) == 0) {
            uVar15 = uVar15 & uVar12;
          }
          else if (uVar18 <= uVar15) {
            uVar5 = 0;
            if (uVar18 != 0) {
              uVar5 = uVar15 / uVar18;
            }
                    /* try { // try from 009b41dc to 00ab41e3 has its CatchHandler @ 009b47e8 */
            uVar15 = uVar15 - uVar5 * uVar18;
          }
        } while (uVar15 == uVar13);
      }
    }
LAB_009b415c:
    pUVar2 = pUVar2 + 0x38;
                    /* try { // try from 009b4160 to 00ab418f has its CatchHandler @ 009b4854 */
  } while( true );
}

