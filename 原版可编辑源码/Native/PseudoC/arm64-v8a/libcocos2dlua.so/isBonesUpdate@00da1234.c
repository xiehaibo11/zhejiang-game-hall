
/* dragonBones::DeformVertices::isBonesUpdate() const */

undefined8 __thiscall dragonBones::DeformVertices::isBonesUpdate(DeformVertices *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x28);
  while( true ) {
    if (plVar1 == *(long **)(this + 0x30)) {
                    /* catch() { ... } // from try @ 00da0c80 with catch @ 00da1240 */
                    /* catch() { ... } // from try @ 00da0f08 with catch @ 00da1244 */
      return 0;
    }
                    /* catch() { ... } // from try @ 00da0f1c with catch @ 00da1254 */
                    /* catch() { ... } // from try @ 00da0eb0 with catch @ 00da1258 */
                    /* catch() { ... } // from try @ 00da0cfc with catch @ 00da125c */
                    /* catch() { ... } // from try @ 00da0ccc with catch @ 00da1260 */
    if ((*plVar1 != 0) && (*(char *)(*plVar1 + 0x91) != '\0')) break;
                    /* catch() { ... } // from try @ 00da108c with catch @ 00da1248 */
    plVar1 = plVar1 + 1;
                    /* catch() { ... } // from try @ 00da106c with catch @ 00da124c */
                    /* catch() { ... } // from try @ 00da1034 with catch @ 00da1250 */
  }
                    /* catch() { ... } // from try @ 00da0c24 with catch @ 00da1264 */
  return 1;
}

