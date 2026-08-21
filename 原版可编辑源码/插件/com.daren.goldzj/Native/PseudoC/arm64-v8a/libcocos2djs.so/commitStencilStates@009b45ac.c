
/* cocos2d::renderer::DeviceGraphics::commitStencilStates() */

void __thiscall cocos2d::renderer::DeviceGraphics::commitStencilStates(DeviceGraphics *this)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(this + 0xb8);
  lVar8 = *(long *)(this + 0xc0);
  cVar1 = *(char *)(lVar7 + 0x18);
  if (*(char *)(lVar8 + 0x18) != cVar1) {
    if (cVar1 != '\0') {
      glEnable(0xb90);
      lVar7 = *(long *)(this + 0xb8);
    }
                    /* try { // try from 009b4614 to 00ab461b has its CatchHandler @ 009b47f4 */
    if (*(char *)(lVar7 + 0x19) == '\0') {
      glStencilFunc(*(undefined2 *)(lVar7 + 0x1a),*(undefined4 *)(lVar7 + 0x1c),
                    *(undefined4 *)(lVar7 + 0x20));
                    /* try { // try from 009b46a0 to 00ab46c7 has its CatchHandler @ 009b47fc */
      glStencilMask(*(undefined4 *)(*(long *)(this + 0xb8) + 0x2c));
      lVar7 = *(long *)(this + 0xb8);
      glStencilOp(*(undefined2 *)(lVar7 + 0x24),*(undefined2 *)(lVar7 + 0x26),
                  *(undefined2 *)(lVar7 + 0x28));
    }
    else {
      glStencilFuncSeparate(0x404);
      glStencilMaskSeparate(0x404,*(undefined4 *)(*(long *)(this + 0xb8) + 0x2c));
      lVar7 = *(long *)(this + 0xb8);
                    /* try { // try from 009b4640 to 00ab4643 has its CatchHandler @ 009b4828 */
      glStencilOpSeparate(0x404,*(undefined2 *)(lVar7 + 0x24),*(undefined2 *)(lVar7 + 0x26),
                          *(undefined2 *)(lVar7 + 0x28));
      lVar7 = *(long *)(this + 0xb8);
                    /* try { // try from 009b4658 to 00ab465f has its CatchHandler @ 009b47f0 */
      glStencilFuncSeparate
                (0x405,*(undefined2 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),
                 *(undefined4 *)(lVar7 + 0x38));
                    /* try { // try from 009b466c to 00ab4687 has its CatchHandler @ 009b4828 */
      glStencilMaskSeparate(0x405,*(undefined4 *)(*(long *)(this + 0xb8) + 0x44));
      lVar7 = *(long *)(this + 0xb8);
      glStencilOpSeparate(0x405,*(undefined2 *)(lVar7 + 0x3c),*(undefined2 *)(lVar7 + 0x3e),
                          *(undefined2 *)(lVar7 + 0x40));
    }
    if (*(char *)(*(long *)(this + 0xb8) + 0x18) != '\0') {
      return;
    }
    glDisable(0xb90);
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = *(char *)(lVar7 + 0x19);
                    /* try { // try from 009b45e0 to 00ab45e7 has its CatchHandler @ 009b47ec */
  if (*(char *)(lVar8 + 0x19) != cVar1) {
    if (cVar1 == '\0') {
                    /* try { // try from 009b4770 to 00ab47af has its CatchHandler @ 009b47e4 */
      glStencilFunc(*(undefined2 *)(lVar7 + 0x1a),*(undefined4 *)(lVar7 + 0x1c),
                    *(undefined4 *)(lVar7 + 0x20));
      glStencilMask(*(undefined4 *)(*(long *)(this + 0xb8) + 0x2c));
      lVar7 = *(long *)(this + 0xb8);
      sVar2 = *(short *)(lVar7 + 0x24);
      sVar5 = *(short *)(lVar7 + 0x26);
      uVar3 = *(undefined2 *)(lVar7 + 0x28);
      goto LAB_009b497c;
    }
    glStencilFuncSeparate(0x404);
    glStencilMaskSeparate(0x404,*(undefined4 *)(*(long *)(this + 0xb8) + 0x2c));
    lVar7 = *(long *)(this + 0xb8);
                    /* try { // try from 009b4714 to 00ab471f has its CatchHandler @ 009b47d8 */
    glStencilOpSeparate(0x404,*(undefined2 *)(lVar7 + 0x24),*(undefined2 *)(lVar7 + 0x26),
                        *(undefined2 *)(lVar7 + 0x28));
    lVar7 = *(long *)(this + 0xb8);
    glStencilFuncSeparate
              (0x405,*(undefined2 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),
               *(undefined4 *)(lVar7 + 0x38));
                    /* try { // try from 009b4740 to 00ab4743 has its CatchHandler @ 009b482c */
    glStencilMaskSeparate(0x405,*(undefined4 *)(*(long *)(this + 0xb8) + 0x44));
    lVar7 = *(long *)(this + 0xb8);
    sVar2 = *(short *)(lVar7 + 0x3c);
    sVar5 = *(short *)(lVar7 + 0x3e);
    uVar3 = *(undefined2 *)(lVar7 + 0x40);
    goto LAB_009b48dc;
  }
  sVar5 = *(short *)(lVar7 + 0x1a);
  bVar4 = *(short *)(lVar8 + 0x1a) == sVar5;
  if (cVar1 == '\0') {
    if (bVar4) {
      iVar6 = *(int *)(lVar7 + 0x1c);
                    /* catch() { ... } // from try @ 009b4970 with catch @ 009b490c */
      if ((*(int *)(lVar8 + 0x1c) != *(int *)(lVar7 + 0x1c)) ||
         (iVar6 = *(int *)(lVar8 + 0x1c), *(int *)(lVar8 + 0x20) != *(int *)(lVar7 + 0x20)))
      goto LAB_009b4910;
    }
    else {
      iVar6 = *(int *)(lVar7 + 0x1c);
LAB_009b4910:
      glStencilFunc(sVar5,iVar6,*(undefined4 *)(lVar7 + 0x20));
      lVar7 = *(long *)(this + 0xb8);
      lVar8 = *(long *)(this + 0xc0);
    }
    if (*(int *)(lVar8 + 0x2c) != *(int *)(lVar7 + 0x2c)) {
      glStencilMask();
      lVar7 = *(long *)(this + 0xb8);
      lVar8 = *(long *)(this + 0xc0);
    }
    sVar2 = *(short *)(lVar7 + 0x24);
    if (*(short *)(lVar8 + 0x24) == sVar2) {
      sVar5 = *(short *)(lVar7 + 0x26);
                    /* try { // try from 009b495c to 00ab496f has its CatchHandler @ 009b49f0 */
      if ((*(short *)(lVar8 + 0x26) == *(short *)(lVar7 + 0x26)) &&
         (sVar5 = *(short *)(lVar8 + 0x26), *(short *)(lVar8 + 0x28) == *(short *)(lVar7 + 0x28))) {
        return;
      }
    }
    else {
      sVar5 = *(short *)(lVar7 + 0x26);
    }
    uVar3 = *(undefined2 *)(lVar7 + 0x28);
LAB_009b497c:
    glStencilOp(sVar2,sVar5,uVar3);
    return;
  }
  if (bVar4) {
    iVar6 = *(int *)(lVar7 + 0x1c);
                    /* try { // try from 009b47b0 to 00ab47cb has its CatchHandler @ 009b3f9c */
    if ((*(int *)(lVar8 + 0x1c) != *(int *)(lVar7 + 0x1c)) ||
       (iVar6 = *(int *)(lVar8 + 0x1c), *(int *)(lVar8 + 0x20) != *(int *)(lVar7 + 0x20)))
    goto LAB_009b47bc;
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x1c);
LAB_009b47bc:
    glStencilFuncSeparate(0x404,sVar5,iVar6,*(undefined4 *)(lVar7 + 0x20));
    lVar7 = *(long *)(this + 0xb8);
    lVar8 = *(long *)(this + 0xc0);
  }
                    /* try { // try from 009b47cc to 00ab47d3 has its CatchHandler @ 009b47d4 */
                    /* catch() { ... } // from try @ 009b47cc with catch @ 009b47d4
                       try { // try from 009b47d4 to 00ab490b has its CatchHandler @ 009b3f9c */
                    /* catch() { ... } // from try @ 009b4714 with catch @ 009b47d8 */
  if (*(int *)(lVar8 + 0x2c) != *(int *)(lVar7 + 0x2c)) {
                    /* catch() { ... } // from try @ 009b454c with catch @ 009b47dc */
                    /* catch() { ... } // from try @ 009b4208 with catch @ 009b47e0 */
    glStencilMaskSeparate(0x404);
                    /* catch() { ... } // from try @ 009b4770 with catch @ 009b47e4 */
    lVar7 = *(long *)(this + 0xb8);
    lVar8 = *(long *)(this + 0xc0);
  }
                    /* catch() { ... } // from try @ 009b41dc with catch @ 009b47e8 */
                    /* catch() { ... } // from try @ 009b45e0 with catch @ 009b47ec */
                    /* catch() { ... } // from try @ 009b4658 with catch @ 009b47f0 */
                    /* catch() { ... } // from try @ 009b4614 with catch @ 009b47f4 */
  if (*(short *)(lVar8 + 0x24) == *(short *)(lVar7 + 0x24)) {
                    /* catch() { ... } // from try @ 009b411c with catch @ 009b47f8
                       catch() { ... } // from try @ 009b4530 with catch @ 009b47f8 */
                    /* catch() { ... } // from try @ 009b4580 with catch @ 009b47fc
                       catch() { ... } // from try @ 009b46a0 with catch @ 009b47fc */
    sVar5 = *(short *)(lVar7 + 0x26);
    if ((*(short *)(lVar8 + 0x26) != *(short *)(lVar7 + 0x26)) ||
       (sVar5 = *(short *)(lVar8 + 0x26), *(short *)(lVar8 + 0x28) != *(short *)(lVar7 + 0x28)))
    goto LAB_009b4824;
  }
  else {
    sVar5 = *(short *)(lVar7 + 0x26);
LAB_009b4824:
                    /* catch() { ... } // from try @ 009b40ec with catch @ 009b4824 */
                    /* catch() { ... } // from try @ 009b4640 with catch @ 009b4828
                       catch() { ... } // from try @ 009b466c with catch @ 009b4828 */
                    /* catch() { ... } // from try @ 009b4740 with catch @ 009b482c */
    glStencilOpSeparate(0x404,*(short *)(lVar7 + 0x24),sVar5,*(undefined2 *)(lVar7 + 0x28));
    lVar7 = *(long *)(this + 0xb8);
    lVar8 = *(long *)(this + 0xc0);
  }
  if (*(short *)(lVar8 + 0x30) == *(short *)(lVar7 + 0x30)) {
    iVar6 = *(int *)(lVar7 + 0x34);
                    /* catch() { ... } // from try @ 009b4160 with catch @ 009b4854
                       catch() { ... } // from try @ 009b42b0 with catch @ 009b4854
                       catch() { ... } // from try @ 009b4340 with catch @ 009b4854
                       catch() { ... } // from try @ 009b43d0 with catch @ 009b4854 */
                    /* catch() { ... } // from try @ 009b4028 with catch @ 009b4858 */
                    /* catch() { ... } // from try @ 009b401c with catch @ 009b485c */
                    /* catch() { ... } // from try @ 009b4070 with catch @ 009b4860
                       catch() { ... } // from try @ 009b4268 with catch @ 009b4860
                       catch() { ... } // from try @ 009b42f8 with catch @ 009b4860
                       catch() { ... } // from try @ 009b4388 with catch @ 009b4860 */
    if ((*(int *)(lVar8 + 0x34) != *(int *)(lVar7 + 0x34)) ||
       (iVar6 = *(int *)(lVar8 + 0x34), *(int *)(lVar8 + 0x38) != *(int *)(lVar7 + 0x38)))
    goto LAB_009b4870;
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x34);
LAB_009b4870:
    glStencilFuncSeparate(0x405,*(short *)(lVar7 + 0x30),iVar6,*(undefined4 *)(lVar7 + 0x38));
    lVar7 = *(long *)(this + 0xb8);
    lVar8 = *(long *)(this + 0xc0);
  }
  if (*(int *)(lVar8 + 0x44) != *(int *)(lVar7 + 0x44)) {
    glStencilMaskSeparate(0x405);
    lVar7 = *(long *)(this + 0xb8);
    lVar8 = *(long *)(this + 0xc0);
  }
  sVar2 = *(short *)(lVar7 + 0x3c);
                    /* catch() { ... } // from try @ 009b3ffc with catch @ 009b48a4 */
  if (*(short *)(lVar8 + 0x3c) == sVar2) {
                    /* catch() { ... } // from try @ 009b4034 with catch @ 009b48b4
                       catch() { ... } // from try @ 009b424c with catch @ 009b48b4
                       catch() { ... } // from try @ 009b445c with catch @ 009b48b4 */
    sVar5 = *(short *)(lVar7 + 0x3e);
    if ((*(short *)(lVar8 + 0x3e) == *(short *)(lVar7 + 0x3e)) &&
       (sVar5 = *(short *)(lVar8 + 0x3e), *(short *)(lVar8 + 0x40) == *(short *)(lVar7 + 0x40))) {
      return;
    }
  }
  else {
    sVar5 = *(short *)(lVar7 + 0x3e);
  }
  uVar3 = *(undefined2 *)(lVar7 + 0x40);
LAB_009b48dc:
  glStencilOpSeparate(0x405,sVar2,sVar5,uVar3);
  return;
}

