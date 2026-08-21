
/* fairygui::GGraph::handleSizeChanged() */

void __thiscall fairygui::GGraph::handleSizeChanged(GGraph *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  GObject::handleSizeChanged((GObject *)this);
                    /* try { // try from 00a74c7c to 00b74c97 has its CatchHandler @ 00a74d34 */
  if (*(int *)(this + 0x1d8) - 3U < 2) {
    plVar1 = *(long **)(this + 0x208);
    fVar5 = *(float *)(this + 0xcc);
                    /* try { // try from 00a74c98 to 00b74ccb has its CatchHandler @ 00a74bb8 */
    if (0 < (int)((ulong)(plVar1[1] - *plVar1) >> 3)) {
      uVar2 = (ulong)(plVar1[1] - *plVar1) >> 3 & 0xffffffff;
      *(float *)(*plVar1 + 4) = fVar5 - (*(float *)(this + 0x210) - *(float *)(*plVar1 + 4));
      if (uVar2 != 1) {
        lVar3 = -uVar2;
                    /* try { // try from 00a74ccc to 00b74cdf has its CatchHandler @ 00a74d38 */
        lVar4 = 0xc;
        do {
          lVar3 = lVar3 + 1;
                    /* try { // try from 00a74ce0 to 00b74d73 has its CatchHandler @ 00a74bb8 */
          *(float *)(**(long **)(this + 0x208) + lVar4) =
               fVar5 - (*(float *)(this + 0x210) - *(float *)(**(long **)(this + 0x208) + lVar4));
          lVar4 = lVar4 + 8;
        } while (lVar3 != -1);
      }
    }
    *(float *)(this + 0x210) = fVar5;
  }
  updateShape(this);
  return;
}

