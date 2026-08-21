
/* spine::TwoColorTrianglesCommand::generateMaterialID() */

void __thiscall spine::TwoColorTrianglesCommand::generateMaterialID(TwoColorTrianglesCommand *this)

{
                    /* catch() { ... } // from try @ 00d5333c with catch @ 00d53404 */
                    /* catch() { ... } // from try @ 00d5336c with catch @ 00d53408 */
  if (0 < *(long *)(*(long *)(this + 0x58) + 0x68)) {
    this[0x11] = (TwoColorTrianglesCommand)0x1;
    *(undefined4 *)(this + 0x50) = 0;
    return;
  }
  *(int *)(this + 0x50) =
       *(int *)(this + 0x54) + *(int *)(*(long *)(this + 0x60) + 0x24) + *(int *)(this + 0x68) +
       *(int *)(this + 0x6c);
  return;
}

