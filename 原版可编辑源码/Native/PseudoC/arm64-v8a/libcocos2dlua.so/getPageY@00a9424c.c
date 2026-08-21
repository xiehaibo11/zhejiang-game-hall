
/* fairygui::ScrollPane::getPageY() const */

int __thiscall fairygui::ScrollPane::getPageY(ScrollPane *this)

{
  int iVar1;
  float fVar2;
  
  if (this[0x58] != (ScrollPane)0x0) {
                    /* catch() { ... } // from try @ 00a94138 with catch @ 00a94254 */
                    /* catch() { ... } // from try @ 00a94104 with catch @ 00a94258 */
    fVar2 = *(float *)(this + 0x80);
                    /* catch() { ... } // from try @ 00a940f4 with catch @ 00a9425c */
                    /* catch() { ... } // from try @ 00a93eb8 with catch @ 00a94260 */
                    /* catch() { ... } // from try @ 00a93e74 with catch @ 00a94264 */
    iVar1 = (int)(*(float *)(this + 0x60) / fVar2);
                    /* catch() { ... } // from try @ 00a93e64 with catch @ 00a94268 */
                    /* catch() { ... } // from try @ 00a93e54 with catch @ 00a9426c */
                    /* catch() { ... } // from try @ 00a94050 with catch @ 00a94270 */
                    /* catch() { ... } // from try @ 00a93f68 with catch @ 00a94274 */
                    /* catch() { ... } // from try @ 00a93e18 with catch @ 00a94278
                       catch() { ... } // from try @ 00a94178 with catch @ 00a94278 */
    return (uint)(fVar2 * 0.5 < *(float *)(this + 0x60) - fVar2 * (float)iVar1) + iVar1;
  }
                    /* catch() { ... } // from try @ 00a94098 with catch @ 00a94288
                       catch() { ... } // from try @ 00a9419c with catch @ 00a94288 */
  return 0;
}

