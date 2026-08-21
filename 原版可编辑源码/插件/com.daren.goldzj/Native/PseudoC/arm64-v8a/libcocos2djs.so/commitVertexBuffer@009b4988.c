
/* cocos2d::renderer::DeviceGraphics::commitVertexBuffer() */

void __thiscall cocos2d::renderer::DeviceGraphics::commitVertexBuffer(DeviceGraphics *this)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  State *this_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  if (*(int *)(*(long *)(this + 0xb8) + 0x4c) == -1) {
                    /* try { // try from 009b4bcc to 00ab4bfb has its CatchHandler @ 009b4a0c */
    __android_log_print(5,"renderer",
                        " (1003): VertexBuffer not assigned, please call setVertexBuffer before every draw.\n"
                       );
    return;
  }
  if (*(int *)(*(State **)(this + 0xc0) + 0x4c) == *(int *)(*(long *)(this + 0xb8) + 0x4c)) {
    lVar5 = State::getProgram(*(State **)(this + 0xc0));
    lVar6 = State::getProgram(*(State **)(this + 0xb8));
    if (lVar5 == lVar6) {
      if (*(int *)(*(long *)(this + 0xb8) + 0x4c) < 0) {
        return;
      }
      lVar5 = -1;
      while( true ) {
        uVar10 = lVar5 + 1;
                    /* try { // try from 009b4bfc to 00ab4c03 has its CatchHandler @ 009b4c1c */
        lVar6 = State::getVertexBuffer(*(State **)(this + 0xc0),uVar10);
                    /* try { // try from 009b4c04 to 00ab4c0b has its CatchHandler @ 009b4c0c */
                    /* catch() { ... } // from try @ 009b4b64 with catch @ 009b4c0c
                       catch() { ... } // from try @ 009b4c04 with catch @ 009b4c0c
                       try { // try from 009b4c0c to 00ab4c9b has its CatchHandler @ 009b4a0c */
        lVar8 = State::getVertexBuffer(*(State **)(this + 0xb8),uVar10);
                    /* catch() { ... } // from try @ 009b4af4 with catch @ 009b4c1c
                       catch() { ... } // from try @ 009b4bfc with catch @ 009b4c1c */
        if (lVar6 != lVar8) break;
        iVar3 = State::getVertexBufferOffset(*(State **)(this + 0xc0),uVar10);
                    /* catch() { ... } // from try @ 009b4bb8 with catch @ 009b4c2c */
        iVar4 = State::getVertexBufferOffset(*(State **)(this + 0xb8),uVar10);
        if (iVar3 != iVar4) break;
        lVar5 = lVar5 + 1;
        if (*(int *)(*(long *)(this + 0xb8) + 0x4c) <= lVar5) {
          return;
        }
      }
    }
  }
  uVar10 = (ulong)*(uint *)(this + 0x40);
  if (0 < (int)*(uint *)(this + 0x40)) {
                    /* catch() { ... } // from try @ 009b495c with catch @ 009b49f0 */
    lVar6 = *(long *)(this + 0x78);
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      uVar10 = (ulong)*(int *)(this + 0x40);
      lVar5 = lVar5 + 1;
    } while (lVar5 < (long)uVar10);
  }
                    /* try { // try from 009b4a0c to 00ab4af3 has its CatchHandler @ 009b4a0c
                       catch() { ... } // from try @ 009b4a0c with catch @ 009b4a0c
                       catch() { ... } // from try @ 009b4afc with catch @ 009b4a0c
                       catch() { ... } // from try @ 009b4b6c with catch @ 009b4a0c
                       catch() { ... } // from try @ 009b4bcc with catch @ 009b4a0c
                       catch() { ... } // from try @ 009b4c0c with catch @ 009b4a0c */
  this_00 = *(State **)(this + 0xb8);
  if (-1 < *(int *)(this_00 + 0x4c)) {
    uVar10 = 0;
    do {
      lVar5 = State::getVertexBuffer(this_00,uVar10);
      if (lVar5 != 0) {
        ccBindBuffer(0x8892,*(uint *)(lVar5 + 0xc));
        iVar3 = State::getVertexBufferOffset(*(State **)(this + 0xb8),uVar10);
        lVar7 = State::getProgram(*(State **)(this + 0xb8));
        lVar6 = *(long *)(lVar7 + 0x18);
        lVar8 = *(long *)(lVar7 + 0x20) - lVar6;
        if (lVar8 != 0) {
          lVar12 = 0;
          uVar13 = (lVar8 >> 4) * -0x5555555555555555;
          uVar11 = 1;
          do {
            lVar8 = VertexFormat::getElement
                              (*(VertexFormat **)(lVar5 + 0x18),*(ulong *)(lVar6 + lVar12 + 0x18));
            if ((lVar8 == 0) || (uVar2 = *(ushort *)(lVar8 + 0x30), uVar2 == 0)) {
              if ((*(byte *)(lVar6 + lVar12) & 1) == 0) {
                lVar6 = lVar6 + lVar12 + 1;
              }
              else {
                lVar6 = *(long *)(lVar6 + lVar12 + 0x10);
              }
              __android_log_print(5,"renderer"," (1047): Can not find vertex attribute: %s\n",lVar6)
              ;
              if (uVar13 < uVar11 || uVar13 - uVar11 == 0) break;
            }
            else {
              lVar6 = lVar6 + lVar12;
              uVar9 = (ulong)*(uint *)(lVar6 + 0x24);
              if (*(int *)(*(long *)(this + 0x60) + uVar9 * 4) == 0) {
                ccEnableVertexAttribArray(*(uint *)(lVar6 + 0x24));
                *(undefined4 *)(*(long *)(this + 0x60) + (ulong)*(uint *)(lVar6 + 0x24) * 4) = 1;
                uVar9 = (ulong)*(uint *)(lVar6 + 0x24);
                uVar2 = *(ushort *)(lVar8 + 0x30);
              }
              *(undefined4 *)(*(long *)(this + 0x78) + uVar9 * 4) = 1;
                    /* try { // try from 009b4af4 to 00ab4afb has its CatchHandler @ 009b4c1c */
                    /* try { // try from 009b4afc to 00ab4b63 has its CatchHandler @ 009b4a0c */
              ccVertexAttribPointer
                        (*(uint *)(lVar6 + 0x24),*(int *)(lVar8 + 0x28),(uint)uVar2,
                         *(uchar *)(lVar8 + 0x32),*(int *)(lVar8 + 0x20),
                         (void *)(*(long *)(lVar8 + 0x18) +
                                 (ulong)(uint)(*(int *)(lVar8 + 0x20) * iVar3)));
              if (uVar13 < uVar11 || uVar13 - uVar11 == 0) break;
            }
            lVar6 = *(long *)(lVar7 + 0x18);
            lVar12 = lVar12 + 0x30;
            uVar11 = uVar11 + 1;
          } while( true );
        }
      }
      this_00 = *(State **)(this + 0xb8);
      bVar1 = (long)uVar10 < (long)*(int *)(this_00 + 0x4c);
      uVar10 = uVar10 + 1;
    } while (bVar1);
                    /* try { // try from 009b4b64 to 00ab4b6b has its CatchHandler @ 009b4c0c */
    uVar10 = (ulong)*(uint *)(this + 0x40);
  }
                    /* try { // try from 009b4b6c to 00ab4bb7 has its CatchHandler @ 009b4a0c */
  if (0 < (int)uVar10) {
    lVar6 = *(long *)(this + 0x60);
    lVar5 = 0;
    do {
      if (*(int *)(lVar6 + lVar5 * 4) != *(int *)(*(long *)(this + 0x78) + lVar5 * 4)) {
        ccDisableVertexAttribArray((uint)lVar5);
        lVar6 = *(long *)(this + 0x60);
        *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
        uVar10 = (ulong)*(uint *)(this + 0x40);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uVar10);
  }
                    /* try { // try from 009b4bb8 to 00ab4bcb has its CatchHandler @ 009b4c2c */
  return;
}

